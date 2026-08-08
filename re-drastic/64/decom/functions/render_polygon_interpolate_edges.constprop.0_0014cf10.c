/*
 * Ghidra decompilation
 *
 * Function : render_polygon_interpolate_edges.constprop.0
 * Address  : 0014cf10
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_polygon_interpolate_edges_constprop_0
               (undefined8 param_1,undefined8 param_2,long *param_3,uint param_4,uint param_5,
               uint param_6)

{
  int iVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  long local_118 [32];
  undefined local_18 [16];
  long local_8;
  
  plVar7 = param_3 + 1;
  uVar2 = *(ushort *)(*param_3 + 6);
  uVar6 = (uint)uVar2;
  local_8 = ___stack_chk_guard;
  iVar4 = 0;
  if (uVar2 < param_5) {
    iVar12 = 0;
    uVar11 = 0;
    lVar3 = param_3[1];
    lVar9 = *param_3;
    do {
      lVar5 = lVar3;
      uVar2 = *(ushort *)(lVar5 + 6);
      iVar10 = uVar2 - uVar6;
      iVar8 = 0;
      if (uVar6 < param_4) {
        iVar10 = (uVar6 - param_4) + iVar10;
        iVar8 = param_4 - uVar6;
      }
      uVar6 = (uint)uVar2;
      iVar1 = (param_5 - uVar2) + iVar10;
      if (uVar6 <= param_5) {
        iVar1 = iVar10;
      }
      if (0 < iVar1) {
        local_18[uVar11] = (char)iVar1;
        iVar10 = (int)uVar11;
        uVar6 = (uint)*(ushort *)(lVar5 + 6);
        if (iVar10 == 0) {
          iVar4 = iVar8;
        }
        iVar12 = iVar12 + iVar1;
        uVar11 = (ulong)(iVar10 + 1);
        local_118[(uint)(iVar10 * 2)] = lVar9;
        local_118[iVar10 * 2 + 1] = lVar5;
      }
      plVar7 = plVar7 + 1;
      lVar3 = *plVar7;
      lVar9 = lVar5;
    } while (uVar6 < param_5);
  }
  else {
    iVar4 = 0;
    iVar12 = 0;
    uVar11 = 0;
  }
  render_polygon_edge_perspective_coefficients_asm(param_2,local_118,local_18,uVar11,iVar4);
  render_polygon_edge_perspective_steps_asm(param_2,param_2,iVar12);
  render_polygon_edge_interpolate_w_asm(local_118,param_1,param_2,local_18,uVar11);
  render_polygon_edge_interpolate_parameters_asm(local_118,param_1,param_2,local_18,uVar11);
  if ((param_6 & 0x18) == 0) {
    render_polygon_edge_interpolate_xz_c(local_118,param_1,local_18,uVar11,iVar4);
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


