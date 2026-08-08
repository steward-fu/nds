/*
 * Ghidra decompilation
 *
 * Function : _fgetw
 * Address  : 001a6c90
 * Program  : drastic64
 */


uint _fgetw(FILE *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = fgetc(param_1);
  iVar2 = fgetc(param_1);
  return uVar1 | iVar2 << 8;
}


