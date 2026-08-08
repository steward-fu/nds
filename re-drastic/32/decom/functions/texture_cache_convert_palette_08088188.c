/*
 * Ghidra decompilation
 *
 * Function : texture_cache_convert_palette
 * Address  : 08088188
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void texture_cache_convert_palette
               (texture_cache_element_struct *texture_cache_element,u16 *palette,
               u32 color0_transparent,u32 entries)

{
  int iVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  u32 *puVar4;
  u32 *converted_palette;
  u32 uVar5;
  undefined (*pauVar6) [16];
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  
  puVar4 = texture_cache_element->palette;
  texture_cache_element->paletted = '\x01';
  if (puVar4 == (u32 *)0x0) {
    puVar4 = (u32 *)malloc(entries << 2);
    texture_cache_element->palette = puVar4;
  }
  if (color0_transparent == 0) {
    uVar10 = (uint)*palette;
    uVar10 = ((uVar10 << 0x11) >> 0x1b) << 0x10 | ((uVar10 << 0x16) >> 0x1b) << 8 | uVar10 & 0x1f;
    uVar5 = (uVar10 + 0x1f1f1f >> 5 & 0x10101) + uVar10 * 2 | 0x1f000000;
  }
  else {
    uVar10 = (uint)*palette;
    uVar10 = ((uVar10 << 0x11) >> 0x1b) << 0x10 | ((uVar10 << 0x16) >> 0x1b) << 8 | uVar10 & 0x1f;
    uVar5 = (uVar10 + 0x1f1f1f >> 5 & 0x10101) + uVar10 * 2;
  }
  *puVar4 = uVar5;
  if (1 < entries) {
    uVar7 = entries - 1;
    uVar10 = (int)(puVar4 + 1) * 0x20000000 >> 0x1f & 3;
    if (uVar7 <= uVar10) {
      uVar10 = uVar7;
    }
    uVar11 = uVar7;
    if ((uVar7 < 9) || (uVar11 = uVar10, uVar10 != 0)) {
      uVar10 = uVar11;
      uVar11 = (uint)palette[1];
      uVar11 = ((uVar11 << 0x11) >> 0x1b) << 0x10 | ((uVar11 << 0x16) >> 0x1b) << 8 | uVar11 & 0x1f;
      puVar4[1] = (uVar11 + 0x1f1f1f >> 5 & 0x10101) + uVar11 * 2 | 0x1f000000;
      if (uVar10 == 1) {
        iVar12 = 2;
      }
      else {
        uVar11 = (uint)palette[2];
        uVar11 = ((uVar11 << 0x11) >> 0x1b) << 0x10 | ((uVar11 << 0x16) >> 0x1b) << 8 |
                 uVar11 & 0x1f;
        puVar4[2] = (uVar11 + 0x1f1f1f >> 5 & 0x10101) + uVar11 * 2 | 0x1f000000;
        if (uVar10 == 2) {
          iVar12 = 3;
        }
        else {
          uVar11 = (uint)palette[3];
          uVar11 = ((uVar11 << 0x11) >> 0x1b) << 0x10 | ((uVar11 << 0x16) >> 0x1b) << 8 |
                   uVar11 & 0x1f;
          puVar4[3] = (uVar11 + 0x1f1f1f >> 5 & 0x10101) + uVar11 * 2 | 0x1f000000;
          if (uVar10 == 3) {
            iVar12 = 4;
          }
          else {
            uVar11 = (uint)palette[4];
            uVar11 = ((uVar11 << 0x11) >> 0x1b) << 0x10 | ((uVar11 << 0x16) >> 0x1b) << 8 |
                     uVar11 & 0x1f;
            puVar4[4] = (uVar11 + 0x1f1f1f >> 5 & 0x10101) + uVar11 * 2 | 0x1f000000;
            if (uVar10 == 4) {
              iVar12 = 5;
            }
            else {
              uVar11 = (uint)palette[5];
              uVar11 = ((uVar11 << 0x11) >> 0x1b) << 0x10 | ((uVar11 << 0x16) >> 0x1b) << 8 |
                       uVar11 & 0x1f;
              puVar4[5] = (uVar11 + 0x1f1f1f >> 5 & 0x10101) + uVar11 * 2 | 0x1f000000;
              if (uVar10 == 5) {
                iVar12 = 6;
              }
              else {
                uVar11 = (uint)palette[6];
                uVar11 = ((uVar11 << 0x11) >> 0x1b) << 0x10 | ((uVar11 << 0x16) >> 0x1b) << 8 |
                         uVar11 & 0x1f;
                puVar4[6] = (uVar11 + 0x1f1f1f >> 5 & 0x10101) + uVar11 * 2 | 0x1f000000;
                if (uVar10 == 6) {
                  iVar12 = 7;
                }
                else {
                  uVar11 = (uint)palette[7];
                  uVar11 = ((uVar11 << 0x11) >> 0x1b) << 0x10 | ((uVar11 << 0x16) >> 0x1b) << 8 |
                           uVar11 & 0x1f;
                  puVar4[7] = (uVar11 + 0x1f1f1f >> 5 & 0x10101) + uVar11 * 2 | 0x1f000000;
                  if (uVar10 == 8) {
                    uVar11 = (uint)palette[8];
                    iVar12 = 9;
                    uVar11 = ((uVar11 << 0x16) >> 0x1b) << 8 | ((uVar11 << 0x11) >> 0x1b) << 0x10 |
                             uVar11 & 0x1f;
                    puVar4[8] = (uVar11 + 0x1f1f1f >> 5 & 0x10101) + uVar11 * 2 | 0x1f000000;
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
      if (uVar7 == uVar10) {
        return;
      }
    }
    else {
      iVar12 = 1;
    }
    uVar11 = ((uVar7 - uVar10) - 8 >> 3) + 1;
    iVar1 = uVar11 * 8;
    if (6 < (entries - 2) - uVar10) {
      auVar2 = SIMDExpandImmediate(0,8,0x1f);
      auVar3 = SIMDExpandImmediate(0,0,0x1f);
      pauVar6 = (undefined (*) [16])(palette + uVar10 + 1);
      uVar9 = 0;
      puVar8 = (undefined8 *)(puVar4 + uVar10 + 1);
      do {
        auVar18 = *pauVar6;
        uVar9 = uVar9 + 1;
        pauVar6 = pauVar6 + 1;
        auVar14 = VectorCopyLong(auVar18._0_8_,2,1);
        auVar16 = VectorCopyLong(auVar18._8_8_,2,1);
        auVar13 = VectorShiftRight(auVar14,10);
        auVar15 = VectorShiftRight(auVar14,5);
        auVar14 = VectorShiftRight(auVar16,5);
        auVar17 = VectorShiftRight(auVar16,10);
        auVar13 = VectorShiftLeft(auVar13 & auVar3,0x10,0x20,0);
        auVar16 = VectorShiftLeft(auVar15 & auVar3,8,0x20,0);
        auVar14 = VectorShiftLeft(auVar14 & auVar3,8,0x20,0);
        auVar17 = VectorShiftLeft(auVar17 & auVar3,0x10,0x20,0);
        auVar15 = VectorCopyLong(SUB168(auVar18 & auVar2,0),2,1);
        auVar18 = VectorCopyLong(SUB168(auVar18 & auVar2,8),2,1);
        auVar15 = auVar16 | auVar13 | auVar15;
        auVar18 = auVar14 | auVar17 | auVar18;
        auVar14._8_8_ = 0x1f1f1f001f1f1f;
        auVar14._0_8_ = 0x1f1f1f001f1f1f;
        auVar17 = VectorAdd(auVar15,auVar14,4);
        auVar16 = VectorAdd(auVar15,auVar15,4);
        auVar15._8_8_ = 0x1f1f1f001f1f1f;
        auVar15._0_8_ = 0x1f1f1f001f1f1f;
        auVar13 = VectorAdd(auVar18,auVar15,4);
        auVar14 = VectorAdd(auVar18,auVar18,4);
        auVar15 = VectorShiftRight(auVar17,5);
        auVar17 = VectorShiftRight(auVar13,5);
        auVar18._8_8_ = 0x1010100010101;
        auVar18._0_8_ = 0x1010100010101;
        auVar13._8_8_ = 0x1010100010101;
        auVar13._0_8_ = 0x1010100010101;
        auVar15 = VectorAdd(auVar15 & auVar18,auVar16,4);
        auVar14 = VectorAdd(auVar17 & auVar13,auVar14,4);
        auVar18 = SIMDExpandImmediate(0,7,0x1f);
        auVar13 = SIMDExpandImmediate(0,7,0x1f);
        *puVar8 = SUB168(auVar15 | auVar18,0);
        puVar8[1] = SUB168(auVar15 | auVar18,8);
        puVar8[2] = SUB168(auVar14 | auVar13,0);
        puVar8[3] = SUB168(auVar14 | auVar13,8);
        puVar8 = puVar8 + 4;
      } while (uVar9 < uVar11);
      iVar12 = iVar12 + iVar1;
      if (iVar1 - (uVar7 - uVar10) == 0) {
        return;
      }
    }
    uVar10 = (uint)palette[iVar12];
    uVar7 = iVar12 + 1;
    uVar10 = ((uVar10 << 0x11) >> 0x1b) << 0x10 | ((uVar10 << 0x16) >> 0x1b) << 8 | uVar10 & 0x1f;
    puVar4[iVar12] = (uVar10 + 0x1f1f1f >> 5 & 0x10101) + uVar10 * 2 | 0x1f000000;
    if (uVar7 < entries) {
      uVar11 = iVar12 + 2;
      uVar10 = (uint)palette[uVar7];
      uVar10 = ((uVar10 << 0x11) >> 0x1b) << 0x10 | ((uVar10 << 0x16) >> 0x1b) << 8 | uVar10 & 0x1f;
      puVar4[uVar7] = (uVar10 + 0x1f1f1f >> 5 & 0x10101) + uVar10 * 2 | 0x1f000000;
      if (uVar11 < entries) {
        uVar7 = iVar12 + 3;
        uVar10 = (uint)palette[uVar11];
        uVar10 = ((uVar10 << 0x11) >> 0x1b) << 0x10 | ((uVar10 << 0x16) >> 0x1b) << 8 |
                 uVar10 & 0x1f;
        puVar4[uVar11] = (uVar10 + 0x1f1f1f >> 5 & 0x10101) + uVar10 * 2 | 0x1f000000;
        if (uVar7 < entries) {
          uVar11 = iVar12 + 4;
          uVar10 = (uint)palette[uVar7];
          uVar10 = ((uVar10 << 0x11) >> 0x1b) << 0x10 | ((uVar10 << 0x16) >> 0x1b) << 8 |
                   uVar10 & 0x1f;
          puVar4[uVar7] = (uVar10 + 0x1f1f1f >> 5 & 0x10101) + uVar10 * 2 | 0x1f000000;
          if (uVar11 < entries) {
            uVar7 = iVar12 + 5;
            uVar10 = (uint)palette[uVar11];
            uVar10 = ((uVar10 << 0x11) >> 0x1b) << 0x10 | ((uVar10 << 0x16) >> 0x1b) << 8 |
                     uVar10 & 0x1f;
            puVar4[uVar11] = (uVar10 + 0x1f1f1f >> 5 & 0x10101) + uVar10 * 2 | 0x1f000000;
            if (uVar7 < entries) {
              uVar11 = iVar12 + 6;
              uVar10 = (uint)palette[uVar7];
              uVar10 = ((uVar10 << 0x11) >> 0x1b) << 0x10 | ((uVar10 << 0x16) >> 0x1b) << 8 |
                       uVar10 & 0x1f;
              puVar4[uVar7] = (uVar10 + 0x1f1f1f >> 5 & 0x10101) + uVar10 * 2 | 0x1f000000;
              if (uVar11 < entries) {
                uVar10 = (uint)palette[uVar11];
                uVar10 = ((uVar10 << 0x11) >> 0x1b) << 0x10 | ((uVar10 << 0x16) >> 0x1b) << 8 |
                         uVar10 & 0x1f;
                puVar4[uVar11] = (uVar10 + 0x1f1f1f >> 5 & 0x10101) + uVar10 * 2 | 0x1f000000;
              }
            }
          }
        }
      }
    }
  }
  return;
}


