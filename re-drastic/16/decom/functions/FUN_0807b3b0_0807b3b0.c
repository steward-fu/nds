/*
 * Ghidra decompilation
 *
 * Function : FUN_0807b3b0
 * Address  : 0807b3b0
 * Program  : drastic16
 */


undefined4 FUN_0807b3b0(uint param_1)

{
  if (DAT_08101800 == 0) {
    param_1 = param_1 ^ DAT_08101814;
  }
  return *(undefined4 *)(&DAT_081016e0 + (param_1 + 0x5a) * 4);
}


