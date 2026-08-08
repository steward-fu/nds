/*
 * Ghidra decompilation
 *
 * Function : memory_check_code_region
 * Address  : 0800c25c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 memory_check_code_region
              (u32 *code_bitmap_pointer_coarse,u32 *code_bitmap_pointer_fine,u32 address,u32 length)

{
  undefined auVar1 [32];
  undefined auVar2 [32];
  undefined auVar3 [16];
  undefined (*pauVar4) [16];
  u32 start_offset_2B;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  u32 end_address;
  u32 code_bitmaps;
  u32 code_bitmaps_1;
  u32 *puVar9;
  uint uVar10;
  u32 start_offset_2KB;
  u32 *puVar11;
  u32 end_offset_2B;
  int iVar12;
  uint uVar13;
  uint uVar14;
  u32 end_offset_2KB;
  uint uVar15;
  uint *puVar16;
  undefined auVar17 [16];
  
  uVar10 = (address << 0x10) >> 0x1b;
  uVar8 = (length - 1) + address;
  uVar14 = uVar8 * 0x10000 >> 0x1b;
  uVar15 = (uVar8 >> 0x10) - (address >> 0x10);
  if (uVar15 == 0) {
    if ((*code_bitmap_pointer_coarse & -1 << uVar10 & ~(-2 << uVar14)) == 0) {
      return 0;
    }
    if (uVar10 != uVar14) {
      return 1;
    }
    uVar10 = (address << 0x1a) >> 0x1b;
    uVar14 = uVar8 * 0x4000000 >> 0x1b;
    uVar8 = (uVar8 >> 6) - (address >> 6);
    if (uVar8 == 0) {
      return *code_bitmap_pointer_fine & -1 << uVar10 & ~(-2 << uVar14);
    }
    puVar16 = code_bitmap_pointer_fine + 1;
    uVar10 = *code_bitmap_pointer_fine & -1 << uVar10;
    if (uVar8 < 2) goto LAB_0800c60c;
    uVar13 = uVar8 - 1;
    uVar15 = (int)puVar16 * 0x20000000 >> 0x1f & 3;
    if (uVar13 <= uVar15) {
      uVar15 = uVar13;
    }
    uVar6 = uVar13;
    if ((uVar13 < 9) || (uVar6 = uVar15, uVar15 != 0)) {
      uVar15 = uVar6;
      puVar5 = code_bitmap_pointer_fine + 2;
      uVar10 = uVar10 | code_bitmap_pointer_fine[1];
      if (uVar15 == 1) {
        iVar12 = 2;
      }
      else {
        puVar5 = code_bitmap_pointer_fine + 3;
        uVar10 = uVar10 | code_bitmap_pointer_fine[2];
        if (uVar15 == 2) {
          iVar12 = 3;
        }
        else {
          puVar5 = code_bitmap_pointer_fine + 4;
          uVar10 = uVar10 | code_bitmap_pointer_fine[3];
          if (uVar15 == 3) {
            iVar12 = 4;
          }
          else {
            puVar5 = code_bitmap_pointer_fine + 5;
            uVar10 = uVar10 | code_bitmap_pointer_fine[4];
            if (uVar15 == 4) {
              iVar12 = 5;
            }
            else {
              puVar5 = code_bitmap_pointer_fine + 6;
              uVar10 = uVar10 | code_bitmap_pointer_fine[5];
              if (uVar15 == 5) {
                iVar12 = 6;
              }
              else {
                puVar5 = code_bitmap_pointer_fine + 7;
                uVar10 = uVar10 | code_bitmap_pointer_fine[6];
                if (uVar15 == 6) {
                  iVar12 = 7;
                }
                else {
                  puVar5 = code_bitmap_pointer_fine + 8;
                  uVar10 = uVar10 | code_bitmap_pointer_fine[7];
                  if (uVar15 == 8) {
                    puVar5 = code_bitmap_pointer_fine + 9;
                    iVar12 = 9;
                    uVar10 = uVar10 | code_bitmap_pointer_fine[8];
                  }
                  else {
                    iVar12 = 8;
                  }
                }
              }
            }
          }
        }
      }
      if (uVar13 != uVar15) goto LAB_0800c55c;
    }
    else {
      iVar12 = 1;
      puVar5 = puVar16;
LAB_0800c55c:
      uVar6 = ((uVar13 - uVar15) - 4 >> 2) + 1;
      if (2 < (uVar8 - 2) - uVar15) {
        auVar17 = ZEXT816(0);
        pauVar4 = (undefined (*) [16])(code_bitmap_pointer_fine + uVar15 + 1);
        uVar7 = 0;
        do {
          auVar3 = *pauVar4;
          uVar7 = uVar7 + 1;
          pauVar4 = pauVar4 + 1;
          auVar17 = auVar17 | auVar3;
        } while (uVar7 < uVar6);
        puVar5 = puVar5 + uVar6 * 4;
        iVar12 = iVar12 + uVar6 * 4;
        auVar2._16_16_ = ZEXT816(0);
        auVar2._0_16_ = auVar17;
        auVar17 = auVar17 | auVar2._8_16_;
        uVar10 = uVar10 | auVar17._0_4_ | auVar17._4_4_;
        if (uVar13 - uVar15 == uVar6 * 4) goto LAB_0800c604;
      }
      uVar10 = uVar10 | *puVar5;
      if ((iVar12 + 1U < uVar8) && (uVar10 = uVar10 | puVar5[1], iVar12 + 2U < uVar8)) {
        uVar10 = uVar10 | puVar5[2];
      }
    }
LAB_0800c604:
    puVar16 = puVar16 + uVar8 + 0x3fffffff;
LAB_0800c60c:
    return *puVar16 & ~(-2 << uVar14) | uVar10;
  }
  puVar9 = code_bitmap_pointer_coarse + 1;
  uVar8 = *code_bitmap_pointer_coarse & -1 << uVar10;
  if (uVar15 < 2) goto LAB_0800c414;
  uVar13 = uVar15 - 1;
  uVar10 = (int)puVar9 * 0x20000000 >> 0x1f & 3;
  if (uVar13 <= uVar10) {
    uVar10 = uVar13;
  }
  uVar6 = uVar13;
  if ((uVar13 < 9) || (uVar6 = uVar10, uVar10 != 0)) {
    uVar10 = uVar6;
    puVar11 = code_bitmap_pointer_coarse + 2;
    uVar8 = uVar8 | code_bitmap_pointer_coarse[1];
    if (uVar10 == 1) {
      iVar12 = 2;
    }
    else {
      puVar11 = code_bitmap_pointer_coarse + 3;
      uVar8 = uVar8 | code_bitmap_pointer_coarse[2];
      if (uVar10 == 2) {
        iVar12 = 3;
      }
      else {
        puVar11 = code_bitmap_pointer_coarse + 4;
        uVar8 = uVar8 | code_bitmap_pointer_coarse[3];
        if (uVar10 == 3) {
          iVar12 = 4;
        }
        else {
          puVar11 = code_bitmap_pointer_coarse + 5;
          uVar8 = uVar8 | code_bitmap_pointer_coarse[4];
          if (uVar10 == 4) {
            iVar12 = 5;
          }
          else {
            puVar11 = code_bitmap_pointer_coarse + 6;
            uVar8 = uVar8 | code_bitmap_pointer_coarse[5];
            if (uVar10 == 5) {
              iVar12 = 6;
            }
            else {
              puVar11 = code_bitmap_pointer_coarse + 7;
              uVar8 = uVar8 | code_bitmap_pointer_coarse[6];
              if (uVar10 == 6) {
                iVar12 = 7;
              }
              else {
                puVar11 = code_bitmap_pointer_coarse + 8;
                uVar8 = uVar8 | code_bitmap_pointer_coarse[7];
                if (uVar10 == 8) {
                  puVar11 = code_bitmap_pointer_coarse + 9;
                  iVar12 = 9;
                  uVar8 = uVar8 | code_bitmap_pointer_coarse[8];
                }
                else {
                  iVar12 = 8;
                }
              }
            }
          }
        }
      }
    }
    if (uVar10 != uVar13) goto LAB_0800c364;
  }
  else {
    iVar12 = 1;
    puVar11 = puVar9;
LAB_0800c364:
    uVar6 = ((uVar13 - uVar10) - 4 >> 2) + 1;
    if (2 < (uVar15 - 2) - uVar10) {
      auVar17 = ZEXT816(0);
      pauVar4 = (undefined (*) [16])(code_bitmap_pointer_coarse + uVar10 + 1);
      uVar7 = 0;
      do {
        auVar3 = *pauVar4;
        uVar7 = uVar7 + 1;
        pauVar4 = pauVar4 + 1;
        auVar17 = auVar17 | auVar3;
      } while (uVar7 < uVar6);
      puVar11 = puVar11 + uVar6 * 4;
      iVar12 = iVar12 + uVar6 * 4;
      auVar1._16_16_ = ZEXT816(0);
      auVar1._0_16_ = auVar17;
      auVar17 = auVar17 | auVar1._8_16_;
      uVar8 = uVar8 | auVar17._0_4_ | auVar17._4_4_;
      if (uVar13 - uVar10 == uVar6 * 4) goto LAB_0800c40c;
    }
    uVar8 = uVar8 | *puVar11;
    if ((iVar12 + 1U < uVar15) && (uVar8 = uVar8 | puVar11[1], iVar12 + 2U < uVar15)) {
      uVar8 = uVar8 | puVar11[2];
    }
  }
LAB_0800c40c:
  puVar9 = puVar9 + uVar15 + 0x3fffffff;
LAB_0800c414:
  return *puVar9 & ~(-2 << uVar14) | uVar8;
}


