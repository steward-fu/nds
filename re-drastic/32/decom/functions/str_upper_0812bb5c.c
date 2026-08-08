/*
 * Ghidra decompilation
 *
 * Function : str_upper
 * Address  : 0812bb5c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int str_upper(lua_State *L)

{
  int iVar1;
  char *pcVar2;
  char *s;
  char *pcVar3;
  char *p;
  __int32_t **pp_Var4;
  uint uVar5;
  byte *pbVar6;
  size_t l;
  luaL_Buffer b;
  
  iVar1 = __stack_chk_guard;
  pcVar2 = luaL_checklstring(L,1,&l);
  pcVar3 = luaL_buffinitsize(L,&b,l);
  if (l != 0) {
    pp_Var4 = __ctype_toupper_loc();
    pbVar6 = (byte *)(pcVar2 + -1);
    pcVar3 = pcVar3 + -1;
    uVar5 = 0;
    do {
      pbVar6 = pbVar6 + 1;
      uVar5 = uVar5 + 1;
      pcVar3 = pcVar3 + 1;
      *pcVar3 = (char)(*pp_Var4)[*pbVar6];
    } while (uVar5 < l);
  }
  luaL_pushresultsize(&b,l);
  if (iVar1 == __stack_chk_guard) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


