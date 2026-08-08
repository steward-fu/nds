/*
 * Ghidra decompilation
 *
 * Function : FUN_08003670
 * Address  : 08003670
 * Program  : drastic16
 */


void FUN_08003670(int param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined auStack_2c [8];
  
  uVar6 = *(uint *)(param_1 + 0x4a4);
  uVar7 = (uint)*(byte *)(*(int *)(param_1 + 0x4d8) + 0x15);
  uVar5 = uVar7 & uVar6;
  if ((uVar5 & 0xfffffffe & *(uint *)(param_1 + 0x4a8)) != 0) {
    uVar3 = FUN_080800fc(param_1,0xfd,1,auStack_2c);
    puVar4 = *(uint **)(param_1 + 0x4ac);
    uVar1 = uVar3 << 0xc;
    if ((uVar7 & 0xfffffffe & ~(uVar6 & 0xfffffffe)) == 0) {
      *puVar4 = uVar1 | 0xe3a00000;
      *(uint **)(param_1 + 0x4ac) = puVar4 + 1;
    }
    else {
      puVar4[1] = uVar5 & 0xfffffffe | 0xe3c00200 | uVar1 | uVar3 << 0x10;
      *puVar4 = uVar1 | 0xe51b0080;
      *(uint **)(param_1 + 0x4ac) = puVar4 + 2;
    }
    if ((uVar5 & 2) != 0) {
      puVar4 = *(uint **)(param_1 + 0x4ac);
      *puVar4 = uVar1 | uVar3 << 0x10 | 0x23800202;
      *(uint **)(param_1 + 0x4ac) = puVar4 + 1;
    }
    if ((uVar5 & 4) != 0) {
      puVar4 = *(uint **)(param_1 + 0x4ac);
      *puVar4 = uVar1 | uVar3 << 0x10 | 0x3800204;
      *(uint **)(param_1 + 0x4ac) = puVar4 + 1;
    }
    if ((uVar5 & 8) != 0) {
      puVar4 = *(uint **)(param_1 + 0x4ac);
      *puVar4 = uVar1 | uVar3 << 0x10 | 0x43800208;
      *(uint **)(param_1 + 0x4ac) = puVar4 + 1;
    }
    puVar4 = *(uint **)(param_1 + 0x4ac);
    uVar2 = *(ushort *)(param_1 + 0x49c);
    *puVar4 = uVar1 | 0xe50b0080;
    *(ushort *)(param_1 + 0x49c) = uVar2 & ~(ushort)(1 << (uVar3 & 0xff));
    *(uint **)(param_1 + 0x4ac) = puVar4 + 1;
  }
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  *(undefined4 *)(param_1 + 0x4a4) = 1;
  FUN_0807fd88(param_1,param_2 & 0xf);
  if ((param_2 & 0x20) != 0) {
    FUN_08081f40(param_1,(uint)*(byte *)(param_1 + 0x4f1) | *(uint *)(param_1 + 0x4d0),
                 param_2 >> 0x1c);
  }
  FUN_0807ff08(param_1);
  puVar4 = *(uint **)(param_1 + 0x4ac);
  *puVar4 = ((int)&LAB_0807b960 - (int)puVar4 >> 2) - 2U & 0xffffff | param_2 & 0xf0000000 |
            0xa000000;
  *(uint **)(param_1 + 0x4ac) = puVar4 + 1;
  return;
}


