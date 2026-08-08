/*
 * Ghidra decompilation
 *
 * Function : FUN_08035564
 * Address  : 08035564
 * Program  : drastic16
 */


void FUN_08035564(int param_1,uint *param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,uint param_9,int param_10,uint param_11,uint param_12,
                 uint param_13)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined (*pauVar16) [16];
  undefined (*pauVar17) [16];
  uint uVar18;
  int iVar19;
  int iVar20;
  undefined (*pauVar21) [16];
  undefined *puVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  undefined (*pauVar26) [16];
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined (*pauVar30) [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  int *local_68;
  int local_50;
  int local_30 [3];
  
  param_5 = param_5 + param_6 * 0x100;
  uVar18 = param_10 * param_9;
  iVar23 = param_1 + (param_5 + 0x1000) * 4;
  iVar5 = *(int *)(param_1 + 0x9004);
  uVar11 = uVar18 + 0x16 & 0xfffffff0;
  iVar24 = param_1 + param_5 * 4;
  iVar9 = uVar11 * 4;
  iVar19 = param_4 + iVar9;
  uVar25 = *param_2;
  iVar12 = iVar19 + uVar11 * 9;
  iVar20 = iVar12 + uVar11;
  if ((param_13 & 1) == 0) {
    FUN_08092718(param_4,iVar23,param_9,param_10);
  }
  else {
    FUN_08092758(param_4,iVar19,iVar20,iVar23,iVar24,param_1 + param_5 + 0x8000,param_9,param_10);
  }
  if ((*param_2 & 0x4000) == 0) {
    FUN_08091690(iVar12,param_11,param_4,uVar18,local_30);
  }
  else {
    FUN_08091540(iVar12,param_11,param_4,uVar18,local_30);
  }
  local_68 = local_30;
  if (local_30[0] == 0) {
    return;
  }
  uVar13 = *(byte *)(param_3 + 0x2d) - 1 & 0xff;
  uVar29 = (uint)*(ushort *)(param_3 + 0x24);
  pauVar17 = (undefined (*) [16])(iVar20 + uVar11 * -6);
  if (uVar13 < 6) {
    uVar13 = 1 << uVar13;
    if ((uVar13 & 0x29) == 0) {
      if ((uVar13 & 6) == 0) goto LAB_080356b0;
      FUN_08035488(pauVar17,*(int *)(param_3 + 0xc) + uVar29 * param_8 + param_7,
                   *(undefined4 *)(param_3 + 0x10),param_9,param_10,uVar29);
    }
    else {
      FUN_08035488(pauVar17,*(int *)(param_3 + 0xc) + uVar29 * param_8 + param_7,
                   *(undefined4 *)(param_3 + 0x10),param_9,param_10,uVar29);
    }
  }
  else {
LAB_080356b0:
    pauVar26 = (undefined (*) [16])(*(int *)(param_3 + 0xc) + (uVar29 * param_8 + param_7) * 4);
    if (param_10 != 0) {
      uVar27 = param_9 >> 2;
      uVar13 = param_9 & 0xfffffffc;
      iVar8 = 0;
      pauVar21 = pauVar17;
      do {
        if (param_9 != 0) {
          uVar14 = (uint)(pauVar21 + 1 <= pauVar26 || pauVar26 + 1 <= pauVar21);
          if (param_9 < 9) {
            uVar14 = 0;
          }
          if (uVar14 == 0) {
            do {
              *(undefined4 *)(*pauVar21 + uVar14) = *(undefined4 *)(*pauVar26 + uVar14);
              uVar14 = uVar14 + 4;
            } while (uVar14 != param_9 * 4);
          }
          else {
            if (uVar13 == 0) {
              *(undefined4 *)*pauVar21 = *(undefined4 *)*pauVar26;
              uVar14 = 1;
              pauVar30 = pauVar21;
            }
            else {
              uVar14 = 0;
              pauVar30 = pauVar26;
              pauVar16 = pauVar21;
              do {
                uVar14 = uVar14 + 1;
                auVar1 = *pauVar30;
                pauVar30 = pauVar30 + 1;
                *(longlong *)*pauVar16 = auVar1._0_8_;
                *(longlong *)(*pauVar16 + 8) = auVar1._8_8_;
                pauVar16 = pauVar16 + 1;
              } while (uVar14 < uVar27);
              pauVar30 = pauVar21 + uVar27;
              if ((param_9 == uVar13) ||
                 (*(undefined4 *)pauVar21[uVar27] = *(undefined4 *)pauVar26[uVar27],
                 uVar14 = uVar13 + 1, param_9 <= uVar13 + 1)) goto LAB_08035774;
            }
            *(undefined4 *)(*pauVar30 + 4) = *(undefined4 *)(*pauVar26 + uVar14 * 4);
            if (uVar14 + 1 < param_9) {
              *(undefined4 *)(*pauVar30 + 8) = *(undefined4 *)(*pauVar26 + uVar14 * 4 + 4);
            }
          }
LAB_08035774:
          pauVar21 = (undefined (*) [16])(*pauVar21 + param_9 * 4);
        }
        iVar8 = iVar8 + 1;
        pauVar26 = (undefined (*) [16])(*pauVar26 + uVar29 * 4);
      } while (iVar8 != param_10);
    }
  }
  FUN_08091730(iVar12,pauVar17,*(undefined *)(iVar5 + 0x9a81),uVar18,local_68);
  if (local_30[0] == 0) {
    return;
  }
  if (param_12 != 0x3f3f3f) {
    uVar27 = param_12 & 0x3f;
    uVar13 = (param_12 << 0x12) >> 0x1a;
    uVar29 = (param_12 << 10) >> 0x1a;
    if (uVar18 != 0) {
      uVar14 = param_4 * 0x20000000 >> 0x1f & 3;
      if (uVar18 <= uVar14) {
        uVar14 = uVar18;
      }
      uVar6 = uVar18;
      if ((uVar18 < 5) || (uVar6 = uVar14, uVar14 != 0)) {
        uVar14 = uVar6;
        uVar28 = *(uint *)*pauVar17;
        uVar6 = (uVar28 << 0x10) >> 0x18;
        uVar15 = (uVar28 << 8) >> 0x18;
        pauVar26 = (undefined (*) [16])(*pauVar17 + 4);
        *(uint *)*pauVar17 =
             uVar28 & 0xff000000 | (uVar28 & 0xff) * uVar27 + uVar27 + (uVar28 & 0xff) >> 6 |
             (uVar6 * uVar13 + uVar13 + uVar6 >> 6) << 8 |
             (uVar15 * uVar29 + uVar29 + uVar15 >> 6) << 0x10;
        if (uVar14 < 2) {
          local_50 = 1;
        }
        else {
          uVar28 = *(uint *)(*pauVar17 + 4);
          pauVar26 = (undefined (*) [16])(*pauVar17 + 8);
          uVar6 = (uVar28 << 0x10) >> 0x18;
          uVar15 = (uVar28 << 8) >> 0x18;
          *(uint *)(*pauVar17 + 4) =
               uVar28 & 0xff000000 | (uVar28 & 0xff) * uVar27 + uVar27 + (uVar28 & 0xff) >> 6 |
               (uVar6 * uVar13 + uVar13 + uVar6 >> 6) << 8 |
               (uVar15 * uVar29 + uVar29 + uVar15 >> 6) << 0x10;
          if (uVar14 < 3) {
            local_50 = 2;
          }
          else {
            uVar28 = *(uint *)(*pauVar17 + 8);
            pauVar26 = (undefined (*) [16])(*pauVar17 + 0xc);
            uVar6 = (uVar28 << 0x10) >> 0x18;
            uVar15 = (uVar28 << 8) >> 0x18;
            *(uint *)(*pauVar17 + 8) =
                 uVar28 & 0xff000000 | (uVar28 & 0xff) * uVar27 + uVar27 + (uVar28 & 0xff) >> 6 |
                 (uVar6 * uVar13 + uVar13 + uVar6 >> 6) << 8 |
                 (uVar15 * uVar29 + uVar29 + uVar15 >> 6) << 0x10;
            if (uVar14 < 4) {
              local_50 = 3;
            }
            else {
              uVar28 = *(uint *)(*pauVar17 + 0xc);
              pauVar26 = pauVar17 + 1;
              uVar6 = (uVar28 << 0x10) >> 0x18;
              uVar15 = (uVar28 << 8) >> 0x18;
              local_50 = 4;
              *(uint *)(*pauVar17 + 0xc) =
                   uVar28 & 0xff000000 | (uVar28 & 0xff) * uVar27 + uVar27 + (uVar28 & 0xff) >> 6 |
                   (uVar6 * uVar13 + uVar13 + uVar6 >> 6) << 8 |
                   (uVar15 * uVar29 + uVar29 + uVar15 >> 6) << 0x10;
            }
          }
        }
        if (uVar18 == uVar14) goto LAB_08035bf0;
      }
      else {
        local_50 = 0;
        pauVar26 = pauVar17;
      }
      uVar15 = uVar18 - uVar14;
      uVar6 = uVar15 & 0xfffffffc;
      if (uVar6 != 0) {
        pauVar30 = (undefined (*) [16])(*pauVar17 + uVar14 * 4);
        auVar1 = SIMDExpandImmediate(0,0,0xff);
        auVar2._4_4_ = uVar13;
        auVar2._0_4_ = uVar13;
        auVar2._8_8_ = 0;
        auVar3._4_4_ = uVar29;
        auVar3._0_4_ = uVar29;
        auVar3._8_8_ = 0;
        uVar14 = 0;
        auVar35._8_8_ = 0;
        auVar35._0_8_ = CONCAT44(param_12,param_12) & 0x3f0000003f;
        pauVar21 = pauVar30;
        do {
          auVar34 = *pauVar21;
          pauVar21 = pauVar21 + 1;
          auVar37 = VectorShiftRight(auVar34,8);
          uVar14 = uVar14 + 1;
          auVar36 = VectorShiftRight(auVar34,0x10);
          auVar33 = VectorMultiplyAccumulate(auVar37 & auVar1,auVar2 & auVar2 << 0x40,4,0);
          auVar32 = VectorMultiplyAccumulate(auVar36 & auVar1,auVar3 & auVar3 << 0x40,4,0);
          auVar31 = VectorMultiplyAccumulate(auVar34 & auVar1,auVar35 & auVar35 << 0x40,4,0);
          auVar37 = VectorAdd(auVar33,auVar37 & auVar1,4);
          auVar33 = VectorShiftRight(auVar34,0x18);
          auVar32 = VectorAdd(auVar32,auVar36 & auVar1,4);
          auVar36 = VectorAdd(auVar31,auVar34 & auVar1,4);
          auVar31 = VectorShiftRight(auVar37,6);
          auVar34 = VectorShiftRight(auVar32,6);
          auVar36 = VectorShiftRight(auVar36,6);
          auVar32 = VectorShiftLeft(auVar33,0x18,0x20,0);
          auVar31 = VectorShiftLeft(auVar31,8,0x20,0);
          auVar34 = VectorShiftLeft(auVar34,0x10,0x20,0);
          auVar34 = auVar36 | auVar32 | auVar31 | auVar34;
          *(longlong *)*pauVar30 = auVar34._0_8_;
          *(longlong *)(*pauVar30 + 8) = auVar34._8_8_;
          pauVar30 = pauVar30 + 1;
        } while (uVar14 < uVar15 >> 2);
        pauVar26 = (undefined (*) [16])(*pauVar26 + uVar6 * 4);
        local_50 = local_50 + uVar6;
        if (uVar15 == uVar6) goto LAB_08035bf0;
      }
      uVar15 = *(uint *)*pauVar26;
      uVar14 = (uVar15 << 0x10) >> 0x18;
      uVar6 = (uVar15 << 8) >> 0x18;
      *(uint *)*pauVar26 =
           uVar15 & 0xff000000 | (uVar15 & 0xff) * uVar27 + uVar27 + (uVar15 & 0xff) >> 6 |
           (uVar14 * uVar13 + uVar13 + uVar14 >> 6) << 8 |
           (uVar6 * uVar29 + uVar29 + uVar6 >> 6) << 0x10;
      if (local_50 + 1U < uVar18) {
        uVar15 = *(uint *)(*pauVar26 + 4);
        uVar14 = (uVar15 << 0x10) >> 0x18;
        uVar6 = (uVar15 << 8) >> 0x18;
        *(uint *)(*pauVar26 + 4) =
             uVar15 & 0xff000000 | (uVar15 & 0xff) * uVar27 + uVar27 + (uVar15 & 0xff) >> 6 |
             (uVar14 * uVar13 + uVar13 + uVar14 >> 6) << 8 |
             (uVar6 * uVar29 + uVar29 + uVar6 >> 6) << 0x10;
        if (local_50 + 2U < uVar18) {
          uVar15 = *(uint *)(*pauVar26 + 8);
          uVar6 = (uVar15 << 8) >> 0x18;
          uVar14 = (uVar15 << 0x10) >> 0x18;
          *(uint *)(*pauVar26 + 8) =
               uVar15 & 0xff000000 | (uVar15 & 0xff) * uVar27 + uVar27 + (uVar15 & 0xff) >> 6 |
               (uVar14 * uVar13 + uVar13 + uVar14 >> 6) << 8 |
               (uVar6 * uVar29 + uVar29 + uVar6 >> 6) << 0x10;
        }
      }
    }
  }
LAB_08035bf0:
  uVar13 = (uVar25 << 2) >> 0x1a;
  param_11 = uVar13 << 0x18 | ((*param_2 << 0x10) >> 0x1f) << 0x1e | param_11;
  if ((param_13 & 1) == 0) {
    if ((*param_2 & 0x8000) != 0) {
      *(undefined4 *)(param_1 + 0x900c) = 1;
      FUN_08093238(pauVar17,uVar18);
    }
    FUN_08092828(iVar24,iVar23,param_9,param_10,pauVar17,param_11,iVar12);
    return;
  }
  uVar25 = (uVar25 << 0xb) >> 0x1b;
  uVar11 = uVar11 * -4;
  puVar22 = *pauVar17 + iVar9;
  if ((*(char *)(param_3 + 0x2d) == '\x01') || (*(char *)(param_3 + 0x2d) == '\x06')) {
    if (uVar18 != 0) {
      uVar29 = param_4 * 0x20000000 >> 0x1f & 3;
      if (uVar18 <= uVar29) {
        uVar29 = uVar18;
      }
      uVar27 = uVar18;
      if ((uVar18 < 5) || (uVar27 = uVar29, uVar29 != 0)) {
        uVar29 = uVar27;
        uVar27 = (*(uint *)*pauVar17 << 3) >> 0x1b;
        if (uVar29 < 2) {
          iVar9 = 1;
        }
        pauVar26 = (undefined (*) [16])(*pauVar17 + 4);
        *(uint *)*pauVar17 =
             *(uint *)*pauVar17 & 0xffffff | (uVar27 * uVar25 + uVar25 + uVar27 >> 5) << 0x18;
        if (1 < uVar29) {
          pauVar26 = (undefined (*) [16])(*pauVar17 + 8);
          uVar27 = (*(uint *)(*pauVar17 + 4) << 3) >> 0x1b;
          if (uVar29 < 3) {
            iVar9 = 2;
          }
          *(uint *)(*pauVar17 + 4) =
               *(uint *)(*pauVar17 + 4) & 0xffffff |
               (uVar27 * uVar25 + uVar25 + uVar27 >> 5) << 0x18;
          if (2 < uVar29) {
            pauVar26 = (undefined (*) [16])(*pauVar17 + 0xc);
            uVar27 = (*(uint *)(*pauVar17 + 8) << 3) >> 0x1b;
            if (uVar29 < 4) {
              iVar9 = 3;
            }
            *(uint *)(*pauVar17 + 8) =
                 *(uint *)(*pauVar17 + 8) & 0xffffff |
                 (uVar27 * uVar25 + uVar25 + uVar27 >> 5) << 0x18;
            if (3 < uVar29) {
              pauVar26 = pauVar17 + 1;
              iVar9 = 4;
              uVar27 = (*(uint *)(*pauVar17 + 0xc) << 3) >> 0x1b;
              *(uint *)(*pauVar17 + 0xc) =
                   *(uint *)(*pauVar17 + 0xc) & 0xffffff |
                   (uVar27 * uVar25 + uVar25 + uVar27 >> 5) << 0x18;
            }
          }
        }
        if (uVar18 == uVar29) goto LAB_08035e54;
      }
      else {
        iVar9 = 0;
        pauVar26 = pauVar17;
      }
      uVar14 = uVar18 - uVar29;
      uVar27 = uVar14 & 0xfffffffc;
      if (uVar27 != 0) {
        auVar1 = SIMDExpandImmediate(0,0,0x1f);
        auVar34._4_4_ = uVar25;
        auVar34._0_4_ = uVar25;
        auVar34._8_8_ = 0;
        pauVar30 = (undefined (*) [16])(puVar22 + uVar29 * 4 + uVar11);
        uVar11 = 0;
        pauVar21 = pauVar30;
        do {
          auVar3 = *pauVar21;
          pauVar21 = pauVar21 + 1;
          auVar35 = VectorShiftRight(auVar3,0x18);
          uVar11 = uVar11 + 1;
          auVar2 = SIMDExpandImmediate(1,7,0xff);
          auVar31 = VectorMultiplyAccumulate(auVar35 & auVar1,auVar34 & auVar34 << 0x40,4,0);
          auVar35 = VectorAdd(auVar31,auVar35 & auVar1,4);
          auVar35 = VectorShiftRight(auVar35,5);
          auVar35 = VectorShiftLeft(auVar35,0x18,0x20,0);
          auVar35 = auVar35 | auVar3 & ~auVar2;
          *(longlong *)*pauVar30 = auVar35._0_8_;
          *(longlong *)(*pauVar30 + 8) = auVar35._8_8_;
          pauVar30 = pauVar30 + 1;
        } while (uVar11 < uVar14 >> 2);
        pauVar26 = (undefined (*) [16])(*pauVar26 + uVar27 * 4);
        iVar9 = iVar9 + uVar27;
        if (uVar27 == uVar14) goto LAB_08035e54;
      }
      uVar11 = (*(uint *)*pauVar26 << 3) >> 0x1b;
      *(uint *)*pauVar26 =
           *(uint *)*pauVar26 & 0xffffff | (uVar11 * uVar25 + uVar25 + uVar11 >> 5) << 0x18;
      if ((iVar9 + 1U < uVar18) &&
         (uVar11 = (*(uint *)(*pauVar26 + 4) << 3) >> 0x1b,
         *(uint *)(*pauVar26 + 4) =
              *(uint *)(*pauVar26 + 4) & 0xffffff | (uVar11 * uVar25 + uVar25 + uVar11 >> 5) << 0x18
         , iVar9 + 2U < uVar18)) {
        uVar11 = (*(uint *)(*pauVar26 + 8) << 3) >> 0x1b;
        *(uint *)(*pauVar26 + 8) =
             *(uint *)(*pauVar26 + 8) & 0xffffff | (uVar11 * uVar25 + uVar25 + uVar11 >> 5) << 0x18;
      }
    }
  }
  else {
    uVar25 = ~(~uVar25 << 0x18);
    if (uVar18 != 0) {
      uVar29 = param_4 * 0x20000000 >> 0x1f & 3;
      if (uVar18 <= uVar29) {
        uVar29 = uVar18;
      }
      uVar27 = uVar18;
      if ((uVar18 < 5) || (uVar27 = uVar29, uVar29 != 0)) {
        uVar29 = uVar27;
        pauVar26 = (undefined (*) [16])(*pauVar17 + 4);
        *(uint *)*pauVar17 = *(uint *)*pauVar17 & uVar25;
        if (uVar29 < 2) {
          iVar9 = 1;
        }
        else {
          pauVar26 = (undefined (*) [16])(*pauVar17 + 8);
          *(uint *)(*pauVar17 + 4) = *(uint *)(*pauVar17 + 4) & uVar25;
          if (uVar29 < 3) {
            iVar9 = 2;
          }
          else {
            pauVar26 = (undefined (*) [16])(*pauVar17 + 0xc);
            uVar27 = uVar11;
            if (3 < uVar29) {
              pauVar26 = pauVar17 + 1;
              uVar27 = *(uint *)(*pauVar17 + 0xc);
            }
            *(uint *)(*pauVar17 + 8) = *(uint *)(*pauVar17 + 8) & uVar25;
            if (uVar29 < 4) {
              iVar9 = 3;
            }
            else {
              iVar9 = 4;
              *(uint *)(*pauVar17 + 0xc) = uVar27 & uVar25;
            }
          }
        }
        if (uVar18 == uVar29) goto LAB_08035e54;
      }
      else {
        iVar9 = 0;
        pauVar26 = pauVar17;
      }
      uVar14 = uVar18 - uVar29;
      uVar27 = uVar14 & 0xfffffffc;
      if (uVar27 != 0) {
        puVar4 = (undefined8 *)(puVar22 + uVar29 * 4 + uVar11);
        uVar11 = 0;
        do {
          uVar11 = uVar11 + 1;
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4 = puVar4 + 2;
        } while (uVar11 < uVar14 >> 2);
        iVar9 = iVar9 + uVar27;
        pauVar26 = (undefined (*) [16])(*pauVar26 + uVar27 * 4);
        if (uVar27 == uVar14) goto LAB_08035e54;
      }
      *(uint *)*pauVar26 = *(uint *)*pauVar26 & uVar25;
      if ((iVar9 + 1U < uVar18) &&
         (*(uint *)(*pauVar26 + 4) = *(uint *)(*pauVar26 + 4) & uVar25, iVar9 + 2U < uVar18)) {
        *(uint *)(*pauVar26 + 8) = *(uint *)(*pauVar26 + 8) & uVar25;
      }
    }
  }
LAB_08035e54:
  if ((*(uint *)(iVar5 + 0x9a50) & 8) == 0) {
    FUN_08092008(pauVar17,iVar19,uVar18,puVar22);
  }
  else {
    FUN_08091f98(pauVar17,iVar19,uVar18,puVar22);
  }
  FUN_080917c0(iVar12,iVar20,puVar22,uVar18,uVar13);
  uVar11 = *param_2 >> 0xe & 2 | (*param_2 << 0x14) >> 0x1f;
  if (uVar11 == 2) {
    *(undefined4 *)(param_1 + 0x900c) = 1;
    FUN_080930c8(pauVar17,param_11,iVar19,param_4,iVar20,uVar13,puVar22,iVar12,uVar18);
  }
  else if (uVar11 == 3) {
    *(undefined4 *)(param_1 + 0x900c) = 1;
    FUN_08093180(pauVar17,param_11,iVar19,param_4,iVar20,uVar13,puVar22,iVar12,uVar18);
  }
  else if (uVar11 == 1) {
    FUN_08093028(pauVar17,param_11,iVar19,param_4,iVar20,uVar13,puVar22,iVar12,uVar18);
  }
  else {
    FUN_08092f88(pauVar17,param_11,iVar19,param_4,iVar20,uVar13,puVar22,iVar12,uVar18);
  }
  if (param_10 == 0) {
    return;
  }
  iVar9 = param_9 * 4;
  puVar22 = (undefined *)(param_1 + param_5 + 0x7fff);
  iVar5 = 0;
  do {
    if (param_9 != 0) {
      puVar7 = (undefined *)(iVar20 + -1);
      iVar12 = 0;
      puVar10 = puVar22;
      do {
        *(undefined4 *)(iVar24 + iVar12) = *(undefined4 *)(*pauVar17 + iVar12);
        *(undefined4 *)(iVar23 + iVar12) = *(undefined4 *)(param_4 + iVar12);
        iVar12 = iVar12 + 4;
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
        *puVar10 = *puVar7;
      } while (iVar12 != iVar9);
      pauVar17 = (undefined (*) [16])(*pauVar17 + iVar9);
      param_4 = param_4 + iVar9;
      iVar20 = iVar20 + param_9;
    }
    iVar5 = iVar5 + 1;
    iVar24 = iVar24 + 0x400;
    iVar23 = iVar23 + 0x400;
    puVar22 = puVar22 + 0x100;
  } while (iVar5 != param_10);
  return;
}


