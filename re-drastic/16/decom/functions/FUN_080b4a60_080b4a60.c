/*
 * Ghidra decompilation
 *
 * Function : FUN_080b4a60
 * Address  : 080b4a60
 * Program  : drastic16
 */


int FUN_080b4a60(int param_1,uint param_2)

{
  byte *pbVar1;
  uint local_c;
  
  local_c = param_2;
  while( true ) {
    if (*(uint *)(param_1 + 0x14) <= local_c) {
      return 0;
    }
    pbVar1 = (byte *)FUN_080a609c(param_1,local_c);
    if ((~(uint)*pbVar1 & 0xff) >> 7 != 0) break;
    local_c = local_c + 1;
  }
  return (local_c - param_2) + 1;
}


