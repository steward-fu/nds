/*
 * Ghidra decompilation
 *
 * Function : FUN_080d50c8
 * Address  : 080d50c8
 * Program  : drastic16
 */


int FUN_080d50c8(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int local_10;
  uint local_c;
  
  if (param_3 < 8) {
    local_c = 0;
    local_10 = param_3 + 2;
  }
  else {
    local_c = (param_3 >> 2) - 1;
    local_10 = ((param_3 & 3 | 4) << (local_c & 0xff)) + 2;
  }
  if (local_c != 0) {
    uVar1 = FUN_080d229c(param_2);
    local_10 = local_10 + (uVar1 >> (0x10 - local_c & 0xff));
    FUN_080d2234(param_2,local_c);
  }
  return local_10;
}


