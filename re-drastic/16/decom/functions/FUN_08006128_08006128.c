/*
 * Ghidra decompilation
 *
 * Function : FUN_08006128
 * Address  : 08006128
 * Program  : drastic16
 */


void FUN_08006128(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint local_28;
  int iStack_24;
  
  puVar5 = param_1 + 0x567afe;
  if (*(char *)((int)param_1 + 0x291646e) != '\0') {
    param_1[0x769d3e] = 0;
    FUN_08070818(puVar5,0xffffffff);
  }
  puVar6 = param_1 + 0x769462;
  FUN_0801c870(puVar5,param_2,param_3);
  FUN_0801c870(puVar6,param_2,param_3);
  FUN_08013dbc(param_1 + 0x96adc8,param_2,param_3);
  FUN_08025a18(param_1 + 0x9a9fe0,param_2,param_3);
  FUN_08059938(param_1 + 0x557800,param_2,param_3);
  FUN_0805c338(param_1 + 0x68,param_2,param_3);
  FUN_0805cae8(param_1 + 0x3a4,param_2,param_3);
  FUN_0805d17c(param_1 + 0x4b5,param_2,param_3);
  FUN_08015dcc(param_1 + 6,param_2,param_3);
  uVar1 = (*(undefined4 **)(param_2 + 0x10))[1];
  *param_1 = **(undefined4 **)(param_2 + 0x10);
  param_1[1] = uVar1;
  iVar2 = *(int *)(param_2 + 0x10);
  puVar3 = (undefined4 *)(iVar2 + 8);
  *(undefined4 **)(param_2 + 0x10) = puVar3;
  uVar1 = *(undefined4 *)(iVar2 + 0xc);
  param_1[2] = *puVar3;
  param_1[3] = uVar1;
  puVar4 = (undefined2 *)(*(int *)(param_2 + 0x10) + 8);
  *(undefined2 **)(param_2 + 0x10) = puVar4;
  *(undefined2 *)(param_1 + 5) = *puVar4;
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 2;
  if (*(char *)((int)param_1 + 0x291646e) != '\0') {
    iVar2 = *(int *)(param_1[0x5683bf] + 8);
    param_1[0x5683c8] = param_1[0x5683c8] & 0xffffffdf;
    param_1[0x769d2c] = param_1[0x769d2c] & 0xffffffdf;
    uVar1 = FUN_0806d394(puVar5,iVar2 + 8);
    param_1[0x5683c6] = uVar1;
    uVar1 = FUN_0806d394(puVar5,iVar2 + 0x18);
    param_1[0x5683c5] = uVar1;
    uVar1 = FUN_0806d394(puVar6,8);
    param_1[0x769d2a] = uVar1;
    uVar1 = FUN_0806d394(puVar6,0x18);
    param_1[0x769d29] = uVar1;
    iVar2 = FUN_0806d394(puVar5,param_1[0x5683c7]);
    param_1[0x5683da] = iVar2 + 8;
    iVar2 = FUN_0806d394(puVar6,param_1[0x769d2b]);
    param_1[0x769d3e] = iVar2 + 8;
  }
  *(undefined8 *)(param_1 + 0x568382) = 0;
  *(undefined8 *)(param_1 + 0x769ce6) = 0;
  FUN_0807a058();
  FUN_0807b7f0(&local_28);
  param_1[0xa45912] = local_28 * 3;
  param_1[0xa45913] =
       iStack_24 * 3 + (uint)CARRY4(local_28,local_28) + (uint)CARRY4(local_28,local_28 * 2);
  *(undefined8 *)(param_1 + 0xa45914) = 0;
  *(undefined *)((int)param_1 + 0x291646d) = 0;
  *(undefined *)((int)param_1 + 0x291646a) = 0;
  *(undefined *)((int)param_1 + 0x291646b) = 0;
  *(undefined *)(param_1 + 0xa4591b) = 0;
  *(undefined *)(param_1 + 0xa4591a) = 0;
  return;
}


