/*
 * Ghidra decompilation
 *
 * Function : luaG_opinterror
 * Address  : 08112bb8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaG_opinterror(lua_State *L,TValue *p1,TValue *p2,char *msg)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  lua_Number temp;
  undefined4 local_c;
  
  bVar3 = p1->tt_ == 3;
  pcVar2 = msg;
  if (bVar3) {
    pcVar2 = (char *)(p1->value_).n;
  }
  local_c = __stack_chk_guard;
  if ((!bVar3) && (iVar1 = luaV_tonumber_(p1,&temp), pcVar2 = (char *)temp, iVar1 == 0)) {
    p2 = p1;
  }
  temp = (lua_Number)pcVar2;
                    /* WARNING: Subroutine does not return */
  luaG_typeerror(L,p2,msg);
}


