/*
 * Ghidra decompilation
 *
 * Function : FUN_080df2c0
 * Address  : 080df2c0
 * Program  : drastic16
 */


undefined4 FUN_080df2c0(undefined4 *param_1,void *param_2,uint param_3,uint *param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  void *__src;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  
  if (*(char *)(param_1 + 0x408) != '\x01') {
    return 0;
  }
  do {
    uVar5 = param_1[0x418];
    iVar6 = param_1[0x419];
    uVar2 = FUN_080a8838(param_1 + 0x414);
    uVar3 = uVar5 + uVar2;
    uVar2 = iVar6 + (uint)CARRY4(uVar5,uVar2);
    uVar5 = param_1[0x41a];
    uVar4 = param_1[0x41b];
    bVar9 = uVar4 <= uVar2;
    bVar8 = uVar2 == uVar4;
    if (bVar8) {
      bVar9 = uVar5 <= uVar3;
    }
    if (bVar9 && (!bVar8 || uVar3 != uVar5)) {
      uVar4 = 0;
    }
    if (!bVar9 || bVar8 && uVar3 == uVar5) {
      uVar4 = 1;
    }
  } while (((uVar4 & 0xff) != 0) && (cVar1 = FUN_080dfd00(param_1), cVar1 == '\x01'));
  if (*(char *)(param_1 + 0x408) != '\x01') {
    if (*(char *)(param_1 + 0x41c) != '\0') {
      FUN_080a498c(*param_1,*param_1,param_1[0x41a],param_1[0x41b],0);
    }
    return 0;
  }
  bVar9 = (uint)param_1[0x419] <= (uint)param_1[0x41b];
  if (param_1[0x41b] == param_1[0x419]) {
    bVar9 = (uint)param_1[0x418] <= (uint)param_1[0x41a];
  }
  if (bVar9) {
    uVar5 = param_1[0x41a] + param_3;
    uVar4 = param_1[0x41b] + (uint)CARRY4(param_1[0x41a],param_3);
    uVar7 = param_1[0x418];
    iVar6 = param_1[0x419];
    uVar2 = FUN_080a8838(param_1 + 0x414);
    uVar3 = uVar2 + uVar7;
    uVar2 = iVar6 + (uint)CARRY4(uVar2,uVar7);
    bVar9 = uVar2 <= uVar4;
    if (uVar4 == uVar2) {
      bVar9 = uVar3 <= uVar5;
    }
    if (!bVar9 || uVar4 == uVar2 && uVar5 == uVar3) {
      bVar9 = true;
      goto LAB_080df48c;
    }
  }
  bVar9 = false;
LAB_080df48c:
  if (bVar9) {
    __src = (void *)FUN_080dfe48(param_1 + 0x414,param_1[0x41a] - param_1[0x418]);
    memcpy(param_2,__src,param_3);
    *param_4 = param_3;
    uVar2 = param_1[0x41a];
    param_1[0x41a] = param_3 + uVar2;
    param_1[0x41b] = param_1[0x41b] + (uint)CARRY4(param_3,uVar2);
    *(undefined *)(param_1 + 0x41c) = 1;
  }
  else {
    if (*(char *)(param_1 + 0x41c) != '\0') {
      FUN_080a498c(*param_1,*param_1,param_1[0x41a],param_1[0x41b],0);
      *(undefined *)(param_1 + 0x41c) = 0;
    }
    uVar2 = FUN_080a46cc(*param_1,param_2,param_3);
    if ((int)uVar2 < 0) {
      *(undefined *)(param_1 + 0x408) = 0;
      return 0;
    }
    *param_4 = uVar2;
    uVar3 = param_1[0x41a];
    param_1[0x41a] = uVar2 + uVar3;
    param_1[0x41b] = ((int)uVar2 >> 0x1f) + param_1[0x41b] + (uint)CARRY4(uVar2,uVar3);
  }
  return 1;
}


