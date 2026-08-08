/*
 * Ghidra decompilation
 *
 * Function : FUN_080e2b50
 * Address  : 080e2b50
 * Program  : drastic16
 */


int FUN_080e2b50(int param_1,char param_2)

{
  void *pvVar1;
  
  *(undefined *)(param_1 + 8) = 0;
  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else {
    pvVar1 = operator_new__(0x8003);
    *(void **)(param_1 + 0xc) = pvVar1;
    memset(*(void **)(param_1 + 0xc),0,0x8003);
  }
  return param_1;
}


