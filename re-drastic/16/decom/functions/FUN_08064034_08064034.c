/*
 * Ghidra decompilation
 *
 * Function : FUN_08064034
 * Address  : 08064034
 * Program  : drastic16
 */


void FUN_08064034(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined auStack_410 [1028];
  
  iVar1 = FUN_08062bc8(param_1,&DAT_080fa798,auStack_410);
  if (iVar1 != -1) {
    iVar2 = *param_1;
    iVar1 = FUN_0805b738(iVar2 + 0x1a0,auStack_410);
    if (-1 < iVar1) {
      iVar1 = *(int *)(iVar2 + 0x8176c);
      param_1[9] = 1;
      param_1[10] = 1;
      param_1[0xc] = iVar1;
      param_1[0xb] = 0;
    }
  }
  return;
}


