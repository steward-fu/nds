/*
 * Ghidra decompilation
 *
 * Function : read_chars
 * Address  : 08128fdc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int read_chars(lua_State *L,FILE *f,size_t n)

{
  int iVar1;
  char *__ptr;
  char *p;
  size_t sVar2;
  luaL_Buffer b;
  
  iVar1 = __stack_chk_guard;
  luaL_buffinit(L,&b);
  __ptr = luaL_prepbuffsize(&b,n);
  sVar2 = fread(__ptr,1,n,(FILE *)f);
  b.n = b.n + sVar2;
  luaL_pushresult(&b);
  if (sVar2 != 0) {
    sVar2 = 1;
  }
  if (iVar1 == __stack_chk_guard) {
    return sVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


