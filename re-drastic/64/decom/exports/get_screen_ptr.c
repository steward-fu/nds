/*
 * Ghidra decompilation
 *
 * Function : get_screen_ptr
 * Address  : 0018a9c0
 * Program  : drastic64
 */


undefined8 get_screen_ptr(uint param_1)

{
  long lVar1;
  
  if (DAT_040315d4._4_4_ != 0) {
    return DAT_04031598;
  }
  lVar1 = (ulong)(param_1 ^ (uint)DAT_040315cc) * 0x28;
  if ((&DAT_04031540)[lVar1] != '\0') {
    return *(undefined8 *)(&DAT_04031528 + lVar1);
  }
  return 0;
}


