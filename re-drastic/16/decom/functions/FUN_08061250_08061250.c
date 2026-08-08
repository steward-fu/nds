/*
 * Ghidra decompilation
 *
 * Function : FUN_08061250
 * Address  : 08061250
 * Program  : drastic16
 */


undefined4 FUN_08061250(undefined4 param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined auStack_454 [4];
  undefined auStack_450 [32];
  undefined4 auStack_430 [8];
  undefined4 auStack_410 [8];
  undefined4 auStack_3f0 [8];
  undefined4 auStack_3d0 [104];
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined auStack_110 [256];
  
  iVar2 = FUN_08060d5c(param_1,auStack_454,auStack_450,0x80,0);
  if (iVar2 == 0) {
    iVar2 = FUN_08060d5c(param_1,auStack_454,auStack_450,0x440,auStack_3f0[2]);
    if (iVar2 == 0) {
      param_2[0x80] = local_230;
      param_2[0x81] = uStack_22c;
      param_2[0x82] = uStack_228;
      param_2[0x83] = uStack_224;
      param_2[0x84] = local_220;
      param_2[0x85] = uStack_21c;
      param_2[0x86] = uStack_218;
      param_2[0x87] = uStack_214;
      memcpy(param_2 + 0x88,auStack_110,0x100);
      uVar6 = 0;
      puVar7 = param_2;
      do {
        uVar1 = uVar6 >> 3;
        uVar4 = uVar6 & 7;
        uVar6 = uVar6 + 1;
        iVar2 = uVar4 + uVar1 * 0x20;
        uVar5 = auStack_410[iVar2];
        uVar8 = auStack_3f0[iVar2];
        uVar3 = auStack_3d0[iVar2];
        *puVar7 = auStack_430[iVar2];
        puVar7[1] = uVar5;
        puVar7[2] = uVar8;
        puVar7[3] = uVar3;
        puVar7 = puVar7 + 4;
      } while (uVar6 != 0x20);
      *(undefined2 *)(param_2 + 0x80) = 0;
      return 0;
    }
  }
  return 0xffffffff;
}


