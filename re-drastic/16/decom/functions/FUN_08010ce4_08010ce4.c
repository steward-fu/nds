/*
 * Ghidra decompilation
 *
 * Function : FUN_08010ce4
 * Address  : 08010ce4
 * Program  : drastic16
 */


void FUN_08010ce4(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_4 >> 0x17 != 0) {
    iVar4 = param_3 + (param_4 & 0xff800000);
    iVar3 = 0x8000000 - param_3;
    do {
      uVar1 = (uint)(iVar3 + param_3) >> 0x17;
      iVar2 = param_2 + uVar1 * 0x30;
      *(undefined4 *)(param_2 + uVar1 * 0x30) = 0x7fffff;
      *(int *)(iVar2 + 4) = param_3;
      param_3 = param_3 + 0x800000;
      *(undefined *)(iVar2 + 0x2c) = 0;
      *(undefined *)(iVar2 + 0x2d) = 3;
      *(undefined4 *)(iVar2 + 0x1c) = 0;
      *(undefined4 *)(iVar2 + 0x20) = 0;
      *(undefined **)(iVar2 + 0x24) = &LAB_08006888;
      *(undefined **)(iVar2 + 0x28) = &LAB_08006888;
    } while (param_3 != iVar4);
  }
  *(undefined *)(param_2 + 0x3ec) = 2;
  *(undefined4 *)(param_2 + 0x3c0) = 0x7fffff;
  *(undefined **)(param_2 + 0x3c4) = &LAB_08007858;
  *(undefined **)(param_2 + 0x3c8) = &LAB_0800671c;
  *(undefined **)(param_2 + 0x3cc) = &LAB_08006724;
  *(undefined *)(param_2 + 0x3ed) = 2;
  *(undefined **)(param_2 + 0x3d0) = &DAT_08007870;
  *(undefined **)(param_2 + 0x3d4) = &DAT_0800672c;
  *(undefined **)(param_2 + 0x3d8) = &DAT_08006730;
  *(undefined4 *)(param_2 + 0x3f0) = 0x7fffff;
  *(undefined *)(param_2 + 0x41c) = 2;
  *(undefined **)(param_2 + 0x3e4) = &LAB_08006888;
  *(undefined **)(param_2 + 1000) = &LAB_08006888;
  *(undefined4 *)(param_2 + 0x3dc) = 0;
  *(undefined4 *)(param_2 + 0x3e0) = 0;
  *(undefined **)(param_2 + 0x3f4) = &LAB_08007858;
  *(undefined **)(param_2 + 0x3f8) = &LAB_0800671c;
  *(undefined **)(param_2 + 0x3fc) = &LAB_08006724;
  *(undefined *)(param_2 + 0x41d) = 2;
  *(undefined **)(param_2 + 0x400) = &DAT_08007870;
  *(undefined **)(param_2 + 0x404) = &DAT_0800672c;
  *(undefined **)(param_2 + 0x408) = &DAT_08006730;
  *(undefined4 *)(param_2 + 0x40c) = 0;
  *(undefined4 *)(param_2 + 0x410) = 0;
  *(undefined **)(param_2 + 0x414) = &LAB_08006888;
  *(undefined **)(param_2 + 0x418) = &LAB_08006888;
  return;
}


