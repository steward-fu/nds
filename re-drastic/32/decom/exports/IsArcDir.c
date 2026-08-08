/*
 * Ghidra decompilation
 *
 * Function : IsArcDir
 * Address  : 080db584
 * Program  : drastic
 */


/* DWARF original prototype: bool IsArcDir(Archive * this) */

bool __thiscall Archive::IsArcDir(Archive *this)

{
  return (this->FileHead).Dir;
}


