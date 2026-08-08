/*
 * Ghidra decompilation
 *
 * Function : sha256_transform
 * Address  : 080e8da0
 * Program  : drastic
 */


void sha256_transform(sha256_context *ctx)

{
  int iVar1;
  uint32 v [8];
  uint32 W [64];
  
  iVar1 = __stack_chk_guard;
  cleandata(v,0x20);
  cleandata(W,0x100);
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


