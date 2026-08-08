/*
 * Ghidra decompilation
 *
 * Function : FUN_0800a1fc
 * Address  : 0800a1fc
 * Program  : drastic16
 */


void FUN_0800a1fc(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  
  uVar5 = param_3 + -1 + param_2;
  uVar7 = param_2 >> 0x15;
  uVar14 = uVar5 >> 0x15;
  uVar8 = uVar5 * 0x800 >> 0x1b;
  uVar6 = uVar5 * 0x10000 >> 0x1b;
  uVar11 = (param_2 << 0xb) >> 0x1b;
  uVar5 = (param_2 << 0x10) >> 0x1b;
  if (uVar7 != uVar14) {
    iVar1 = param_1 + 0x80400c;
    uVar16 = 1 << uVar11;
    iVar12 = uVar11 + uVar7 * 0x20;
    puVar9 = (undefined4 *)(iVar1 + uVar7 * 4);
    uVar11 = *(uint *)(iVar1 + uVar7 * 4);
    if ((uVar16 & uVar11) != 0) {
      uVar4 = uVar5 + iVar12 * 0x20;
      uVar15 = uVar4 + 0x1f;
      uVar5 = 1 << uVar5;
      uVar2 = *(uint *)(param_1 + 0x80000c + iVar12 * 4);
      if (uVar4 < 0xffffffe1) {
        iVar17 = uVar4 * 4;
        iVar3 = 0;
        do {
          uVar4 = uVar4 + 1;
          if ((uVar5 & uVar2) != 0) {
            uVar2 = uVar2 & ~uVar5;
            *(undefined4 *)(param_1 + iVar17 + iVar3) = 0x40000000;
          }
          uVar5 = uVar5 << 1;
          iVar3 = iVar3 + 4;
        } while (uVar4 <= uVar15);
      }
      *(uint *)(param_1 + 0x80000c + iVar12 * 4) = uVar2;
      if (uVar2 == 0) {
        uVar11 = uVar11 & ~uVar16;
      }
    }
    uVar5 = iVar12 + 1;
    if ((uVar5 & 0x1f) != 0) {
      iVar17 = param_1 + uVar5 * 0x80;
      puVar13 = (uint *)(param_1 + (iVar12 + 0x200004) * 4);
      do {
        uVar16 = uVar16 << 1;
        if ((uVar11 & uVar16) != 0) {
          uVar2 = *puVar13;
          *puVar13 = 0;
          if (uVar2 != 0) {
            iVar12 = 0;
            do {
              if ((uVar2 & 1) != 0) {
                *(undefined4 *)(iVar17 + iVar12) = 0x40000000;
              }
              uVar2 = uVar2 >> 1;
              iVar12 = iVar12 + 4;
            } while (uVar2 != 0);
          }
          uVar11 = uVar11 & ~uVar16;
        }
        uVar5 = uVar5 + 1;
        puVar13 = puVar13 + 1;
        iVar17 = iVar17 + 0x80;
      } while ((uVar5 & 0x1f) != 0);
    }
    uVar5 = uVar7 + 1;
    *(uint *)(iVar1 + uVar7 * 4) = uVar11;
    if (uVar5 < uVar14) {
      puVar13 = (uint *)(param_1 + uVar5 * 0x80 + 0x80000c);
      iVar12 = param_1 + uVar5 * 0x1000;
      do {
        uVar11 = puVar9[1];
        puVar9 = puVar9 + 1;
        *puVar9 = 0;
        puVar10 = puVar13;
        iVar17 = iVar12;
        for (; uVar11 != 0; uVar11 = uVar11 >> 1) {
          if ((uVar11 & 1) != 0) {
            uVar16 = *puVar10;
            *puVar10 = 0;
            if (uVar16 != 0) {
              iVar3 = 0;
              do {
                if ((uVar16 & 1) != 0) {
                  *(undefined4 *)(iVar17 + iVar3) = 0x40000000;
                }
                uVar16 = uVar16 >> 1;
                iVar3 = iVar3 + 4;
              } while (uVar16 != 0);
            }
          }
          puVar10 = puVar10 + 1;
          iVar17 = iVar17 + 0x80;
        }
        puVar13 = puVar13 + 0x20;
        iVar12 = iVar12 + 0x1000;
      } while (puVar9 != (undefined4 *)(param_1 + 0x804008 + uVar14 * 4));
      uVar5 = (uVar14 + uVar5 + -1) - uVar7;
    }
    uVar7 = uVar5 * 0x20;
    uVar14 = *(uint *)(iVar1 + uVar5 * 4);
    uVar8 = uVar7 + uVar8;
    if (uVar7 < uVar8) {
      iVar12 = param_1 + uVar5 * 0x1000;
      uVar11 = 1;
      puVar13 = (uint *)(param_1 + (uVar7 + 0x200003) * 4);
      uVar16 = uVar7;
      do {
        if ((uVar11 & uVar14) != 0) {
          uVar7 = *puVar13;
          *puVar13 = 0;
          if (uVar7 != 0) {
            iVar17 = 0;
            do {
              if ((uVar7 & 1) != 0) {
                *(undefined4 *)(iVar12 + iVar17) = 0x40000000;
              }
              uVar7 = uVar7 >> 1;
              iVar17 = iVar17 + 4;
            } while (uVar7 != 0);
          }
          uVar14 = uVar14 & ~uVar11;
        }
        uVar16 = uVar16 + 1;
        uVar11 = uVar11 << 1;
        puVar13 = puVar13 + 1;
        iVar12 = iVar12 + 0x80;
        uVar7 = uVar8;
      } while (uVar16 != uVar8);
    }
    else {
      uVar11 = 1;
    }
    if ((uVar11 & uVar14) != 0) {
      uVar8 = uVar7 * 0x20;
      uVar2 = uVar8 + uVar6;
      uVar16 = *(uint *)(param_1 + 0x80000c + uVar7 * 4);
      if (!CARRY4(uVar8,uVar6)) {
        iVar12 = 0;
        uVar6 = 1;
        do {
          uVar8 = uVar8 + 1;
          if ((uVar6 & uVar16) != 0) {
            uVar16 = uVar16 & ~uVar6;
            *(undefined4 *)(param_1 + uVar7 * 0x80 + iVar12) = 0x40000000;
          }
          uVar6 = uVar6 << 1;
          iVar12 = iVar12 + 4;
        } while (uVar8 <= uVar2);
      }
      *(uint *)(param_1 + 0x80000c + uVar7 * 4) = uVar16;
      if (uVar16 == 0) {
        uVar14 = uVar14 & ~uVar11;
      }
    }
    *(uint *)(iVar1 + uVar5 * 4) = uVar14;
    return;
  }
  iVar1 = uVar11 + uVar7 * 0x20;
  uVar16 = *(uint *)(param_1 + 0x80400c + uVar7 * 4);
  uVar14 = 1 << uVar11;
  if (uVar11 == uVar8) {
    if ((uVar14 & uVar16) == 0) goto LAB_0800a5c0;
    uVar11 = uVar5 + iVar1 * 0x20;
    uVar5 = 1 << uVar5;
    uVar2 = uVar11 + uVar6;
    uVar8 = *(uint *)(param_1 + 0x80000c + iVar1 * 4);
    if (!CARRY4(uVar11,uVar6)) {
      iVar12 = uVar11 * 4;
      iVar17 = 0;
      do {
        uVar11 = uVar11 + 1;
        if ((uVar8 & uVar5) != 0) {
          uVar8 = uVar8 & ~uVar5;
          *(undefined4 *)(param_1 + iVar12 + iVar17) = 0x40000000;
        }
        uVar5 = uVar5 << 1;
        iVar17 = iVar17 + 4;
      } while (uVar11 <= uVar2);
    }
    *(uint *)(param_1 + 0x80000c + iVar1 * 4) = uVar8;
  }
  else {
    if ((uVar14 & uVar16) != 0) {
      uVar2 = uVar5 + iVar1 * 0x20;
      uVar4 = uVar2 + 0x1f;
      uVar5 = 1 << uVar5;
      uVar11 = *(uint *)(param_1 + 0x80000c + iVar1 * 4);
      if (uVar2 < 0xffffffe1) {
        iVar12 = uVar2 * 4;
        iVar17 = 0;
        do {
          bVar18 = (uVar11 & uVar5) != 0;
          uVar2 = uVar2 + 1;
          if (bVar18) {
            uVar11 = uVar11 & ~uVar5;
          }
          uVar5 = uVar5 << 1;
          if (bVar18) {
            *(undefined4 *)(param_1 + iVar12 + iVar17) = 0x40000000;
          }
          iVar17 = iVar17 + 4;
        } while (uVar2 <= uVar4);
      }
      *(uint *)(param_1 + 0x80000c + iVar1 * 4) = uVar11;
      if (uVar11 != 0) {
        uVar16 = uVar16 & ~uVar14;
      }
    }
    uVar5 = iVar1 + 1;
    uVar14 = uVar14 << 1;
    if (uVar5 < iVar1 + uVar8) {
      iVar12 = param_1 + uVar5 * 0x80;
      puVar13 = (uint *)(param_1 + (iVar1 + 0x200004) * 4);
      uVar11 = uVar5;
      do {
        if ((uVar16 & uVar14) != 0) {
          uVar2 = *puVar13;
          *puVar13 = 0;
          iVar17 = 0;
          for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
            if ((uVar2 & 1) != 0) {
              *(undefined4 *)(iVar12 + iVar17) = 0x40000000;
            }
            iVar17 = iVar17 + 4;
          }
          uVar16 = uVar16 & ~uVar14;
        }
        uVar11 = uVar11 + 1;
        uVar14 = uVar14 << 1;
        puVar13 = puVar13 + 1;
        iVar12 = iVar12 + 0x80;
      } while (uVar11 != iVar1 + uVar8);
      uVar5 = (uVar11 + uVar5 + -1) - iVar1;
    }
    if ((uVar14 & uVar16) == 0) goto LAB_0800a5c0;
    uVar11 = uVar5 * 0x20;
    uVar2 = uVar11 + uVar6;
    uVar8 = *(uint *)(param_1 + 0x80000c + uVar5 * 4);
    if (!CARRY4(uVar11,uVar6)) {
      iVar1 = 0;
      uVar6 = 1;
      do {
        uVar11 = uVar11 + 1;
        if ((uVar6 & uVar8) != 0) {
          uVar8 = uVar8 & ~uVar6;
          *(undefined4 *)(param_1 + uVar5 * 0x80 + iVar1) = 0x40000000;
        }
        uVar6 = uVar6 << 1;
        iVar1 = iVar1 + 4;
      } while (uVar11 <= uVar2);
    }
    *(uint *)(param_1 + 0x80000c + uVar5 * 4) = uVar8;
  }
  if (uVar8 == 0) {
    uVar16 = uVar16 & ~uVar14;
  }
LAB_0800a5c0:
  *(uint *)(param_1 + 0x80400c + uVar7 * 4) = uVar16;
  return;
}


