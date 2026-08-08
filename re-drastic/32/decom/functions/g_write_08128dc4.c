/*
 * Ghidra decompilation
 *
 * Function : g_write
 * Address  : 08128dc4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int g_write(lua_State *L,FILE *f,int arg)

{
  int iVar1;
  char *__ptr;
  char *s;
  int iVar2;
  lua_Integer lVar3;
  int len;
  size_t sVar4;
  bool bVar5;
  size_t l;
  int local_2c;
  
  local_2c = __stack_chk_guard;
  iVar1 = lua_gettop(L);
  iVar1 = iVar1 - arg;
  if (iVar1 != 0) {
    bVar5 = true;
    do {
      while (iVar2 = lua_type(L,arg), iVar2 == 3) {
        iVar2 = lua_isinteger(L,arg);
        if (iVar2 == 0) {
          lua_tonumberx(L,arg,(int *)0x0);
          len = __fprintf_chk(f,1,&DAT_08145d28);
        }
        else {
          lVar3 = lua_tointegerx(L,arg,(int *)0x0);
          len = __fprintf_chk(f,1,"%d",lVar3);
        }
        if (len < 1) {
          bVar5 = false;
        }
        iVar1 = iVar1 + -1;
        arg = arg + 1;
        if (iVar1 == 0) goto LAB_08128ea8;
      }
      __ptr = luaL_checklstring(L,arg,&l);
      if (bVar5) {
        sVar4 = fwrite(__ptr,1,l,(FILE *)f);
        bVar5 = l == sVar4;
      }
      iVar1 = iVar1 + -1;
      arg = arg + 1;
    } while (iVar1 != 0);
LAB_08128ea8:
    if (!bVar5) {
      iVar1 = luaL_fileresult(L,0,(char *)0x0);
      goto LAB_08128eb4;
    }
  }
  iVar1 = 1;
LAB_08128eb4:
  if (local_2c == __stack_chk_guard) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


