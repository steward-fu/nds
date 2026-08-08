/*
 * Ghidra decompilation
 *
 * Function : FUN_080c2a9c
 * Address  : 080c2a9c
 * Program  : drastic16
 */


undefined4 FUN_080c2a9c(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  bVar4 = uVar2 <= uVar1;
  if (uVar1 == uVar2) {
    bVar4 = *param_2 <= *param_1;
  }
  if ((bVar4 && (uVar1 != uVar2 || *param_1 != *param_2)) ||
     (param_1[1] == param_2[1] && *param_1 == *param_2)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


