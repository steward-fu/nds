/*
 * Ghidra decompilation
 *
 * Function : luaF_newLclosure
 * Address  : 001f7e10
 * Program  : drastic64
 */


long luaF_newLclosure(undefined8 param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = param_2 - 1;
  lVar2 = luaC_newobj(param_1,6,(long)(int)(uVar1 * 8 + 0x28));
  *(char *)(lVar2 + 10) = (char)param_2;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  if (param_2 != 0) {
    memset((void *)(lVar2 + (ulong)uVar1 * -8 + ((long)(int)uVar1 + 4) * 8),0,((ulong)uVar1 + 1) * 8
          );
  }
  return lVar2;
}


