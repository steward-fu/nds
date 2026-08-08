/*
 * Ghidra decompilation
 *
 * Function : luaD_growstack
 * Address  : 08113218
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaD_growstack(lua_State *L,int n)

{
  int iVar1;
  int needed;
  int size;
  int newsize;
  int newsize_00;
  
  if (1000000 < L->stacksize) {
                    /* WARNING: Subroutine does not return */
    luaD_throw(L,6);
  }
  newsize_00 = L->stacksize * 2;
  if (999999 < newsize_00) {
    newsize_00 = 1000000;
  }
  iVar1 = n + ((int)L->top - (int)L->stack >> 3) + 5;
  if ((newsize_00 < iVar1) && (newsize_00 = iVar1, 1000000 < iVar1)) {
    luaD_reallocstack(L,0xf4308);
                    /* WARNING: Subroutine does not return */
    luaG_runerror(L,"stack overflow");
  }
  luaD_reallocstack(L,newsize_00);
  return;
}


