/*
 * Ghidra decompilation
 *
 * Function : f_parser
 * Address  : 08112f14
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void f_parser(lua_State *L,void *ud)

{
  ZIO *z;
  char *pcVar1;
  LClosure *cl_00;
  LClosure *cl;
  SParser *p;
  size_t sVar2;
  byte *pbVar3;
  uint firstchar;
  int c;
  char *__s;
  
                    /* WARNING: Load size is inaccurate */
  z = *ud;
  sVar2 = z->n;
  z->n = sVar2 - 1;
  if (sVar2 == 0) {
    firstchar = luaZ_fill(z);
  }
  else {
    pbVar3 = (byte *)z->p;
    z->p = (char *)(pbVar3 + 1);
    firstchar = (uint)*pbVar3;
  }
  if (firstchar == 0x1b) {
    __s = *(char **)((int)ud + 0x34);
    if ((__s != (char *)0x0) && (pcVar1 = strchr(__s,0x62), pcVar1 == (char *)0x0)) {
      pcVar1 = "binary";
      goto LAB_08113018;
    }
                    /* WARNING: Load size is inaccurate */
    cl_00 = luaU_undump(L,*ud,(Mbuffer *)((int)ud + 4),*(char **)((int)ud + 0x38));
  }
  else {
    __s = *(char **)((int)ud + 0x34);
    if ((__s != (char *)0x0) && (pcVar1 = strchr(__s,0x74), pcVar1 == (char *)0x0)) {
      pcVar1 = "text";
LAB_08113018:
      luaO_pushfstring(L,"attempt to load a %s chunk (mode is \'%s\')",pcVar1,__s);
                    /* WARNING: Subroutine does not return */
      luaD_throw(L,3);
    }
                    /* WARNING: Load size is inaccurate */
    cl_00 = luaY_parser(L,*ud,(Mbuffer *)((int)ud + 4),(Dyndata *)((int)ud + 0x10),
                        *(char **)((int)ud + 0x38),firstchar);
  }
  luaF_initupvals(L,cl_00);
  return;
}


