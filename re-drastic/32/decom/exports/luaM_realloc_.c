/*
 * Ghidra decompilation
 *
 * Function : luaM_realloc_
 * Address  : 081187dc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void * luaM_realloc_(lua_State *L,void *block,size_t osize,size_t nsize)

{
  void *pvVar1;
  void *newblock;
  global_State *g;
  global_State *pgVar2;
  size_t realosize;
  
  pgVar2 = L->l_G;
  realosize = osize;
  if (block == (void *)0x0) {
    realosize = 0;
  }
  pvVar1 = (*pgVar2->frealloc)(pgVar2->ud,block,osize,nsize);
  if (nsize != 0 && pvVar1 == (void *)0x0) {
    luaC_fullgc(L,1);
    pvVar1 = (*pgVar2->frealloc)(pgVar2->ud,block,osize,nsize);
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      luaD_throw(L,4);
    }
  }
  pgVar2->GCdebt = (nsize + pgVar2->GCdebt) - realosize;
  return pvVar1;
}


