/*
 * Ghidra decompilation
 *
 * Function : FUN_080d110c
 * Address  : 080d110c
 * Program  : drastic16
 */


void FUN_080d110c(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  undefined *puVar1;
  uint local_14;
  
  for (local_14 = 0; local_14 < param_4; local_14 = local_14 + 1) {
    puVar1 = (undefined *)FUN_080d0f84(param_1,param_3 + local_14);
    *(undefined *)(param_2 + local_14) = *puVar1;
  }
  return;
}


