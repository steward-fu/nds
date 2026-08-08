/*
 * Ghidra decompilation
 *
 * Function : SzArEx_GetFileNameUtf16
 * Address  : 080ca41c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

size_t SzArEx_GetFileNameUtf16(CSzArEx *p,size_t fileIndex,UInt16 *dest)

{
  int iVar1;
  undefined *puVar2;
  Byte *pBVar3;
  uint uVar4;
  uint uVar5;
  size_t len;
  UInt16 *pUVar6;
  Byte *src;
  UInt16 *pUVar7;
  UInt16 *pUVar8;
  undefined8 *puVar9;
  uint uVar11;
  int *piVar12;
  undefined *puVar13;
  undefined *puVar14;
  size_t sVar15;
  uint uVar16;
  undefined *puVar17;
  longlong lVar19;
  undefined in_q8 [16];
  undefined auVar20 [16];
  undefined in_q9 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auStack_20 [4];
  undefined4 local_1c;
  undefined8 *puVar10;
  UInt16 *pUVar18;
  
  piVar12 = &__stack_chk_guard;
  puVar13 = auStack_20;
  sVar15 = p->FileNameOffsets[fileIndex];
  local_1c = __stack_chk_guard;
  uVar5 = p->FileNameOffsets[fileIndex + 1] - sVar15;
  puVar14 = auStack_20;
  if (dest != (UInt16 *)0x0) {
    pBVar3 = (p->FileNames).data;
    iVar1 = sVar15 * 2;
    pUVar6 = (UInt16 *)(pBVar3 + iVar1);
    puVar14 = auStack_20;
    if (uVar5 != 0) {
      if (uVar5 < 0x10 || pUVar6 < dest + 0x10 && dest < pBVar3 + iVar1 + 0x20) {
        pUVar18 = dest + -1;
        pUVar7 = pUVar6;
        do {
          pUVar8 = pUVar7 + 1;
          pUVar18 = pUVar18 + 1;
          *pUVar18 = *pUVar7;
          pUVar7 = pUVar8;
          puVar14 = auStack_20;
        } while (pUVar8 != pUVar6 + uVar5);
      }
      else {
        uVar11 = 0;
        uVar16 = (uVar5 - 0x10 >> 4) + 1;
        uVar4 = uVar16 * 0x10;
        puVar10 = (undefined8 *)dest;
        pUVar7 = pUVar6;
        do {
          puVar14 = (undefined *)0x380;
          puVar2 = (undefined *)0x390;
          lVar19 = 8;
          puVar9 = puVar10;
          pUVar18 = pUVar7;
          while( true ) {
            *puVar14 = *(undefined *)pUVar18;
            puVar17 = (undefined *)((int)pUVar18 + 1);
            *puVar2 = *puVar17;
            pUVar18 = (UInt16 *)(puVar17 + 1);
            lVar19 = lVar19 + -1;
            if (lVar19 == 0) break;
            puVar14 = puVar14 + 1;
            puVar2 = puVar2 + 1;
          }
          puVar14 = (undefined *)0x388;
          puVar2 = (undefined *)0x398;
          lVar19 = 8;
          while( true ) {
            *puVar14 = *(undefined *)pUVar18;
            puVar17 = (undefined *)((int)pUVar18 + 1);
            *puVar2 = *puVar17;
            pUVar18 = (UInt16 *)(puVar17 + 1);
            lVar19 = lVar19 + -1;
            if (lVar19 == 0) break;
            puVar14 = puVar14 + 1;
            puVar2 = puVar2 + 1;
          }
          uVar11 = uVar11 + 1;
          pUVar7 = pUVar7 + 0x10;
          auVar22 = VectorCopyLong(in_q8._0_8_,1,1);
          auVar21 = VectorCopyLong(in_q8._8_8_,1,1);
          auVar23 = VectorShiftLongLeft(in_q9._0_8_,1);
          auVar20 = VectorShiftLongLeft(in_q9._8_8_,1);
          in_q9 = auVar22 | auVar23;
          in_q8 = auVar21 | auVar20;
          *puVar9 = in_q9._0_8_;
          puVar9[1] = in_q9._8_8_;
          puVar10 = puVar9 + 4;
          puVar9[2] = in_q8._0_8_;
          puVar9[3] = in_q8._8_8_;
        } while (uVar11 < uVar16);
        puVar14 = puVar13;
        if (uVar5 != uVar4) {
          uVar11 = uVar4 + 1;
          dest[uVar4] = CONCAT11(*(undefined *)((int)pUVar6 + uVar4 * 2 + 1),
                                 *(undefined *)(pUVar6 + uVar4));
          if (uVar11 < uVar5) {
            uVar16 = uVar4 + 2;
            dest[uVar11] = CONCAT11(*(undefined *)((int)pUVar6 + uVar11 * 2 + 1),
                                    *(undefined *)(pUVar6 + uVar11));
            if (uVar16 < uVar5) {
              uVar11 = uVar4 + 3;
              dest[uVar16] = CONCAT11(*(undefined *)((int)pUVar6 + uVar16 * 2 + 1),
                                      *(undefined *)(pUVar6 + uVar16));
              if (uVar11 < uVar5) {
                uVar16 = uVar4 + 4;
                dest[uVar11] = CONCAT11(*(undefined *)((int)pUVar6 + uVar11 * 2 + 1),
                                        *(undefined *)(pUVar6 + uVar11));
                if (uVar16 < uVar5) {
                  uVar11 = uVar4 + 5;
                  dest[uVar16] = CONCAT11(*(undefined *)((int)pUVar6 + uVar16 * 2 + 1),
                                          *(undefined *)(pUVar6 + uVar16));
                  if (uVar11 < uVar5) {
                    uVar16 = uVar4 + 6;
                    dest[uVar11] = CONCAT11(*(undefined *)((int)pUVar6 + uVar11 * 2 + 1),
                                            *(undefined *)(pUVar6 + uVar11));
                    if (uVar16 < uVar5) {
                      uVar11 = uVar4 + 7;
                      dest[uVar16] = CONCAT11(*(undefined *)((int)pUVar6 + uVar16 * 2 + 1),
                                              *(undefined *)(pUVar6 + uVar16));
                      if (uVar11 < uVar5) {
                        uVar16 = uVar4 + 8;
                        dest[uVar11] = CONCAT11(*(undefined *)((int)pUVar6 + uVar11 * 2 + 1),
                                                *(undefined *)(pUVar6 + uVar11));
                        if (uVar16 < uVar5) {
                          uVar11 = uVar4 + 9;
                          dest[uVar16] = CONCAT11(*(undefined *)((int)pUVar6 + uVar16 * 2 + 1),
                                                  *(undefined *)(pUVar6 + uVar16));
                          if (uVar11 < uVar5) {
                            uVar16 = uVar4 + 10;
                            dest[uVar11] = CONCAT11(*(undefined *)((int)pUVar6 + uVar11 * 2 + 1),
                                                    *(undefined *)(pUVar6 + uVar11));
                            if (uVar16 < uVar5) {
                              uVar11 = uVar4 + 0xb;
                              dest[uVar16] = CONCAT11(*(undefined *)((int)pUVar6 + uVar16 * 2 + 1),
                                                      *(undefined *)(pUVar6 + uVar16));
                              if (uVar11 < uVar5) {
                                uVar16 = uVar4 + 0xc;
                                dest[uVar11] = CONCAT11(*(undefined *)((int)pUVar6 + uVar11 * 2 + 1)
                                                        ,*(undefined *)(pUVar6 + uVar11));
                                if (uVar16 < uVar5) {
                                  uVar11 = uVar4 + 0xd;
                                  dest[uVar16] = CONCAT11(*(undefined *)
                                                           ((int)pUVar6 + uVar16 * 2 + 1),
                                                          *(undefined *)(pUVar6 + uVar16));
                                  if (uVar11 < uVar5) {
                                    uVar4 = uVar4 + 0xe;
                                    dest[uVar11] = CONCAT11(*(undefined *)
                                                             ((int)pUVar6 + uVar11 * 2 + 1),
                                                            *(undefined *)(pUVar6 + uVar11));
                                    if (uVar4 < uVar5) {
                                      dest[uVar4] = CONCAT11(*(undefined *)
                                                              ((int)pUVar6 + uVar4 * 2 + 1),
                                                             *(undefined *)(pUVar6 + uVar4));
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
  if (*(int *)(puVar14 + 4) != *piVar12) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x080ca734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar15 = (**(code **)(puVar14 + 0x1c))();
  return sVar15;
}


