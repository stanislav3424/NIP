#include "MainHUD.h"
#include "CanvasItem.h"
#include "Engine/Canvas.h"
#include "MainPlayerController.h"
#include "CharacterUnit.h"

void AMainHUD::DrawHUD()
{
    Super::DrawHUD();
    if (!MainPlayerController)
        return;
    if (MainPlayerController->bIsSelecting)
    {
        const FVector2D SelectionStart = MainPlayerController->SelectionStart;
        const FVector2D SelectionEnd = MainPlayerController->SelectionEnd;
        const float StartX = SelectionStart.X;
        const float StartY = SelectionStart.Y;
        const float EndX = SelectionEnd.X;
        const float EndY = SelectionEnd.Y;
        DrawRect(FLinearColor(0.f, 1.f, 1.f, 0.1f), StartX, StartY, EndX - StartX, EndY - StartY);
        const auto LinerColor = FLinearColor(0.f, 1.f, 1.f, 1.f);
        DrawLine(StartX, StartY, StartX, EndY, LinerColor, 1.f);
        DrawLine(StartX, StartY, EndX, StartY, LinerColor, 1.f);
        DrawLine(EndX, EndY, EndX, StartY, LinerColor, 1.f);
        DrawLine(EndX, EndY, StartX, EndY, LinerColor, 1.f);

        TArray<ACharacterUnit*> SelectedRepresentedUnits;
        GetActorsInSelectionRectangle<ACharacterUnit>(SelectionStart, SelectionEnd, SelectedRepresentedUnits,
                                                            false, false);
        TSet<UUnit*> SelectedUnits;
        for (ACharacterUnit* RepresentedUnitBase : SelectedRepresentedUnits)
            if (IsValid(RepresentedUnitBase))
            {
                UUnit* Unit = RepresentedUnitBase->GetUnit();
                if (Unit)
                    SelectedUnits.Add(Unit);
            }

        MainPlayerController->NewSelectedUnits = SelectedUnits;
    }
}

void AMainHUD::BeginPlay()
{
    Super::BeginPlay();
    MainPlayerController = Cast<AMainPlayerController>(GetWorld()->GetFirstPlayerController());
}