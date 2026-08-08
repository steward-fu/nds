/*
 * Ghidra decompilation
 *
 * Function : lua_load
 * Address  : 001f3e40
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int lua_load(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
            undefined8 param_5)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined auStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = &DAT_002296a8;
  if (param_4 != (undefined1 *)0x0) {
    puVar1 = param_4;
  }
  luaZ_init(param_1,auStack_30,param_2,param_3);
  iVar2 = luaD_protectedparser(param_1,auStack_30,puVar1,param_5);
  if ((iVar2 == 0) &&
     (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + -0x10), *(char *)(lVar7 + 10) != '\0')) {
    puVar3 = (undefined8 *)luaH_getint(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40),2);
    plVar5 = *(long **)(lVar7 + 0x20);
    uVar6 = puVar3[1];
    plVar4 = (long *)*plVar5;
    *plVar4 = *puVar3;
    plVar4[1] = uVar6;
    if (((*(uint *)(plVar4 + 1) >> 6 & 1) != 0) && (plVar4 == plVar5 + 2)) {
      luaC_upvalbarrier_(param_1);
    }
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


