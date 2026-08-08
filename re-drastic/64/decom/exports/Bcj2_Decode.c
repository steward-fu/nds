/*
 * Ghidra decompilation
 *
 * Function : Bcj2_Decode
 * Address  : 001eb600
 * Program  : drastic64
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Bcj2_Decode(long param_1,long param_2,uint *param_3,ulong param_4,uint *param_5,ulong param_6,
                byte *param_7,long param_8,long param_9,long param_10)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  bool bVar9;
  undefined8 *puVar10;
  uint *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *pbVar21;
  uint uVar22;
  ulong uVar23;
  uint *puVar24;
  undefined8 auStack_210 [64];
  undefined8 local_10;
  long local_8;
  undefined8 *puVar11;
  
  lVar8 = ___stack_chk_guard;
  local_8 = ___stack_chk_guard;
  puVar10 = auStack_210;
  do {
    puVar11 = puVar10 + 2;
    puVar10[1] = 0x400040004000400;
    *puVar10 = 0x400040004000400;
    puVar10 = puVar11;
  } while (&local_10 != puVar11);
  local_10._0_4_ = 0x4000400;
  pbVar1 = param_7 + param_8;
  if ((((param_7 == pbVar1) || (pbVar1 == param_7 + 1)) || (pbVar1 == param_7 + 2)) ||
     ((pbVar1 == param_7 + 3 || (pbVar1 == param_7 + 4)))) {
LAB_001eb8d0:
    bVar9 = true;
  }
  else {
    bVar9 = false;
    uVar22 = CONCAT31(CONCAT21(CONCAT11(param_7[1],param_7[2]),param_7[3]),param_7[4]);
    if (param_10 != 0) {
      uVar13 = 0;
      uVar23 = 0xffffffff;
      lVar15 = 0;
      lVar17 = 0;
      pbVar20 = param_7 + 5;
LAB_001eb700:
      uVar19 = param_10 - lVar15;
      if ((ulong)(param_2 - lVar17) < (ulong)(param_10 - lVar15)) {
        uVar19 = param_2 - lVar17;
      }
      uVar14 = uVar13;
      lVar16 = lVar15;
      lVar18 = lVar17;
      if (uVar19 != 0) {
        do {
          lVar15 = lVar16 + 1;
          bVar4 = *(byte *)(param_1 + lVar18);
          *(byte *)(param_9 + -1 + lVar15) = bVar4;
          if (((bVar4 & 0xfe) == 0xe8) || (((int)uVar14 == 0xf && ((bVar4 & 0xf0) == 0x80)))) {
            if (param_10 == lVar15) break;
            bVar4 = *(byte *)(param_1 + lVar18);
            uVar13 = (ulong)bVar4;
            puVar2 = (undefined4 *)&local_10;
            if (bVar4 != 0xe9) {
              puVar2 = (undefined4 *)((long)&local_10 + 2);
            }
            puVar3 = (undefined4 *)((long)auStack_210 + uVar14 * 2);
            if (bVar4 != 0xe8) {
              puVar3 = puVar2;
            }
            lVar17 = lVar18 + 1;
            uVar5 = *(ushort *)puVar3;
            uVar6 = (int)(uVar23 >> 0xb) * (uint)uVar5;
            if (uVar6 <= uVar22) {
              *(ushort *)puVar3 = uVar5 - (uVar5 >> 5);
              uVar7 = (int)uVar23 - uVar6;
              uVar22 = uVar22 - uVar6;
              pbVar21 = pbVar20;
              if (uVar7 < 0x1000000) {
                if (pbVar20 == pbVar1) goto LAB_001eb8d0;
                pbVar21 = pbVar20 + 1;
                uVar7 = uVar7 * 0x100;
                uVar22 = (uint)*pbVar20 | uVar22 * 0x100;
              }
              uVar23 = (ulong)uVar7;
              if (bVar4 == 0xe8) {
                if (param_4 < 4) goto LAB_001eb8d0;
                param_4 = param_4 - 4;
                puVar24 = param_3 + 1;
                puVar12 = param_3;
              }
              else {
                if (param_6 < 4) goto LAB_001eb8d0;
                param_6 = param_6 - 4;
                puVar12 = param_5;
                param_5 = param_5 + 1;
                puVar24 = param_3;
              }
              uVar6 = (*puVar12 & 0xff00ff00) >> 8 | (*puVar12 & 0xff00ff) << 8;
              uVar6 = (-4 - (int)lVar15) + (uVar6 >> 0x10 | uVar6 << 0x10);
              *(char *)(param_9 + lVar15) = (char)uVar6;
              if (param_10 != lVar16 + 2) {
                *(char *)(param_9 + lVar16 + 2) = (char)(uVar6 >> 8);
                lVar15 = lVar16 + 3;
                if (param_10 == lVar15) break;
                *(char *)(param_9 + lVar15) = (char)(uVar6 >> 0x10);
                if (param_10 != lVar16 + 4) {
                  uVar13 = (ulong)(uVar6 >> 0x18);
                  lVar15 = lVar16 + 5;
                  *(char *)(param_9 + lVar16 + 4) = (char)(uVar6 >> 0x18);
                  pbVar20 = pbVar21;
                  param_3 = puVar24;
                  goto LAB_001eb700;
                }
              }
              bVar9 = false;
              goto LAB_001eb7dc;
            }
            *(ushort *)puVar3 = uVar5 + (short)(0x800 - uVar5 >> 5);
            if (0xffffff < uVar6) goto LAB_001eb8ac;
            if (pbVar20 == pbVar1) goto LAB_001eb8d0;
            uVar23 = (ulong)(uVar6 * 0x100);
            pbVar21 = pbVar20 + 1;
            uVar22 = (uint)*pbVar20 | uVar22 << 8;
            uVar14 = uVar13;
            uVar19 = param_10 - lVar15;
            pbVar20 = pbVar21;
            if ((ulong)(param_2 - lVar17) < (ulong)(param_10 - lVar15)) {
              uVar19 = param_2 - lVar17;
            }
          }
          else {
            uVar14 = (ulong)bVar4;
            uVar19 = uVar19 - 1;
          }
          lVar18 = lVar18 + 1;
          lVar16 = lVar15;
          if (uVar19 == 0) break;
        } while( true );
      }
      bVar9 = lVar15 != param_10;
    }
  }
LAB_001eb7dc:
  if (lVar8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar9,lVar8 - ___stack_chk_guard,0);
LAB_001eb8ac:
  uVar23 = (ulong)uVar6;
  goto LAB_001eb700;
}


