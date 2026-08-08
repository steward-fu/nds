/*
 * Ghidra decompilation
 *
 * Function : luaL_loadbufferx
 * Address  : 081268b8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaL_loadbufferx(lua_State *L,char *buff,size_t size,char *name,char *mode)

{
  int iVar1;
  int iVar2;
  LoadS ls;
  
  iVar1 = __stack_chk_guard;
  ls.s = buff;
  ls.size = size;
  iVar2 = lua_load(L,getS,&ls,name,mode);
  if (iVar1 == __stack_chk_guard) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


