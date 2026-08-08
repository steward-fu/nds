/*
 * Ghidra decompilation
 *
 * Function : PutByte
 * Address  : 080d6240
 * Program  : drastic
 */


/* DWARF original prototype: void PutByte(File * this, byte Byte) */

void __thiscall File::PutByte(File *this,byte Byte)

{
  byte local_9 [9];
  
  local_9[0] = Byte;
  Write(this,local_9,1);
  return;
}


