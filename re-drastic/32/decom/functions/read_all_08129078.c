/*
 * Ghidra decompilation
 *
 * Function : read_all
 * Address  : 08129078
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void read_all(lua_State *L,FILE *f)

{
  int iVar1;
  char *__ptr;
  char *p;
  size_t sVar2;
  luaL_Buffer b;
  
  iVar1 = __stack_chk_guard;
  luaL_buffinit(L,&b);
  do {
    __ptr = luaL_prepbuffsize(&b,0x800);
    sVar2 = fread(__ptr,1,0x800,(FILE *)f);
    b.n = b.n + sVar2;
  } while (sVar2 == 0x800);
  luaL_pushresult(&b);
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


