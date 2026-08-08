/*
 * Ghidra decompilation
 *
 * Function : convert_touch_coordinates
 * Address  : 080a8ae8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void convert_touch_coordinates(u32 ts_x,u32 ts_y,u32 *_ds_x,u32 *_ds_y,u32 mirror_touch)

{
  uint uVar1;
  u32 y;
  uint uVar2;
  u32 x;
  bool bVar3;
  bool bVar4;
  
  uVar2 = SDL_screen.DS_screens[SDL_screen.swap_screens ^ 1].x;
  uVar1 = SDL_screen.DS_screens[SDL_screen.swap_screens ^ 1].y;
  bVar4 = ts_x <= uVar2;
  bVar3 = uVar2 == ts_x;
  if (!bVar4 || bVar3) {
    bVar4 = ts_y <= uVar1;
    bVar3 = uVar1 == ts_y;
  }
  if (bVar4 && !bVar3) {
    if (uVar2 + 0x100 <= ts_x) goto LAB_080a8b80;
  }
  else {
    if (ts_x < uVar2 + 0x100) {
      if (ts_y < uVar1 + 0xc0) {
        *_ds_x = ts_x - uVar2;
        *_ds_y = ts_y - uVar1;
        return;
      }
      *_ds_y = 0xbf;
      goto LAB_080a8b3c;
    }
LAB_080a8b80:
    *_ds_x = 0xff;
  }
  if (ts_x < uVar2) {
    *_ds_x = 0;
  }
  if (uVar1 + 0xc0 <= ts_y) {
    *_ds_y = 0xbf;
  }
LAB_080a8b3c:
  if (ts_y < uVar1) {
    *_ds_y = 0;
  }
  return;
}


