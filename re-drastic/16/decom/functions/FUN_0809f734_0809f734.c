/*
 * Ghidra decompilation
 *
 * Function : FUN_0809f734
 * Address  : 0809f734
 * Program  : drastic16
 */


undefined FUN_0809f734(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int local_20;
  undefined local_9;
  
  FUN_0809f9fc(param_1);
  FUN_0809f8d8(param_1);
  local_9 = 1;
  local_20 = param_4;
  do {
    if (local_20 < 0) goto LAB_0809f7bc;
    cVar1 = FUN_0809f6c4(param_1,param_2,param_3);
    local_20 = local_20 + -1;
  } while (cVar1 == '\x01');
  local_9 = 0;
LAB_0809f7bc:
  FUN_0809fa5c(param_1);
  return local_9;
}


