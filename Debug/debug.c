#include "debug.h"

char IsDebugMode = 0;

void debug_activate(void)
{
    IsDebugMode = 1;
}

void debug_deactivate(void)
{
    IsDebugMode = 0;
}

void debug_print(char flash *str, ...)
{
    if(IsDebugMode)
    {
        va_list args;
        va_start(args, str);
        vprintf(str, args);
        va_end(args);
    }
}
