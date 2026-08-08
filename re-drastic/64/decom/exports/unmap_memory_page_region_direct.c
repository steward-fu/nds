/*
 * Ghidra decompilation
 *
 * Function : unmap_memory_page_region_direct
 * Address  : 00113b70
 * Program  : drastic64
 */


void unmap_memory_page_region_direct(long param_1,ulong param_2,int param_3)

{
  long lVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  
  uVar19 = param_2 >> 0x15 & 0x7ff;
  lVar1 = param_1 + 0x1004018;
  uVar16 = param_3 + -1 + (int)param_2;
  uVar11 = param_2 >> 0x10 & 0x1f;
  uVar17 = *(uint *)(lVar1 + uVar19 * 4);
  uVar18 = (uint)uVar19;
  uVar10 = uVar16 >> 0x15;
  uVar9 = uVar16 >> 0x10 & 0x1f;
  uVar6 = (uint)uVar11;
  uVar4 = 1 << uVar11;
  uVar11 = param_2 >> 0xb & 0x1f;
  uVar8 = uVar6 + uVar18 * 0x20;
  uVar7 = uVar17 & uVar4;
  uVar5 = uVar16 >> 0xb & 0x1f;
  iVar15 = 1;
  iVar2 = (int)uVar11;
  if (uVar18 != uVar16 >> 0x15) {
    uVar16 = uVar17;
    if (uVar7 != 0) {
      uVar16 = iVar2 + uVar8 * 0x20;
      if (uVar16 + 1 <= uVar16 + 0x20) {
        iVar15 = 0x20;
      }
      uVar7 = *(uint *)(param_1 + 0x1000018 + (ulong)uVar8 * 4);
      uVar6 = 1 << uVar11;
      uVar13 = uVar16;
      uVar14 = uVar16 + 1;
      while( true ) {
        if ((uVar7 & uVar6) != 0) {
          uVar7 = uVar7 & (uVar6 ^ 0xffffffff);
          *(undefined8 *)(param_1 + (ulong)uVar13 * 8) = 0x4000000000000000;
        }
        uVar6 = uVar6 * 2;
        if (iVar15 + uVar16 == uVar14) break;
        uVar13 = uVar14;
        uVar14 = uVar14 + 1;
      }
      uVar16 = uVar17 & (uVar4 ^ 0xffffffff);
      if (uVar7 != 0) {
        uVar16 = uVar17;
      }
      *(uint *)(param_1 + 0x1000018 + (ulong)uVar8 * 4) = uVar7;
    }
    uVar11 = (ulong)(uVar8 + 1);
    uVar4 = uVar4 * 2;
    if ((uVar8 + 1 & 0x1f) != 0) {
      do {
        while (iVar15 = (int)uVar11, (uVar4 & uVar16) == 0) {
          uVar11 = (ulong)(iVar15 + 1U);
          uVar4 = uVar4 * 2;
          if ((iVar15 + 1U & 0x1f) == 0) goto LAB_00113cb0;
        }
        uVar8 = iVar15 << 5;
        uVar7 = *(uint *)(param_1 + 0x1000018 + uVar11 * 4);
        *(undefined4 *)(param_1 + 0x1000018 + uVar11 * 4) = 0;
        for (; uVar7 != 0; uVar7 = uVar7 >> 1) {
          if ((uVar7 & 1) != 0) {
            *(undefined8 *)(param_1 + (ulong)uVar8 * 8) = 0x4000000000000000;
          }
          uVar8 = uVar8 + 1;
        }
        uVar11 = (ulong)(iVar15 + 1U);
        uVar16 = uVar16 & (uVar4 ^ 0xffffffff);
        uVar4 = uVar4 * 2;
      } while ((iVar15 + 1U & 0x1f) != 0);
    }
LAB_00113cb0:
    *(uint *)(lVar1 + uVar19 * 4) = uVar16;
    uVar16 = uVar18 + 1;
    if (uVar16 < uVar10) {
      uVar8 = uVar18 * 0x20 + 0x20;
      puVar3 = (uint *)(param_1 + (ulong)uVar16 * 4 + 0x1004018);
      do {
        uVar17 = *puVar3;
        *puVar3 = 0;
        uVar7 = uVar8 << 5;
        uVar4 = uVar8;
        for (; uVar17 != 0; uVar17 = uVar17 >> 1) {
          if ((uVar17 & 1) != 0) {
            uVar13 = *(uint *)(param_1 + 0x1000018 + (ulong)uVar4 * 4);
            *(undefined4 *)(param_1 + 0x1000018 + (ulong)uVar4 * 4) = 0;
            uVar6 = uVar7;
            for (; uVar13 != 0; uVar13 = uVar13 >> 1) {
              if ((uVar13 & 1) != 0) {
                *(undefined8 *)(param_1 + (ulong)uVar6 * 8) = 0x4000000000000000;
              }
              uVar6 = uVar6 + 1;
            }
          }
          uVar7 = uVar7 + 0x20;
          uVar4 = uVar4 + 1;
        }
        uVar8 = uVar8 + 0x20;
        puVar3 = puVar3 + 1;
      } while (uVar10 << 5 != uVar8);
      uVar16 = uVar10 + uVar16 + ~uVar18;
    }
    uVar8 = uVar16 * 0x20;
    uVar9 = uVar9 + uVar8;
    uVar7 = *(uint *)(lVar1 + (ulong)uVar16 * 4);
    if (uVar8 < uVar9) {
      uVar17 = 1;
      puVar3 = (uint *)(param_1 + ((ulong)uVar8 + 0x400006) * 4);
      do {
        while ((uVar17 & uVar7) == 0) {
          uVar8 = uVar8 + 1;
          uVar17 = uVar17 * 2;
          puVar3 = puVar3 + 1;
          if (uVar9 == uVar8) goto LAB_00113dc4;
        }
        uVar10 = *puVar3;
        *puVar3 = 0;
        uVar4 = uVar8 << 5;
        for (; uVar10 != 0; uVar10 = uVar10 >> 1) {
          if ((uVar10 & 1) != 0) {
            *(undefined8 *)(param_1 + (ulong)uVar4 * 8) = 0x4000000000000000;
          }
          uVar4 = uVar4 + 1;
        }
        uVar8 = uVar8 + 1;
        uVar7 = uVar7 & (uVar17 ^ 0xffffffff);
        uVar17 = uVar17 * 2;
        puVar3 = puVar3 + 1;
      } while (uVar9 != uVar8);
    }
    else {
      uVar17 = 1;
      uVar9 = uVar8;
    }
LAB_00113dc4:
    uVar8 = uVar7;
    if ((uVar17 & uVar7) != 0) {
      uVar8 = uVar9 * 0x20;
      uVar4 = uVar5 + uVar8;
      uVar10 = *(uint *)(param_1 + 0x1000018 + (ulong)uVar9 * 4);
      if (!CARRY4(uVar5,uVar8)) {
        uVar5 = 1;
        do {
          if ((uVar5 & uVar10) != 0) {
            uVar10 = uVar10 & (uVar5 ^ 0xffffffff);
            *(undefined8 *)(param_1 + (ulong)uVar8 * 8) = 0x4000000000000000;
          }
          uVar8 = uVar8 + 1;
          uVar5 = uVar5 * 2;
        } while (uVar8 <= uVar4);
      }
      uVar8 = uVar7 & (uVar17 ^ 0xffffffff);
      if (uVar10 != 0) {
        uVar8 = uVar7;
      }
      *(uint *)(param_1 + 0x1000018 + (ulong)uVar9 * 4) = uVar10;
    }
    *(uint *)(lVar1 + (ulong)uVar16 * 4) = uVar8;
    return;
  }
  if (uVar6 == uVar9) {
    if (uVar7 != 0) {
      uVar16 = iVar2 + uVar8 * 0x20;
      uVar12 = (ulong)uVar16;
      uVar9 = *(uint *)(param_1 + 0x1000018 + (ulong)uVar8 * 4);
      uVar7 = 1 << uVar11;
      do {
        if ((uVar9 & uVar7) != 0) {
          uVar9 = uVar9 & (uVar7 ^ 0xffffffff);
          *(undefined8 *)(param_1 + uVar12 * 8) = 0x4000000000000000;
        }
        uVar12 = uVar12 + 1;
        uVar7 = uVar7 * 2;
      } while ((uint)uVar12 <= uVar5 + uVar16);
      *(uint *)(param_1 + 0x1000018 + (ulong)uVar8 * 4) = uVar9;
      uVar16 = uVar17 & (uVar4 ^ 0xffffffff);
      if (uVar9 != 0) {
        uVar16 = uVar17;
      }
      *(uint *)(lVar1 + uVar19 * 4) = uVar16;
      return;
    }
  }
  else {
    uVar9 = uVar9 + uVar8;
    uVar16 = uVar17;
    if (uVar7 != 0) {
      uVar16 = iVar2 + uVar8 * 0x20;
      if (uVar16 + 1 <= uVar16 + 0x20) {
        iVar15 = 0x20;
      }
      uVar7 = *(uint *)(param_1 + 0x1000018 + (ulong)uVar8 * 4);
      uVar10 = 1 << uVar11;
      uVar6 = uVar16;
      uVar18 = uVar16 + 1;
      while( true ) {
        if ((uVar7 & uVar10) != 0) {
          uVar7 = uVar7 & (uVar10 ^ 0xffffffff);
          *(undefined8 *)(param_1 + (ulong)uVar6 * 8) = 0x4000000000000000;
        }
        uVar10 = uVar10 * 2;
        if (uVar18 == iVar15 + uVar16) break;
        uVar6 = uVar18;
        uVar18 = uVar18 + 1;
      }
      uVar16 = uVar17 & (uVar4 ^ 0xffffffff);
      if (uVar7 == 0) {
        uVar16 = uVar17;
      }
      *(uint *)(param_1 + 0x1000018 + (ulong)uVar8 * 4) = uVar7;
    }
    uVar7 = uVar8 + 1;
    uVar11 = (ulong)uVar7;
    uVar4 = uVar4 * 2;
    if (uVar7 < uVar9) {
      do {
        while (uVar17 = uVar4, (uVar16 & uVar17) == 0) {
          uVar11 = uVar11 + 1;
          uVar4 = uVar17 * 2;
          if (uVar9 <= (uint)uVar11) goto LAB_00113f58;
        }
        uVar10 = *(uint *)(param_1 + 0x1000018 + uVar11 * 4);
        *(undefined4 *)(param_1 + 0x1000018 + uVar11 * 4) = 0;
        uVar4 = (int)uVar11 << 5;
        for (; uVar10 != 0; uVar10 = uVar10 >> 1) {
          if ((uVar10 & 1) != 0) {
            *(undefined8 *)(param_1 + (ulong)uVar4 * 8) = 0x4000000000000000;
          }
          uVar4 = uVar4 + 1;
        }
        uVar11 = uVar11 + 1;
        uVar16 = uVar16 & (uVar17 ^ 0xffffffff);
        uVar4 = uVar17 * 2;
      } while ((uint)uVar11 < uVar9);
LAB_00113f58:
      uVar4 = uVar17 * 2;
      uVar11 = (ulong)(~uVar8 + uVar9 + uVar7);
    }
    uVar17 = uVar16;
    if ((uVar4 & uVar16) != 0) {
      uVar8 = (int)uVar11 * 0x20;
      uVar9 = uVar5 + uVar8;
      uVar7 = *(uint *)(param_1 + 0x1000018 + uVar11 * 4);
      if (!CARRY4(uVar5,uVar8)) {
        uVar17 = 1;
        do {
          if ((uVar7 & uVar17) != 0) {
            uVar7 = uVar7 & (uVar17 ^ 0xffffffff);
            *(undefined8 *)(param_1 + (ulong)uVar8 * 8) = 0x4000000000000000;
          }
          uVar8 = uVar8 + 1;
          uVar17 = uVar17 * 2;
        } while (uVar8 <= uVar9);
      }
      uVar17 = uVar16 & (uVar4 ^ 0xffffffff);
      if (uVar7 != 0) {
        uVar17 = uVar16;
      }
      *(uint *)(param_1 + 0x1000018 + uVar11 * 4) = uVar7;
    }
  }
  *(uint *)(lVar1 + uVar19 * 4) = uVar17;
  return;
}


