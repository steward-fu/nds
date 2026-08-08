/*
 * Ghidra decompilation
 *
 * Function : FUN_0807b384
 * Address  : 0807b384
 * Program  : drastic16
 */


undefined4 FUN_0807b384(uint param_1)

{
  if (DAT_08101800 == 0) {
    param_1 = param_1 ^ DAT_08101814;
  }
  return (&DAT_081017ec)[param_1 + DAT_081017fc * 2];
}


