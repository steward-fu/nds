/*
 * Ghidra decompilation
 *
 * Function : print_string_ext
 * Address  : 00187bf0
 * Program  : drastic64
 */


void print_string_ext(byte *param_1,ulong param_2,ulong param_3,int param_4,int param_5,long param_6
                     ,long param_7,ulong param_8,uint param_9)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  undefined2 uVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  
  iVar8 = get_screen_bytes_per_pixel();
  puVar7 = current_font;
  if (iVar8 == 2) {
    uVar9 = (uint)*param_1;
    if (*param_1 != 0) {
      iVar3 = (int)((param_8 & 0xffffffff) >> 1);
      iVar4 = *(int *)(current_font + 4);
      uVar15 = 0;
      uVar16 = 1;
      iVar8 = param_4;
      do {
        if (uVar9 != 10) goto LAB_00187de8;
        param_5 = param_5 + iVar4;
        iVar8 = param_4;
LAB_00187dd0:
        uVar9 = (uint)param_1[uVar16];
        uVar15 = uVar15 + 1;
        if ((uVar9 == 0 && uVar15 <= param_9) && (uVar9 != 0 || param_9 != uVar15)) {
          uVar9 = 0x20;
LAB_00187de8:
          iVar12 = *(int *)puVar7;
          iVar8 = iVar8 + iVar12;
          uVar9 = *(uint *)(puVar7 + (long)(int)uVar9 * 4 + 0x2008);
          uVar10 = iVar8 + iVar3 * param_5;
          uVar11 = uVar9 + iVar4;
          if (iVar4 != 0) {
            do {
              while( true ) {
                uVar14 = (ulong)(uVar10 - iVar12);
                uVar5 = *(ushort *)(puVar7 + (ulong)uVar9 * 2 + 8);
                if (iVar12 != 0) break;
LAB_00187e58:
                uVar9 = uVar9 + 1;
                uVar10 = uVar10 + iVar3;
                if (uVar9 == uVar11) goto LAB_00187dd0;
              }
              iVar1 = (uVar10 - iVar12) + 0xf;
              uVar6 = (undefined2)param_2;
              if (param_7 != 0) {
                if ((param_3 & 0x10000) == 0) {
                  do {
                    while (iVar13 = (int)uVar14, (uVar5 >> (ulong)(iVar1 - iVar13 & 0x1f) & 1) != 0)
                    {
                      *(undefined2 *)(param_6 + uVar14 * 2) = uVar6;
                      uVar14 = (ulong)(iVar13 + 1U);
                      if (iVar13 + 1U == uVar10) goto LAB_00187e58;
                    }
                    *(short *)(param_6 + uVar14 * 2) = (short)param_3;
                    uVar14 = (ulong)(iVar13 + 1U);
                  } while (iVar13 + 1U != uVar10);
                }
                else {
                  do {
                    if ((uVar5 >> (ulong)(iVar1 - (int)uVar14 & 0x1f) & 1) == 0) {
                      *(undefined2 *)(param_6 + uVar14 * 2) = *(undefined2 *)(param_7 + uVar14 * 2);
                    }
                    else {
                      *(undefined2 *)(param_6 + uVar14 * 2) = uVar6;
                    }
                    uVar2 = (int)uVar14 + 1;
                    uVar14 = (ulong)uVar2;
                  } while (uVar2 != uVar10);
                }
                goto LAB_00187e58;
              }
              if ((param_3 & 0x10000) == 0) {
                do {
                  if ((uVar5 >> (ulong)(iVar1 - (int)uVar14 & 0x1f) & 1) == 0) {
                    *(short *)(param_6 + uVar14 * 2) = (short)param_3;
                  }
                  else {
                    *(undefined2 *)(param_6 + uVar14 * 2) = uVar6;
                  }
                  uVar2 = (int)uVar14 + 1;
                  uVar14 = (ulong)uVar2;
                } while (uVar2 != uVar10);
                goto LAB_00187e58;
              }
              do {
                if ((uVar5 >> (ulong)(iVar1 - (int)uVar14 & 0x1f) & 1) != 0) {
                  *(undefined2 *)(param_6 + uVar14 * 2) = uVar6;
                }
                uVar2 = (int)uVar14 + 1;
                uVar14 = (ulong)uVar2;
              } while (uVar2 != uVar10);
              uVar9 = uVar9 + 1;
              uVar10 = uVar10 + iVar3;
            } while (uVar9 != uVar11);
          }
          goto LAB_00187dd0;
        }
        uVar16 = (ulong)((int)uVar16 + 1);
      } while (uVar9 != 0);
    }
  }
  else {
    uVar9 = (uint)*param_1;
    if (*param_1 != 0) {
      iVar4 = (int)((param_8 & 0xffffffff) >> 2);
      uVar11 = *(uint *)(current_font + 4);
      uVar15 = 0;
      uVar16 = 1;
      iVar8 = param_4;
      do {
        if (uVar9 != 10) goto LAB_00187cd0;
        uVar9 = (uint)param_1[uVar16];
        uVar15 = uVar15 + 1;
        param_5 = param_5 + uVar11;
        iVar8 = param_4;
        if (uVar9 == 0 && uVar15 < param_9) {
          do {
            uVar9 = 0x20;
LAB_00187cd0:
            uVar10 = *(uint *)puVar7;
            iVar3 = *(int *)(puVar7 + (long)(int)uVar9 * 4 + 0x2008);
            if (uVar11 != 0) {
              iVar12 = iVar8 + iVar4 * param_5;
              uVar9 = 0;
              do {
                uVar5 = *(ushort *)(puVar7 + (ulong)(iVar3 + uVar9) * 2 + 8);
                if (uVar10 != 0) {
                  uVar11 = 0;
                  do {
                    while ((uVar5 >> (ulong)(0xf - uVar11 & 0x1f) & 1) != 0) {
                      *(uint *)(param_6 + (ulong)(iVar12 + uVar11) * 4) =
                           ((uint)((param_2 & 0xffffffff) >> 5) & 0x3f) << 10 |
                           ((uint)((param_2 & 0xffffffff) >> 0xb) & 0x1f) << 0x13 |
                           ((uint)param_2 & 0x1f) << 3;
                      uVar11 = uVar11 + 1;
                      uVar10 = *(uint *)puVar7;
                      if (uVar10 <= uVar11) goto LAB_00187d24;
                    }
                    *(uint *)(param_6 + (ulong)(iVar12 + uVar11) * 4) =
                         ((uint)((param_3 & 0xffffffff) >> 5) & 0x3f) << 10 |
                         ((uint)((param_3 & 0xffffffff) >> 0xb) & 0x1f) << 0x13 |
                         ((uint)param_3 & 0x1f) << 3;
                    uVar11 = uVar11 + 1;
                    uVar10 = *(uint *)puVar7;
                  } while (uVar11 < uVar10);
LAB_00187d24:
                  uVar11 = *(uint *)(puVar7 + 4);
                }
                uVar9 = uVar9 + 1;
                iVar12 = iVar12 + iVar4;
              } while (uVar9 < uVar11);
            }
            iVar8 = iVar8 + uVar10;
            uVar9 = (uint)param_1[uVar16];
            uVar15 = uVar15 + 1;
          } while (uVar9 == 0 && uVar15 < param_9);
        }
        uVar16 = (ulong)((int)uVar16 + 1);
      } while (uVar9 != 0);
    }
  }
  return;
}


