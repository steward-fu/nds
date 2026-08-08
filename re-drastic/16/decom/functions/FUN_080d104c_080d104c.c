/*
 * Ghidra decompilation
 *
 * Function : FUN_080d104c
 * Address  : 080d104c
 * Program  : drastic16
 */


void FUN_080d104c(undefined4 param_1,int param_2,int param_3,uint *param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  int local_20;
  uint local_14;
  
  local_20 = param_2;
  local_14 = *param_4 - param_3;
  while (local_20 != 0) {
    puVar1 = (undefined *)FUN_080d0f84(param_1,*param_4);
    puVar2 = (undefined *)FUN_080d0f84(param_1,local_14 & param_5);
    *puVar1 = *puVar2;
    *param_4 = *param_4 + 1 & param_5;
    local_20 = local_20 + -1;
    local_14 = local_14 + 1;
  }
  return;
}


