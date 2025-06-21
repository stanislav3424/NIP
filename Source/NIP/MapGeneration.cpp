#include "MapGeneration.h"
#include "ProceduralMeshComponent.h"
#include "KismetProceduralMeshLibrary.h"

AMapGeneration::AMapGeneration()
{
}

void AMapGeneration::BeginPlay()
{
	Super::BeginPlay();
}

void AMapGeneration::GenerateID(TMap<Parameters, int32>& MapParameters)
{
    ID = 0;
    int32 BitOffset = 0;

    const UEnum* EnumPtr = StaticEnum<Parameters>();
    if (!EnumPtr)
        return;

    for (int32 Index = 0; Index < EnumPtr->NumEnums() - 1; ++Index)
    {
        const Parameters Param = static_cast<Parameters>(EnumPtr->GetValueByIndex(Index));

        int32 BitCount = BitMap.Contains(Param) ? BitMap[Param] : DefaultBitCount;
        int32 MaxValue = (1 << BitCount) - 1;
        int32 RawValue = MapParameters.Contains(Param) ? MapParameters[Param] : DefaultParamValue;

        int32 SafeValue = RawValue & MaxValue;
        if (RawValue > MaxValue)
        {
            UE_LOG(LogTemp, Warning, TEXT("Value %d for %s truncated to %d (max for %d bits)"), RawValue,
                   *UEnum::GetValueAsString(Param), SafeValue, BitCount);
        }

        ID |= (SafeValue << BitOffset);
        BitOffset += BitCount;
    }
}

TMap<Parameters, int32> AMapGeneration::DecodeID()
{
    TMap<Parameters, int32> DecodedParams;
    int32 LocalID = ID;
    int32 BitOffset = 0;

    const UEnum* EnumPtr = StaticEnum<Parameters>();
    if (!EnumPtr)
        return DecodedParams;

    for (int32 Index = 0; Index < EnumPtr->NumEnums() - 1; ++Index)
    {
        const Parameters Param = static_cast<Parameters>(EnumPtr->GetValueByIndex(Index));
        int32 BitCount = BitMap.Contains(Param) ? BitMap[Param] : DefaultBitCount;

        int32 Mask = (1 << BitCount) - 1;
        int32 Value = (LocalID >> BitOffset) & Mask;

        DecodedParams.Add(Param, Value);
        BitOffset += BitCount;
    }

    return DecodedParams;
}

void AMapGeneration::Regenerate()
{
    DestroyAll();
    const TMap<Parameters, int32> Params = DecodeID();

    const int32 AllRoomCount = Params[Parameters::Room];
    const int32 LocalSID = Params[Parameters::SID];

    TArray<FVector> RoomPositions;
    TArray<UProceduralMeshComponent*> RoomComponents;

    UProceduralMeshComponent* StartRoom = RoomGeneration(FVector::ZeroVector);
    if (StartRoom)
    {
        RoomPositions.Add(FVector::ZeroVector);
        RoomComponents.Add(StartRoom);
    }

    int32 Circle = 1;
    int32 CurrentRoom = 1;
    FRandomStream Stream(LocalSID);

    while (true)
    {
        if (CurrentRoom > AllRoomCount)
            break;

        const int32 RoomsCircle = Stream.FRandRange(1.f, 2.f + Circle);

        for (int32 Index = 1; Index < RoomsCircle; ++Index)
        {
            if (CurrentRoom > RoomsCircle)
                break;

            
            FVector CornerVector = FVector(Stream.FRandRange(-1.f, 1.f), Stream.FRandRange(-1.f, 1.f), 0.0f);
            float DesiredLength = Stream.FRandRange(2000.f, 5000.f);
            FVector Result = CornerVector.GetSafeNormal() * DesiredLength;

            FVector Location(Result);
            UProceduralMeshComponent* Room = RoomGeneration(Location);
            if (Room)
            {
                RoomPositions.Add(Location);
                RoomComponents.Add(Room);
            }
            ++CurrentRoom;
        }
        ++Circle;
    }
}


void AMapGeneration::TestGeneration() { 
    
    TMap<Parameters, int32> MapParameters;
    MapParameters.Add(Parameters::Room, Rooms);
    MapParameters.Add(Parameters::SID, SID);
    GenerateID(MapParameters);
    Regenerate();
}

void AMapGeneration::DestroyAll()
{
    for (UProceduralMeshComponent* Mesh : GeneratedMeshes)
    {
        if (Mesh)
        {
            Mesh->DestroyComponent();
        }
    }
    GeneratedMeshes.Empty();
}

UProceduralMeshComponent* AMapGeneration::RoomGeneration(const FVector& Location)
{
    UProceduralMeshComponent* NewMesh = NewObject<UProceduralMeshComponent>(this);
    if (!NewMesh)
        return nullptr;
    NewMesh->RegisterComponent();
    NewMesh->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepWorldTransform);
    NewMesh->SetWorldLocation(Location);

    TArray<FVector> Vertices;
    TArray<int32> Triangles;
    TArray<FVector> Normals;
    TArray<FVector2D> UVs;
    TArray<FProcMeshTangent> Tangents;
    TArray<FLinearColor> VertexColors;

    float Height = 500.f;
    FVector BoxExtent(1000.f, 1000.f, Height);
    UKismetProceduralMeshLibrary::GenerateBoxMesh(BoxExtent, Vertices, Triangles, Normals, UVs, Tangents);

    for (int32 Index = 0; Index < Triangles.Num(); Index += 3)
    {
        int32 Temp = Triangles[Index + 1];
        Triangles[Index + 1] = Triangles[Index + 2];
        Triangles[Index + 2] = Temp;
    }

    for (FVector& Normal : Normals)
        Normal *= -1.f;

    for (auto& Vertice : Vertices)
        Vertice.Z += Height;

    VertexColors.Init(FColor::Green, Vertices.Num());

    NewMesh->CreateMeshSection_LinearColor(0, Vertices, Triangles, Normals, UVs, VertexColors, Tangents, true);

    GeneratedMeshes.Add(NewMesh);

   

    return NewMesh;
}

void AMapGeneration::TunnelGeneration()
{

}

