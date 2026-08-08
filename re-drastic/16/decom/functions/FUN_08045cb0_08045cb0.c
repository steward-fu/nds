/*
 * Ghidra decompilation
 *
 * Function : FUN_08045cb0
 * Address  : 08045cb0
 * Program  : drastic16
 */


void FUN_08045cb0(undefined8 *param_1)

{
  int iVar1;
  undefined auVar2 [16];
  ushort uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ushort *puVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined8 *puVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  int local_74;
  int local_54;
  
  iVar11 = *(int *)((int)param_1 + 0x9004);
  iVar18 = *(int *)(param_1 + 0x1200);
  iVar16 = iVar18 + 0x103c40;
  iVar27 = iVar18 + 0x13fc70;
  uVar12 = *(byte *)(iVar11 + 0x9a85) ^ 1;
  iVar7 = uVar12 * 0xa004;
  uVar20 = (uint)*(byte *)((int)param_1 + 0x90ab);
  iVar23 = iVar18 + 0x133c40;
  iVar8 = iVar11 + iVar7;
  iVar4 = __aeabi_idiv(0xc,uVar20);
  iVar24 = iVar11 + uVar12 * 0x18004 + 0x9a98;
  if (iVar4 != 0) {
    puVar25 = param_1 + 0x800;
    local_54 = 0;
    iVar22 = iVar11;
    iVar17 = iVar16;
    while( true ) {
      iVar21 = local_54 * uVar20 + (uint)*(byte *)((int)param_1 + 0x90aa);
      iVar1 = iVar21 * 0x10;
      if ((*(uint *)(iVar22 + 0x9a50) & 0x4000) == 0) {
        FUN_08092058(param_1,*(undefined4 *)(iVar17 + 0x7cb80),0x1000);
        FUN_08092058(puVar25,*(undefined4 *)(iVar17 + 0x7cb84),0x1000);
      }
      else {
        uVar28 = *(uint *)(iVar18 + 0x1130);
        uVar20 = *(uint *)(iVar18 + 0x1134);
        uVar12 = uVar28;
        if (uVar28 != 0) {
          uVar12 = 1;
        }
        uVar26 = *(ushort *)(iVar22 + 0x9a70) & 0xff;
        uVar9 = uVar20;
        if (uVar20 != 0) {
          uVar9 = 1;
        }
        uVar13 = iVar1 + (uint)(*(ushort *)(iVar22 + 0x9a70) >> 8);
        if ((uVar9 & uVar12) == 0) {
          if (uVar12 == 0) {
            if (uVar9 == 0) {
              auVar2 = SIMDExpandImmediate(0,6,0x80);
              uVar12 = *(uint *)(iVar17 + 0x7cb84);
              puVar6 = puVar25;
              puVar15 = param_1;
              do {
                if (puVar15 < puVar6 + 2 && puVar6 < puVar15 + 2) {
                  iVar18 = 0;
                  do {
                    *(undefined4 *)((int)puVar15 + iVar18) = 0x80000000;
                    *(uint *)((int)puVar6 + iVar18) = uVar12 & 0x3f000000 | 0xfffe00;
                    iVar18 = iVar18 + 4;
                  } while (iVar18 != 0x400);
                }
                else {
                  puVar5 = puVar15;
                  puVar10 = puVar6;
                  do {
                    *puVar5 = auVar2._0_8_;
                    puVar5[1] = auVar2._8_8_;
                    puVar5 = puVar5 + 2;
                    *puVar10 = 0;
                    puVar10[1] = 0;
                    puVar10 = puVar10 + 2;
                  } while (puVar15 + 0x880 != puVar10);
                }
                puVar15 = puVar15 + 0x80;
                puVar6 = puVar6 + 0x80;
              } while (puVar15 != puVar25);
            }
            else {
              uVar12 = *(uint *)(iVar17 + 0x7cb84);
              puVar6 = puVar25;
              puVar15 = param_1;
              do {
                iVar18 = 0;
                uVar28 = uVar26;
                do {
                  uVar9 = uVar28 & 0xff;
                  uVar28 = uVar28 + 1;
                  uVar3 = *(ushort *)(uVar20 + (uVar13 & 0xff) * 0x200 + uVar9 * 2);
                  *(uint *)((int)puVar15 + iVar18) = (uint)(uVar3 >> 0xf) << 0x1f;
                  *(uint *)((int)puVar6 + iVar18) = uVar12 & 0x3f000000 | (uVar3 & 0x7fff) << 9;
                  iVar18 = iVar18 + 4;
                } while (uVar28 != uVar26 + 0x100);
                puVar6 = puVar6 + 0x80;
                puVar15 = puVar15 + 0x80;
                uVar13 = uVar13 + 1;
              } while (puVar6 != param_1 + 0x1000);
            }
          }
          else {
            uVar12 = *(uint *)(iVar17 + 0x7cb84);
            puVar6 = puVar25;
            puVar15 = param_1;
            do {
              iVar18 = 0;
              uVar20 = uVar26;
              do {
                uVar9 = uVar20 & 0xff;
                uVar20 = uVar20 + 1;
                uVar9 = FUN_08055b14(*(undefined2 *)(uVar28 + (uVar13 & 0xff) * 0x200 + uVar9 * 2));
                *(uint *)((int)puVar15 + iVar18) = uVar9 | 0x80000000;
                *(uint *)((int)puVar6 + iVar18) = uVar12 & 0x3f000000 | 0xfffe00;
                iVar18 = iVar18 + 4;
              } while (uVar20 != uVar26 + 0x100);
              puVar6 = puVar6 + 0x80;
              puVar15 = puVar15 + 0x80;
              uVar13 = uVar13 + 1;
            } while (puVar6 != param_1 + 0x1000);
          }
        }
        else {
          uVar12 = *(uint *)(iVar17 + 0x7cb84);
          local_74 = 0;
          puVar6 = param_1;
          puVar15 = puVar25;
          do {
            iVar22 = 0;
            iVar18 = (local_74 + uVar13 & 0xff) * 0x200;
            uVar9 = uVar26;
            do {
              uVar14 = uVar9 & 0xff;
              uVar9 = uVar9 + 1;
              iVar17 = uVar14 * 2;
              uVar14 = FUN_08055b14(*(undefined2 *)(uVar28 + iVar18 + iVar17));
              uVar3 = *(ushort *)(uVar20 + iVar18 + iVar17);
              *(uint *)((int)puVar6 + iVar22) = uVar14 | (uint)(uVar3 >> 0xf) << 0x1f;
              *(uint *)((int)puVar15 + iVar22) = uVar12 & 0x3f000000 | (uVar3 & 0x7fff) << 9;
              iVar22 = iVar22 + 4;
            } while (uVar9 != uVar26 + 0x100);
            puVar6 = puVar6 + 0x80;
            puVar15 = puVar15 + 0x80;
            local_74 = local_74 + 1;
          } while (local_74 != 0x10);
        }
      }
      uVar12 = 0;
      iVar22 = iVar23 + iVar21 * 0x1004;
      *(undefined4 *)(param_1 + 0x1201) = 0xffffffff;
      iVar18 = *(int *)(iVar22 + 0x1000);
      *(undefined4 *)((int)param_1 + 0x900c) = 0;
      if (iVar18 != 0) {
        puVar19 = (ushort *)(iVar22 + -2);
        do {
          puVar19 = puVar19 + 1;
          uVar12 = uVar12 + 1;
          FUN_08043c64(param_1,iVar11 + iVar7 + 0x39aa0 + (uint)*puVar19 * 0x14,iVar24,iVar1,
                       iVar1 + 0x10);
        } while (uVar12 < *(uint *)(iVar22 + 0x1000));
      }
      if (*(int *)(iVar8 + 0x57aa8) != 0) {
        puVar6 = param_1 + 0x1000;
        do {
          puVar15 = puVar6 + 0x20;
          FUN_08092040(puVar6,0xff,0x100);
          puVar6 = puVar15;
        } while (puVar15 != param_1 + 0x1200);
        iVar18 = iVar27 + iVar21 * 0x1004;
        if (*(int *)(iVar18 + 0x1000) != 0) {
          puVar19 = (ushort *)(iVar18 + -2);
          uVar12 = 0;
          do {
            puVar19 = puVar19 + 1;
            uVar12 = uVar12 + 1;
            FUN_08043c64(param_1,iVar8 + 0x4daa8 + (uint)*puVar19 * 0x14,iVar24,iVar1,iVar1 + 0x10);
          } while (uVar12 < *(uint *)(iVar18 + 0x1000));
        }
      }
      uVar12 = ((uint)(*(int *)(iVar11 + 0x9a50) << 0x1a) >> 0x1f) << 2;
      if (*(char *)((int)param_1 + 0x90ac) != '\0') {
        uVar12 = 0;
      }
      iVar18 = iVar16 + iVar21 * 0x4000;
      switch((uint)(*(int *)(iVar11 + 0x9a50) << 0x18) >> 0x1e | uVar12) {
      case 2:
        FUN_080452a0(param_1);
        break;
      case 3:
        FUN_080457a8(param_1);
        break;
      case 4:
      case 5:
        FUN_08045024(param_1,iVar18,iVar21);
        break;
      case 6:
        FUN_08045384(param_1,iVar18,iVar21);
        break;
      case 7:
        FUN_0804588c(param_1,iVar18,iVar21);
        break;
      default:
        FUN_08092a74(iVar18,param_1);
      }
      local_54 = local_54 + 1;
      if (iVar4 == local_54) break;
      iVar18 = *(int *)(param_1 + 0x1200);
      uVar20 = (uint)*(byte *)((int)param_1 + 0x90ab);
      iVar22 = *(int *)((int)param_1 + 0x9004);
      iVar17 = iVar18 + 0x103c40;
    }
  }
  return;
}


