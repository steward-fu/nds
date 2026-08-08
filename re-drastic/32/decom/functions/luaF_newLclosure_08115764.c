/*
 * Ghidra decompilation
 *
 * Function : luaF_newLclosure
 * Address  : 08115764
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

LClosure * luaF_newLclosure(lua_State *L,int n)

{
  int iVar1;
  LClosure *pLVar2;
  LClosure *c;
  size_t __n;
  size_t sz;
  
  iVar1 = (n + -1) * 4;
  sz = iVar1 + 0x14;
  pLVar2 = (LClosure *)luaC_newobj(L,6,sz);
  pLVar2->nupvalues = (lu_byte)n;
  pLVar2->p = (Proto *)0x0;
  if (n != 0) {
    __n = iVar1 + 4;
    memset((void *)((int)pLVar2 + (sz - __n)),0,__n);
  }
  return pLVar2;
}


