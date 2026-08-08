/*
 * Ghidra decompilation
 *
 * Function : LookToRead_Read
 * Address  : 001af410
 * Program  : drastic64
 */


undefined8 LookToRead_Read(long param_1,void *param_2,size_t *param_3)

{
  size_t __n;
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28);
  if (uVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x001af444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (***(code ***)(param_1 + 0x20))();
    return uVar2;
  }
  __n = *param_3;
  if (uVar1 < *param_3) {
    __n = uVar1;
  }
  memcpy(param_2,(void *)(param_1 + 0x38 + *(long *)(param_1 + 0x28)),__n);
  *(size_t *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + __n;
  *param_3 = __n;
  return 0;
}


