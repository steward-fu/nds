/*
 * Ghidra decompilation
 *
 * Function : render_scanline_update_affine_variables_wrap
 * Address  : 08044e38
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_scanline_update_affine_variables_wrap(video_2d_bg_layer_struct *bg_layer)

{
  u32 uVar1;
  int iVar2;
  s32 dxp;
  int iVar3;
  s32 dyp;
  
  iVar2 = (int)bg_layer->affine_dx;
  iVar3 = (int)bg_layer->affine_dy;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar3 < 0) {
    iVar3 = -iVar3;
    if (iVar2 == 0) goto LAB_08044e8c;
LAB_08044e68:
    uVar1 = __aeabi_uldivmod(iVar2 + 0x7fffffff,
                             ((int)(iVar2 - 1U) >> 0x1f) + (uint)(0x7fffffff < iVar2 - 1U),iVar2,
                             iVar2 >> 0x1f);
    bg_layer->inv_dxp = uVar1;
  }
  else if (iVar2 != 0) goto LAB_08044e68;
  if (iVar3 == 0) {
    return;
  }
LAB_08044e8c:
  uVar1 = __aeabi_uldivmod(iVar3 + 0x7fffffff,
                           ((int)(iVar3 - 1U) >> 0x1f) + (uint)(0x7fffffff < iVar3 - 1U),iVar3,
                           iVar3 >> 0x1f);
  bg_layer->inv_dyp = uVar1;
  return;
}


