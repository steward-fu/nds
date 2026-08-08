/*
 * Ghidra decompilation
 *
 * Function : _ZN8RijndaelC2Ev
 * Address  : 001c6f70
 * Program  : drastic64
 */


/* Rijndael::Rijndael() */

void __thiscall Rijndael::Rijndael(Rijndael *this)

{
  if (S != '\0') {
    return;
  }
  GenerateTables();
  return;
}


