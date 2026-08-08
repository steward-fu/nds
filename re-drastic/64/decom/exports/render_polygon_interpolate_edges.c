/*
 * Ghidra decompilation
 *
 * Function : render_polygon_interpolate_edges
 * Address  : 0014d290
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_polygon_interpolate_edges
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,uint param_5,
               uint param_6,ulong param_7,ulong param_8)

{
  int iVar1;
  ushort uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  long local_118 [32];
  undefined local_18 [16];
  long local_8;
  
  uVar12 = -(param_7 >> 0x1f & 1) & 0xfffffff800000000 | (param_7 & 0xffffffff) << 3;
  lVar11 = *param_4;
  plVar10 = (long *)((long)param_4 + uVar12);
  uVar9 = (uint)*(ushort *)(lVar11 + 6);
  local_8 = ___stack_chk_guard;
  iVar7 = 0;
  if (*(ushort *)(lVar11 + 6) < param_6) {
    iVar6 = 0;
    iVar15 = 0;
    uVar14 = 0;
    lVar3 = param_4[(int)param_7];
    if ((int)param_7 == 1) {
      do {
        lVar5 = lVar3;
        uVar2 = *(ushort *)(lVar5 + 6);
        iVar13 = uVar2 - uVar9;
        iVar8 = 0;
        if (uVar9 < param_5) {
          iVar13 = (uVar9 - param_5) + iVar13;
          iVar8 = param_5 - uVar9;
        }
        iVar7 = (param_6 - uVar2) + iVar13;
        iVar1 = iVar7;
        if (uVar2 <= param_6) {
          iVar1 = iVar13;
        }
        uVar9 = (uint)uVar2;
        if (0 < iVar1) {
          local_18[uVar14] = (char)iVar1;
          iVar13 = (int)uVar14;
          uVar9 = (uint)*(ushort *)(lVar5 + 6);
          if (iVar13 == 0) {
            iVar6 = iVar8;
          }
          iVar15 = iVar15 + iVar1;
          uVar14 = (ulong)(iVar13 + 1);
          local_118[(uint)(iVar13 * 2)] = lVar11;
          local_118[iVar13 * 2 + 1] = lVar5;
        }
        plVar10 = (long *)((long)plVar10 + uVar12);
        lVar3 = *plVar10;
        lVar11 = lVar5;
      } while (uVar9 < param_6);
    }
    else {
      do {
        lVar5 = lVar3;
        uVar4 = (uint)*(ushort *)(lVar5 + 6);
        iVar13 = uVar4 - uVar9;
        iVar8 = 0;
        if (uVar9 < param_5) {
          iVar13 = (uVar9 - param_5) + iVar13;
          iVar8 = param_5 - uVar9;
        }
        iVar1 = (param_6 - *(ushort *)(lVar5 + 6)) + iVar13;
        if (uVar4 <= param_6) {
          iVar1 = iVar13;
        }
        uVar9 = uVar4;
        if (0 < iVar1) {
          local_18[uVar14] = (char)iVar1;
          iVar13 = (int)uVar14;
          uVar9 = (uint)*(ushort *)(lVar5 + 6);
          if (iVar13 == 0) {
            iVar6 = iVar8;
          }
          iVar15 = iVar15 + iVar1;
          uVar14 = (ulong)(iVar13 + 1);
          local_118[(uint)(iVar13 * 2)] = lVar11;
          local_118[iVar13 * 2 + 1] = lVar5;
        }
        plVar10 = (long *)((long)plVar10 + uVar12);
        lVar3 = *plVar10;
        lVar11 = lVar5;
      } while (uVar9 < param_6);
    }
  }
  else {
    iVar6 = 0;
    iVar15 = 0;
    uVar14 = 0;
  }
  render_polygon_edge_perspective_coefficients_asm(iVar7,param_3,local_118,local_18,uVar14,iVar6);
  render_polygon_edge_perspective_steps_asm(param_3,param_3,iVar15);
  render_polygon_edge_interpolate_w_asm(local_118,param_2,param_3,local_18,uVar14);
  render_polygon_edge_interpolate_parameters_asm(local_118,param_2,param_3,local_18,uVar14);
  if ((param_8 & 0x18) == 0) {
    render_polygon_edge_interpolate_xz_c(local_118,param_2,local_18,uVar14,iVar6);
  }
  else {
    render_polygon_edge_interpolate_x_c();
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return;
}


