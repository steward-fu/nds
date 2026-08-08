/*
 * Ghidra decompilation
 *
 * Function : FUN_00187fac
 * Address  : 00187fac
 * Program  : drastic64
 */


void FUN_00187fac(byte *param_1,ulong param_2,long param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  
  lVar6 = get_screen_ptr(0);
  if ((lVar6 == 0) && (lVar6 = get_screen_ptr(1), lVar6 == 0)) {
    return;
  }
  uVar7 = get_screen_pitch_text(0);
  iVar5 = get_screen_bytes_per_pixel();
  puVar4 = current_font;
  if (iVar5 == 2) {
    bVar9 = *param_1;
    if (bVar9 != 0) {
      iVar2 = (int)((uVar7 & 0xffffffff) >> 1);
      uVar7 = 1;
      iVar14 = *(int *)(current_font + 4);
      iVar5 = param_4;
      do {
        if (bVar9 == 10) {
          param_5 = param_5 + iVar14;
          iVar5 = param_4;
        }
        else {
          iVar16 = *(int *)puVar4;
          iVar5 = iVar5 + iVar16;
          uVar8 = *(uint *)(puVar4 + (ulong)bVar9 * 4 + 0x2008);
          uVar11 = iVar5 + iVar2 * param_5;
          uVar10 = uVar8 + iVar14;
          if (iVar14 != 0) {
            do {
              while( true ) {
                uVar15 = uVar11 - iVar16;
                uVar3 = *(ushort *)(puVar4 + (ulong)uVar8 * 2 + 8);
                if (iVar16 != 0) break;
LAB_001881ec:
                uVar8 = uVar8 + 1;
                uVar11 = uVar11 + iVar2;
                if (uVar8 == uVar10) goto LAB_00188164;
              }
              uVar13 = (ulong)uVar15;
              iVar1 = uVar15 + 0xf;
              if (param_3 != 0) {
                do {
                  while( true ) {
                    iVar12 = (int)uVar13;
                    if ((uVar3 >> (ulong)(iVar1 - iVar12 & 0x1f) & 1) == 0) break;
                    *(short *)(lVar6 + uVar13 * 2) = (short)param_2;
                    uVar13 = (ulong)(iVar12 + 1U);
                    if (iVar12 + 1U == uVar11) goto LAB_001881ec;
                  }
                  *(undefined2 *)(lVar6 + uVar13 * 2) = *(undefined2 *)(param_3 + uVar13 * 2);
                  uVar13 = (ulong)(iVar12 + 1U);
                } while (iVar12 + 1U != uVar11);
                goto LAB_001881ec;
              }
              do {
                if ((uVar3 >> (ulong)(iVar1 - uVar15 & 0x1f) & 1) != 0) {
                  *(short *)(lVar6 + (ulong)uVar15 * 2) = (short)param_2;
                }
                uVar15 = uVar15 + 1;
              } while (uVar15 != uVar11);
              uVar8 = uVar8 + 1;
              uVar11 = uVar11 + iVar2;
            } while (uVar8 != uVar10);
          }
        }
LAB_00188164:
        bVar9 = param_1[uVar7];
        uVar7 = (ulong)((int)uVar7 + 1);
      } while (bVar9 != 0);
    }
  }
  else {
    bVar9 = *param_1;
    if (bVar9 != 0) {
      iVar5 = (int)((uVar7 & 0xffffffff) >> 2);
      uVar7 = 1;
      uVar8 = *(uint *)(current_font + 4);
      iVar14 = param_4;
      do {
        while (bVar9 != 10) {
          uVar10 = *(uint *)puVar4;
          iVar2 = *(int *)(puVar4 + (ulong)bVar9 * 4 + 0x2008);
          if (uVar8 != 0) {
            iVar16 = iVar14 + iVar5 * param_5;
            uVar11 = 0;
            do {
              uVar3 = *(ushort *)(puVar4 + (ulong)(iVar2 + uVar11) * 2 + 8);
              if (uVar10 != 0) {
                uVar8 = 0;
                do {
                  while ((uVar3 >> (ulong)(0xf - uVar8 & 0x1f) & 1) != 0) {
                    *(uint *)(lVar6 + (ulong)(iVar16 + uVar8) * 4) =
                         ((uint)((param_2 & 0xffffffff) >> 5) & 0x3f) << 10 |
                         ((uint)((param_2 & 0xffffffff) >> 0xb) & 0x1f) << 0x13 |
                         ((uint)param_2 & 0x1f) << 3;
                    uVar8 = uVar8 + 1;
                    uVar10 = *(uint *)puVar4;
                    if (uVar10 <= uVar8) goto LAB_001880bc;
                  }
                  *(undefined4 *)(lVar6 + (ulong)(iVar16 + uVar8) * 4) = 0;
                  uVar8 = uVar8 + 1;
                  uVar10 = *(uint *)puVar4;
                } while (uVar8 < uVar10);
LAB_001880bc:
                uVar8 = *(uint *)(puVar4 + 4);
              }
              uVar11 = uVar11 + 1;
              iVar16 = iVar16 + iVar5;
            } while (uVar11 < uVar8);
          }
          bVar9 = param_1[uVar7];
          uVar7 = (ulong)((int)uVar7 + 1);
          iVar14 = iVar14 + uVar10;
          if (bVar9 == 0) {
            return;
          }
        }
        bVar9 = param_1[uVar7];
        param_5 = param_5 + uVar8;
        uVar7 = (ulong)((int)uVar7 + 1);
        iVar14 = param_4;
      } while (bVar9 != 0);
    }
  }
  return;
}


