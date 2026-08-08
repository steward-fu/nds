/*
 * Ghidra decompilation
 *
 * Function : FUN_080d7ca0
 * Address  : 080d7ca0
 * Program  : drastic16
 */


void FUN_080d7ca0(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_18;
  undefined4 *local_c;
  
  local_18 = param_2;
  while (local_18 = FUN_080d6e44(local_18,&local_c), local_18 != 0) {
    iVar1 = FUN_080db628(param_1,*local_c);
    if (iVar1 != 0) {
      FUN_080d7d3c(param_1,local_c + 1);
    }
    free(local_c);
  }
  return;
}


