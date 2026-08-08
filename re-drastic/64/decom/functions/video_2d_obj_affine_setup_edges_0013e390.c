/*
 * Ghidra decompilation
 *
 * Function : video_2d_obj_affine_setup_edges
 * Address  : 0013e390
 * Program  : drastic64
 */


void video_2d_obj_affine_setup_edges
               (int param_1,int param_2,int param_3,int param_4,long *param_5,long *param_6,
               long *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if (param_2 == 0) {
    if (param_4 == 0) {
      bVar5 = false;
      if (param_1 >= 0) {
        bVar5 = param_3 - param_1 < 0;
      }
      bVar5 = bVar5 != (param_1 < 0 || SBORROW4(param_3,param_1));
      *param_5 = -(ulong)bVar5;
      lVar8 = 0x8000000000;
      if (bVar5) {
        lVar8 = 0;
      }
      *param_7 = lVar8;
      *param_6 = 0;
      return;
    }
    param_3 = param_3 - param_1;
    if (param_4 < 1) {
      iVar1 = param_3;
      param_3 = -param_1;
    }
    else {
      iVar1 = -param_1;
    }
    iVar2 = 0;
    if (param_4 != 0) {
      iVar2 = param_3 / param_4;
    }
    iVar3 = 0;
    if (param_4 != 0) {
      iVar3 = iVar1 / param_4;
    }
    lVar9 = 0x8000000000;
    lVar7 = (long)iVar2 * -0x80 << 0x20;
    lVar8 = (((ulong)(uint)(iVar3 * -0x80) << 0x20) - lVar7) + 0x8000000000;
    goto LAB_0013e3d8;
  }
  lVar11 = (long)param_2;
  if (param_2 < 1) {
    uVar4 = (param_2 + param_3 + 1) - param_1;
    uVar6 = -param_1;
    lVar8 = (ulong)uVar4 << 0x20;
    if (-1 < (int)uVar4) goto LAB_0013e404;
    lVar7 = 0;
    if (lVar11 != 0) {
      lVar7 = (lVar11 + 1 + lVar8) / lVar11;
    }
LAB_0013e4ac:
    lVar10 = (ulong)(uint)-param_4 << 0x20;
    if ((int)uVar6 < 0) {
      lVar8 = 0;
      if (lVar11 != 0) {
        lVar8 = (long)(lVar11 + 1 + ((ulong)uVar6 << 0x20)) / lVar11;
      }
      lVar8 = lVar8 - lVar7;
      if (-1 < lVar10) {
        lVar9 = 0;
        if (lVar11 != 0) {
          lVar9 = lVar10 / lVar11;
        }
        goto LAB_0013e440;
      }
LAB_0013e4fc:
      if (-1 < lVar11) {
        lVar9 = 0;
        if (lVar11 != 0) {
          lVar9 = lVar10 / lVar11;
        }
        goto LAB_0013e440;
      }
LAB_0013e4c8:
      lVar9 = 0;
      if (lVar11 != 0) {
        lVar9 = (lVar11 + 1 + lVar10) / lVar11;
      }
LAB_0013e3d8:
      *param_5 = lVar7;
      *param_7 = lVar8;
      *param_6 = lVar9;
      return;
    }
    lVar8 = 0;
    if (lVar11 != 0) {
      lVar8 = (long)((ulong)uVar6 << 0x20) / lVar11;
    }
    lVar8 = lVar8 - lVar7;
    if (lVar10 < 0) goto LAB_0013e4c8;
  }
  else {
    uVar4 = (param_2 + -1) - param_1;
    uVar6 = param_3 - param_1;
    lVar8 = (ulong)uVar4 << 0x20;
    if ((int)uVar4 < 0) {
      lVar7 = 0;
      if (lVar11 != 0) {
        lVar7 = lVar8 / lVar11;
      }
      lVar10 = (ulong)(uint)-param_4 << 0x20;
      lVar9 = (ulong)uVar6 << 0x20;
      if (-1 < (int)uVar6) goto LAB_0013e424;
LAB_0013e4ec:
      lVar8 = 0;
      if (lVar11 != 0) {
        lVar8 = lVar9 / lVar11;
      }
      lVar8 = lVar8 - lVar7;
      if (lVar10 < 0) goto LAB_0013e4fc;
    }
    else {
LAB_0013e404:
      if (lVar11 < 0) {
        lVar7 = 0;
        if (lVar11 != 0) {
          lVar7 = lVar8 / lVar11;
        }
        goto LAB_0013e4ac;
      }
      lVar9 = (ulong)uVar6 << 0x20;
      lVar7 = 0;
      if (lVar11 != 0) {
        lVar7 = (lVar11 + -1 + lVar8) / lVar11;
      }
      lVar10 = (ulong)(uint)-param_4 << 0x20;
      if ((int)uVar6 < 0) goto LAB_0013e4ec;
LAB_0013e424:
      lVar8 = 0;
      if (lVar11 != 0) {
        lVar8 = (lVar11 + -1 + lVar9) / lVar11;
      }
      lVar8 = lVar8 - lVar7;
      if (lVar10 < 0) goto LAB_0013e43c;
    }
    lVar10 = lVar11 + -1 + lVar10;
  }
LAB_0013e43c:
  lVar9 = 0;
  if (lVar11 != 0) {
    lVar9 = lVar10 / lVar11;
  }
LAB_0013e440:
  *param_5 = lVar7;
  *param_7 = lVar8;
  *param_6 = lVar9;
  return;
}


