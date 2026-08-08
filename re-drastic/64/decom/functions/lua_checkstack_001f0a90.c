/*
 * Ghidra decompilation
 *
 * Function : lua_checkstack
 * Address  : 001f0a90
 * Program  : drastic64
 */


undefined8 lua_checkstack(long param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int local_4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar3 = (long)param_2;
  lVar5 = *(long *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x30) - lVar4 >> 4 <= lVar3) {
    if (1000000 - param_2 < (int)(lVar4 - *(long *)(param_1 + 0x38) >> 4) + 5) {
      return 0;
    }
    local_4 = param_2;
    iVar2 = luaD_rawrunprotected(param_1,growstack,&local_4);
    if (iVar2 != 0) {
      return 0;
    }
    lVar3 = (long)local_4;
    lVar4 = *(long *)(param_1 + 0x10);
  }
  uVar1 = lVar4 + lVar3 * 0x10;
  if (uVar1 <= *(ulong *)(lVar5 + 8)) {
    return 1;
  }
  *(ulong *)(lVar5 + 8) = uVar1;
  return 1;
}


