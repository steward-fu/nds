/*
 * Ghidra decompilation
 *
 * Function : SzDecodeCopy
 * Address  : 001ea390
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SzDecodeCopy(ulong param_1,code **param_2,void *param_3)

{
  size_t sVar1;
  undefined8 uVar2;
  void *local_18;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != 0) {
    do {
      local_10 = 0x40000;
      if (param_1 < 0x40000) {
        local_10 = param_1;
      }
      uVar2 = (**param_2)(param_2,&local_18,&local_10);
      sVar1 = local_10;
      if ((int)uVar2 != 0) goto LAB_001ea450;
      if (local_10 == 0) {
        uVar2 = 6;
        goto LAB_001ea450;
      }
      param_1 = param_1 - local_10;
      memcpy(param_3,local_18,local_10);
      param_3 = (void *)((long)param_3 + sVar1);
      uVar2 = (*param_2[1])(param_2,sVar1);
      if ((int)uVar2 != 0) goto LAB_001ea450;
    } while (param_1 != 0);
  }
  uVar2 = 0;
LAB_001ea450:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2,local_8 - ___stack_chk_guard,0);
  }
  return;
}


