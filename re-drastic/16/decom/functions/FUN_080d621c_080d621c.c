/*
 * Ghidra decompilation
 *
 * Function : FUN_080d621c
 * Address  : 080d621c
 * Program  : drastic16
 */


void FUN_080d621c(void *param_1)

{
  bool bVar1;
  void *pvVar2;
  
  pvVar2 = DAT_081d4cf0;
  if (((param_1 != (void *)0x0) && (param_1 == DAT_081d4cf0)) && (DAT_081d4cf4 != 0)) {
    DAT_081d4cf4 = DAT_081d4cf4 + -1;
    if (DAT_081d4cf4 == 0) {
      bVar1 = true;
      goto LAB_080d62a0;
    }
  }
  bVar1 = false;
LAB_080d62a0:
  if ((bVar1) && (DAT_081d4cf0 != (void *)0x0)) {
    FUN_080d6700(DAT_081d4cf0);
    operator_delete(pvVar2);
  }
  return;
}


