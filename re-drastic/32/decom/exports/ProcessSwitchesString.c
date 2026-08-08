/*
 * Ghidra decompilation
 *
 * Function : ProcessSwitchesString
 * Address  : 08105374
 * Program  : drastic
 */


/* DWARF original prototype: void ProcessSwitchesString(CommandData * this, wchar * Str) */

void __thiscall CommandData::ProcessSwitchesString(CommandData *this,wchar *Str)

{
  wchar *pwVar1;
  wchar *NextCmd;
  wchar *Par;
  size_t MaxSize;
  size_t ParSize;
  
  while( true ) {
    pwVar1 = GetCmdParam(Str,(wchar *)0x0,0);
    if (pwVar1 == (wchar *)0x0) {
      return;
    }
    MaxSize = ((int)pwVar1 - (int)Str >> 2) + 2;
    pwVar1 = (wchar *)malloc(MaxSize * 4);
    if (pwVar1 == (wchar *)0x0) break;
    Str = GetCmdParam(Str,pwVar1,MaxSize);
    if (Str == (wchar *)0x0) {
      return;
    }
    if (*pwVar1 == 0x2d) {
      ProcessSwitch(this,pwVar1 + 1);
    }
    free(pwVar1);
  }
  return;
}


