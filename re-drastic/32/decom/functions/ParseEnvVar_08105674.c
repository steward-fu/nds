/*
 * Ghidra decompilation
 *
 * Function : ParseEnvVar
 * Address  : 08105674
 * Program  : drastic
 */


/* DWARF original prototype: void ParseEnvVar(CommandData * this) */

void __thiscall CommandData::ParseEnvVar(CommandData *this)

{
  char *__s;
  char *EnvStr;
  size_t sVar1;
  wchar *Dest;
  wchar_t *NewBuffer;
  wchar *pwVar2;
  wchar *NextCmd;
  wchar *CmdLine;
  uint uVar3;
  uint DestSize;
  size_t MaxSize;
  size_t ParSize;
  wchar *Par;
  
  __s = getenv("RAR");
  if (__s != (char *)0x0) {
    sVar1 = strlen(__s);
    DestSize = sVar1 + 1;
    if (DestSize == 0) {
      Dest = (wchar *)0x0;
    }
    else {
      uVar3 = DestSize;
      if (DestSize < 0x20) {
        uVar3 = 0x20;
      }
      Dest = (wchar *)realloc((void *)0x0,uVar3 << 2);
      if (Dest == (wchar *)0x0) {
        ErrorHandler::MemoryError(&ErrHandler);
      }
    }
    CharToWide(__s,Dest,DestSize);
    CmdLine = Dest;
    while (pwVar2 = GetCmdParam(CmdLine,(wchar *)0x0,0), pwVar2 != (wchar *)0x0) {
      MaxSize = ((int)pwVar2 - (int)CmdLine >> 2) + 2;
      pwVar2 = (wchar *)malloc(MaxSize * 4);
      if ((pwVar2 == (wchar *)0x0) ||
         (CmdLine = GetCmdParam(CmdLine,pwVar2,MaxSize), CmdLine == (wchar *)0x0)) break;
      if (*pwVar2 == 0x2d) {
        ProcessSwitch(this,pwVar2 + 1);
      }
      free(pwVar2);
    }
    if (Dest != (wchar *)0x0) {
      free(Dest);
      return;
    }
  }
  return;
}


