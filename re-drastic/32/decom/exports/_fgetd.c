/*
 * Ghidra decompilation
 *
 * Function : _fgetd
 * Address  : 080c8570
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 _fgetd(FILE *file)

{
  uint uVar1;
  u32 low;
  int iVar2;
  u32 high;
  uint uVar3;
  u32 low_1;
  int iVar4;
  u32 high_1;
  
  uVar1 = fgetc((FILE *)file);
  iVar2 = fgetc((FILE *)file);
  uVar3 = fgetc((FILE *)file);
  iVar4 = fgetc((FILE *)file);
  high_1 = uVar3 | iVar4 << 8;
  return (uVar1 | iVar2 << 8) & 0xffff | high_1 << 0x10;
}


