/*
 * Ghidra decompilation
 *
 * Function : SecToRead_Read
 * Address  : 080cc00c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable p:CSecToRead *[r0:4] conflicts with parameter, skipped. */

SRes SecToRead_Read(void *pp,void *buf,size_t *size)

{
  SRes SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x080cc014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = (**(code **)(*(int *)((int)pp + 4) + 8))();
  return SVar1;
}


