/*
 * Ghidra decompilation
 *
 * Function : FUN_080c2a54
 * Address  : 080c2a54
 * Program  : drastic16
 */


bool FUN_080c2a54(uint *param_1,uint *param_2)

{
  bool bVar1;
  
  bVar1 = param_2[1] <= param_1[1];
  if (param_1[1] == param_2[1]) {
    bVar1 = *param_2 <= *param_1;
  }
  return !bVar1;
}


