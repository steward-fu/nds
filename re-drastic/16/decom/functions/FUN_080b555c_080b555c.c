/*
 * Ghidra decompilation
 *
 * Function : FUN_080b555c
 * Address  : 080b555c
 * Program  : drastic16
 */


uint FUN_080b555c(undefined4 param_1)

{
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  
  FUN_080b537c(param_1,&local_30);
  return local_1c >> 1 | local_20 << 5 | local_24 << 0xb | local_28 << 0x10 | local_2c << 0x15 |
         (local_30 + -0x7bc) * 0x2000000;
}


