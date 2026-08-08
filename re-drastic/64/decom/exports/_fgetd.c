/*
 * Ghidra decompilation
 *
 * Function : _fgetd
 * Address  : 001a6cc0
 * Program  : drastic64
 */


uint _fgetd(FILE *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = fgetc(param_1);
  iVar2 = fgetc(param_1);
  uVar3 = fgetc(param_1);
  iVar4 = fgetc(param_1);
  return (uVar1 | iVar2 << 8) & 0xffff | (uVar3 | iVar4 << 8) << 0x10;
}


