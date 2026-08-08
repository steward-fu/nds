/*
 * Ghidra decompilation
 *
 * Function : render_scanline_update_affine_variables_bitmap
 * Address  : 00136370
 * Program  : drastic64
 */


void render_scanline_update_affine_variables_bitmap(long param_1)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  undefined8 uVar15;
  int iVar16;
  
  sVar3 = *(short *)(param_1 + 0x9e);
  sVar4 = *(short *)(param_1 + 0xa2);
  uVar2 = *(uint *)(param_1 + 0x90);
  uVar14 = (uint)*(ushort *)(param_1 + 0xa6) * 0x100 + 0xff;
  uVar8 = (uint)*(ushort *)(param_1 + 0xa8) * 0x100 + 0xff;
  if (sVar3 == 0) {
    if (sVar4 == 0) {
      lVar9 = -(ulong)(uVar14 < uVar2);
      lVar13 = 0x10000000000;
      if (uVar14 < uVar2) {
        lVar13 = 0;
      }
      uVar15 = 0;
    }
    else {
      iVar12 = (uVar14 - uVar2) + -1;
      if (sVar4 < 1) {
        iVar1 = iVar12;
        iVar12 = -uVar2;
      }
      else {
        iVar1 = -uVar2;
      }
      iVar5 = 0;
      iVar16 = (int)sVar4;
      if (iVar16 != 0) {
        iVar5 = iVar12 / iVar16;
      }
      uVar15 = 0x10000000000;
      iVar12 = 0;
      if (iVar16 != 0) {
        iVar12 = iVar1 / iVar16;
      }
      lVar9 = (long)iVar5 * -0x100 << 0x20;
      lVar13 = ((long)iVar12 * -0x100 << 0x20) - lVar9;
    }
    sVar3 = *(short *)(param_1 + 0xa0);
    *(long *)(param_1 + 0x58) = lVar9;
    *(long *)(param_1 + 0x60) = lVar13;
    *(undefined8 *)(param_1 + 0x68) = uVar15;
    sVar4 = *(short *)(param_1 + 0xa4);
    uVar14 = *(uint *)(param_1 + 0x94);
  }
  else {
    lVar13 = (long)sVar3;
    if (sVar3 < 1) {
      uVar6 = (uVar14 + (int)sVar3 + 1) - uVar2;
      uVar14 = -uVar2;
      lVar9 = (ulong)uVar6 << 0x20;
      if (-1 < (int)uVar6) goto LAB_0013643c;
      lVar11 = 0;
      if (lVar13 != 0) {
        lVar11 = (lVar13 + 1 + lVar9) / lVar13;
      }
LAB_001365ac:
      lVar9 = (ulong)(uint)-(int)sVar4 << 0x20;
      if ((int)uVar14 < 0) {
        lVar10 = 0;
        if (lVar13 != 0) {
          lVar10 = (long)(((ulong)uVar14 << 0x20) + lVar13 + 1) / lVar13;
        }
        lVar10 = lVar10 - lVar11;
        if (-1 < lVar9) goto LAB_001365e0;
        lVar9 = lVar13 + 1 + lVar9;
        goto LAB_00136474;
      }
      lVar10 = 0;
      if (lVar13 != 0) {
        lVar10 = (long)((ulong)uVar14 << 0x20) / lVar13;
      }
      lVar7 = lVar13 + 1;
      lVar10 = lVar10 - lVar11;
      if (lVar9 < 0) goto LAB_00136470;
      lVar7 = 0;
      if (lVar13 != 0) {
        lVar7 = lVar9 / lVar13;
      }
    }
    else {
      uVar6 = (sVar3 + -1) - uVar2;
      uVar14 = uVar14 - uVar2;
      lVar9 = (ulong)uVar6 << 0x20;
      if (-1 < (int)uVar6) {
LAB_0013643c:
        if (lVar13 < 0) {
          lVar11 = 0;
          if (lVar13 != 0) {
            lVar11 = lVar9 / lVar13;
          }
          goto LAB_001365ac;
        }
        lVar9 = lVar13 + -1 + lVar9;
      }
      lVar11 = 0;
      if (lVar13 != 0) {
        lVar11 = lVar9 / lVar13;
      }
      lVar9 = (ulong)(uint)-(int)sVar4 << 0x20;
      if ((int)uVar14 < 0) {
        lVar10 = 0;
        if (lVar13 != 0) {
          lVar10 = (long)((ulong)uVar14 << 0x20) / lVar13;
        }
        lVar10 = lVar10 - lVar11;
        if (-1 < lVar9) {
LAB_001365e0:
          if (-1 < lVar13) {
            lVar9 = lVar13 + -1 + lVar9;
          }
        }
      }
      else {
        lVar7 = lVar13 + -1;
        lVar10 = 0;
        if (lVar13 != 0) {
          lVar10 = (long)(((ulong)uVar14 << 0x20) + lVar7) / lVar13;
        }
        lVar10 = lVar10 - lVar11;
        if (-1 < lVar9) {
LAB_00136470:
          lVar9 = lVar7 + lVar9;
        }
      }
LAB_00136474:
      lVar7 = 0;
      if (lVar13 != 0) {
        lVar7 = lVar9 / lVar13;
      }
    }
    sVar3 = *(short *)(param_1 + 0xa0);
    *(long *)(param_1 + 0x58) = lVar11;
    *(long *)(param_1 + 0x60) = lVar10;
    *(long *)(param_1 + 0x68) = lVar7;
    sVar4 = *(short *)(param_1 + 0xa4);
    uVar14 = *(uint *)(param_1 + 0x94);
  }
  if (sVar3 == 0) {
    iVar12 = (int)sVar4;
    if (iVar12 != 0) {
      iVar1 = (uVar8 - uVar14) + -1;
      if (iVar12 < 1) {
        iVar5 = iVar1;
        iVar1 = -uVar14;
      }
      else {
        iVar5 = -uVar14;
      }
      iVar16 = 0;
      if (iVar12 != 0) {
        iVar16 = iVar1 / iVar12;
      }
      iVar1 = 0;
      if (iVar12 != 0) {
        iVar1 = iVar5 / iVar12;
      }
      *(undefined8 *)(param_1 + 0x80) = 0x10000000000;
      *(undefined *)(param_1 + 0xae) = 0;
      lVar13 = (long)iVar16 * -0x100 << 0x20;
      *(long *)(param_1 + 0x70) = lVar13;
      *(long *)(param_1 + 0x78) = ((long)iVar1 * -0x100 << 0x20) - lVar13;
      return;
    }
    uVar15 = 0x10000000000;
    if (uVar8 < uVar14) {
      uVar15 = 0;
    }
    *(ulong *)(param_1 + 0x70) = -(ulong)(uVar8 < uVar14);
    *(undefined8 *)(param_1 + 0x78) = uVar15;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined *)(param_1 + 0xae) = 0;
    return;
  }
  lVar13 = (long)sVar3;
  if (sVar3 < 1) {
    uVar2 = (uVar8 + (int)sVar3 + 1) - uVar14;
    uVar8 = -uVar14;
    lVar9 = (ulong)uVar2 << 0x20;
    if (-1 < (int)uVar2) goto LAB_001364b0;
    lVar11 = 0;
    if (lVar13 != 0) {
      lVar11 = (lVar13 + 1 + lVar9) / lVar13;
    }
LAB_0013660c:
    lVar9 = (ulong)(uint)-(int)sVar4 << 0x20;
    if ((int)uVar8 < 0) {
      lVar10 = lVar13 + 1;
      lVar7 = 0;
      if (lVar13 != 0) {
        lVar7 = (long)(lVar10 + ((ulong)uVar8 << 0x20)) / lVar13;
      }
      lVar7 = lVar7 - lVar11;
      if (-1 < lVar9) {
        lVar10 = 0;
        if (lVar13 != 0) {
          lVar10 = lVar9 / lVar13;
        }
        goto LAB_001364ec;
      }
LAB_001364e4:
      lVar9 = lVar9 + lVar10;
    }
    else {
      lVar7 = 0;
      if (lVar13 != 0) {
        lVar7 = (long)((ulong)uVar8 << 0x20) / lVar13;
      }
      lVar7 = lVar7 - lVar11;
      if (lVar9 < 0) goto LAB_00136628;
    }
  }
  else {
    uVar2 = (sVar3 + -1) - uVar14;
    uVar8 = uVar8 - uVar14;
    lVar9 = (ulong)uVar2 << 0x20;
    if (-1 < (int)uVar2) {
LAB_001364b0:
      if (lVar13 < 0) {
        lVar11 = 0;
        if (lVar13 != 0) {
          lVar11 = lVar9 / lVar13;
        }
        goto LAB_0013660c;
      }
      lVar9 = lVar13 + -1 + lVar9;
    }
    lVar11 = 0;
    if (lVar13 != 0) {
      lVar11 = lVar9 / lVar13;
    }
    lVar9 = (ulong)(uint)-(int)sVar4 << 0x20;
    if ((int)uVar8 < 0) {
      lVar7 = 0;
      if (lVar13 != 0) {
        lVar7 = (long)((ulong)uVar8 << 0x20) / lVar13;
      }
      lVar7 = lVar7 - lVar11;
      if (-1 < lVar9) {
        lVar9 = lVar9 + lVar13 + -1;
      }
    }
    else {
      lVar10 = lVar13 + -1;
      lVar7 = 0;
      if (lVar13 != 0) {
        lVar7 = (long)(((ulong)uVar8 << 0x20) + lVar10) / lVar13;
      }
      lVar7 = lVar7 - lVar11;
      if (-1 < lVar9) goto LAB_001364e4;
LAB_00136628:
      if (lVar13 < 0) {
        lVar9 = lVar9 + lVar13 + 1;
      }
    }
  }
  lVar10 = 0;
  if (lVar13 != 0) {
    lVar10 = lVar9 / lVar13;
  }
LAB_001364ec:
  *(long *)(param_1 + 0x70) = lVar11;
  *(long *)(param_1 + 0x78) = lVar7;
  *(long *)(param_1 + 0x80) = lVar10;
  *(undefined *)(param_1 + 0xae) = 0;
  return;
}


