/*
 * Ghidra decompilation
 *
 * Function : lua_getstack
 * Address  : 001f5080
 * Program  : drastic64
 */


undefined8 lua_getstack(long param_1,int param_2,long param_3)

{
  long lVar1;
  
  if (-1 < param_2) {
    lVar1 = *(long *)(param_1 + 0x20);
    if (param_2 != 0) {
      do {
        if (param_1 + 0x60 == lVar1) {
          return 0;
        }
        param_2 = param_2 + -1;
        lVar1 = *(long *)(lVar1 + 0x10);
      } while (param_2 != 0);
    }
    if (param_1 + 0x60 != lVar1) {
      *(long *)(param_3 + 0x78) = lVar1;
      return 1;
    }
  }
  return 0;
}


