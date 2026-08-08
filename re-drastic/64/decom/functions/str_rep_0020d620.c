/*
 * Ghidra decompilation
 *
 * Function : str_rep
 * Address  : 0020d620
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void str_rep(undefined8 param_1)

{
  ulong uVar1;
  int iVar2;
  void *__src;
  void *__src_00;
  undefined8 uVar3;
  void *pvVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  size_t local_1038;
  ulong local_1030;
  undefined auStack_1028 [4128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __src = (void *)luaL_checklstring(param_1,1,&local_1038,0);
  iVar2 = luaL_checkinteger(param_1,2);
  __src_00 = (void *)luaL_optlstring(param_1,3,"",&local_1030);
  if (iVar2 < 1) {
    lua_pushlstring(param_1,"",0);
    uVar3 = 1;
  }
  else {
    if (!CARRY8(local_1038,local_1030)) {
      uVar5 = (ulong)iVar2;
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = 0x7fffffff / uVar5;
      }
      if (local_1038 + local_1030 <= uVar1) {
        iVar6 = iVar2 + -1;
        lVar7 = (long)iVar6 * local_1030 + local_1038 * uVar5;
        pvVar4 = (void *)luaL_buffinitsize(param_1,auStack_1028,lVar7);
        if (iVar2 != 1) {
          do {
            while( true ) {
              pvVar4 = memcpy(pvVar4,__src,local_1038);
              pvVar4 = (void *)((long)pvVar4 + local_1038);
              if (local_1030 == 0) break;
              pvVar4 = memcpy(pvVar4,__src_00,local_1030);
              iVar6 = iVar6 + -1;
              pvVar4 = (void *)((long)pvVar4 + local_1030);
              if (iVar6 == 0) goto LAB_0020d784;
            }
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
LAB_0020d784:
        memcpy(pvVar4,__src,local_1038);
        luaL_pushresultsize(auStack_1028,lVar7);
        uVar3 = 1;
        goto LAB_0020d6d4;
      }
    }
    uVar3 = luaL_error(param_1,"resulting string too large");
  }
LAB_0020d6d4:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3,local_8 - ___stack_chk_guard,0);
  }
  return;
}


