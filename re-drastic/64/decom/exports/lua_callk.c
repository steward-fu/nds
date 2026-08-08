/*
 * Ghidra decompilation
 *
 * Function : lua_callk
 * Address  : 001f3bd0
 * Program  : drastic64
 */


void lua_callk(long param_1,int param_2,ulong param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10) + (long)param_2 * -0x10 + -0x10;
  if ((param_5 == 0) || (*(short *)(param_1 + 0xc4) != 0)) {
    luaD_call(param_1,lVar1,param_3 & 0xffffffff,0);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    *(long *)(lVar2 + 0x20) = param_5;
    *(undefined8 *)(lVar2 + 0x30) = param_4;
    luaD_call(param_1,lVar1,param_3,1);
  }
  if ((int)param_3 == -1) {
    if (*(ulong *)(*(long *)(param_1 + 0x20) + 8) < *(ulong *)(param_1 + 0x10)) {
      *(ulong *)(*(long *)(param_1 + 0x20) + 8) = *(ulong *)(param_1 + 0x10);
      return;
    }
  }
  return;
}


