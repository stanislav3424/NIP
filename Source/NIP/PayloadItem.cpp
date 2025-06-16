#include "PayloadItem.h"
#include "Item.h"

void UPayloadItem::Initialization() { ContainerOwner->SetDataPayload(this); }