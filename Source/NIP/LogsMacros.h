#pragma once

#define CHECK_NULLPTR_LOG(Var)                                                                                             \
    if (!(Var))                                                                                                        \
    {                                                                                                                  \
        UE_LOG(LogTemp, Error, TEXT("%s is nullptr! Error in the file: %s, line: %d"), TEXT(#Var), TEXT(__FILE__),     \
               __LINE__);                                                                                              \
        return;                                                                                                        \
    }

#define GET_LINE_LOG UE_LOG(LogTemp, Error, TEXT("Error in the file: %s, line: %d"), TEXT(__FILE__), __LINE__);