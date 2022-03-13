#include "StrUtility.h"

void SubString(char* des, char* src, int start, int srcLen)
{
  char i;
  for(i=start;i<srcLen;i++)
  {
      des[i-start]=src[i];
      if(src[i]==0) break;
  }
}