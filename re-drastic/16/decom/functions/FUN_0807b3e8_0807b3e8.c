/*
 * Ghidra decompilation
 *
 * Function : FUN_0807b3e8
 * Address  : 0807b3e8
 * Program  : drastic16
 */


void FUN_0807b3e8(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  uVar2 = DAT_08101814 ^ 1;
  uVar5 = param_1 - *(int *)(&DAT_081016e0 + (uVar2 + 0x52) * 4);
  uVar3 = *(uint *)(&DAT_081016e0 + (uVar2 + 0x56) * 4);
  uVar4 = param_2 - *(int *)(&DAT_081016e0 + (uVar2 + 0x54) * 4);
  uVar2 = *(uint *)(&DAT_081016e0 + (uVar2 + 0x58) * 4);
  if (param_5 != 0) {
    bVar7 = uVar4 <= uVar2;
    bVar6 = uVar2 == uVar4;
    if (bVar7 && !bVar6) {
      bVar7 = uVar5 <= uVar3;
      bVar6 = uVar3 == uVar5;
    }
    if (!bVar7 || bVar6) {
      uVar3 = *(uint *)(&DAT_081016e0 + (DAT_08101814 + 0x56) * 4);
      uVar5 = param_1 - *(int *)(&DAT_081016e0 + (DAT_08101814 + 0x52) * 4);
      uVar2 = *(uint *)(&DAT_081016e0 + (DAT_08101814 + 0x58) * 4);
      uVar4 = param_2 - *(int *)(&DAT_081016e0 + (DAT_08101814 + 0x54) * 4);
    }
  }
  uVar5 = uVar5 & ~((int)uVar5 >> 0x1f);
  uVar4 = uVar4 & ~((int)uVar4 >> 0x1f);
  if (uVar3 <= uVar5) {
    uVar5 = uVar3 - 1;
  }
  if (uVar2 <= uVar4) {
    uVar4 = uVar2 - 1;
  }
  if (uVar3 != 0 && uVar2 != 0) {
    uVar1 = __aeabi_uidiv(uVar5 << 8,uVar3);
    *param_3 = uVar1;
    uVar1 = __aeabi_uidiv(uVar4 * 0xc0,uVar2);
    *param_4 = uVar1;
    return;
  }
  *param_3 = 0;
  *param_4 = 0;
  return;
}


