/*
 * Ghidra decompilation
 *
 * Function : FUN_0017a31c
 * Address  : 0017a31c
 * Program  : drastic64
 */


void FUN_0017a31c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if ((param_2 != 0) && (*(code **)(param_2 + 0x20) != (code *)0x0)) {
    (**(code **)(param_2 + 0x20))(param_1,param_2,1);
  }
  if (*(code **)(lVar1 + 8) != (code *)0x0) {
    (**(code **)(lVar1 + 8))(param_1,lVar1,1);
  }
  lVar1 = *(long *)(lVar1 + 0x28);
  if (lVar1 == 0) {
    if (*(char *)(*param_1 + 0x8b380) != '\0') {
      *(undefined4 *)(param_1 + 9) = 1;
      return;
    }
  }
  else {
    if (*(code **)(lVar1 + 8) != (code *)0x0) {
      (**(code **)(lVar1 + 8))(param_1,lVar1,0);
    }
    param_1[2] = lVar1;
  }
  return;
}


