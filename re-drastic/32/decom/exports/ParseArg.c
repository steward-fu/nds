/*
 * Ghidra decompilation
 *
 * Function : ParseArg
 * Address  : 081051d4
 * Program  : drastic
 */


/* DWARF original prototype: void ParseArg(CommandData * this, wchar * Arg) */

void __thiscall CommandData::ParseArg(CommandData *this,wchar *Arg)

{
  if ((*Arg == 0x2d) && (this->NoMoreSwitches == false)) {
    if (Arg[1] == 0x2d) {
      this->NoMoreSwitches = true;
      return;
    }
    ProcessSwitch(this,Arg + 1);
    return;
  }
  ParseArg(this,Arg);
  return;
}


