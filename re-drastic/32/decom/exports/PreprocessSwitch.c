/*
 * Ghidra decompilation
 *
 * Function : PreprocessSwitch
 * Address  : 0810535c
 * Program  : drastic
 */


/* DWARF original prototype: bool PreprocessSwitch(CommandData * this, wchar * Switch) */

bool __thiscall CommandData::PreprocessSwitch(CommandData *this,wchar *Switch)

{
  bool bVar1;
  
  if (*Switch != 0x2d) {
    return true;
  }
  bVar1 = PreprocessSwitch(this,Switch);
  return bVar1;
}


