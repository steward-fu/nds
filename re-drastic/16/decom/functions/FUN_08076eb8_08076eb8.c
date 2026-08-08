/*
 * Ghidra decompilation
 *
 * Function : FUN_08076eb8
 * Address  : 08076eb8
 * Program  : drastic16
 */


void FUN_08076eb8(byte *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  uint uVar14;
  ushort *puVar15;
  uint uVar16;
  int local_44;
  uint local_3c;
  byte *local_34;
  
  local_3c = FUN_0807b384(0);
  if ((local_3c == 0) && (local_3c = FUN_0807b384(1), local_3c == 0)) {
    return;
  }
  uVar5 = FUN_0807b3b0(0);
  iVar6 = FUN_0807b3d4();
  puVar4 = DAT_080faac0;
  if (iVar6 == 2) {
    uVar9 = (uint)*param_1;
    if (uVar9 != 0) {
      uVar10 = uVar5 & 0xfffffffe;
      uVar12 = DAT_080faac0[1];
      uVar16 = (int)DAT_080faac0 + 6;
      local_44 = param_4;
      local_34 = param_1;
      if (uVar9 == 10) goto LAB_0807714c;
      do {
        if (uVar12 == 0) {
          uVar14 = *puVar4;
        }
        else {
          puVar13 = (ushort *)((int)puVar4 + (puVar4[uVar9 + 0x802] + 3) * 2);
          uVar14 = *puVar4;
          iVar6 = ((uVar5 >> 1) * param_5 + local_44) * 2;
          puVar15 = (ushort *)(uVar16 + (puVar4[uVar9 + 0x802] + uVar12) * 2);
          iVar7 = local_3c + iVar6;
          iVar6 = param_3 + iVar6;
          uVar9 = uVar16;
          uVar11 = local_3c;
          do {
            while( true ) {
              puVar13 = puVar13 + 1;
              uVar2 = *puVar13;
              if (uVar14 != 0) break;
LAB_08077114:
              iVar7 = iVar7 + uVar10;
              iVar6 = iVar6 + uVar10;
              if (puVar13 == puVar15) goto LAB_08077124;
            }
            if (param_3 != 0) {
              uVar9 = 0;
              uVar11 = 0xf;
            }
            if (param_3 != 0) {
              do {
                uVar1 = uVar11 & 0xff;
                uVar11 = uVar11 - 1;
                if ((uVar2 >> uVar1 & 1) == 0) {
                  *(undefined2 *)(iVar7 + uVar9) = *(undefined2 *)(iVar6 + uVar9);
                }
                else {
                  *(short *)(iVar7 + uVar9) = (short)param_2;
                }
                uVar9 = uVar9 + 2;
              } while (uVar11 != 0xf - uVar14);
              goto LAB_08077114;
            }
            uVar11 = 0;
            do {
              iVar8 = uVar11 * 2;
              uVar3 = uVar2 >> (0xf - uVar11 & 0xff);
              uVar9 = (uint)uVar3;
              uVar11 = uVar11 + 1;
              if ((uVar3 & 1) != 0) {
                *(short *)(iVar7 + iVar8) = (short)param_2;
              }
            } while (uVar11 != uVar14);
            iVar7 = iVar7 + uVar10;
            iVar6 = iVar6 + uVar10;
          } while (puVar13 != puVar15);
        }
LAB_08077124:
        local_44 = local_44 + uVar14;
        while( true ) {
          local_34 = local_34 + 1;
          uVar9 = (uint)*local_34;
          if (uVar9 == 0) {
            return;
          }
          if (uVar9 != 10) break;
LAB_0807714c:
          param_5 = param_5 + uVar12;
          local_44 = param_4;
        }
      } while( true );
    }
  }
  else {
    uVar9 = (uint)*param_1;
    if (uVar9 != 0) {
      uVar10 = DAT_080faac0[1];
      iVar6 = param_4;
      do {
        if (uVar9 == 10) {
          param_5 = param_5 + uVar10;
          iVar6 = param_4;
        }
        else {
          if (uVar10 == 0) {
            uVar9 = *puVar4;
          }
          else {
            uVar12 = 0;
            puVar13 = (ushort *)((int)puVar4 + (puVar4[uVar9 + 0x802] + 3) * 2);
            uVar9 = *puVar4;
            iVar7 = local_3c + ((uVar5 >> 2) * param_5 + iVar6) * 4;
            do {
              puVar13 = puVar13 + 1;
              uVar2 = *puVar13;
              if (uVar9 != 0) {
                iVar8 = 0;
                uVar10 = 0;
                do {
                  uVar9 = 0xf - uVar10;
                  uVar10 = uVar10 + 1;
                  uVar3 = uVar2 >> (uVar9 & 0xff);
                  uVar9 = uVar3 & 1;
                  if ((uVar3 & 1) != 0) {
                    uVar9 = (param_2 & 0x7e0) << 5 | ((param_2 << 0x10) >> 0x1b) << 0x13 |
                            (param_2 & 0x1f) << 3;
                  }
                  *(uint *)(iVar7 + iVar8) = uVar9;
                  uVar9 = *puVar4;
                  iVar8 = iVar8 + 4;
                } while (uVar10 < uVar9);
                uVar10 = puVar4[1];
              }
              uVar12 = uVar12 + 1;
              iVar7 = iVar7 + (uVar5 & 0xfffffffc);
            } while (uVar12 < uVar10);
          }
          iVar6 = iVar6 + uVar9;
        }
        param_1 = param_1 + 1;
        uVar9 = (uint)*param_1;
      } while (uVar9 != 0);
    }
  }
  return;
}


