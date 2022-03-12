#include "CmdExe.h"
#include <string.h>

void cmdExe_insert_char(char ch, struc CmdExe _cmd)
{
    _cmd[_cmd.TempIndex++] = rx_data;

    if (!(_cmd.TempIndex < CmdLength) || rx_data == '\r')
    {
        memset(_cmd.Command, 0, CmdLength);
        strncpy(_cmd.Command, _cmd.Temporary, CmdLength);
        _cmd.IsReady = 1;
        memset(_cmd.Temporary, 0, CmdLength);
        _cmd.TempIndex = 0;
    }
}