/*
 * Ghidra decompilation
 *
 * Function : LzmaDec_AllocateProbs
 * Address  : 001b1be0
 * Program  : drastic64
 */


undefined8 LzmaDec_AllocateProbs(uint *param_1,byte *param_2,uint param_3,code **param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  
  if (param_3 < 5) {
    return 4;
  }
  bVar4 = *param_2;
  uVar6 = 4;
  if (bVar4 < 0xe1) {
    uVar5 = (uint)bVar4 - (bVar4 / 9 + (bVar4 / 9) * 8);
    uVar2 = bVar4 / 9 -
            ((int)(((ulong)bVar4 / 9) / 5) +
            ((uint)(((ulong)bVar4 / 9) * 0xcccccccd >> 0x20) & 0xfffffffc)) & 0xff;
    uVar3 = *(uint *)(param_2 + 1);
    uVar1 = (0x300 << (ulong)(uVar2 + (uVar5 & 0xff) & 0x1f)) + 0x736;
    if ((*(long *)(param_1 + 4) == 0) || (uVar1 != param_1[0x1a])) {
      (*param_4[1])(param_4);
      pcVar8 = *param_4;
      *(undefined8 *)(param_1 + 4) = 0;
      lVar7 = (*pcVar8)(param_4,(ulong)uVar1 << 1);
      *(long *)(param_1 + 4) = lVar7;
      param_1[0x1a] = uVar1;
      if (lVar7 == 0) {
        return 2;
      }
    }
    if (uVar3 < 0x1000) {
      uVar3 = 0x1000;
    }
    param_1[2] = (bVar4 / 9) / 5;
    param_1[3] = uVar3;
    *param_1 = uVar5 & 0xff;
    param_1[1] = uVar2;
    uVar6 = 0;
  }
  return uVar6;
}


