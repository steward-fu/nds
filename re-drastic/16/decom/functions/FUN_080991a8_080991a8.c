/*
 * Ghidra decompilation
 *
 * Function : FUN_080991a8
 * Address  : 080991a8
 * Program  : drastic16
 */


int FUN_080991a8(FILE **param_1,undefined8 *param_2)

{
  long __off;
  int iVar1;
  long lVar2;
  FILE *__stream;
  undefined8 uVar3;
  
  __off = ftell(*param_1);
  iVar1 = fseek(*param_1,0,2);
  lVar2 = ftell(*param_1);
  __stream = *param_1;
  uVar3 = VectorShiftRight(CONCAT44(lVar2,lVar2),0x20);
  *param_2 = uVar3;
  fseek(__stream,__off,0);
  return iVar1;
}


