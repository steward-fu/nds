/*
 * Ghidra decompilation
 *
 * Function : FUN_080c4418
 * Address  : 080c4418
 * Program  : drastic16
 */


undefined4 FUN_080c4418(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  
  uVar1 = param_2 << 0x14;
  if (*param_1 == uVar1) {
    uVar4 = 1;
  }
  else {
    FUN_080c43d4(param_1);
    iVar2 = (uVar1 / 0xc) * 0xc;
    pvVar3 = malloc(iVar2 + 0x18);
    param_1[0x2b] = (uint)pvVar3;
    if (param_1[0x2b] == 0) {
      FUN_080b6efc(&DAT_081cd0a0);
      uVar4 = 0;
    }
    else {
      param_1[0x56] = param_1[0x2b] + iVar2 + 0xc;
      *param_1 = uVar1;
      uVar4 = 1;
    }
  }
  return uVar4;
}


