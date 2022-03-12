#ifndef _cmdexe_included_
#define _cmdexe_included_

#ifndef CmdLength
#define CmdLength 20
#endif

struct CmdExe
{
    char Temporary[CmdLength];
    char Command[CmdLength];
    int TempIndex;
    char IsReady;
};

void cmdExe_insert_char(char ch, struct CmdExe _cmd);
#endif