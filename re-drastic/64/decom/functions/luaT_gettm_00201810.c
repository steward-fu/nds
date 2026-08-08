/*
 * Ghidra decompilation
 *
 * Function : luaT_gettm
 * Address  : 00201810
 * Program  : drastic64
 */


long luaT_gettm(long param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = luaH_getstr(param_1,param_3);
  if (*(int *)(lVar1 + 8) != 0) {
    return lVar1;
  }
  *(byte *)(param_1 + 10) = (byte)(1 << (ulong)(param_2 & 0x1f)) | *(byte *)(param_1 + 10);
  return 0;
}


