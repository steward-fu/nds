/*
 * Ghidra decompilation
 *
 * Function : render_scanline_bg
 * Address  : 00136880
 * Program  : drastic64
 */


void render_scanline_bg(long param_1,long param_2,long param_3,uint param_4)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  short sVar6;
  undefined2 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  uint *puVar13;
  undefined2 *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  long lVar19;
  int iVar20;
  long lVar21;
  
  uVar5 = *(ushort *)(param_1 + 0xa8);
  iVar20 = 0;
  uVar3 = uVar5 & 0xf;
  if ((uVar5 >> 4 & 0xf) != 0) {
    uVar15 = (uVar5 >> 4 & 0xf) + 1;
    uVar8 = 0;
    if (uVar15 != 0) {
      uVar8 = param_4 / uVar15;
    }
    iVar20 = param_4 - uVar8 * uVar15;
  }
  uVar15 = (uint)*(byte *)(param_1 + 0xb2);
  if (*(byte *)(param_1 + 0xb2) != 0) {
    uVar8 = uVar3 + 1;
    lVar21 = param_1;
    do {
      while( true ) {
        uVar12 = (ulong)*(byte *)(lVar21 + 0x8c);
        lVar19 = param_1 + 0xc0 + uVar12 * 0xb0;
        if (*(long *)(lVar19 + 0x20) != 0) break;
        lVar1 = param_2 + uVar12 * 0x220 + 0x10;
        puVar13 = (uint *)(param_3 + uVar12 * 0x20);
        if ((*(ushort *)(lVar19 + 0x98) >> 6 & 1) == 0) {
          (**(code **)(lVar19 + 0x30))(lVar19,lVar1,puVar13,param_4);
          uVar15 = (uint)*(byte *)(param_1 + 0xb2);
        }
        else {
          sVar6 = *(short *)(lVar19 + 0x9c);
          *(short *)(lVar19 + 0x9c) = sVar6 - (short)iVar20;
          uVar18 = *(undefined8 *)(lVar19 + 0x90);
          *(ulong *)(lVar19 + 0x90) =
               CONCAT44((int)((ulong)*(undefined8 *)(lVar19 + 0x90) >> 0x20) -
                        *(short *)(lVar19 + 0xa4) * iVar20,
                        (int)*(undefined8 *)(lVar19 + 0x90) - *(short *)(lVar19 + 0xa2) * iVar20);
          (**(code **)(lVar19 + 0x30))(lVar19,lVar1,puVar13,param_4);
          *(undefined8 *)(lVar19 + 0x90) = uVar18;
          *(short *)(lVar19 + 0x9c) = sVar6;
          if ((uVar5 & 0xf) != 0) {
            uVar15 = 0;
            if (uVar8 != 0) {
              uVar15 = 0x20 / uVar8;
            }
            puVar2 = puVar13 + 7;
            uVar4 = *(uint *)(mosaic_masks_11557 + (long)(int)uVar3 * 4);
            uVar11 = uVar4 & *(uint *)(param_3 + uVar12 * 0x20);
            uVar10 = 0;
            uVar16 = uVar11;
            while( true ) {
              uVar10 = (uVar8 - (0x20 - uVar15 * uVar8)) + uVar10;
              uVar17 = 0;
              uVar9 = 0;
              if (uVar8 != 0) {
                uVar9 = uVar10 / uVar8;
              }
              uVar10 = uVar10 - uVar9 * uVar8;
              do {
                uVar11 = uVar11 * 2;
                uVar17 = uVar17 + 1;
                uVar16 = uVar16 | uVar11;
              } while (uVar17 != uVar3);
              *puVar13 = uVar16;
              uVar17 = uVar16 >> 0x1f;
              if (puVar13 == puVar2) break;
              puVar13 = puVar13 + 1;
              uVar11 = uVar4 << (ulong)(uVar10 & 0x1f) & *puVar13;
              uVar16 = uVar11;
              if (((((uVar10 != 0) && (uVar16 = uVar11 | uVar17, uVar10 != 1)) &&
                   (uVar16 = uVar11 | uVar17 | uVar17 << 1, uVar10 != 2)) &&
                  ((((uVar16 = uVar16 | uVar17 << 2, uVar10 != 3 &&
                     (uVar16 = uVar16 | uVar17 << 3, uVar10 != 4)) &&
                    ((uVar16 = uVar16 | uVar17 << 4, uVar10 != 5 &&
                     ((uVar16 = uVar16 | uVar17 << 5, uVar10 != 6 &&
                      (uVar16 = uVar16 | uVar17 << 6, uVar10 != 7)))))) &&
                   (uVar16 = uVar16 | uVar17 << 7, uVar10 != 8)))) &&
                 ((((uVar16 = uVar16 | uVar17 << 8, uVar10 != 9 &&
                    (uVar16 = uVar16 | uVar17 << 9, uVar10 != 10)) &&
                   (uVar16 = uVar16 | uVar17 << 10, uVar10 != 0xb)) &&
                  ((uVar16 = uVar16 | uVar17 << 0xb, uVar10 != 0xc &&
                   (uVar16 = uVar16 | uVar17 << 0xc, uVar10 != 0xd)))))) {
                uVar9 = uVar16 | uVar17 << 0xd;
                uVar16 = uVar9 | uVar17 << 0xe;
                if (uVar10 != 0xf) {
                  uVar16 = uVar9;
                }
              }
            }
            uVar15 = 0;
            do {
              uVar10 = uVar15 + 1;
              uVar7 = *(undefined2 *)(lVar1 + (ulong)uVar15 * 2);
              uVar11 = uVar15 + 1;
              uVar15 = uVar15 + uVar8;
              puVar14 = (undefined2 *)(lVar1 + (ulong)uVar10 * 2);
              do {
                uVar10 = uVar11 + 1;
                if (0xff < uVar11) {
                  uVar15 = (uint)*(byte *)(param_1 + 0xb2);
                  goto LAB_001369ac;
                }
                *puVar14 = uVar7;
                puVar14 = puVar14 + 1;
                uVar11 = uVar10;
              } while (uVar10 != uVar15);
            } while( true );
          }
          uVar15 = (uint)*(byte *)(param_1 + 0xb2);
        }
LAB_001369ac:
        lVar21 = lVar21 + 1;
        if (uVar15 <= (uint)((int)lVar21 - (int)param_1)) {
          return;
        }
      }
      lVar21 = lVar21 + 1;
    } while ((uint)((int)lVar21 - (int)param_1) < uVar15);
  }
  return;
}


