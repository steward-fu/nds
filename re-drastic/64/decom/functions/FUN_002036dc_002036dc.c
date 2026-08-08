/*
 * Ghidra decompilation
 *
 * Function : FUN_002036dc
 * Address  : 002036dc
 * Program  : drastic64
 */


void FUN_002036dc(long param_1,undefined4 *param_2,long *param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  if ((*(uint *)(param_3 + 1) & 0xf) == 4) {
    *param_2 = (int)*(undefined8 *)(*param_3 + 0x10);
    param_2[2] = 0x13;
    return;
  }
  if ((*(uint *)(param_3 + 1) & 0xf) == 5) {
    lVar3 = *param_3;
    lVar2 = *(long *)(lVar3 + 0x28);
    if (((lVar2 == 0) || ((*(byte *)(lVar2 + 10) >> 4 & 1) != 0)) ||
       (lVar2 = luaT_gettm(lVar2,4,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x118)), lVar2 == 0))
    {
      uVar1 = luaH_getn(lVar3);
      *param_2 = uVar1;
      param_2[2] = 0x13;
      return;
    }
  }
  else {
    lVar2 = luaT_gettmbyobj(param_1,param_3,4);
    if (*(int *)(lVar2 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      luaG_typeerror(param_1,param_3,"get length of");
    }
  }
  luaT_callTM(param_1,lVar2,param_3,param_3,param_2,1);
  return;
}


