/*
 * Ghidra decompilation
 *
 * Function : FUN_0809f6c4
 * Address  : 0809f6c4
 * Program  : drastic16
 */


bool FUN_0809f6c4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 local_c;
  
  cVar1 = FUN_0809f80c(param_1,&local_c);
  if (cVar1 == '\x01') {
    FUN_080a0620(param_2,local_c,param_3);
  }
  return cVar1 == '\x01';
}


