/*
 * Ghidra decompilation
 *
 * Function : luaG_tointerror
 * Address  : 001f5a50
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaG_tointerror(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_c;
  undefined8 local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2[2] == 0x13) {
    local_c = *param_2;
  }
  else {
    iVar1 = luaV_tointeger_(param_2,&local_c);
    if (iVar1 == 0) {
      param_3 = param_2;
    }
  }
  uVar2 = varinfo(param_1,param_3);
                    /* WARNING: Subroutine does not return */
  luaG_runerror(param_1,"number%s has no integer representation",uVar2);
}


