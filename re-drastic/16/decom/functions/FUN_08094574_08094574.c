/*
 * Ghidra decompilation
 *
 * Function : FUN_08094574
 * Address  : 08094574
 * Program  : drastic16
 */


undefined4 FUN_08094574(undefined4 param_1,void **param_2,void *param_3,uint param_4)

{
  bool in_ZR;
  bool bVar1;
  
  if (in_ZR) {
    bVar1 = CARRY4((uint)DAT_081c5088,param_4);
    DAT_081c5088._0_4_ = (uint)DAT_081c5088 + param_4;
    DAT_081c5088._4_4_ = DAT_081c5088._4_4_ + ((int)param_4 >> 0x1f) + (uint)bVar1;
    memcpy(*param_2,param_3,param_4);
    *param_2 = (void *)((int)*param_2 + param_4);
    return param_1;
  }
  return 0;
}


