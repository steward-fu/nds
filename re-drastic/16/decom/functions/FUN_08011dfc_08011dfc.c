/*
 * Ghidra decompilation
 *
 * Function : FUN_08011dfc
 * Address  : 08011dfc
 * Program  : drastic16
 */


void FUN_08011dfc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 0xfbc14) = 0x7ff;
  iVar4 = param_1 + 0x16040;
  *(undefined *)(param_1 + 0xfbc40) = 0;
  iVar1 = param_1 + 0x15040;
  *(int *)(param_1 + 0xfbc18) = iVar4;
  *(int *)(param_1 + 0xfbc24) = iVar4;
  *(undefined *)(param_1 + 0xfbc41) = 0;
  *(undefined4 *)(param_1 + 0xfbc30) = 0;
  *(undefined4 *)(param_1 + 0xfbc34) = 0;
  *(undefined **)(param_1 + 0xfbc38) = &LAB_08006890;
  *(undefined **)(param_1 + 0xfbc3c) = &LAB_080068a8;
  *(undefined4 *)(param_1 + 0xfbc44) = 0x7ff;
  *(int *)(param_1 + 0xfbc48) = iVar4;
  *(undefined *)(param_1 + 0xfbc70) = 0;
  *(undefined *)(param_1 + 0xfbc71) = 0;
  *(int *)(param_1 + 0xfbc54) = iVar4;
  *(undefined4 *)(param_1 + 0xfbc60) = 0;
  *(undefined4 *)(param_1 + 0xfbc64) = 0;
  *(undefined **)(param_1 + 0xfbc68) = &LAB_08006890;
  *(undefined **)(param_1 + 0xfbc6c) = &LAB_080068a8;
  *(undefined4 *)(param_1 + 0xfbcd4) = 0x7ff;
  *(undefined *)(param_1 + 0xfbd00) = 0;
  *(undefined *)(param_1 + 0xfbd01) = 0;
  *(undefined4 *)(param_1 + 0xfbcf0) = 0;
  *(undefined4 *)(param_1 + 0xfbcf4) = 0;
  *(undefined **)(param_1 + 0xfbcf8) = &LAB_08006890;
  *(undefined **)(param_1 + 0xfbcfc) = &LAB_080068a8;
  *(int *)(param_1 + 0xfbcd8) = iVar1;
  *(int *)(param_1 + 0xfbce4) = iVar1;
  *(undefined4 *)(param_1 + 0xfbd04) = 0x7ff;
  *(undefined *)(param_1 + 0xfbd30) = 0;
  *(undefined *)(param_1 + 0xfbd31) = 0;
  *(int *)(param_1 + 0xfbd08) = iVar1;
  *(int *)(param_1 + 0xfbd14) = iVar1;
  *(undefined4 *)(param_1 + 0xfbd20) = 0;
  iVar4 = *(int *)(param_1 + 0xfba2c);
  *(undefined4 *)(param_1 + 0xfbd24) = 0;
  *(undefined **)(param_1 + 0xfbd2c) = &LAB_080068a8;
  iVar1 = *(int *)(iVar4 + 0x800004);
  *(undefined **)(param_1 + 0xfbd28) = &LAB_08006890;
  uVar2 = *(uint *)(iVar1 + 0xfc7f4);
  uVar3 = *(uint *)(iVar1 + 0xfc7f8);
  if ((uVar2 < 0x5000001) && (0x6000000 < uVar3)) {
    FUN_0800a1fc(iVar4,0x5000000,uVar2 + 0xfb000000);
    iVar1 = 0x6000000 - uVar3;
  }
  else {
    iVar1 = 0x1000000;
    uVar2 = 0x5000000;
  }
  FUN_0800a1fc(iVar4,uVar2,iVar1);
  iVar1 = *(int *)(param_1 + 0xfba2c);
  uVar2 = *(uint *)(*(int *)(iVar1 + 0x800004) + 0xfc7f4);
  uVar3 = *(uint *)(*(int *)(iVar1 + 0x800004) + 0xfc7f8);
  if ((uVar2 < 0x7000001) && (0x8000000 < uVar3)) {
    FUN_0800a1fc(iVar1,0x7000000,uVar2 + 0xf9000000);
    FUN_0800a1fc(iVar1,uVar2,0x8000000 - uVar3,param_4);
    return;
  }
  FUN_0800a1fc(iVar1,0x7000000,0x1000000,param_4);
  return;
}


