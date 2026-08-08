/*
 * Ghidra decompilation
 *
 * Function : touchscreen_set_position
 * Address  : 080919c8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void touchscreen_set_position(touchscreen_struct *touchscreen,u32 x,u32 y)

{
  touchscreen->channel_data[1] = (u16)(y << 4);
  touchscreen->channel_data[5] = (u16)(x << 4);
  return;
}


