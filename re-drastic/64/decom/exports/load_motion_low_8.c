/*
 * Ghidra decompilation
 *
 * Function : load_motion_low_8
 * Address  : 00110560
 * Program  : drastic64
 */


undefined4 load_motion_low_8(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xff;
  if ((param_2 & 1) != 0) {
    uVar1 = 0xfc;
  }
  return uVar1;
}


