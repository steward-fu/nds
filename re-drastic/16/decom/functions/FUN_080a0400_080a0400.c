/*
 * Ghidra decompilation
 *
 * Function : FUN_080a0400
 * Address  : 080a0400
 * Program  : drastic16
 */


undefined8 FUN_080a0400(uint param_1,int param_2)

{
  uint local_14;
  int local_c;
  
  local_c = 1;
  for (local_14 = param_1; 9 < local_14; local_14 = local_14 / 10) {
    param_2 = local_14 * -0x33333333;
    local_c = local_c + 1;
  }
  return CONCAT44(param_2,local_c);
}


