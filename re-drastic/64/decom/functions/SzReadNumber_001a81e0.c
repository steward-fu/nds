/*
 * Ghidra decompilation
 *
 * Function : SzReadNumber
 * Address  : 001a81e0
 * Program  : drastic64
 */


undefined8 SzReadNumber(byte **param_1,ulong *param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint3 uVar4;
  uint uVar5;
  uint5 uVar6;
  uint6 uVar7;
  uint7 uVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  ulong uVar13;
  
  pbVar12 = param_1[1];
  if (pbVar12 != (byte *)0x0) {
    pbVar10 = *param_1;
    *param_1 = pbVar10 + 1;
    param_1[1] = pbVar12 + -1;
    bVar1 = *pbVar10;
    *param_2 = 0;
    if (-1 < (char)bVar1) {
      iVar11 = 0;
      iVar9 = 0x80;
      uVar13 = 0;
LAB_001a8318:
      *param_2 = ((long)(int)(iVar9 - 1U & (uint)bVar1) << (iVar11 << 3)) + uVar13;
      return 0;
    }
    if (pbVar12 + -1 != (byte *)0x0) {
      *param_1 = pbVar10 + 2;
      param_1[1] = pbVar12 + -2;
      bVar2 = pbVar10[1];
      uVar13 = (ulong)bVar2;
      *param_2 = uVar13;
      if ((bVar1 >> 6 & 1) == 0) {
        iVar11 = 1;
        iVar9 = 0x40;
        goto LAB_001a8318;
      }
      if (pbVar12 + -2 != (byte *)0x0) {
        *param_1 = pbVar10 + 3;
        param_1[1] = pbVar12 + -3;
        uVar3 = CONCAT11(pbVar10[2],bVar2);
        uVar13 = (ulong)uVar3;
        *param_2 = uVar13;
        if ((bVar1 >> 5 & 1) == 0) {
          iVar11 = 2;
          iVar9 = 0x20;
          goto LAB_001a8318;
        }
        if (pbVar12 + -3 != (byte *)0x0) {
          *param_1 = pbVar10 + 4;
          param_1[1] = pbVar12 + -4;
          uVar4 = CONCAT12(pbVar10[3],uVar3);
          uVar13 = (ulong)uVar4;
          *param_2 = uVar13;
          if ((bVar1 >> 4 & 1) == 0) {
            iVar11 = 3;
            iVar9 = 0x10;
            goto LAB_001a8318;
          }
          if (pbVar12 + -4 != (byte *)0x0) {
            *param_1 = pbVar10 + 5;
            param_1[1] = pbVar12 + -5;
            uVar5 = CONCAT13(pbVar10[4],uVar4);
            uVar13 = (ulong)uVar5;
            *param_2 = uVar13;
            if ((bVar1 >> 3 & 1) == 0) {
              iVar11 = 4;
              iVar9 = 8;
              goto LAB_001a8318;
            }
            if (pbVar12 + -5 != (byte *)0x0) {
              *param_1 = pbVar10 + 6;
              param_1[1] = pbVar12 + -6;
              uVar6 = CONCAT14(pbVar10[5],uVar5);
              uVar13 = (ulong)uVar6;
              *param_2 = uVar13;
              if ((bVar1 >> 2 & 1) == 0) {
                iVar11 = 5;
                iVar9 = 4;
                goto LAB_001a8318;
              }
              if (pbVar12 + -6 != (byte *)0x0) {
                *param_1 = pbVar10 + 7;
                param_1[1] = pbVar12 + -7;
                uVar7 = CONCAT15(pbVar10[6],uVar6);
                uVar13 = (ulong)uVar7;
                *param_2 = uVar13;
                if ((bVar1 >> 1 & 1) == 0) {
                  iVar11 = 6;
                  iVar9 = 2;
                  goto LAB_001a8318;
                }
                if (pbVar12 + -7 != (byte *)0x0) {
                  *param_1 = pbVar10 + 8;
                  param_1[1] = pbVar12 + -8;
                  uVar8 = CONCAT16(pbVar10[7],uVar7);
                  uVar13 = (ulong)uVar8;
                  *param_2 = uVar13;
                  if ((bVar1 & 1) == 0) {
                    iVar11 = 7;
                    iVar9 = 1;
                    goto LAB_001a8318;
                  }
                  if (pbVar12 + -8 != (byte *)0x0) {
                    *param_1 = pbVar10 + 9;
                    param_1[1] = pbVar12 + -9;
                    *param_2 = CONCAT17(pbVar10[8],uVar8);
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0x10;
}


