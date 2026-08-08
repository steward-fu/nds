/*
 * Ghidra decompilation
 *
 * Function : FUN_080b55dc
 * Address  : 080b55dc
 * Program  : drastic16
 */


void FUN_080b55dc(undefined4 param_1,uint param_2)

{
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  undefined4 local_14;
  
  local_18 = (param_2 & 0x1f) << 1;
  local_1c = param_2 >> 5 & 0x3f;
  local_20 = param_2 >> 0xb & 0x1f;
  local_24 = param_2 >> 0x10 & 0x1f;
  local_28 = param_2 >> 0x15 & 0xf;
  local_2c = (param_2 >> 0x19) + 0x7bc;
  local_14 = 0;
  FUN_080b5470(param_1,&local_2c);
  return;
}


