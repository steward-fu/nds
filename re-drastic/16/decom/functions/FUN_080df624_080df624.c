/*
 * Ghidra decompilation
 *
 * Function : FUN_080df624
 * Address  : 080df624
 * Program  : drastic16
 */


undefined4
FUN_080df624(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x408) == '\x01') {
    if (param_5 == 0) {
      bVar3 = (uint)param_1[0x41b] <= param_4;
      if (param_4 == param_1[0x41b]) {
        bVar3 = (uint)param_1[0x41a] <= param_3;
      }
      if (!bVar3) {
        bVar3 = (uint)param_1[0x419] <= param_4;
        if (param_4 == param_1[0x419]) {
          bVar3 = (uint)param_1[0x418] <= param_3;
        }
        if (!bVar3) {
          FUN_080def64(param_1,param_4,param_1[0x40a],param_1[0x40b]);
        }
      }
    }
    if (param_5 == 0) {
      param_1[0x41a] = param_3;
      param_1[0x41b] = param_4;
    }
    if (param_5 == 1) {
      uVar1 = param_1[0x41a];
      param_1[0x41a] = param_3 + uVar1;
      param_1[0x41b] = param_4 + param_1[0x41b] + (uint)CARRY4(param_3,uVar1);
    }
    *(undefined *)(param_1 + 0x41c) = 1;
    if (param_5 == 2) {
      FUN_080a498c(*param_1,1,param_3,param_4,2);
      uVar4 = FUN_080a4b08(*param_1);
      *(undefined8 *)(param_1 + 0x41a) = uVar4;
      *(undefined *)(param_1 + 0x41c) = 0;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


