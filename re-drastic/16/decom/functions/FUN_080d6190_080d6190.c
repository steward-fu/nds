/*
 * Ghidra decompilation
 *
 * Function : FUN_080d6190
 * Address  : 080d6190
 * Program  : drastic16
 */


void * FUN_080d6190(void)

{
  void *pvVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = DAT_081d4cf4 + 1;
  bVar3 = DAT_081d4cf4 == 0;
  DAT_081d4cf4 = iVar2;
  if (bVar3) {
    pvVar1 = operator_new(0x248);
    FUN_080d64ec(pvVar1,0x20);
    DAT_081d4cf0 = pvVar1;
  }
  return DAT_081d4cf0;
}


