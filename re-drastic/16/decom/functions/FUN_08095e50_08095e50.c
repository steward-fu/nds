/*
 * Ghidra decompilation
 *
 * Function : FUN_08095e50
 * Address  : 08095e50
 * Program  : drastic16
 */


uint FUN_08095e50(FILE *param_1)

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


