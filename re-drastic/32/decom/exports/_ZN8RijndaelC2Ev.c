/*
 * Ghidra decompilation
 *
 * Function : _ZN8RijndaelC2Ev
 * Address  : 080e6d2c
 * Program  : drastic
 */


/* DWARF original prototype: Rijndael * Rijndael(Rijndael * this) */

Rijndael * __thiscall Rijndael::Rijndael(Rijndael *this)

{
  if (S[0] == '\0') {
    GenerateTables(this);
  }
  return this;
}


