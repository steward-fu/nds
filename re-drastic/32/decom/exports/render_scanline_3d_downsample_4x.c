/*
 * Ghidra decompilation
 *
 * Function : render_scanline_3d_downsample_4x
 * Address  : 08078dfc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_scanline_3d_downsample_4x(u32 *dest,u32 *scanline_3d)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  u32 *puVar3;
  u32 *pixel_a;
  undefined (*pauVar4) [16];
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  u32 *puVar8;
  undefined (*pauVar10) [16];
  uint uVar11;
  uint uVar12;
  int iVar13;
  u32 *pixel_c;
  int iVar14;
  undefined (*pauVar15) [16];
  undefined (*pauVar16) [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  int local_2c;
  u32 *puVar9;
  
  if (scanline_3d < dest + 4 && dest < scanline_3d + 0x304) {
    puVar3 = dest + -1;
    puVar8 = scanline_3d + -1;
    do {
      puVar9 = puVar8 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = puVar8[0x101] + *puVar9 + puVar8[0x201] + puVar8[0x301] >> 2 & 0x1f3f3f3f;
      puVar8 = puVar9;
    } while (puVar9 != scanline_3d + 0xff);
  }
  else {
    uVar5 = ((int)scanline_3d << 0x1d) >> 0x1f & 3;
    uVar12 = uVar5;
    if (uVar5 == 0) {
      iVar13 = 0x100;
      uVar11 = 0x40;
      local_2c = 0x100;
      iVar14 = iVar13;
    }
    else {
      *dest = *scanline_3d + scanline_3d[0x200] + scanline_3d[0x100] + scanline_3d[0x300] >> 2 &
              0x1f3f3f3f;
      if (uVar5 == 1) {
        iVar14 = 0xff;
      }
      else {
        dest[1] = scanline_3d[1] + scanline_3d[0x201] + scanline_3d[0x101] + scanline_3d[0x301] >> 2
                  & 0x1f3f3f3f;
        if (uVar5 == 3) {
          iVar14 = 0xfd;
          dest[2] = scanline_3d[2] + scanline_3d[0x202] + scanline_3d[0x102] + scanline_3d[0x302] >>
                    2 & 0x1f3f3f3f;
        }
        else {
          iVar14 = 0xfe;
          uVar12 = 2;
        }
      }
      local_2c = 0x100 - uVar5;
      iVar13 = 0xfc;
      uVar11 = 0x3f;
    }
    pauVar10 = (undefined (*) [16])(scanline_3d + uVar5);
    pauVar16 = (undefined (*) [16])(scanline_3d + uVar5 + 0x100);
    pauVar15 = (undefined (*) [16])(scanline_3d + uVar5 + 0x200);
    pauVar4 = (undefined (*) [16])(scanline_3d + uVar5 + 0x300);
    puVar6 = (undefined8 *)(dest + uVar5);
    uVar5 = 0;
    do {
      auVar17 = *pauVar10;
      uVar5 = uVar5 + 1;
      pauVar10 = pauVar10 + 1;
      auVar18 = *pauVar15;
      pauVar15 = pauVar15 + 1;
      auVar1 = *pauVar16;
      pauVar16 = pauVar16 + 1;
      auVar2 = *pauVar4;
      pauVar4 = pauVar4 + 1;
      auVar17 = VectorAdd(auVar18,auVar17,4);
      auVar17 = VectorAdd(auVar17,auVar1,4);
      auVar17 = VectorAdd(auVar17,auVar2,4);
      auVar18 = VectorShiftRight(auVar17,2);
      auVar17._8_8_ = 0x1f3f3f3f1f3f3f3f;
      auVar17._0_8_ = 0x1f3f3f3f1f3f3f3f;
      *puVar6 = SUB168(auVar18 & auVar17,0);
      puVar6[1] = SUB168(auVar18 & auVar17,8);
      puVar6 = puVar6 + 2;
    } while (uVar5 < uVar11);
    iVar7 = uVar12 + iVar13;
    if (local_2c != iVar13) {
      dest[iVar7] = scanline_3d[iVar7 + 0x200] + scanline_3d[iVar7] + scanline_3d[iVar7 + 0x100] +
                    scanline_3d[iVar7 + 0x300] >> 2 & 0x1f3f3f3f;
      if (iVar14 - iVar13 != 1) {
        dest[iVar7 + 1] =
             scanline_3d[iVar7 + 1] + scanline_3d[iVar7 + 0x201] + scanline_3d[iVar7 + 0x101] +
             scanline_3d[iVar7 + 0x301] >> 2 & 0x1f3f3f3f;
        if (iVar14 - iVar13 != 2) {
          dest[iVar7 + 2] =
               scanline_3d[iVar7 + 2] + scanline_3d[iVar7 + 0x202] + scanline_3d[iVar7 + 0x102] +
               scanline_3d[iVar7 + 0x302] >> 2 & 0x1f3f3f3f;
        }
      }
    }
  }
  return;
}


