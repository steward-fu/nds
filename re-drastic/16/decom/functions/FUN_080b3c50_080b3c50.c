/*
 * Ghidra decompilation
 *
 * Function : FUN_080b3c50
 * Address  : 080b3c50
 * Program  : drastic16
 */


void FUN_080b3c50(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  
  if ((param_1 == 1) && (param_2 == 0xffff)) {
    puVar1 = &DAT_081cd0b4;
    for (iVar2 = 3; iVar2 != -1; iVar2 = iVar2 + -1) {
      FUN_080b3d94(puVar1);
      puVar1 = puVar1 + 0x230;
    }
    __aeabi_atexit(0,FUN_080b3c10,&DAT_080fa504);
  }
  return;
}


