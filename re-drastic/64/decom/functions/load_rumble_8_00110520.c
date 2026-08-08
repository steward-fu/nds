/*
 * Ghidra decompilation
 *
 * Function : load_rumble_8
 * Address  : 00110520
 * Program  : drastic64
 */


undefined4 load_rumble_8(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xfd;
  if ((param_2 & 1) != 0) {
    uVar1 = 0xff;
  }
  return uVar1;
}


