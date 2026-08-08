/*
 * Ghidra decompilation
 *
 * Function : luaV_tonumber_
 * Address  : 08120eb0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaV_tonumber_(TValue *obj,lua_Number *n)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  TValue v;
  
  iVar1 = __stack_chk_guard;
  if (obj->tt_ == 0x13) {
    iVar2 = 1;
    *n = (float)(longlong)(obj->value_).b;
  }
  else if (((obj->tt_ & 0xfU) == 4) &&
          (sVar3 = luaO_str2num((char *)((obj->value_).f + 0x18),&v),
          sVar3 == *(int *)((obj->value_).f + 0xc) + 1U)) {
    iVar2 = 1;
    if (v.tt_ == 0x13) {
      v.value_.n = (lua_Number)(longlong)v.value_.b;
    }
    *n = (lua_Number)v.value_;
  }
  else {
    iVar2 = 0;
  }
  if (iVar1 == __stack_chk_guard) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


