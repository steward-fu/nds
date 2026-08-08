/*
 * Ghidra decompilation
 *
 * Function : FUN_08003878
 * Address  : 08003878
 * Program  : drastic16
 */


undefined4 FUN_08003878(byte **param_1,ulonglong *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong in_d18;
  
  if (param_1[1] == (byte *)0x0) {
LAB_08003888:
    uVar4 = 0x10;
  }
  else {
    pbVar7 = *param_1;
    iVar5 = 0;
    uVar6 = 0x80;
    *param_1 = pbVar7 + 1;
    param_1[1] = param_1[1] + -1;
    uVar8 = (uint)*pbVar7;
    *param_2 = 0;
    do {
      uVar1 = iVar5 << 3;
      if ((uVar6 & uVar8) == 0) {
        uVar8 = uVar6 - 1 & uVar8;
        uVar9 = VectorShiftRight(CONCAT44(uVar8,uVar8),0x20);
        uVar9 = VectorShiftLeft(uVar9,in_d18 & 0xffffffffffff0000 | (ulonglong)uVar1 & 0xffff,8,1);
        uVar10 = VectorAdd(*param_2,uVar9,8);
        *param_2 = uVar10;
        return 0;
      }
      iVar5 = iVar5 + 1;
      uVar6 = uVar6 >> 1;
      if (param_1[1] == (byte *)0x0) goto LAB_08003888;
      pbVar7 = *param_1;
      in_d18 = in_d18 & 0xffffffffffff0000 | (ulonglong)uVar1 & 0xffff;
      param_1[1] = param_1[1] + -1;
      *param_1 = pbVar7 + 1;
      bVar2 = *pbVar7;
      uVar3 = CONCAT11(bVar2,bVar2);
      uVar4 = CONCAT22(uVar3,uVar3);
      uVar9 = VectorShiftRight(CONCAT44(uVar4,uVar4),0x38);
      uVar10 = VectorShiftLeft(uVar9,in_d18,8,1);
      *param_2 = *param_2 | uVar10;
    } while (iVar5 != 8);
    uVar4 = 0;
  }
  return uVar4;
}


