/*
 * Ghidra decompilation
 *
 * Function : FUN_0013086c
 * Address  : 0013086c
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013086c(long *param_1)

{
  undefined uVar1;
  undefined uVar2;
  uint uVar3;
  char cVar4;
  short sVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  bool bVar15;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  long lStack_8;
  
  lVar10 = *param_1;
  lVar13 = *(long *)(lVar10 + 0xfba68);
  sVar5 = *(short *)(lVar10 + 0x1b374);
  lStack_8 = ___stack_chk_guard;
  uVar3 = *(uint *)(lVar10 + 0x1b0d4);
  cVar4 = nds_system[lVar13 + 0x362e9a4];
  remap_palette_oam_deferred();
  if (sVar5 < 0) {
    bVar15 = true;
    bVar6 = false;
  }
  else {
    bVar6 = *(int *)(lVar13 + 0x85a40) == 0;
    bVar15 = !bVar6;
  }
  set_screen_hires_mode(bVar6,*(uint *)(lVar13 + 0x85a48) & 1);
  set_screen_hires_mode(bVar15,*(uint *)(lVar13 + 0x85a48) & 1);
  lVar10 = get_screen_ptr(bVar6);
  lVar11 = get_screen_ptr(bVar15);
  uVar7 = get_screen_pitch(bVar6);
  uVar8 = get_screen_pitch(bVar15);
  if (*(int *)(lVar13 + 0x85a54) == 0) {
    uVar9 = *(uint *)(lVar13 + 0x8a374) & 4;
LAB_0013095c:
    if (cVar4 == '\0' && uVar9 == 0) {
LAB_00130a30:
      video_2d_reorder_obj(param_1 + 0x5cf);
      video_2d_map_bg_direct_layers(param_1 + 0x5cf);
      *(undefined *)(param_1 + 0x5e6) = 0;
      goto LAB_0013097c;
    }
  }
  else {
    uVar9 = *(uint *)(lVar13 + 0x8a374) & 4;
    if (-1 < (int)uVar3) goto LAB_0013095c;
    if (uVar9 == 0) goto LAB_00130a30;
  }
  lVar10 = 0;
  *(undefined *)(param_1 + 0x5e6) = 1;
LAB_0013097c:
  if ((nds_system[lVar13 + 0x362e9a4] == '\0') && ((*(uint *)(lVar13 + 0x8a374) >> 2 & 1) == 0)) {
    video_2d_reorder_obj(param_1 + 0x10853);
    video_2d_map_bg_direct_layers(param_1 + 0x10853);
    *(undefined *)(param_1 + 0x1086a) = 0;
  }
  else {
    lVar11 = 0;
    *(undefined *)(param_1 + 0x1086a) = 1;
  }
  param_1[0x5d6] = lVar10;
  param_1[0x1085a] = lVar11;
  *(undefined4 *)(param_1 + 0x5d7) = uVar7;
  *(undefined4 *)(param_1 + 0x1085b) = uVar8;
  param_1[0x10852] = 0;
  param_1[0x20ad6] = 0;
  *(undefined2 *)((long)param_1 + 0x458894) = 0;
  *(undefined2 *)((long)param_1 + 0x458871) = 0;
  if ((int)uVar3 < 0) {
    uVar12 = (ulong)(uVar3 >> 0x10) & 3;
    *(undefined *)((long)param_1 + 0x458876) = 1;
    if ((*(int *)(param_1 + uVar12 * 2 + 2) == 6) && (0x1ff < *(uint *)(param_1 + uVar12 * 2 + 3)))
    {
      *(uint *)(param_1 + 0x8b10f) =
           0xff << (ulong)(uint)((int)uVar12 << 3) | *(uint *)(param_1 + 0x8b10f);
      param_1[0x8b109] = param_1[uVar12 + 0x414];
      *(uint *)(param_1 + 0x8b10d) = (uVar3 >> 0x12 & 3) << 0xe;
      uVar9 = uVar3 >> 0x1d & 3;
      uStack_28 = 0x10000000100;
      uStack_30 = 0x10000000080;
      uStack_18 = 0xc000000080;
      uStack_20 = 0x4000000080;
      if ((uVar9 == 1) ||
         (*(byte *)((long)param_1 + 0x458871) = ((byte)(uVar3 >> 0x18) & 1) + 1, uVar9 != 0)) {
        if ((uVar3 >> 0x19 & 1) == 0) {
          *(undefined *)((long)param_1 + 0x458872) = 3;
        }
        else {
          *(undefined *)((long)param_1 + 0x458872) = 4;
        }
      }
      if ((uVar3 >> 0x1e & 1) == 0) {
        *(undefined *)((long)param_1 + 0x458873) = 0;
      }
      else {
        uVar1 = (undefined)(uVar3 & 0x1f);
        uVar9 = uVar3 >> 8 & 0x1f;
        if (0x10 < (uVar3 & 0x1f)) {
          uVar1 = 0x10;
        }
        uVar2 = 0x10;
        if (uVar9 < 0x11) {
          uVar2 = (char)uVar9;
        }
        *(undefined *)((long)param_1 + 0x458873) = 1;
        *(undefined *)((long)param_1 + 0x458874) = uVar1;
        *(undefined *)((long)param_1 + 0x458875) = uVar2;
      }
      uVar14 = (ulong)(uVar3 >> 0x14) & 3;
      *(char *)((long)param_1 + 0x45886e) = (char)uVar12;
      uVar7 = *(undefined4 *)((long)&uStack_20 + uVar14 * 4);
      *(byte *)((long)param_1 + 0x45886f) = (byte)(*(uint *)(param_1 + 0x5e1) >> 0x12) & 3;
      *(char *)(param_1 + 0x8b10e) = (char)uVar7;
      *(short *)((long)param_1 + 0x45886c) = (short)*(undefined4 *)((long)&uStack_30 + uVar14 * 4);
      if ((*(uint *)(param_1[1] + 0x4a0) & 1) != 0) {
        if (param_1[uVar12 + 0x8b104] == 0) {
          lVar10 = memalign(0x10,0x60000);
          param_1[uVar12 + 0x8b104] = lVar10;
          param_1[0x8b10a] = lVar10;
        }
        else {
          param_1[0x8b10a] = param_1[uVar12 + 0x8b104];
        }
      }
    }
  }
  else {
    *(undefined *)((long)param_1 + 0x458876) = 0;
  }
  if (lStack_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lStack_8 - ___stack_chk_guard,0);
}


