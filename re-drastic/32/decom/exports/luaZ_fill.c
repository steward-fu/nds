/*
 * Ghidra decompilation
 *
 * Function : luaZ_fill
 * Address  : 08124600
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaZ_fill(ZIO *z)

{
  byte *pbVar1;
  char *buff;
  uint uVar2;
  size_t size;
  int local_14;
  
  local_14 = __stack_chk_guard;
  pbVar1 = (byte *)(*z->reader)(z->L,z->data,&size);
  if ((pbVar1 == (byte *)0x0) || (size == 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    z->n = size - 1;
    z->p = (char *)(pbVar1 + 1);
    uVar2 = (uint)*pbVar1;
  }
  if (local_14 == __stack_chk_guard) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


