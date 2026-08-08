/*
 * Ghidra decompilation
 *
 * Function : render_scanline_update_affine_variables
 * Address  : 00134550
 * Program  : drastic64
 */


void render_scanline_update_affine_variables(long param_1)

{
  int iVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  sVar2 = *(short *)(param_1 + 0x9e);
  sVar3 = *(short *)(param_1 + 0xa2);
  uVar10 = *(uint *)(param_1 + 0x90);
  uVar12 = (uint)*(byte *)(param_1 + 0xab) * 0x800 + 0x7ff;
  iVar9 = (int)sVar2;
  if (sVar2 == 0) {
    if (sVar3 == 0) {
      lVar14 = -(ulong)(uVar12 < uVar10);
      lVar15 = 0;
      if (uVar10 <= uVar12) {
        lVar15 = 0x10000000000;
      }
      lVar16 = 0;
    }
    else {
      iVar13 = (uVar12 - uVar10) + -1;
      if (sVar3 < 1) {
        iVar1 = iVar13;
        iVar13 = -uVar10;
      }
      else {
        iVar1 = -uVar10;
      }
      iVar5 = 0;
      iVar11 = (int)sVar3;
      if (iVar11 != 0) {
        iVar5 = iVar13 / iVar11;
      }
      lVar16 = 0x10000000000;
      iVar13 = 0;
      if (iVar11 != 0) {
        iVar13 = iVar1 / iVar11;
      }
      lVar14 = (long)iVar5 * -0x100 << 0x20;
      lVar15 = ((long)iVar13 * -0x100 << 0x20) - lVar14;
    }
LAB_001345ac:
    sVar3 = *(short *)(param_1 + 0xa0);
    *(long *)(param_1 + 0x58) = lVar14;
    *(long *)(param_1 + 0x60) = lVar15;
    uVar10 = *(uint *)(param_1 + 0x94);
    *(long *)(param_1 + 0x68) = lVar16;
    sVar4 = *(short *)(param_1 + 0xa4);
  }
  else {
    lVar18 = (long)sVar2;
    if (sVar2 < 1) {
      uVar6 = (uVar12 + iVar9 + 1) - uVar10;
      uVar10 = -uVar10;
      lVar17 = (ulong)uVar6 << 0x20;
      if (-1 < (int)uVar6) goto LAB_00134660;
      lVar14 = 0;
      if (lVar18 != 0) {
        lVar14 = (lVar18 + 1 + lVar17) / lVar18;
      }
LAB_001347b8:
      lVar17 = (ulong)(uint)-(int)sVar3 << 0x20;
      if ((int)uVar10 < 0) {
        lVar15 = 0;
        if (lVar18 != 0) {
          lVar15 = (long)(((ulong)uVar10 << 0x20) + lVar18 + 1) / lVar18;
        }
        lVar15 = lVar15 - lVar14;
        if (-1 < lVar17) goto LAB_001347f0;
      }
      else {
        lVar15 = 0;
        if (lVar18 != 0) {
          lVar15 = (long)((ulong)uVar10 << 0x20) / lVar18;
        }
        lVar15 = lVar15 - lVar14;
        if (-1 < lVar17) goto LAB_00134698;
      }
      lVar16 = 0;
      if (lVar18 != 0) {
        lVar16 = (lVar18 + 1 + lVar17) / lVar18;
      }
      goto LAB_001345ac;
    }
    uVar6 = ((int)sVar2 - 1U) - uVar10;
    uVar10 = uVar12 - uVar10;
    lVar17 = (ulong)uVar6 << 0x20;
    if (-1 < (int)uVar6) {
LAB_00134660:
      if (lVar18 < 0) {
        lVar14 = 0;
        if (lVar18 != 0) {
          lVar14 = lVar17 / lVar18;
        }
        goto LAB_001347b8;
      }
      lVar17 = lVar18 + -1 + lVar17;
    }
    lVar14 = 0;
    if (lVar18 != 0) {
      lVar14 = lVar17 / lVar18;
    }
    lVar17 = (ulong)(uint)-(int)sVar3 << 0x20;
    if ((int)uVar10 < 0) {
      lVar15 = 0;
      if (lVar18 != 0) {
        lVar15 = (long)((ulong)uVar10 << 0x20) / lVar18;
      }
      lVar15 = lVar15 - lVar14;
      if (-1 < lVar17) {
LAB_001347f0:
        if (-1 < lVar18) {
          lVar17 = lVar18 + -1 + lVar17;
        }
      }
    }
    else {
      lVar15 = 0;
      if (lVar18 != 0) {
        lVar15 = (long)(lVar18 + -1 + ((ulong)uVar10 << 0x20)) / lVar18;
      }
      lVar15 = lVar15 - lVar14;
      if (-1 < lVar17) {
        lVar17 = lVar18 + -1 + lVar17;
      }
    }
LAB_00134698:
    lVar16 = 0;
    if (lVar18 != 0) {
      lVar16 = lVar17 / lVar18;
    }
    sVar3 = *(short *)(param_1 + 0xa0);
    *(long *)(param_1 + 0x58) = lVar14;
    *(long *)(param_1 + 0x60) = lVar15;
    uVar10 = *(uint *)(param_1 + 0x94);
    *(long *)(param_1 + 0x68) = lVar16;
    sVar4 = *(short *)(param_1 + 0xa4);
  }
  uVar6 = (uint)sVar3;
  if (sVar3 == 0) {
    iVar13 = (int)sVar4;
    if (iVar13 == 0) {
      lVar14 = -(ulong)(uVar12 < uVar10);
      lVar17 = 0x10000000000;
      if (uVar12 < uVar10) {
        lVar17 = 0;
      }
      lVar18 = 0;
    }
    else {
      iVar1 = (uVar12 - uVar10) + -1;
      if (iVar13 < 1) {
        iVar5 = iVar1;
        iVar1 = -uVar10;
      }
      else {
        iVar5 = -uVar10;
      }
      iVar11 = 0;
      if (iVar13 != 0) {
        iVar11 = iVar1 / iVar13;
      }
      lVar18 = 0x10000000000;
      iVar1 = 0;
      if (iVar13 != 0) {
        iVar1 = iVar5 / iVar13;
      }
      lVar14 = (long)iVar11 * -0x100 << 0x20;
      lVar17 = ((long)iVar1 * -0x100 << 0x20) - lVar14;
    }
    goto LAB_001345e4;
  }
  lVar15 = (long)sVar3;
  if (sVar3 < 1) {
    uVar7 = (uVar12 + uVar6 + 1) - uVar10;
    uVar12 = -uVar10;
    lVar18 = (ulong)uVar7 << 0x20;
    if (-1 < (int)uVar7) goto LAB_001346d4;
    lVar14 = 0;
    if (lVar15 != 0) {
      lVar14 = (lVar15 + 1 + lVar18) / lVar15;
    }
LAB_0013481c:
    lVar16 = (ulong)(uint)-(int)sVar4 << 0x20;
    if ((int)uVar12 < 0) {
      lVar18 = lVar15 + 1;
      lVar17 = 0;
      if (lVar15 != 0) {
        lVar17 = (long)(lVar18 + ((ulong)uVar12 << 0x20)) / lVar15;
      }
      lVar17 = lVar17 - lVar14;
      if (-1 < lVar16) {
        lVar18 = 0;
        if (lVar15 != 0) {
          lVar18 = lVar16 / lVar15;
        }
        goto LAB_001345e4;
      }
LAB_00134708:
      lVar16 = lVar16 + lVar18;
    }
    else {
      lVar17 = 0;
      if (lVar15 != 0) {
        lVar17 = (long)((ulong)uVar12 << 0x20) / lVar15;
      }
      lVar17 = lVar17 - lVar14;
      if (lVar16 < 0) goto LAB_00134838;
    }
  }
  else {
    uVar7 = (uVar6 - 1) - uVar10;
    uVar12 = uVar12 - uVar10;
    lVar18 = (ulong)uVar7 << 0x20;
    if (-1 < (int)uVar7) {
LAB_001346d4:
      if (lVar15 < 0) {
        lVar14 = 0;
        if (lVar15 != 0) {
          lVar14 = lVar18 / lVar15;
        }
        goto LAB_0013481c;
      }
      lVar18 = lVar15 + -1 + lVar18;
    }
    lVar14 = 0;
    if (lVar15 != 0) {
      lVar14 = lVar18 / lVar15;
    }
    lVar16 = (ulong)(uint)-(int)sVar4 << 0x20;
    if ((int)uVar12 < 0) {
      lVar17 = 0;
      if (lVar15 != 0) {
        lVar17 = (long)((ulong)uVar12 << 0x20) / lVar15;
      }
      lVar17 = lVar17 - lVar14;
      if (-1 < lVar16) {
        lVar16 = lVar16 + lVar15 + -1;
      }
    }
    else {
      lVar18 = lVar15 + -1;
      lVar17 = 0;
      if (lVar15 != 0) {
        lVar17 = (long)(lVar18 + ((ulong)uVar12 << 0x20)) / lVar15;
      }
      lVar17 = lVar17 - lVar14;
      if (-1 < lVar16) goto LAB_00134708;
LAB_00134838:
      if (lVar15 < 0) {
        lVar16 = lVar16 + lVar15 + 1;
      }
    }
  }
  lVar18 = 0;
  if (lVar15 != 0) {
    lVar18 = lVar16 / lVar15;
  }
LAB_001345e4:
  uVar12 = -iVar9;
  if (-1 < iVar9) {
    uVar12 = (int)sVar2;
  }
  *(long *)(param_1 + 0x70) = lVar14;
  *(long *)(param_1 + 0x78) = lVar17;
  uVar10 = -uVar6;
  if (-1 < (int)uVar6) {
    uVar10 = uVar6;
  }
  *(long *)(param_1 + 0x80) = lVar18;
  uVar10 = uVar10 & 0xffff;
  uVar12 = uVar12 & 0xffff;
  if (uVar12 != 0) {
    uVar8 = 0;
    if ((ulong)uVar12 != 0) {
      uVar8 = (undefined4)(((long)(int)(uVar12 - 1) + 0x80000000U) / (ulong)uVar12);
    }
    *(undefined4 *)(param_1 + 0x4c) = uVar8;
  }
  if (uVar10 != 0) {
    uVar8 = 0;
    if ((ulong)uVar10 != 0) {
      uVar8 = (undefined4)(((long)(int)(uVar10 - 1) + 0x80000000U) / (ulong)uVar10);
    }
    *(undefined4 *)(param_1 + 0x50) = uVar8;
  }
  *(undefined *)(param_1 + 0xae) = 0;
  return;
}


