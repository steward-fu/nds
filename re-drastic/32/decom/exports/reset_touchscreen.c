/*
 * Ghidra decompilation
 *
 * Function : reset_touchscreen
 * Address  : 08091c68
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void reset_touchscreen(touchscreen_struct *touchscreen)

{
  *(undefined8 *)touchscreen->channel_data = 0;
  *(undefined8 *)(touchscreen->channel_data + 4) = 0;
  touchscreen->control = '\0';
  touchscreen->read_counter = '\0';
  return;
}


