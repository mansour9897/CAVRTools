#include <stdio.h>
#include "CmdExe.h"
#include <string.h>

void cmdExe_insert_char(char ch, struct CmdExe _cmd)
{
    _cmd.Temporary[_cmd.TempIndex++] = ch;

    if (!(_cmd.TempIndex < CmdLength) || ch == '\r')
    {
        memset(_cmd.Command, 0, CmdLength);
        strncpy(_cmd.Command, _cmd.Temporary, CmdLength);
        _cmd.IsReady = 1;
        memset(_cmd.Temporary, 0, CmdLength);
        _cmd.TempIndex = 0;
    }  
    
    //printf("%d : %s\r\n",_cmd.TempIndex,_cmd.Temporary);
}