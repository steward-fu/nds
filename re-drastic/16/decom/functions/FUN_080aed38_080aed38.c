/*
 * Ghidra decompilation
 *
 * Function : FUN_080aed38
 * Address  : 080aed38
 * Program  : drastic16
 */


__mode_t FUN_080aed38(__mode_t param_1)

{
  __mode_t _Var1;
  
  _Var1 = param_1;
  if (DAT_08101c64 == 0xffffffff) {
    DAT_08101c64 = umask(0x12);
    _Var1 = umask(DAT_08101c64);
  }
  if (*(int *)(param_1 + 0xa51c) == 0) {
    if ((*(uint *)(param_1 + 0x844c) & 0x10) == 0) {
      if ((*(uint *)(param_1 + 0x844c) & 1) == 0) {
        *(uint *)(param_1 + 0x844c) = ~DAT_08101c64 & 0x1b6;
      }
      else {
        *(uint *)(param_1 + 0x844c) = ~DAT_08101c64 & 0x124;
      }
    }
    else {
      *(uint *)(param_1 + 0x844c) = ~DAT_08101c64 & 0x1ff;
    }
  }
  else if (*(int *)(param_1 + 0xa51c) != 1) {
    if (*(char *)(param_1 + 0xa511) == '\0') {
      *(uint *)(param_1 + 0x844c) = ~DAT_08101c64 & 0x81b6;
    }
    else {
      *(uint *)(param_1 + 0x844c) = ~DAT_08101c64 & 0x41ff;
    }
  }
  return _Var1;
}


