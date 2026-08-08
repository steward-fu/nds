/*
 * Ghidra decompilation
 *
 * Function : FUN_08099d78
 * Address  : 08099d78
 * Program  : drastic16
 */


undefined4 FUN_08099d78(uint *param_1,uint param_2,byte *param_3)

{
  undefined *puVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  ushort *puVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  ushort *puVar24;
  int iVar25;
  uint uVar26;
  short *psVar27;
  uint uVar28;
  undefined8 *puVar29;
  byte *pbVar30;
  uint uVar31;
  ushort uVar32;
  uint uVar33;
  uint uVar34;
  int iVar35;
  bool bVar36;
  bool bVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  uint local_74;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_50;
  uint local_40;
  uint local_3c;
  uint local_2c;
  
  pbVar30 = (byte *)param_1[6];
  uVar31 = param_1[9];
  local_50 = param_1[0xc];
  if (local_50 == 0) goto LAB_0809a13c;
  do {
    local_6c = param_1[0xb];
    local_64 = param_2;
LAB_08099db8:
    local_60 = 0;
    uVar33 = param_1[4];
    uVar20 = uVar33 + 0x644;
    local_68 = param_1[0xe];
    uVar15 = param_1[2];
    local_74 = param_1[0xd];
    uVar17 = param_1[1];
    local_3c = param_1[0x10];
    local_40 = param_1[0xf];
    local_2c = param_1[0x11];
    uVar26 = *param_1;
    uVar34 = param_1[5];
    uVar5 = param_1[10];
    uVar18 = param_1[7];
    uVar16 = param_1[8];
    do {
      uVar19 = local_40;
      uVar10 = local_68;
      bVar36 = uVar18 < 0x1000000;
      uVar23 = uVar18;
      if (bVar36) {
        uVar23 = uVar18 << 8;
      }
      uVar22 = local_6c & (1 << (uVar15 & 0xff)) - 1U;
      uVar18 = local_74;
      if (bVar36) {
        uVar18 = (uint)*pbVar30;
        pbVar30 = pbVar30 + 1;
      }
      uVar28 = (uVar22 + local_74 * 0x10) * 2;
      if (bVar36) {
        uVar16 = uVar18 | uVar16 << 8;
      }
      uVar4 = *(ushort *)(uVar33 + uVar28);
      uVar9 = (uint)uVar4;
      uVar18 = uVar9 * (uVar23 >> 0xb);
      if (uVar18 < uVar16 || uVar18 - uVar16 == 0) {
        uVar23 = uVar23 - uVar18;
        bVar36 = uVar23 < 0x1000000;
        uVar9 = uVar9 - (uVar4 >> 5);
        uVar16 = uVar16 - uVar18;
        if (bVar36) {
          uVar23 = uVar23 * 0x100;
        }
        iVar35 = (local_74 + 0xc0) * 2;
        *(short *)(uVar33 + uVar28) = (short)uVar9;
        if (bVar36) {
          uVar9 = (uint)*pbVar30;
          pbVar30 = pbVar30 + 1;
        }
        uVar4 = *(ushort *)(uVar33 + iVar35);
        if (bVar36) {
          uVar16 = uVar9 | uVar16 * 0x100;
        }
        uVar28 = (uint)uVar4 * (uVar23 >> 0xb);
        if (uVar28 < uVar16 || uVar28 - uVar16 == 0) {
          uVar23 = uVar23 - uVar28;
          uVar16 = uVar16 - uVar28;
          *(ushort *)(uVar33 + iVar35) = uVar4 - (uVar4 >> 5);
          if ((local_6c | local_50) == 0) {
            return 1;
          }
          bVar36 = uVar23 < 0x1000000;
          iVar21 = iVar35 + 0x18;
          if (bVar36) {
            uVar23 = uVar23 * 0x100;
          }
          uVar4 = *(ushort *)(uVar33 + iVar21);
          uVar18 = (uint)uVar4;
          if (bVar36) {
            bVar2 = *pbVar30;
            pbVar30 = pbVar30 + 1;
            uVar16 = (uint)bVar2 | uVar16 * 0x100;
          }
          uVar28 = uVar18 * (uVar23 >> 0xb);
          if (uVar28 < uVar16 || uVar28 - uVar16 == 0) {
            uVar23 = uVar23 - uVar28;
            uVar16 = uVar16 - uVar28;
            bVar36 = uVar23 < 0x1000000;
            iVar25 = iVar35 + 0x30;
            if (bVar36) {
              uVar23 = uVar23 * 0x100;
            }
            *(ushort *)(uVar33 + iVar21) = uVar4 - (uVar4 >> 5);
            uVar4 = *(ushort *)(uVar33 + iVar25);
            if (bVar36) {
              bVar2 = *pbVar30;
              pbVar30 = pbVar30 + 1;
              uVar16 = (uint)bVar2 | uVar16 * 0x100;
            }
            uVar28 = (uint)uVar4 * (uVar23 >> 0xb);
            if (uVar28 < uVar16 || uVar28 - uVar16 == 0) {
              uVar23 = uVar23 - uVar28;
              uVar16 = uVar16 - uVar28;
              bVar36 = uVar23 < 0x1000000;
              iVar35 = iVar35 + 0x48;
              if (bVar36) {
                uVar23 = uVar23 * 0x100;
              }
              *(ushort *)(uVar33 + iVar25) = uVar4 - (uVar4 >> 5);
              uVar4 = *(ushort *)(uVar33 + iVar35);
              if (bVar36) {
                bVar2 = *pbVar30;
                pbVar30 = pbVar30 + 1;
                uVar16 = (uint)bVar2 | uVar16 * 0x100;
              }
              uVar28 = (uint)uVar4 * (uVar23 >> 0xb);
              if (uVar28 < uVar16 || uVar28 - uVar16 == 0) {
                uVar16 = uVar16 - uVar28;
                uVar28 = uVar23 - uVar28;
                uVar18 = local_3c;
                local_68 = local_2c;
                local_40 = uVar10;
                local_3c = uVar19;
                *(ushort *)(uVar33 + iVar35) = uVar4 - (uVar4 >> 5);
                local_2c = uVar18;
              }
              else {
                uVar18 = local_68;
                local_68 = local_3c;
                local_3c = local_40;
                *(ushort *)(uVar33 + iVar35) = uVar4 + (short)(0x800 - uVar4 >> 5);
                local_40 = uVar18;
              }
            }
            else {
              local_40 = local_68;
              local_68 = uVar19;
              *(ushort *)(uVar33 + iVar25) = uVar4 + (short)(0x800 - uVar4 >> 5);
            }
          }
          else {
            bVar36 = uVar28 < 0x1000000;
            if (bVar36) {
              uVar28 = uVar28 * 0x100;
            }
            uVar18 = uVar18 + (0x800 - uVar18 >> 5);
            *(short *)(uVar33 + iVar21) = (short)uVar18;
            iVar35 = (uVar22 + (local_74 + 0xf) * 0x10) * 2;
            if (bVar36) {
              uVar18 = (uint)*pbVar30;
              pbVar30 = pbVar30 + 1;
            }
            uVar4 = *(ushort *)(uVar33 + iVar35);
            if (bVar36) {
              uVar16 = uVar18 | uVar16 << 8;
            }
            uVar18 = (uint)uVar4 * (uVar28 >> 0xb);
            if (uVar16 <= uVar18 && uVar18 - uVar16 != 0) {
              *(ushort *)(uVar33 + iVar35) = uVar4 + (short)(0x800 - uVar4 >> 5);
              uVar23 = uVar5;
              if (local_68 <= uVar31) {
                uVar23 = 0;
              }
              local_6c = local_6c + 1;
              if (local_74 < 7) {
                local_74 = 9;
              }
              else {
                local_74 = 0xb;
              }
              *(undefined *)(uVar34 + uVar31) =
                   *(undefined *)(uVar34 + (uVar31 - local_68) + uVar23);
              uVar31 = uVar31 + 1;
              goto LAB_08099fc8;
            }
            uVar28 = uVar28 - uVar18;
            uVar16 = uVar16 - uVar18;
            *(ushort *)(uVar33 + iVar35) = uVar4 - (uVar4 >> 5);
          }
          puVar6 = (ushort *)(uVar33 + 0xa68);
          if (local_74 < 7) {
            local_74 = 8;
          }
          else {
            local_74 = 0xb;
          }
        }
        else {
          puVar6 = (ushort *)(uVar33 + 0x664);
          *(ushort *)(uVar33 + iVar35) = uVar4 + (short)(0x800 - uVar4 >> 5);
          local_74 = local_74 + 0xc;
        }
        uVar4 = *puVar6;
        uVar23 = (uint)uVar4;
        if (uVar28 < 0x1000000) {
          uVar28 = uVar28 << 8;
          bVar2 = *pbVar30;
          pbVar30 = pbVar30 + 1;
          uVar16 = (uint)bVar2 | uVar16 << 8;
        }
        uVar18 = uVar23 * (uVar28 >> 0xb);
        if (uVar18 < uVar16 || uVar18 - uVar16 == 0) {
          uVar28 = uVar28 - uVar18;
          uVar16 = uVar16 - uVar18;
          bVar36 = uVar28 < 0x1000000;
          if (bVar36) {
            uVar28 = uVar28 * 0x100;
          }
          *puVar6 = uVar4 - (uVar4 >> 5);
          if (bVar36) {
            uVar18 = (uint)*pbVar30;
            pbVar30 = pbVar30 + 1;
          }
          uVar4 = puVar6[1];
          uVar23 = (uint)uVar4;
          if (bVar36) {
            uVar16 = uVar18 | uVar16 * 0x100;
          }
          uVar18 = uVar23 * (uVar28 >> 0xb);
          if (uVar18 < uVar16 || uVar18 - uVar16 == 0) {
            uVar16 = uVar16 - uVar18;
            uVar23 = uVar23 - (uVar4 >> 5);
            uVar18 = uVar28 - uVar18;
            puVar24 = puVar6 + 0x102;
            iVar35 = -0xf0;
            puVar6[1] = (ushort)uVar23;
            uVar10 = 0x100;
          }
          else {
            puVar24 = puVar6 + uVar22 * 8 + 0x82;
            iVar35 = 0;
            uVar10 = 8;
            puVar6[1] = uVar4 + (short)(0x800 - uVar23 >> 5);
          }
        }
        else {
          puVar24 = puVar6 + uVar22 * 8 + 2;
          iVar35 = -8;
          uVar10 = 8;
          *puVar6 = uVar4 + (short)(0x800 - uVar23 >> 5);
        }
        local_60 = 1;
        do {
          bVar36 = uVar18 < 0x1000000;
          uVar19 = local_60 * 2;
          if (bVar36) {
            uVar18 = uVar18 << 8;
          }
          if (bVar36) {
            uVar23 = (uint)*pbVar30;
            pbVar30 = pbVar30 + 1;
          }
          uVar4 = puVar24[local_60];
          puVar6 = puVar24 + local_60;
          if (bVar36) {
            uVar16 = uVar23 | uVar16 << 8;
          }
          uVar23 = (uint)uVar4 * (uVar18 >> 0xb);
          bVar36 = uVar23 - uVar16 == 0;
          uVar22 = uVar18 - uVar23;
          sVar3 = (short)(0x800 - uVar4 >> 5);
          if (uVar23 < uVar16 || bVar36) {
            sVar3 = -(uVar4 >> 5);
          }
          uVar18 = uVar23;
          local_60 = uVar19;
          if (uVar23 < uVar16 || bVar36) {
            uVar16 = uVar16 - uVar23;
            uVar18 = uVar22;
            local_60 = uVar19 + 1;
          }
          *puVar6 = uVar4 + sVar3;
        } while (local_60 < uVar10);
        local_60 = local_60 + iVar35;
        if (0xb < local_74) {
          if (local_60 < 4) {
            iVar35 = local_60 * 0x80 + 0x360;
          }
          else {
            iVar35 = 0x4e0;
          }
          bVar36 = uVar18 < 0x1000000;
          iVar35 = uVar33 + iVar35;
          pbVar7 = pbVar30;
          if (bVar36) {
            uVar18 = uVar18 << 8;
            pbVar7 = (byte *)(uint)*pbVar30;
            pbVar30 = pbVar30 + 1;
          }
          uVar4 = *(ushort *)(iVar35 + 2);
          if (bVar36) {
            uVar16 = (uint)pbVar7 | uVar16 << 8;
          }
          uVar23 = (uint)uVar4 * (uVar18 >> 0xb);
          if (uVar23 < uVar16 || uVar23 - uVar16 == 0) {
            uVar16 = uVar16 - uVar23;
            uVar23 = uVar18 - uVar23;
            iVar21 = 6;
            sVar3 = -(uVar4 >> 5);
          }
          else {
            uVar18 = 0x800 - uVar4;
            iVar21 = 4;
            sVar3 = (short)(uVar18 >> 5);
          }
          bVar36 = uVar23 < 0x1000000;
          if (bVar36) {
            uVar23 = uVar23 << 8;
          }
          *(ushort *)(iVar35 + 2) = uVar4 + sVar3;
          if (bVar36) {
            uVar18 = (uint)*pbVar30;
            pbVar30 = pbVar30 + 1;
          }
          uVar4 = *(ushort *)(iVar35 + iVar21);
          psVar27 = (short *)(iVar35 + iVar21);
          if (bVar36) {
            uVar16 = uVar18 | uVar16 << 8;
          }
          uVar18 = (uint)uVar4 * (uVar23 >> 0xb);
          if (uVar18 < uVar16 || uVar18 - uVar16 == 0) {
            uVar16 = uVar16 - uVar18;
            iVar21 = iVar21 + 1;
            uVar18 = uVar23 - uVar18;
            sVar3 = -(uVar4 >> 5);
          }
          else {
            uVar23 = 0x800 - uVar4;
            sVar3 = (short)(uVar23 >> 5);
          }
          bVar36 = uVar18 < 0x1000000;
          iVar21 = iVar21 * 2;
          if (bVar36) {
            uVar18 = uVar18 << 8;
          }
          *psVar27 = uVar4 + sVar3;
          if (bVar36) {
            uVar23 = (uint)*pbVar30;
            pbVar30 = pbVar30 + 1;
          }
          uVar4 = *(ushort *)(iVar35 + iVar21);
          if (bVar36) {
            uVar16 = uVar23 | uVar16 << 8;
          }
          uVar23 = (uint)uVar4 * (uVar18 >> 0xb);
          if (uVar23 < uVar16 || uVar23 - uVar16 == 0) {
            uVar16 = uVar16 - uVar23;
            iVar25 = iVar21 + 1;
            uVar23 = uVar18 - uVar23;
            sVar3 = -(uVar4 >> 5);
          }
          else {
            uVar18 = 0x800 - uVar4;
            sVar3 = (short)(uVar18 >> 5);
            iVar25 = iVar21;
          }
          bVar36 = uVar23 < 0x1000000;
          iVar25 = iVar25 * 2;
          if (bVar36) {
            uVar23 = uVar23 << 8;
          }
          *(ushort *)(iVar35 + iVar21) = uVar4 + sVar3;
          if (bVar36) {
            uVar18 = (uint)*pbVar30;
            pbVar30 = pbVar30 + 1;
          }
          uVar4 = *(ushort *)(iVar35 + iVar25);
          if (bVar36) {
            uVar16 = uVar18 | uVar16 << 8;
          }
          uVar18 = (uint)uVar4 * (uVar23 >> 0xb);
          if (uVar18 < uVar16 || uVar18 - uVar16 == 0) {
            uVar16 = uVar16 - uVar18;
            iVar21 = iVar25 + 1;
            uVar18 = uVar23 - uVar18;
            sVar3 = -(uVar4 >> 5);
          }
          else {
            uVar23 = 0x800 - uVar4;
            sVar3 = (short)(uVar23 >> 5);
            iVar21 = iVar25;
          }
          bVar36 = uVar18 < 0x1000000;
          iVar21 = iVar21 * 2;
          if (bVar36) {
            uVar18 = uVar18 << 8;
          }
          *(ushort *)(iVar35 + iVar25) = uVar4 + sVar3;
          if (bVar36) {
            uVar23 = (uint)*pbVar30;
            pbVar30 = pbVar30 + 1;
          }
          uVar4 = *(ushort *)(iVar35 + iVar21);
          if (bVar36) {
            uVar16 = uVar23 | uVar16 << 8;
          }
          uVar23 = (uint)uVar4 * (uVar18 >> 0xb);
          if (uVar23 < uVar16 || uVar23 - uVar16 == 0) {
            uVar16 = uVar16 - uVar23;
            iVar25 = iVar21 + 1;
            uVar23 = uVar18 - uVar23;
            sVar3 = -(uVar4 >> 5);
          }
          else {
            uVar18 = 0x800 - uVar4;
            sVar3 = (short)(uVar18 >> 5);
            iVar25 = iVar21;
          }
          bVar36 = uVar23 < 0x1000000;
          uVar10 = iVar25 * 2;
          if (bVar36) {
            uVar23 = uVar23 << 8;
          }
          *(ushort *)(iVar35 + iVar21) = uVar4 + sVar3;
          if (bVar36) {
            uVar18 = (uint)*pbVar30;
            pbVar30 = pbVar30 + 1;
          }
          uVar4 = *(ushort *)(iVar35 + uVar10);
          if (bVar36) {
            uVar16 = uVar18 | uVar16 << 8;
          }
          uVar18 = (uint)uVar4 * (uVar23 >> 0xb);
          if (uVar18 < uVar16 || uVar18 - uVar16 == 0) {
            sVar3 = -(uVar4 >> 5);
            uVar16 = uVar16 - uVar18;
            uVar18 = uVar23 - uVar18;
            uVar23 = uVar10 + 1;
          }
          else {
            sVar3 = (short)(0x800 - uVar4 >> 5);
            uVar23 = uVar10;
          }
          uVar19 = uVar23 - 0x40;
          *(ushort *)(iVar35 + uVar10) = uVar4 + sVar3;
          if (3 < uVar19) {
            uVar22 = (uVar19 >> 1) - 1;
            uVar10 = uVar19 & 1 | 2;
            if (uVar19 < 0xe) {
              uVar19 = uVar10 << (uVar22 & 0xff);
              iVar35 = 1;
              uVar10 = 1;
              iVar21 = uVar33 + ((0x2ef - uVar23) + uVar19) * 2;
              uVar23 = uVar33;
              do {
                bVar36 = uVar18 < 0x1000000;
                iVar25 = iVar35 * 2;
                if (bVar36) {
                  uVar18 = uVar18 << 8;
                }
                if (bVar36) {
                  uVar23 = (uint)*pbVar30;
                  pbVar30 = pbVar30 + 1;
                }
                uVar4 = *(ushort *)(iVar21 + iVar25);
                if (bVar36) {
                  uVar16 = uVar23 | uVar16 << 8;
                }
                uVar23 = (uint)uVar4 * (uVar18 >> 0xb);
                bVar36 = uVar23 - uVar16 == 0;
                uVar28 = uVar18 - uVar23;
                sVar3 = (short)(0x800 - uVar4 >> 5);
                if (uVar23 < uVar16 || bVar36) {
                  uVar19 = uVar19 | uVar10;
                  sVar3 = -(uVar4 >> 5);
                }
                uVar18 = uVar23;
                iVar35 = iVar25;
                if (uVar23 < uVar16 || bVar36) {
                  uVar16 = uVar16 - uVar23;
                  uVar18 = uVar28;
                  iVar35 = iVar25 + 1;
                }
                uVar22 = uVar22 - 1;
                *(ushort *)(iVar21 + iVar25) = uVar4 + sVar3;
                uVar10 = uVar10 << 1;
              } while (uVar22 != 0);
            }
            else {
              iVar35 = (uVar19 >> 1) - 5;
              do {
                bVar36 = uVar18 < 0x1000000;
                if (bVar36) {
                  uVar18 = uVar18 << 8;
                  uVar23 = (uint)*pbVar30;
                  pbVar30 = pbVar30 + 1;
                }
                uVar18 = uVar18 >> 1;
                if (bVar36) {
                  uVar16 = uVar23 | uVar16 << 8;
                }
                iVar35 = iVar35 + -1;
                uVar19 = (int)(uVar16 - uVar18) >> 0x1f;
                uVar23 = uVar19 & uVar18;
                uVar10 = uVar19 + uVar10 * 2 + 1;
                uVar16 = uVar23 + (uVar16 - uVar18);
              } while (iVar35 != 0);
              bVar36 = uVar18 < 0x1000000;
              pbVar7 = pbVar30;
              if (bVar36) {
                uVar18 = uVar18 << 8;
                pbVar7 = (byte *)(uint)*pbVar30;
              }
              uVar4 = *(ushort *)(uVar33 + 0x646);
              if (bVar36) {
                pbVar30 = pbVar30 + 1;
                uVar16 = (uint)pbVar7 | uVar16 * 0x100;
              }
              uVar19 = uVar10 * 0x10;
              uVar23 = (uint)uVar4 * (uVar18 >> 0xb);
              bVar37 = uVar16 <= uVar23;
              bVar36 = uVar23 - uVar16 != 0;
              if (bVar37 && bVar36) {
                sVar3 = (short)(0x800 - uVar4 >> 5);
              }
              else {
                sVar3 = -(uVar4 >> 5);
                uVar16 = uVar16 - uVar23;
                uVar23 = uVar18 - uVar23;
                uVar19 = uVar19 | 1;
              }
              *(ushort *)(uVar33 + 0x646) = uVar4 + sVar3;
              if (bVar37 && bVar36) {
                iVar35 = 4;
              }
              else {
                iVar35 = 6;
              }
              bVar36 = uVar23 < 0x1000000;
              if (bVar36) {
                uVar23 = uVar23 << 8;
              }
              psVar27 = (short *)(uVar20 + iVar35);
              uVar4 = *(ushort *)(uVar20 + iVar35);
              uVar18 = uVar20;
              if (bVar36) {
                uVar18 = (uint)*pbVar30;
                pbVar30 = pbVar30 + 1;
              }
              uVar10 = (uint)uVar4 * (uVar23 >> 0xb);
              if (bVar36) {
                uVar16 = uVar18 | uVar16 << 8;
              }
              bVar37 = uVar16 <= uVar10;
              bVar36 = uVar10 - uVar16 != 0;
              if (bVar37 && bVar36) {
                sVar3 = (short)(0x800 - uVar4 >> 5);
              }
              else {
                sVar3 = -(uVar4 >> 5);
                iVar35 = iVar35 + 1;
                uVar16 = uVar16 - uVar10;
                uVar10 = uVar23 - uVar10;
              }
              uVar23 = iVar35 * 2;
              if (!bVar37 || !bVar36) {
                uVar19 = uVar19 | 2;
              }
              bVar36 = uVar10 < 0x1000000;
              *psVar27 = uVar4 + sVar3;
              if (bVar36) {
                uVar10 = uVar10 << 8;
              }
              uVar4 = *(ushort *)(uVar20 + uVar23);
              uVar22 = (uint)uVar4;
              if (bVar36) {
                bVar2 = *pbVar30;
                pbVar30 = pbVar30 + 1;
                uVar16 = (uint)bVar2 | uVar16 << 8;
              }
              uVar28 = uVar22 * (uVar10 >> 0xb);
              bVar37 = uVar16 <= uVar28;
              bVar36 = uVar28 - uVar16 == 0;
              if (bVar37 && !bVar36) {
                uVar18 = uVar22 + (0x800 - uVar22 >> 5);
                uVar10 = uVar23;
              }
              else {
                uVar16 = uVar16 - uVar28;
                uVar4 = uVar4 - (uVar4 >> 5);
                uVar28 = uVar10 - uVar28;
                uVar10 = uVar23 + 1;
              }
              uVar32 = (ushort)uVar18;
              if (!bVar37 || bVar36) {
                uVar32 = uVar4;
              }
              if (!bVar37 || bVar36) {
                uVar19 = uVar19 | 4;
              }
              bVar36 = uVar28 < 0x1000000;
              if (bVar36) {
                uVar28 = uVar28 << 8;
              }
              *(ushort *)(uVar20 + uVar23) = uVar32;
              if (bVar36) {
                uVar23 = (uint)*pbVar30;
                pbVar30 = pbVar30 + 1;
              }
              uVar4 = *(ushort *)(uVar20 + uVar10 * 2);
              if (bVar36) {
                uVar16 = uVar23 | uVar16 << 8;
              }
              uVar18 = (uint)uVar4 * (uVar28 >> 0xb);
              if (uVar18 < uVar16 || uVar18 - uVar16 == 0) {
                uVar19 = uVar19 | 8;
                sVar3 = -(uVar4 >> 5);
                uVar16 = uVar16 - uVar18;
                uVar18 = uVar28 - uVar18;
              }
              else {
                sVar3 = (short)(0x800 - uVar4 >> 5);
              }
              *(ushort *)(uVar20 + uVar10 * 2) = uVar4 + sVar3;
              if (uVar19 == 0xffffffff) {
                local_74 = local_74 - 0xc;
                local_60 = local_60 + 0x112;
                break;
              }
            }
          }
          uVar23 = local_50;
          if (local_50 == 0) {
            uVar23 = local_6c;
          }
          if (uVar23 <= uVar19) {
            return 1;
          }
          if (local_74 < 0x13) {
            local_2c = local_3c;
            local_74 = 7;
            local_3c = local_40;
            local_40 = local_68;
            local_68 = uVar19 + 1;
          }
          else {
            local_2c = local_3c;
            local_3c = local_40;
            local_40 = local_68;
            local_74 = 10;
            local_68 = uVar19 + 1;
          }
        }
        local_60 = local_60 + 2;
        if (local_64 == uVar31) {
          return 1;
        }
        uVar23 = uVar5;
        if (local_68 <= uVar31) {
          uVar23 = 0;
        }
        uVar10 = local_64 - uVar31;
        if (local_60 < local_64 - uVar31) {
          uVar10 = local_60;
        }
        local_60 = local_60 - uVar10;
        uVar23 = (uVar31 - local_68) + uVar23;
        local_6c = local_6c + uVar10;
        if (uVar5 < uVar23 + uVar10) {
          puVar13 = (undefined *)(uVar34 + uVar31);
          do {
            puVar1 = (undefined *)(uVar34 + uVar23);
            uVar23 = uVar23 + 1;
            puVar14 = puVar13 + 1;
            *puVar13 = *puVar1;
            if (uVar5 == uVar23) {
              uVar23 = 0;
            }
            puVar13 = puVar14;
          } while (puVar14 != (undefined *)(uVar34 + uVar31) + uVar10);
          uVar31 = uVar31 + uVar10;
        }
        else {
          puVar11 = (undefined8 *)(uVar34 + uVar31);
          puVar29 = (undefined8 *)(uVar34 + uVar23);
          puVar8 = (undefined8 *)((int)puVar11 + uVar10);
          uVar19 = (int)puVar8 - (int)puVar11;
          iVar35 = uVar23 - uVar31;
          uVar31 = uVar10 + uVar31;
          if (uVar19 < 0x10 || puVar29 < puVar11 + 2 && puVar11 < puVar29 + 2) {
            do {
              puVar29 = (undefined8 *)((int)puVar11 + 1);
              *(undefined *)puVar11 = *(undefined *)((int)puVar11 + iVar35);
              puVar11 = puVar29;
            } while (puVar29 != puVar8);
          }
          else {
            uVar10 = 0;
            uVar23 = uVar19 & 0xfffffff0;
            puVar12 = puVar11;
            do {
              uVar10 = uVar10 + 1;
              uVar38 = *puVar29;
              uVar39 = puVar29[1];
              puVar29 = puVar29 + 2;
              *puVar12 = uVar38;
              puVar12[1] = uVar39;
              puVar12 = puVar12 + 2;
            } while (uVar10 < uVar19 >> 4);
            if (uVar19 != uVar23) {
              puVar29 = (undefined8 *)((int)puVar11 + uVar23 + 1);
              *(undefined *)((int)puVar11 + (uVar19 & 0xfffffff0)) =
                   *(undefined *)((int)puVar11 + iVar35 + uVar23);
              if (puVar8 != puVar29) {
                puVar12 = (undefined8 *)((int)puVar11 + uVar23 + 2);
                *(undefined *)((int)puVar11 + uVar23 + 1) = *(undefined *)((int)puVar29 + iVar35);
                if (puVar8 != puVar12) {
                  puVar29 = (undefined8 *)((int)puVar11 + uVar23 + 3);
                  *(undefined *)((int)puVar11 + uVar23 + 2) = *(undefined *)((int)puVar12 + iVar35);
                  if (puVar8 != puVar29) {
                    puVar12 = (undefined8 *)((int)puVar11 + uVar23 + 4);
                    *(undefined *)((int)puVar11 + uVar23 + 3) =
                         *(undefined *)((int)puVar29 + iVar35);
                    if (puVar8 != puVar12) {
                      puVar29 = (undefined8 *)((int)puVar11 + uVar23 + 5);
                      *(undefined *)((int)puVar11 + uVar23 + 4) =
                           *(undefined *)((int)puVar12 + iVar35);
                      if (puVar8 != puVar29) {
                        puVar12 = (undefined8 *)((int)puVar11 + uVar23 + 6);
                        *(undefined *)((int)puVar11 + uVar23 + 5) =
                             *(undefined *)((int)puVar29 + iVar35);
                        if (puVar8 != puVar12) {
                          puVar29 = (undefined8 *)((int)puVar11 + uVar23 + 7);
                          *(undefined *)((int)puVar11 + uVar23 + 6) =
                               *(undefined *)((int)puVar12 + iVar35);
                          if (puVar8 != puVar29) {
                            puVar12 = (undefined8 *)((int)puVar11 + uVar23 + 8);
                            *(undefined *)((int)puVar11 + uVar23 + 7) =
                                 *(undefined *)((int)puVar29 + iVar35);
                            if (puVar8 != puVar12) {
                              puVar29 = (undefined8 *)((int)puVar11 + uVar23 + 9);
                              *(undefined *)((int)puVar11 + uVar23 + 8) =
                                   *(undefined *)((int)puVar12 + iVar35);
                              if (puVar8 != puVar29) {
                                puVar12 = (undefined8 *)((int)puVar11 + uVar23 + 10);
                                *(undefined *)((int)puVar11 + uVar23 + 9) =
                                     *(undefined *)((int)puVar29 + iVar35);
                                if (puVar8 != puVar12) {
                                  puVar29 = (undefined8 *)((int)puVar11 + uVar23 + 0xb);
                                  *(undefined *)((int)puVar11 + uVar23 + 10) =
                                       *(undefined *)((int)puVar12 + iVar35);
                                  if (puVar8 != puVar29) {
                                    puVar12 = (undefined8 *)((int)puVar11 + uVar23 + 0xc);
                                    *(undefined *)((int)puVar11 + uVar23 + 0xb) =
                                         *(undefined *)((int)puVar29 + iVar35);
                                    if (puVar8 != puVar12) {
                                      puVar29 = (undefined8 *)((int)puVar11 + uVar23 + 0xd);
                                      *(undefined *)((int)puVar11 + uVar23 + 0xc) =
                                           *(undefined *)((int)puVar12 + iVar35);
                                      if (puVar8 != puVar29) {
                                        puVar12 = (undefined8 *)((int)puVar11 + uVar23 + 0xe);
                                        *(undefined *)((int)puVar11 + uVar23 + 0xd) =
                                             *(undefined *)((int)puVar29 + iVar35);
                                        if (puVar8 != puVar12) {
                                          *(undefined *)((int)puVar11 + uVar23 + 0xe) =
                                               *(undefined *)((int)puVar12 + iVar35);
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        *(ushort *)(uVar33 + uVar28) = uVar4 + (short)(0x800 - uVar9 >> 5);
        uVar23 = uVar33;
        iVar35 = uVar33 + 0xe6c;
        if ((local_6c | local_50) != 0) {
          if (uVar31 == 0) {
            uVar28 = uVar5;
          }
          if (uVar31 != 0) {
            uVar28 = uVar31;
          }
          iVar35 = uVar33 + 0xe6c +
                   (((local_6c & (1 << (uVar17 & 0xff)) - 1U) << (uVar26 & 0xff)) +
                   ((int)(uint)*(byte *)(uVar34 + (uVar28 - 1)) >> (8 - uVar26 & 0xff))) * 0x600;
          uVar23 = uVar34;
        }
        if (local_74 < 7) {
          uVar10 = local_74;
          if (2 < local_74) {
            uVar10 = 3;
          }
          local_74 = local_74 - uVar10;
          uVar10 = 1;
          do {
            bVar36 = uVar18 < 0x1000000;
            uVar10 = uVar10 * 2;
            if (bVar36) {
              uVar18 = uVar18 << 8;
            }
            if (bVar36) {
              uVar23 = (uint)*pbVar30;
              pbVar30 = pbVar30 + 1;
            }
            uVar4 = *(ushort *)(iVar35 + uVar10);
            psVar27 = (short *)(iVar35 + uVar10);
            if (bVar36) {
              uVar16 = uVar23 | uVar16 << 8;
            }
            uVar23 = (uint)uVar4 * (uVar18 >> 0xb);
            bVar36 = uVar23 - uVar16 == 0;
            uVar19 = uVar18 - uVar23;
            sVar3 = (short)(0x800 - uVar4 >> 5);
            if (uVar23 < uVar16 || bVar36) {
              sVar3 = -(uVar4 >> 5);
            }
            uVar18 = uVar23;
            if (uVar23 < uVar16 || bVar36) {
              uVar16 = uVar16 - uVar23;
              uVar18 = uVar19;
              uVar10 = uVar10 + 1;
            }
            *psVar27 = uVar4 + sVar3;
          } while (uVar10 < 0x100);
        }
        else {
          uVar23 = uVar5;
          if (local_68 <= uVar31) {
            uVar23 = 0;
          }
          if (local_74 < 10) {
            iVar21 = 3;
          }
          else {
            iVar21 = 6;
          }
          uVar23 = (uint)*(byte *)(param_1[5] + (uVar31 - local_68) + uVar23);
          local_74 = local_74 - iVar21;
          uVar10 = 1;
          uVar22 = 0x100;
          uVar19 = local_74;
          do {
            uVar23 = uVar23 << 1;
            uVar28 = uVar22 & uVar23;
            bVar36 = uVar18 < 0x1000000;
            if (bVar36) {
              uVar18 = uVar18 << 8;
              uVar19 = (uint)*pbVar30;
            }
            iVar21 = (uVar10 + uVar22 + uVar28) * 2;
            if (bVar36) {
              pbVar30 = pbVar30 + 1;
            }
            if (bVar36) {
              uVar16 = uVar19 | uVar16 << 8;
            }
            uVar4 = *(ushort *)(iVar35 + iVar21);
            uVar19 = (uint)uVar4 * (uVar18 >> 0xb);
            sVar3 = -(uVar4 >> 5);
            bVar36 = uVar19 - uVar16 != 0;
            uVar18 = uVar18 - uVar19;
            if (uVar16 <= uVar19 && bVar36) {
              uVar10 = uVar10 << 1;
              sVar3 = (short)(0x800 - uVar4 >> 5);
            }
            else {
              uVar10 = uVar10 * 2 + 1;
            }
            if (uVar16 <= uVar19 && bVar36) {
              uVar28 = ~uVar28;
              uVar18 = uVar19;
            }
            else {
              uVar16 = uVar16 - uVar19;
            }
            uVar22 = uVar22 & uVar28;
            *(ushort *)(iVar35 + iVar21) = uVar4 + sVar3;
          } while (uVar10 < 0x100);
        }
        *(char *)(uVar34 + uVar31) = (char)uVar10;
        uVar31 = uVar31 + 1;
        local_6c = local_6c + 1;
      }
LAB_08099fc8:
      bVar37 = pbVar30 <= param_3;
      bVar36 = param_3 == pbVar30;
      if (bVar37 && !bVar36) {
        bVar37 = uVar31 <= local_64;
        bVar36 = local_64 == uVar31;
      }
    } while (bVar37 && !bVar36);
    if (uVar18 < 0x1000000) {
      uVar18 = uVar18 << 8;
      bVar2 = *pbVar30;
      pbVar30 = pbVar30 + 1;
      uVar16 = (uint)bVar2 | uVar16 << 8;
    }
    uVar5 = param_1[3];
    param_1[7] = uVar18;
    param_1[0x12] = local_60;
    param_1[8] = uVar16;
    param_1[0xb] = local_6c;
    param_1[0x11] = local_2c;
    if (uVar5 <= local_6c) {
      param_1[0xc] = uVar5;
    }
    param_1[0xf] = local_40;
    param_1[6] = (uint)pbVar30;
    if (0x110 < local_60 - 1) {
      local_40 = local_60;
    }
    param_1[9] = uVar31;
    param_1[0xe] = local_68;
    param_1[0x10] = local_3c;
    param_1[0xd] = local_74;
    if (local_60 - 1 < 0x111) {
      uVar18 = param_2 - uVar31;
      if (local_60 <= param_2 - uVar31) {
        uVar18 = local_60;
      }
      uVar16 = param_1[5];
      uVar15 = param_1[10];
      if ((param_1[0xc] == 0) && (uVar5 - local_6c <= uVar18)) {
        param_1[0xc] = uVar5;
      }
      param_1[0xb] = uVar18 + local_6c;
      local_40 = local_60 - uVar18;
      param_1[0x12] = local_40;
      if (uVar18 != 0) {
        uVar18 = uVar18 + uVar31;
        do {
          uVar5 = uVar15;
          if (local_68 <= uVar31) {
            uVar5 = 0;
          }
          *(undefined *)(uVar16 + uVar31) = *(undefined *)(uVar16 + uVar5 + (uVar31 - local_68));
          uVar31 = uVar31 + 1;
        } while (uVar31 != uVar18);
        local_40 = param_1[0x12];
      }
      param_1[9] = uVar31;
    }
    if (((param_2 <= uVar31) || (pbVar30 = (byte *)param_1[6], param_3 <= pbVar30)) ||
       (0x111 < local_40)) {
      if (0x112 < local_40) {
        param_1[0x12] = 0x112;
      }
      return 0;
    }
    local_50 = param_1[0xc];
  } while (local_50 != 0);
LAB_0809a13c:
  local_6c = param_1[0xb];
  local_64 = param_2;
  if (param_1[3] - local_6c < param_2 - uVar31) {
    local_64 = uVar31 + (param_1[3] - local_6c);
  }
  goto LAB_08099db8;
}


