/*
 * Ghidra decompilation
 *
 * Function : render_polygon_generate_texture_addresses
 * Address  : 00147b90
 * Program  : drastic64
 */


void render_polygon_generate_texture_addresses
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 2) & 0xf;
  if (uVar1 == 9) {
LAB_00147c00:
    render_polygon_generate_texture_addresses_wrap_clamp_asm();
    return;
  }
  if (uVar1 < 10) {
    if (uVar1 != 5) {
      if (uVar1 < 6) {
        if (uVar1 == 2) {
LAB_00147c30:
          render_polygon_generate_texture_addresses_clamp_wrap_asm();
          return;
        }
        if (uVar1 == 3) {
          render_polygon_generate_texture_addresses_wrap_wrap_asm();
          return;
        }
        if (uVar1 == 1) goto LAB_00147c00;
      }
      else {
        if (uVar1 == 6) goto LAB_00147c30;
        if (uVar1 == 7) {
          render_polygon_generate_texture_addresses_flip_wrap_asm();
          return;
        }
      }
LAB_00147c38:
      render_polygon_generate_texture_addresses_clamp_clamp_asm();
      return;
    }
  }
  else if (uVar1 != 0xd) {
    if (uVar1 < 0xe) {
      if (uVar1 != 10) {
        if (uVar1 == 0xb) {
          render_polygon_generate_texture_addresses_wrap_flip_asm
                    (param_2,param_3,param_4,*(undefined2 *)(*(long *)(param_1 + 0x10) + 0x40),
                     *(undefined2 *)(*(long *)(param_1 + 0x10) + 0x42),param_5);
          return;
        }
        goto LAB_00147c38;
      }
    }
    else if (uVar1 != 0xe) {
      render_polygon_generate_texture_addresses_flip_flip_asm();
      return;
    }
    render_polygon_generate_texture_addresses_clamp_flip_asm();
    return;
  }
  render_polygon_generate_texture_addresses_flip_clamp_asm();
  return;
}


