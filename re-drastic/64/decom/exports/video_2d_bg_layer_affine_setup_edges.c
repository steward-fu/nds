/*
 * Ghidra decompilation
 *
 * Function : video_2d_bg_layer_affine_setup_edges
 * Address  : 001326f0
 * Program  : drastic64
 */


void video_2d_bg_layer_affine_setup_edges
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
  long lVar12;
  
  if (param_2 == 0) {
    if (param_4 == 0) {
      bVar5 = false;
      if (param_1 >= 0) {
        bVar5 = param_3 - param_1 < 0;
      }
      bVar5 = bVar5 != (param_1 < 0 || SBORROW4(param_3,param_1));
      *param_5 = -(ulong)bVar5;
      lVar9 = 0x10000000000;
      if (bVar5) {
        lVar9 = 0;
      }
      *param_7 = lVar9;
      *param_6 = 0;
      return;
    }
    iVar3 = (param_3 - param_1) + -1;
    if (param_4 < 1) {
      iVar1 = iVar3;
      iVar3 = -param_1;
    }
    else {
      iVar1 = -param_1;
    }
    iVar2 = 0;
    if (param_4 != 0) {
      iVar2 = iVar3 / param_4;
    }
    lVar9 = 0x10000000000;
    iVar3 = 0;
    if (param_4 != 0) {
      iVar3 = iVar1 / param_4;
    }
    lVar8 = (long)iVar2 * -0x100 << 0x20;
    lVar7 = ((long)iVar3 * -0x100 << 0x20) - lVar8;
    goto LAB_00132734;
  }
  lVar12 = (long)param_2;
  if (param_2 < 1) {
    uVar4 = (param_2 + param_3 + 1) - param_1;
    uVar6 = -param_1;
    lVar9 = (ulong)uVar4 << 0x20;
    if (-1 < (int)uVar4) goto LAB_00132760;
    lVar8 = 0;
    if (lVar12 != 0) {
      lVar8 = (lVar12 + 1 + lVar9) / lVar12;
    }
LAB_00132808:
    lVar11 = (ulong)(uint)-param_4 << 0x20;
    if ((int)uVar6 < 0) {
      lVar7 = 0;
      if (lVar12 != 0) {
        lVar7 = (long)(lVar12 + 1 + ((ulong)uVar6 << 0x20)) / lVar12;
      }
      lVar7 = lVar7 - lVar8;
      if (-1 < lVar11) {
        lVar9 = 0;
        if (lVar12 != 0) {
          lVar9 = lVar11 / lVar12;
        }
        goto LAB_0013279c;
      }
LAB_00132858:
      if (-1 < lVar12) {
        lVar9 = 0;
        if (lVar12 != 0) {
          lVar9 = lVar11 / lVar12;
        }
        goto LAB_0013279c;
      }
LAB_00132824:
      lVar9 = 0;
      if (lVar12 != 0) {
        lVar9 = (lVar12 + 1 + lVar11) / lVar12;
      }
LAB_00132734:
      *param_5 = lVar8;
      *param_7 = lVar7;
      *param_6 = lVar9;
      return;
    }
    lVar7 = 0;
    if (lVar12 != 0) {
      lVar7 = (long)((ulong)uVar6 << 0x20) / lVar12;
    }
    lVar7 = lVar7 - lVar8;
    if (lVar11 < 0) goto LAB_00132824;
  }
  else {
    uVar4 = (param_2 + -1) - param_1;
    uVar6 = param_3 - param_1;
    lVar9 = (ulong)uVar4 << 0x20;
    if ((int)uVar4 < 0) {
      lVar8 = 0;
      if (lVar12 != 0) {
        lVar8 = lVar9 / lVar12;
      }
      lVar11 = (ulong)(uint)-param_4 << 0x20;
      lVar10 = (ulong)uVar6 << 0x20;
      if (-1 < (int)uVar6) goto LAB_00132780;
LAB_00132848:
      lVar7 = 0;
      if (lVar12 != 0) {
        lVar7 = lVar10 / lVar12;
      }
      lVar7 = lVar7 - lVar8;
      if (lVar11 < 0) goto LAB_00132858;
    }
    else {
LAB_00132760:
      if (lVar12 < 0) {
        lVar8 = 0;
        if (lVar12 != 0) {
          lVar8 = lVar9 / lVar12;
        }
        goto LAB_00132808;
      }
      lVar10 = (ulong)uVar6 << 0x20;
      lVar8 = 0;
      if (lVar12 != 0) {
        lVar8 = (lVar12 + -1 + lVar9) / lVar12;
      }
      lVar11 = (ulong)(uint)-param_4 << 0x20;
      if ((int)uVar6 < 0) goto LAB_00132848;
LAB_00132780:
      lVar7 = 0;
      if (lVar12 != 0) {
        lVar7 = (lVar12 + -1 + lVar10) / lVar12;
      }
      lVar7 = lVar7 - lVar8;
      if (lVar11 < 0) goto LAB_00132798;
    }
    lVar11 = lVar12 + -1 + lVar11;
  }
LAB_00132798:
  lVar9 = 0;
  if (lVar12 != 0) {
    lVar9 = lVar11 / lVar12;
  }
LAB_0013279c:
  *param_5 = lVar8;
  *param_7 = lVar7;
  *param_6 = lVar9;
  return;
}


