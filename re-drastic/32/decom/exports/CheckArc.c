/*
 * Ghidra decompilation
 *
 * Function : CheckArc
 * Address  : 080d9140
 * Program  : drastic
 */


/* DWARF original prototype: void CheckArc(Archive * this, bool EnableBroken) */

void __thiscall Archive::CheckArc(Archive *this,bool EnableBroken)

{
  bool bVar1;
  
  bVar1 = IsArchive(this,EnableBroken);
  if (bVar1) {
    return;
  }
  ErrorHandler::Exit(&ErrHandler,RARX_FATAL);
  return;
}


