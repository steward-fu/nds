/*
 * Ghidra decompilation
 *
 * Function : render_scanline_select_pixels
 * Address  : 00139330
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_scanline_select_pixels
               (long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
               undefined8 param_6,uint param_7)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  undefined2 local_210;
  undefined8 auStack_20e [62];
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_7 == 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    uVar1 = *(undefined2 *)puVar4;
  }
  else {
    uVar6 = 0;
    iVar7 = 0;
    puVar2 = (undefined8 *)0x0;
    uVar5 = param_7;
    do {
      if ((uVar5 & 1) != 0) {
        puVar4 = (undefined8 *)(*(long *)(param_4 + uVar6 * 8) + 0x10);
        if (iVar7 != 0) {
          render_scanline_select_pixels_binary_asm(&local_210,puVar2,puVar4,param_3 + uVar6 * 0x20);
          puVar4 = (undefined8 *)&local_210;
        }
        puVar2 = puVar4;
        iVar7 = iVar7 + 1;
      }
      uVar6 = (ulong)((int)uVar6 + 1);
      uVar5 = uVar5 >> 1;
    } while (uVar5 != 0);
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    uVar1 = *(undefined2 *)puVar4;
    if (iVar7 != 0) {
      render_scanline_select_pixels_binary_scalar_asm
                (&local_210,puVar2,*(undefined2 *)puVar4,param_3 + 0xa0);
      render_scanline_expand_6bit_split_asm(param_2,&local_210);
      param_7 = param_7 & 1;
      if (param_5 == 0) {
        param_7 = 0;
      }
      goto joined_r0x001394c8;
    }
  }
  local_210 = uVar1;
  if (puVar4 < &uStack_10 && &local_210 < puVar4) {
    puVar2 = auStack_20e;
    do {
      puVar3 = (undefined8 *)((long)puVar2 + 2);
      *(undefined2 *)puVar2 = *(undefined2 *)puVar4;
      puVar2 = puVar3;
    } while (puVar3 != &uStack_10);
  }
  else {
    uVar1 = *(undefined2 *)puVar4;
    puVar2 = auStack_20e;
    do {
      puVar3 = puVar2 + 2;
      puVar2[1] = CONCAT26(uVar1,CONCAT24(uVar1,CONCAT22(uVar1,uVar1)));
      *puVar2 = CONCAT26(uVar1,CONCAT24(uVar1,CONCAT22(uVar1,uVar1)));
      puVar2 = puVar3;
    } while (puVar3 != (undefined8 *)&local_1e);
    local_1e = *(undefined2 *)puVar4;
    local_1c = *(undefined2 *)puVar4;
    local_1a = *(undefined2 *)puVar4;
    local_18 = *(undefined2 *)puVar4;
    local_16 = *(undefined2 *)puVar4;
    local_14 = *(undefined2 *)puVar4;
    local_12 = *(undefined2 *)puVar4;
  }
  render_scanline_expand_6bit_split_asm(param_2,&local_210);
  param_7 = param_7 & 1;
  if (param_5 == 0) {
    param_7 = 0;
  }
joined_r0x001394c8:
  if (param_7 != 0) {
    render_scanline_select_pixels_binary32_asm(param_2,param_6,param_5,param_3);
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return;
}


