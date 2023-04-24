#include "debug.h"

char IsDebugMode = 0;

void debug_activate(void)
{   
    IsDebugMode = 1;
    debug_print("Debug mode activated\r\n");

}

void debug_deactivate(void)
{
    debug_print("Debug mode deactivated\r\n");
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
