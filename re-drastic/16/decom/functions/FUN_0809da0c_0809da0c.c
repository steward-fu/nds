/*
 * Ghidra decompilation
 *
 * Function : FUN_0809da0c
 * Address  : 0809da0c
 * Program  : drastic16
 */


undefined4 FUN_0809da0c(void *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_1 == (void *)0x0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = FUN_080a42dc((int)param_1 + 0x167d8);
    FUN_0809efb8(param_1);
    operator_delete(param_1);
  }
  if (cVar1 == '\0') {
    uVar2 = 0x11;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


