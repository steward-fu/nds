/*
 * Ghidra decompilation
 *
 * Function : FUN_080d4ef0
 * Address  : 080d4ef0
 * Program  : drastic16
 */


undefined2 FUN_080d4ef0(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint local_14;
  uint local_10;
  uint local_c;
  
  uVar4 = FUN_080d229c(param_2);
  uVar4 = uVar4 & 0xfffe;
  if (uVar4 < param_3[param_3[0x21] + 1]) {
    uVar4 = uVar4 >> (0x10 - param_3[0x21] & 0xff);
    FUN_080d2234(param_2,*(undefined *)((int)param_3 + uVar4 + 0x88));
    uVar1 = *(undefined2 *)((int)param_3 + (uVar4 + 0x244) * 2);
  }
  else {
    local_c = 0xf;
    uVar2 = param_3[0x21];
    do {
      local_10 = uVar2 + 1;
      if (0xe < local_10) goto LAB_080d500c;
      iVar3 = uVar2 + 2;
      uVar2 = local_10;
    } while (param_3[iVar3] <= uVar4);
    local_c = local_10;
LAB_080d500c:
    FUN_080d2234(param_2,local_c);
    local_14 = param_3[local_c + 0x11] + (uVar4 - param_3[local_c] >> (0x10 - local_c & 0xff));
    if (*param_3 <= local_14) {
      local_14 = 0;
    }
    uVar1 = *(undefined2 *)((int)param_3 + (local_14 + 0x644) * 2);
  }
  return uVar1;
}


