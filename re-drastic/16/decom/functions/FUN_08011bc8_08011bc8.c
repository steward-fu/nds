/*
 * Ghidra decompilation
 *
 * Function : FUN_08011bc8
 * Address  : 08011bc8
 * Program  : drastic16
 */


void FUN_08011bc8(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  *(undefined4 *)(param_1 + 0xfbc14) = 0x7ff;
  *(undefined *)(param_1 + 0xfbc40) = 2;
  *(code **)(param_1 + 0xfbc18) = FUN_08006a48;
  *(code **)(param_1 + 0xfbc1c) = FUN_08006ac4;
  *(code **)(param_1 + 0xfbc20) = FUN_08006b40;
  *(undefined *)(param_1 + 0xfbc41) = 2;
  *(code **)(param_1 + 0xfbc24) = FUN_08007a14;
  *(code **)(param_1 + 0xfbc28) = FUN_08007af4;
  *(code **)(param_1 + 0xfbc2c) = FUN_08007bd4;
  *(undefined4 *)(param_1 + 0xfbc30) = 0;
  *(undefined4 *)(param_1 + 0xfbc34) = 0;
  *(undefined **)(param_1 + 0xfbc38) = &LAB_08006888;
  *(undefined **)(param_1 + 0xfbc3c) = &LAB_08006888;
  *(undefined4 *)(param_1 + 0xfbc44) = 0x7ff;
  *(code **)(param_1 + 0xfbc48) = FUN_08006a48;
  *(code **)(param_1 + 0xfbc4c) = FUN_08006ac4;
  *(code **)(param_1 + 0xfbc50) = FUN_08006b40;
  *(undefined *)(param_1 + 0xfbc70) = 2;
  *(undefined *)(param_1 + 0xfbc71) = 2;
  *(code **)(param_1 + 0xfbc54) = FUN_08007a14;
  *(code **)(param_1 + 0xfbc58) = FUN_08007af4;
  *(code **)(param_1 + 0xfbc5c) = FUN_08007bd4;
  *(undefined4 *)(param_1 + 0xfbc60) = 0;
  *(undefined4 *)(param_1 + 0xfbc64) = 0;
  *(undefined **)(param_1 + 0xfbc68) = &LAB_08006888;
  *(undefined **)(param_1 + 0xfbc6c) = &LAB_08006888;
  *(undefined4 *)(param_1 + 0xfbcd4) = 0x7ff;
  *(code **)(param_1 + 0xfbcd8) = FUN_08006bbc;
  *(code **)(param_1 + 0xfbcdc) = FUN_08006c38;
  *(code **)(param_1 + 0xfbce0) = FUN_08006cb4;
  *(undefined *)(param_1 + 0xfbd00) = 2;
  *(undefined *)(param_1 + 0xfbd01) = 2;
  *(code **)(param_1 + 0xfbce4) = FUN_08007cb4;
  *(code **)(param_1 + 0xfbce8) = FUN_08007d94;
  *(code **)(param_1 + 0xfbcec) = FUN_08007e74;
  *(undefined4 *)(param_1 + 0xfbcf0) = 0;
  *(undefined4 *)(param_1 + 0xfbcf4) = 0;
  *(undefined **)(param_1 + 0xfbcf8) = &LAB_08006888;
  *(undefined **)(param_1 + 0xfbcfc) = &LAB_08006888;
  *(undefined4 *)(param_1 + 0xfbd04) = 0x7ff;
  *(code **)(param_1 + 0xfbd08) = FUN_08006bbc;
  *(code **)(param_1 + 0xfbd0c) = FUN_08006c38;
  *(code **)(param_1 + 0xfbd10) = FUN_08006cb4;
  *(undefined *)(param_1 + 0xfbd30) = 2;
  *(undefined *)(param_1 + 0xfbd31) = 2;
  *(code **)(param_1 + 0xfbd14) = FUN_08007cb4;
  *(code **)(param_1 + 0xfbd18) = FUN_08007d94;
  *(code **)(param_1 + 0xfbd1c) = FUN_08007e74;
  iVar3 = *(int *)(param_1 + 0xfba2c);
  *(undefined4 *)(param_1 + 0xfbd20) = 0;
  *(undefined4 *)(param_1 + 0xfbd24) = 0;
  iVar1 = *(int *)(iVar3 + 0x800004);
  *(undefined **)(param_1 + 0xfbd28) = &LAB_08006888;
  *(undefined **)(param_1 + 0xfbd2c) = &LAB_08006888;
  uVar2 = *(uint *)(iVar1 + 0xfc7f4);
  uVar4 = *(uint *)(iVar1 + 0xfc7f8);
  if ((uVar2 < 0x5000001) && (0x6000000 < uVar4)) {
    FUN_0800a1fc(iVar3,0x5000000,uVar2 + 0xfb000000);
    iVar1 = 0x6000000 - uVar4;
  }
  else {
    iVar1 = 0x1000000;
    uVar2 = 0x5000000;
  }
  FUN_0800a1fc(iVar3,uVar2,iVar1);
  iVar1 = *(int *)(param_1 + 0xfba2c);
  uVar2 = *(uint *)(*(int *)(iVar1 + 0x800004) + 0xfc7f4);
  uVar4 = *(uint *)(*(int *)(iVar1 + 0x800004) + 0xfc7f8);
  if ((uVar2 < 0x7000001) && (0x8000000 < uVar4)) {
    FUN_0800a1fc(iVar1,0x7000000,uVar2 + 0xf9000000);
    iVar3 = 0x8000000 - uVar4;
  }
  else {
    iVar3 = 0x1000000;
    uVar2 = 0x7000000;
  }
  FUN_0800a1fc(iVar1,uVar2,iVar3);
  return;
}


