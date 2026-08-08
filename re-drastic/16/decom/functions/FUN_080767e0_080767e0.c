/*
 * Ghidra decompilation
 *
 * Function : FUN_080767e0
 * Address  : 080767e0
 * Program  : drastic16
 */


void FUN_080767e0(byte *param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6,
                 int param_7,uint param_8,uint param_9)

{
  ushort uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ushort *puVar12;
  int iVar13;
  uint uVar14;
  uint local_54;
  int local_48;
  uint local_3c;
  int local_38;
  
  iVar3 = FUN_0807b3d4();
  puVar2 = DAT_080faac0;
  if (iVar3 == 2) {
    uVar6 = (uint)*param_1;
    if (uVar6 != 0) {
      local_38 = 1;
      uVar5 = DAT_080faac0[1];
      local_3c = 0;
      local_48 = param_4;
      if (uVar6 == 10) goto LAB_08076b04;
LAB_080769e0:
      do {
        uVar6 = puVar2[uVar6 + 0x802];
        if (uVar5 == 0) {
          uVar9 = *puVar2;
        }
        else {
          puVar12 = (ushort *)((int)puVar2 + (uVar6 + 3) * 2);
          uVar9 = *puVar2;
          uVar11 = 0xf - uVar9;
          iVar3 = ((param_8 >> 1) * param_5 + local_48) * 2;
          iVar13 = param_6 + iVar3;
          iVar3 = param_7 + iVar3;
          do {
            puVar12 = puVar12 + 1;
            uVar1 = *puVar12;
            if (uVar9 != 0) {
              if (param_7 == 0) {
                if ((param_3 & 0x10000) == 0) {
                  uVar10 = 0xf;
                  iVar4 = 0;
                  do {
                    uVar8 = uVar10 & 0xff;
                    uVar10 = uVar10 - 1;
                    uVar14 = param_3;
                    if ((uVar1 >> uVar8 & 1) != 0) {
                      uVar14 = param_2;
                    }
                    *(short *)(iVar13 + iVar4) = (short)uVar14;
                    iVar4 = iVar4 + 2;
                  } while (uVar10 != uVar11);
                }
                else {
                  uVar10 = 0;
                  do {
                    uVar8 = 0xf - uVar10;
                    iVar4 = uVar10 * 2;
                    uVar10 = uVar10 + 1;
                    if ((uVar1 >> (uVar8 & 0xff) & 1) != 0) {
                      *(short *)(iVar13 + iVar4) = (short)param_2;
                    }
                  } while (uVar10 != uVar9);
                }
              }
              else if ((param_3 & 0x10000) == 0) {
                uVar10 = 0xf;
                iVar4 = 0;
                do {
                  uVar8 = uVar10 & 0xff;
                  uVar10 = uVar10 - 1;
                  uVar14 = param_2;
                  if ((uVar1 >> uVar8 & 1) == 0) {
                    uVar14 = param_3;
                  }
                  *(short *)(iVar13 + iVar4) = (short)uVar14;
                  iVar4 = iVar4 + 2;
                } while (uVar10 != uVar11);
              }
              else {
                iVar4 = 0;
                uVar10 = 0xf;
                do {
                  uVar8 = uVar10 & 0xff;
                  uVar10 = uVar10 - 1;
                  if ((uVar1 >> uVar8 & 1) == 0) {
                    *(undefined2 *)(iVar13 + iVar4) = *(undefined2 *)(iVar3 + iVar4);
                  }
                  else {
                    *(short *)(iVar13 + iVar4) = (short)param_2;
                  }
                  iVar4 = iVar4 + 2;
                } while (uVar10 != uVar11);
              }
            }
            iVar13 = iVar13 + (param_8 & 0xfffffffe);
            iVar3 = iVar3 + (param_8 & 0xfffffffe);
          } while (puVar12 != (ushort *)((int)puVar2 + (uVar6 + uVar5) * 2 + 6));
        }
        local_48 = local_48 + uVar9;
        while( true ) {
          uVar6 = (uint)param_1[local_38];
          local_3c = local_3c + 1;
          iVar3 = 1 - uVar6;
          if (1 < uVar6) {
            iVar3 = 0;
          }
          if (param_9 <= local_3c) {
            iVar3 = 0;
          }
          if (iVar3 != 0) break;
          local_38 = local_38 + 1;
          if (uVar6 == 0) {
            return;
          }
          if (uVar6 != 10) goto LAB_080769e0;
LAB_08076b04:
          param_5 = param_5 + uVar5;
          local_48 = param_4;
        }
        uVar6 = 0x20;
      } while( true );
    }
  }
  else {
    uVar6 = (uint)*param_1;
    if (uVar6 != 0) {
      iVar13 = 1;
      uVar5 = 0;
      uVar9 = DAT_080faac0[1];
      local_54 = 0;
      iVar3 = param_4;
      do {
        if (uVar6 == 10) {
          param_5 = param_5 + uVar9;
          iVar3 = param_4;
          goto LAB_0807691c;
        }
        while( true ) {
          if (uVar9 == 0) {
            uVar5 = *puVar2;
          }
          if (uVar9 != 0) {
            uVar11 = 0;
            puVar12 = (ushort *)((int)puVar2 + (puVar2[uVar6 + 0x802] + 3) * 2);
            uVar5 = *puVar2;
            iVar4 = param_6 + ((param_8 >> 2) * param_5 + iVar3) * 4;
            do {
              puVar12 = puVar12 + 1;
              uVar1 = *puVar12;
              if (uVar5 != 0) {
                iVar7 = 0;
                uVar6 = 0;
                do {
                  uVar9 = 0xf - uVar6;
                  uVar6 = uVar6 + 1;
                  uVar5 = (param_3 & 0x7e0) << 5 | ((param_3 << 0x10) >> 0x1b) << 0x13 |
                          (param_3 & 0x1f) << 3;
                  if ((uVar1 >> (uVar9 & 0xff) & 1) != 0) {
                    uVar5 = (param_2 & 0x7e0) << 5 | ((param_2 << 0x10) >> 0x1b) << 0x13 |
                            (param_2 & 0x1f) << 3;
                  }
                  *(uint *)(iVar4 + iVar7) = uVar5;
                  uVar5 = *puVar2;
                  iVar7 = iVar7 + 4;
                } while (uVar6 < uVar5);
                uVar9 = puVar2[1];
              }
              uVar11 = uVar11 + 1;
              iVar4 = iVar4 + (param_8 & 0xfffffffc);
            } while (uVar11 < uVar9);
          }
          iVar3 = iVar3 + uVar5;
LAB_0807691c:
          uVar6 = (uint)param_1[iVar13];
          local_54 = local_54 + 1;
          uVar5 = 1 - uVar6;
          if (1 < uVar6) {
            uVar5 = 0;
          }
          if (param_9 <= local_54) {
            uVar5 = 0;
          }
          if (uVar5 == 0) break;
          uVar6 = 0x20;
        }
        iVar13 = iVar13 + 1;
      } while (uVar6 != 0);
    }
  }
  return;
}


