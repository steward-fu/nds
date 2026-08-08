/*
 * Ghidra decompilation
 *
 * Function : FUN_08095e2c
 * Address  : 08095e2c
 * Program  : drastic16
 */


uint FUN_08095e2c(FILE *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = fgetc(param_1);
  iVar2 = fgetc(param_1);
  return (uVar1 | iVar2 << 8) & 0xffff;
}


