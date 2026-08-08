/*
 * Ghidra decompilation
 *
 * Function : FUN_08092040
 * Address  : 08092040
 * Program  : drastic16
 */


void FUN_08092040(undefined8 *param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  
  do {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
    iVar2 = param_3 + -0x10;
    bVar1 = 0xf < param_3;
    param_3 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


