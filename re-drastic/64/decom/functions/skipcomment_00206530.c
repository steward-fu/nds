/*
 * Ghidra decompilation
 *
 * Function : skipcomment
 * Address  : 00206530
 * Program  : drastic64
 */


undefined8 skipcomment(int *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  
  *param_1 = 0;
  pbVar4 = &DAT_0022a5c0;
  do {
    uVar2 = getc(*(FILE **)(param_1 + 2));
    if (uVar2 == 0xffffffff) {
      *param_2 = 0xffffffff;
      return 0;
    }
    if (uVar2 != *pbVar4) goto LAB_002065bc;
    iVar3 = *param_1;
    bVar1 = pbVar4[1];
    *param_1 = iVar3 + 1;
    *(char *)((long)param_1 + (long)iVar3 + 0x10) = (char)uVar2;
    pbVar4 = pbVar4 + 1;
  } while (bVar1 != 0);
  *param_1 = 0;
  uVar2 = getc(*(FILE **)(param_1 + 2));
LAB_002065bc:
  *param_2 = uVar2;
  if (uVar2 != 0x23) {
    return 0;
  }
  do {
    iVar3 = getc(*(FILE **)(param_1 + 2));
  } while (iVar3 != 10 && iVar3 != -1);
  uVar2 = getc(*(FILE **)(param_1 + 2));
  *param_2 = uVar2;
  return 1;
}


