/*
 * Ghidra decompilation
 *
 * Function : LookToRead_Read
 * Address  : 080cc018
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable p:CLookToRead *[r0:4] conflicts with parameter, skipped. */

SRes LookToRead_Read(void *pp,void *buf,size_t *size)

{
  SRes SVar1;
  uint __n;
  
  __n = *(int *)((int)pp + 0x18) - *(int *)((int)pp + 0x14);
  if (__n != 0) {
    if (*size <= __n) {
      __n = *size;
    }
    memcpy(buf,(void *)((int)pp + *(int *)((int)pp + 0x14) + 0x1c),__n);
    *(uint *)((int)pp + 0x14) = *(int *)((int)pp + 0x14) + __n;
    *size = __n;
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x080cc09c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = (***(code ***)((int)pp + 0x10))();
  return SVar1;
}


