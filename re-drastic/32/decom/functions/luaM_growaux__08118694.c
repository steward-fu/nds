/*
 * Ghidra decompilation
 *
 * Function : luaM_growaux_
 * Address  : 08118694
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable newblock:void *[r0:4] conflicts with parameter, skipped. */

void * luaM_growaux_(lua_State *L,void *block,int *size,size_t size_elems,int limit,char *what)

{
  uint uVar1;
  void *pvVar2;
  void *newblock_1;
  size_t sVar3;
  int iVar4;
  size_t sVar5;
  int newsize;
  uint uVar6;
  global_State *pgVar7;
  global_State *g;
  size_t realosize;
  
  iVar4 = *size;
  if (iVar4 < limit / 2) {
    limit = iVar4 * 2;
    if (limit < 4) {
      limit = 4;
      uVar6 = 5;
      goto LAB_081186e0;
    }
  }
  else if (limit <= iVar4) {
                    /* WARNING: Subroutine does not return */
    luaG_runerror(L,"too many %s (limit is %d)",what,limit);
  }
  uVar6 = limit + 1;
LAB_081186e0:
  uVar1 = __aeabi_uidiv(0xffffffff,size_elems);
  if (uVar1 < uVar6) {
                    /* WARNING: Subroutine does not return */
    luaM_toobig(L);
  }
  pgVar7 = L->l_G;
  sVar5 = size_elems * iVar4;
  sVar3 = limit * size_elems;
  realosize = sVar5;
  if (block == (void *)0x0) {
    realosize = 0;
  }
  pvVar2 = (*pgVar7->frealloc)(pgVar7->ud,block,sVar5,sVar3);
  if (sVar3 != 0 && pvVar2 == (void *)0x0) {
    luaC_fullgc(L,1);
    pvVar2 = (*pgVar7->frealloc)(pgVar7->ud,block,sVar5,sVar3);
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      luaD_throw(L,4);
    }
  }
  pgVar7->GCdebt = (sVar3 + pgVar7->GCdebt) - realosize;
  *size = limit;
  return pvVar2;
}


