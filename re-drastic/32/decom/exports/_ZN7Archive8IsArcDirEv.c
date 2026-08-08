/*
 * Ghidra decompilation
 *
 * Function : _ZN7Archive8IsArcDirEv
 * Address  : 080db584
 * Program  : drastic
 */


/* DWARF original prototype: bool IsArcDir(Archive * this) */

bool __thiscall Archive::IsArcDir(Archive *this)

{
  return (this->FileHead).Dir;
}


