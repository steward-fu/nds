/*
 * Ghidra decompilation
 *
 * Function : FUN_080d1a40
 * Address  : 080d1a40
 * Program  : drastic16
 */


int FUN_080d1a40(int param_1,undefined4 param_2,undefined param_3)

{
  switch(param_2) {
  case 0:
    if ((*(uint *)(param_1 + 0x1c) < 2) || (*(char *)(param_1 + 0x4c38) == '\x01')) {
      param_1 = FUN_080cdef0(param_1,param_3);
    }
    else {
      param_1 = FUN_080c5cc4(param_1,param_3);
    }
    break;
  case 0xf:
    param_1 = FUN_080c7884(param_1,param_3);
    break;
  case 0x14:
  case 0x1a:
    param_1 = FUN_080c972c(param_1,param_3);
    break;
  case 0x1d:
    param_1 = FUN_080cae20(param_1,param_3);
  }
  return param_1;
}


