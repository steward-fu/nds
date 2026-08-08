/*
 * Ghidra decompilation
 *
 * Function : FUN_080db868
 * Address  : 080db868
 * Program  : drastic16
 */


undefined4 FUN_080db868(uint *param_1,uint *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  
  bVar2 = param_2[1] <= param_1[1];
  if (param_1[1] == param_2[1]) {
    bVar2 = *param_2 <= *param_1;
  }
  if ((bVar2) && (param_1[1] != param_2[1] || *param_1 != *param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


