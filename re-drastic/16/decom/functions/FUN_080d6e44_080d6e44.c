/*
 * Ghidra decompilation
 *
 * Function : FUN_080d6e44
 * Address  : 080d6e44
 * Program  : drastic16
 */


undefined4 FUN_080d6e44(int param_1,void **param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_080a0a34(param_1,0,0);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (iVar1 - param_1 >> 2) + 2;
    pvVar2 = malloc(iVar1 * 4);
    *param_2 = pvVar2;
    if (*param_2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_080a0a34(param_1,*param_2,iVar1);
    }
  }
  return uVar3;
}


