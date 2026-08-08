/*
 * Ghidra decompilation
 *
 * Function : propagatemark
 * Address  : 001f8b20
 * Program  : drastic64
 */


void propagatemark(long param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  long **pplVar8;
  long lVar9;
  int iVar10;
  long **pplVar11;
  long *plVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  uint uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar20;
  
  lVar20 = *(long *)(param_1 + 0x70);
  bVar2 = *(byte *)(lVar20 + 9);
  bVar3 = *(byte *)(lVar20 + 8);
  *(byte *)(lVar20 + 9) = bVar2 | 4;
  if (bVar3 == 8) {
    plVar16 = *(long **)(lVar20 + 0x38);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar20 + 0x48);
    *(undefined8 *)(lVar20 + 0x48) = *(undefined8 *)(param_1 + 0x78);
    *(long *)(param_1 + 0x78) = lVar20;
    *(byte *)(lVar20 + 9) = bVar2 & 0xfb;
    if (plVar16 == (long *)0x0) {
      uVar15 = 1;
    }
    else {
      plVar12 = *(long **)(lVar20 + 0x10);
      if (plVar16 < plVar12) {
        do {
          while (((*(uint *)(plVar16 + 1) >> 6 & 1) == 0 || ((*(byte *)(*plVar16 + 9) & 3) == 0))) {
            plVar16 = plVar16 + 2;
            if (plVar12 <= plVar16) goto LAB_001f8e28;
          }
          reallymarkobject(param_1);
          plVar12 = *(long **)(lVar20 + 0x10);
          plVar16 = plVar16 + 2;
        } while (plVar16 < plVar12);
      }
LAB_001f8e28:
      if (*(char *)(param_1 + 0x55) == '\b') {
        lVar9 = *(long *)(lVar20 + 0x38);
        lVar5 = (long)*(int *)(lVar20 + 0xb8);
        for (; plVar16 < (long *)(lVar9 + lVar5 * 0x10); plVar16 = plVar16 + 2) {
          *(undefined4 *)(plVar16 + 1) = 0;
        }
        if ((lVar20 == *(long *)(lVar20 + 0x50)) && (*(long *)(lVar20 + 0x40) != 0)) {
          *(undefined8 *)(lVar20 + 0x50) = *(undefined8 *)(param_1 + 0xa8);
          *(long *)(param_1 + 0xa8) = lVar20;
        }
      }
      else {
        if (*(char *)(param_1 + 0x56) != '\x01') {
          luaD_shrinkstack(lVar20);
        }
        lVar5 = (long)*(int *)(lVar20 + 0xb8);
      }
      uVar15 = (lVar5 + 0xd) * 0x10;
    }
    goto LAB_001f8bd8;
  }
  if (8 < bVar3) {
    if (bVar3 == 9) {
      lVar5 = *(long *)(lVar20 + 0x60);
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar20 + 0x70);
      if ((lVar5 != 0) && ((*(byte *)(lVar5 + 9) & 3) != 0)) {
        *(undefined8 *)(lVar20 + 0x60) = 0;
      }
      if ((*(long *)(lVar20 + 0x68) != 0) && ((*(byte *)(*(long *)(lVar20 + 0x68) + 9) & 3) != 0)) {
        reallymarkobject(param_1);
      }
      iVar10 = *(int *)(lVar20 + 0x14);
      lVar5 = 0;
      uVar15 = 0;
      if (0 < iVar10) {
        do {
          while( true ) {
            uVar13 = (int)uVar15 + 1;
            uVar15 = (ulong)uVar13;
            if (((*(uint *)(*(long *)(lVar20 + 0x30) + lVar5 + 8) >> 6 & 1) == 0) ||
               ((*(byte *)(*(long *)(*(long *)(lVar20 + 0x30) + lVar5) + 9) & 3) == 0)) break;
            reallymarkobject(param_1);
            iVar10 = *(int *)(lVar20 + 0x14);
            lVar5 = lVar5 + 0x10;
            if (iVar10 <= (int)uVar15) goto LAB_001f8ee8;
          }
          lVar5 = lVar5 + 0x10;
        } while ((int)uVar13 < iVar10);
      }
LAB_001f8ee8:
      iVar10 = *(int *)(lVar20 + 0x10);
      lVar5 = 0;
      uVar15 = 0;
      if (0 < iVar10) {
        do {
          while( true ) {
            uVar13 = (int)uVar15 + 1;
            uVar15 = (ulong)uVar13;
            lVar9 = *(long *)(*(long *)(lVar20 + 0x58) + lVar5);
            lVar5 = lVar5 + 0x10;
            if ((lVar9 == 0) || ((*(byte *)(lVar9 + 9) & 3) == 0)) break;
            reallymarkobject(param_1);
            iVar10 = *(int *)(lVar20 + 0x10);
            if (iVar10 <= (int)uVar15) goto LAB_001f8f3c;
          }
        } while ((int)uVar13 < iVar10);
      }
LAB_001f8f3c:
      iVar10 = *(int *)(lVar20 + 0x20);
      lVar5 = 0;
      uVar15 = 0;
      if (0 < iVar10) {
        do {
          while( true ) {
            uVar13 = (int)uVar15 + 1;
            uVar15 = (ulong)uVar13;
            lVar9 = *(long *)(*(long *)(lVar20 + 0x40) + lVar5);
            lVar5 = lVar5 + 8;
            if ((lVar9 == 0) || ((*(byte *)(lVar9 + 9) & 3) == 0)) break;
            reallymarkobject(param_1);
            iVar10 = *(int *)(lVar20 + 0x20);
            if (iVar10 <= (int)uVar15) goto LAB_001f8f90;
          }
        } while ((int)uVar13 < iVar10);
      }
LAB_001f8f90:
      iVar4 = *(int *)(lVar20 + 0x24);
      if (0 < iVar4) {
        lVar5 = 0;
        uVar15 = 0;
        do {
          while( true ) {
            uVar13 = (int)uVar15 + 1;
            uVar15 = (ulong)uVar13;
            lVar9 = *(long *)(*(long *)(lVar20 + 0x50) + lVar5);
            lVar5 = lVar5 + 0x10;
            if ((lVar9 == 0) || ((*(byte *)(lVar9 + 9) & 3) == 0)) break;
            reallymarkobject(param_1);
            iVar4 = *(int *)(lVar20 + 0x24);
            if (iVar4 <= (int)uVar15) goto LAB_001f8fe4;
          }
        } while ((int)uVar13 < iVar4);
LAB_001f8fe4:
        iVar10 = *(int *)(lVar20 + 0x20);
      }
      uVar15 = *(long *)(lVar20 + 0x18) + *(long *)(lVar20 + 0x20) + (long)iVar10 * 2 + 0x1e +
               (*(long *)(lVar20 + 0x18) + *(long *)(lVar20 + 0x10) + (long)iVar4) * 4;
      uVar15 = -(uVar15 >> 0x1d & 1) & 0xffffffff00000000 | (uVar15 & 0x3fffffff) << 2;
    }
    else {
      if (bVar3 != 0x26) {
        return;
      }
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar20 + 0x10);
      if (*(byte *)(lVar20 + 10) == 0) {
        uVar13 = 0;
      }
      else {
        plVar16 = (long *)(lVar20 + 0x20);
        uVar15 = 0;
        uVar17 = (uint)*(byte *)(lVar20 + 10);
        do {
          while( true ) {
            uVar13 = uVar17;
            uVar1 = (int)uVar15 + 1;
            uVar15 = (ulong)uVar1;
            if (((*(uint *)(plVar16 + 1) >> 6 & 1) == 0) || ((*(byte *)(*plVar16 + 9) & 3) == 0))
            break;
            reallymarkobject(param_1);
            bVar2 = *(byte *)(lVar20 + 10);
            plVar16 = plVar16 + 2;
            uVar13 = (uint)bVar2;
            uVar17 = (uint)bVar2;
            if ((int)(uint)bVar2 <= (int)uVar15) goto LAB_001f8bc8;
          }
          plVar16 = plVar16 + 2;
          uVar17 = uVar13;
        } while ((int)uVar1 < (int)uVar13);
      }
LAB_001f8bc8:
      uVar15 = (ulong)(int)(uVar13 * 0x10 + 0x20);
    }
    goto LAB_001f8bd8;
  }
  if (bVar3 != 5) {
    if (bVar3 != 6) {
      return;
    }
    lVar5 = *(long *)(lVar20 + 0x18);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar20 + 0x10);
    if ((lVar5 != 0) && ((*(byte *)(lVar5 + 9) & 3) != 0)) {
      reallymarkobject();
    }
    uVar13 = (uint)*(byte *)(lVar20 + 10);
    lVar5 = lVar20 + 0x20;
    lVar9 = 0;
    uVar18 = 1;
    if (*(byte *)(lVar20 + 10) == 0) {
      uVar13 = 0;
    }
    else {
      do {
        pplVar8 = *(long ***)(lVar5 + lVar9 * 8);
        if (pplVar8 != (long **)0x0) {
          pplVar11 = (long **)*pplVar8;
          if ((pplVar11 == pplVar8 + 2) || (*(char *)(param_1 + 0x55) == '\b')) {
            if (((*(uint *)(pplVar11 + 1) >> 6 & 1) != 0) &&
               ((*(byte *)((long)*pplVar11 + 9) & 3) != 0)) {
              reallymarkobject(param_1);
              uVar13 = (uint)*(byte *)(lVar20 + 10);
            }
          }
          else {
            *(int *)(pplVar8 + 3) = (int)uVar18;
          }
        }
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < (int)uVar13);
    }
    uVar15 = (ulong)(int)(uVar13 * 8 + 0x20);
    goto LAB_001f8bd8;
  }
  lVar5 = *(long *)(lVar20 + 0x28);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar20 + 0x30);
  if (lVar5 == 0) {
LAB_001f8cb0:
    uVar15 = (ulong)*(uint *)(lVar20 + 0xc);
    uVar19 = (ulong)*(byte *)(lVar20 + 0xb);
    uVar13 = (uint)*(byte *)(lVar20 + 0xb);
    plVar16 = *(long **)(lVar20 + 0x18);
    plVar12 = plVar16;
    if (*(uint *)(lVar20 + 0xc) != 0) {
      uVar14 = 0;
      do {
        while( true ) {
          uVar13 = (uint)uVar19;
          lVar5 = (uVar14 & 0xffffffff) * 0x10;
          uVar17 = (int)uVar14 + 1;
          uVar14 = (ulong)uVar17;
          if (((*(uint *)(*(long *)(lVar20 + 0x10) + lVar5 + 8) >> 6 & 1) == 0) ||
             ((*(byte *)(*(long *)(*(long *)(lVar20 + 0x10) + lVar5) + 9) & 3) == 0)) break;
          reallymarkobject(param_1);
          uVar13 = (uint)uVar19;
          uVar15 = (ulong)*(uint *)(lVar20 + 0xc);
          plVar12 = plVar16;
          if (*(uint *)(lVar20 + 0xc) <= (uint)uVar14) goto LAB_001f8d10;
        }
        plVar12 = plVar16;
      } while (uVar17 < (uint)uVar15);
LAB_001f8d10:
      plVar16 = *(long **)(lVar20 + 0x18);
    }
    uVar13 = 1 << (ulong)(uVar13 & 0x1f);
    plVar12 = (long *)((long)plVar12 +
                      (-(ulong)(uVar13 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar13 << 5));
    if (plVar16 < plVar12) {
      uVar18 = 10;
      do {
        uVar13 = *(uint *)(plVar16 + 1);
        if (uVar13 == 0) {
          if (((*(uint *)(plVar16 + 3) & 0x40) != 0) && ((*(byte *)(plVar16[2] + 9) & 3) != 0)) {
            *(int *)(plVar16 + 3) = (int)uVar18;
          }
        }
        else {
          if (((*(uint *)(plVar16 + 3) & 0x40) != 0) && ((*(byte *)(plVar16[2] + 9) & 3) != 0)) {
            reallymarkobject(param_1);
            uVar13 = *(uint *)(plVar16 + 1);
          }
          if (((uVar13 >> 6 & 1) != 0) && ((*(byte *)(*plVar16 + 9) & 3) != 0)) {
            reallymarkobject(param_1);
          }
        }
        plVar16 = plVar16 + 4;
      } while (plVar16 < plVar12);
      uVar15 = ((ulong)*(uint *)(lVar20 + 0xc) +
               (long)(1 << (ulong)(*(byte *)(lVar20 + 0xb) & 0x1f)) * 2) * 0x10 + 0x38;
      goto LAB_001f8bd8;
    }
  }
  else {
    if ((*(byte *)(lVar5 + 10) >> 3 & 1) != 0) {
      if ((*(byte *)(lVar5 + 9) & 3) != 0) {
        reallymarkobject();
      }
      goto LAB_001f8cb0;
    }
    plVar16 = (long *)luaT_gettm(lVar5,3,*(undefined8 *)(param_1 + 0x110));
    if ((*(long *)(lVar20 + 0x28) != 0) && ((*(byte *)(*(long *)(lVar20 + 0x28) + 9) & 3) != 0)) {
      reallymarkobject(param_1);
    }
    if ((plVar16 == (long *)0x0) || ((*(uint *)(plVar16 + 1) & 0xf) != 4)) goto LAB_001f8cb0;
    lVar5 = *plVar16;
    pcVar6 = strchr((char *)(lVar5 + 0x20),0x6b);
    pcVar7 = strchr((char *)(lVar5 + 0x20),0x76);
    if (((ulong)pcVar6 | (ulong)pcVar7) == 0) goto LAB_001f8cb0;
    *(byte *)(lVar20 + 9) = *(byte *)(lVar20 + 9) & 0xfb;
    if (pcVar6 == (char *)0x0) {
      plVar16 = *(long **)(lVar20 + 0x18);
      uVar17 = 1 << (ulong)(*(byte *)(lVar20 + 0xb) & 0x1f);
      uVar13 = *(uint *)(lVar20 + 0xc);
      plVar12 = (long *)((long)plVar16 +
                        (-(ulong)(uVar17 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar17 << 5));
      uVar15 = (ulong)(uVar13 != 0);
      uVar17 = (uint)(uVar13 != 0);
      if (plVar16 < plVar12) {
        uVar18 = 10;
        do {
          if (*(int *)(plVar16 + 1) == 0) {
            if (((*(uint *)(plVar16 + 3) & 0x40) != 0) && ((*(byte *)(plVar16[2] + 9) & 3) != 0)) {
              *(int *)(plVar16 + 3) = (int)uVar18;
            }
          }
          else {
            if (((*(uint *)(plVar16 + 3) & 0x40) != 0) && ((*(byte *)(plVar16[2] + 9) & 3) != 0)) {
              reallymarkobject(param_1);
              uVar18 = extraout_x8;
            }
            if (((int)uVar15 == 0) && ((*(uint *)(plVar16 + 1) >> 6 & 1) != 0)) {
              lVar5 = *plVar16;
              if ((*(uint *)(plVar16 + 1) & 0xf) == 4) {
                if ((lVar5 != 0) && ((*(byte *)(lVar5 + 9) & 3) != 0)) {
                  reallymarkobject(param_1);
                  uVar18 = extraout_x8_00;
                }
              }
              else {
                uVar15 = (ulong)((*(byte *)(lVar5 + 9) & 3) != 0);
              }
            }
          }
          uVar17 = (uint)uVar15;
          plVar16 = plVar16 + 4;
        } while (plVar16 < plVar12);
        uVar13 = *(uint *)(lVar20 + 0xc);
      }
      uVar15 = (ulong)uVar13;
      if (*(char *)(param_1 + 0x55) == '\0') {
        *(undefined8 *)(lVar20 + 0x30) = *(undefined8 *)(param_1 + 0x78);
        *(long *)(param_1 + 0x78) = lVar20;
      }
      else if (uVar17 != 0) {
        *(undefined8 *)(lVar20 + 0x30) = *(undefined8 *)(param_1 + 0x80);
        *(long *)(param_1 + 0x80) = lVar20;
      }
    }
    else if (pcVar7 == (char *)0x0) {
      traverseephemeron(param_1,lVar20);
      uVar15 = (ulong)*(uint *)(lVar20 + 0xc);
    }
    else {
      *(undefined8 *)(lVar20 + 0x30) = *(undefined8 *)(param_1 + 0x90);
      uVar15 = (ulong)*(uint *)(lVar20 + 0xc);
      *(long *)(param_1 + 0x90) = lVar20;
    }
  }
  uVar15 = (uVar15 + (long)(1 << (ulong)(*(byte *)(lVar20 + 0xb) & 0x1f)) * 2) * 0x10 + 0x38;
LAB_001f8bd8:
  *(ulong *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + uVar15;
  return;
}


