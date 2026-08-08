/*
 * Ghidra decompilation
 *
 * Function : str_rep
 * Address  : 0812bcc8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int str_rep(lua_State *L)

{
  int iVar1;
  size_t sVar2;
  char *__src;
  char *s;
  lua_Integer lVar3;
  lua_Integer n;
  char *__src_00;
  char *sep;
  uint uVar4;
  int iVar5;
  char *__dest;
  char *p;
  void *pvVar6;
  size_t sVar7;
  size_t totallen;
  uint uVar8;
  size_t l;
  size_t lsep;
  luaL_Buffer b;
  
  iVar1 = __stack_chk_guard;
  __src = luaL_checklstring(L,1,&l);
  lVar3 = luaL_checkinteger(L,2);
  __src_00 = luaL_optlstring(L,3,"",&lsep);
  sVar2 = lsep;
  sVar7 = l;
  if (lVar3 < 1) {
    lua_pushlstring(L,"",0);
    iVar5 = 1;
  }
  else {
    uVar8 = l + lsep;
    if ((CARRY4(l,lsep)) || (uVar4 = __aeabi_uidiv(0x7fffffff,lVar3), uVar4 < uVar8)) {
      iVar5 = luaL_error(L,"resulting string too large");
    }
    else {
      iVar5 = lVar3 + -1;
      sVar7 = sVar2 * iVar5 + lVar3 * sVar7;
      __dest = luaL_buffinitsize(L,&b,sVar7);
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        pvVar6 = memcpy(__dest,__src,l);
        __dest = (char *)((int)pvVar6 + l);
        if (lsep != 0) {
          pvVar6 = memcpy(__dest,__src_00,lsep);
          __dest = (char *)((int)pvVar6 + lsep);
        }
      }
      memcpy(__dest,__src,l);
      luaL_pushresultsize(&b,sVar7);
      iVar5 = 1;
    }
  }
  if (iVar1 == __stack_chk_guard) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


