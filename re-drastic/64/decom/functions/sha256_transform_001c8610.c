/*
 * Ghidra decompilation
 *
 * Function : sha256_transform
 * Address  : 001c8610
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sha256_transform(sha256_context*) [clone .constprop.0] */

void sha256_transform(sha256_context *param_1)

{
  undefined auStack_128 [32];
  undefined auStack_108 [256];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cleandata(auStack_128,0x20);
  cleandata(auStack_108,0x100);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


