/*
 * Ghidra decompilation
 *
 * Function : FUN_080ce7e0
 * Address  : 080ce7e0
 * Program  : drastic16
 */


int FUN_080ce7e0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint local_10;
  int local_c;
  
  uVar1 = FUN_080e2c58(param_2);
  FUN_080d2234(param_2,2);
  local_c = 0;
  local_10 = 0;
  while( true ) {
    if ((uVar1 >> 0xe) + 1 <= local_10) break;
    uVar2 = FUN_080e2c58(param_2);
    local_c = local_c + ((uVar2 >> 8) << ((local_10 & 0x1f) << 3));
    FUN_080d2234(param_2,8);
    local_10 = local_10 + 1;
  }
  return local_c;
}


