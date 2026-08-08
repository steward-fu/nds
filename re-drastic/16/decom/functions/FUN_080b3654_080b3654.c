/*
 * Ghidra decompilation
 *
 * Function : FUN_080b3654
 * Address  : 080b3654
 * Program  : drastic16
 */


void * FUN_080b3654(void *param_1)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (iVar1 = 3; iVar1 != -1; iVar1 = iVar1 + -1) {
    FUN_080b3e74(pvVar2);
    pvVar2 = (void *)((int)pvVar2 + 0x278);
  }
  FUN_080b7928((int)param_1 + 0x9e8);
  *(undefined4 *)((int)param_1 + 0x9e4) = 0;
  memset(param_1,0,0x9e0);
  *(undefined4 *)((int)param_1 + 0x9e0) = 0;
  memset((void *)((int)param_1 + 0xaec),0,0x400);
  return param_1;
}


