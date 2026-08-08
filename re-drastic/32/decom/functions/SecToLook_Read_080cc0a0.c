/*
 * Ghidra decompilation
 *
 * Function : SecToLook_Read
 * Address  : 080cc0a0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

SRes SecToLook_Read(void *pp,void *buf,size_t *size)

{
  int __result__;
  code **ppcVar1;
  void *lookBuf;
  int local_1c;
  
  if (*size == 0) {
    pp = (void *)0x0;
  }
  local_1c = __stack_chk_guard;
  if (*size != 0) {
    ppcVar1 = *(code ***)((int)pp + 4);
    pp = (void *)(**ppcVar1)(ppcVar1,&lookBuf);
    if (pp == (void *)0x0) {
      memcpy(buf,lookBuf,*size);
      pp = (void *)(*ppcVar1[1])(ppcVar1,*size);
    }
  }
  if (local_1c == __stack_chk_guard) {
    return (SRes)pp;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


