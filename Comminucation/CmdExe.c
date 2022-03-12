#include <stdio.h>
#include "CmdExe.h"
#include <string.h>

void cmdExe_insert_char(char ch, struct CmdExe *pCmd)
{
    pCmd->Temporary[pCmd->TempIndex++] = ch;

    if (!(pCmd->TempIndex < CmdLength) || ch == '\r')
    {
        memset(pCmd->Command, 0, CmdLength);
        strncpy(pCmd->Command, pCmd->Temporary, CmdLength);
        pCmd->IsReady = 1;
        memset(pCmd->Temporary, 0, CmdLength);
        pCmd->TempIndex = 0;
    }

    // printf("%d : %s\r\n",pCmd->TempIndex,pCmd->Temporary);
}