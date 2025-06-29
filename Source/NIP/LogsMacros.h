#pragma once

#define CHECK_NULLPTR_LOG(Var)                                                                                         \
    if (!(Var))                                                                                                        \
    {                                                                                                                  \
        UE_LOG(LogTemp, Error, TEXT(#Var " is nullptr! File: %s, line: %d"), TEXT(__FILE__), __LINE__);                \
        return;                                                                                                        \
    }

#define LINE_LOG UE_LOG(LogTemp, Error, TEXT("Error in the file: %s, line: %d"), TEXT(__FILE__), __LINE__);

#define LINE_LOG_MSG(Message)                                                                                          \
    UE_LOG(LogTemp, Error, TEXT("%s | File: %s, Line: %d"), TEXT(Message), TEXT(__FILE__), __LINE__)

#define EXPAND(x) x

#define FOR_EACH_1(action, x1) action(x1)
#define FOR_EACH_2(action, x1, x2) action(x1) action(x2)
#define FOR_EACH_3(action, x1, x2, x3) action(x1) action(x2) action(x3)
#define FOR_EACH_4(action, x1, x2, x3, x4) action(x1) action(x2) action(x3) action(x4)
#define FOR_EACH_5(action, x1, x2, x3, x4, x5) action(x1) action(x2) action(x3) action(x4) action(x5)
#define FOR_EACH_6(action, x1, x2, x3, x4, x5, x6) action(x1) action(x2) action(x3) action(x4) action(x5) action(x6)
#define FOR_EACH_7(action, x1, x2, x3, x4, x5, x6, x7)                                                                 \
    action(x1) action(x2) action(x3) action(x4) action(x5) action(x6) action(x7)
#define FOR_EACH_8(action, x1, x2, x3, x4, x5, x6, x7, x8)                                                             \
    action(x1) action(x2) action(x3) action(x4) action(x5) action(x6) action(x7) action(x8)
#define FOR_EACH_9(action, x1, x2, x3, x4, x5, x6, x7, x8, x9)                                                         \
    action(x1) action(x2) action(x3) action(x4) action(x5) action(x6) action(x7) action(x8) action(x9)
#define FOR_EACH_10(action, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10)                                                   \
    action(x1) action(x2) action(x3) action(x4) action(x5) action(x6) action(x7) action(x8) action(x9) action(x10)

#define GET_MACRO(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, NAME, ...) NAME
#define FOR_EACH(action, ...)                                                                                          \
    EXPAND(GET_MACRO(__VA_ARGS__, FOR_EACH_10, FOR_EACH_9, FOR_EACH_8, FOR_EACH_7, FOR_EACH_6, FOR_EACH_5, FOR_EACH_4, \
                     FOR_EACH_3, FOR_EACH_2, FOR_EACH_1)(action, __VA_ARGS__))

#define CHECK_NULLPTR_LOG_MULTI(...)                                                                                   \
    do                                                                                                                 \
    {                                                                                                                  \
        FOR_EACH(CHECK_NULLPTR_LOG, __VA_ARGS__)                                                                           \
    } while (0)

#define CHECK_MULTI(...) CHECK_NULLPTR_LOG_MULTI(__VA_ARGS__)

#define CHECK(Var) CHECK_NULLPTR_LOG(Var)

#define CHECK_NULL_LOG_BASE(Var)                                                                                       \
    if (!(Var))                                                                                                        \
    {                                                                                                                  \
        UE_LOG(LogTemp, Error, TEXT(#Var " is nullptr! File: %s, line: %d"), TEXT(__FILE__), __LINE__);

#define CHECK_RETURN_VOID(Var)                                                                                         \
    CHECK_NULL_LOG_BASE(Var)                                                                                           \
    return;                                                                                                            \
    }

#define CHECK_RETURN_FALSE(Var)                                                                                        \
    CHECK_NULL_LOG_BASE(Var)                                                                                           \
    return false;                                                                                                      \
    }

#define CHECK_F(Var) CHECK_RETURN_FALSE(Var)

#define LOG_IF(Var)                                                                                                    \
    if ((Var))                                                                                                         \
    {                                                                                                                  \
        UE_LOG(LogTemp, Error, TEXT(#Var " True! File: %s, line: %d"), TEXT(__FILE__), __LINE__);                      \
    }                                                                                                                  \
    else                                                                                                               \
    {                                                                                                                  \
        UE_LOG(LogTemp, Error, TEXT(#Var " False! File: %s, line: %d"), TEXT(__FILE__), __LINE__);                     \
    }