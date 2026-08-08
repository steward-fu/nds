/*
 * Ghidra decompilation
 *
 * Function : FUN_080e52e8
 * Address  : 080e52e8
 * Program  : drastic16
 */


int FUN_080e52e8(int param_1,int param_2,undefined4 param_3)

{
  if ((*(short *)(param_2 + 0xc768) == 0x101) && (*(char *)(param_1 + 0xc290) != '\0')) {
    param_1 = FUN_080e4778(param_2,param_3);
  }
  return param_1;
}


