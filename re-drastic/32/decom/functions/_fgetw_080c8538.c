/*
 * Ghidra decompilation
 *
 * Function : _fgetw
 * Address  : 080c8538
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u16 _fgetw(FILE *file)

{
  int iVar1;
  u32 low;
  int iVar2;
  u32 high;
  
  iVar1 = fgetc((FILE *)file);
  iVar2 = fgetc((FILE *)file);
  return (ushort)iVar1 | (ushort)(iVar2 << 8);
}


