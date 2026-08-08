/*
 * Ghidra decompilation
 *
 * Function : freeobj
 * Address  : 08115ce8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void freeobj(lua_State *L,GCObject *o)

{
  int *block;
  UpVal *uv;
  size_t osize;
  uint uVar1;
  int iVar2;
  int iVar3;
  lu_byte *plVar4;
  
  switch(o->tt) {
  case '\x04':
    luaS_remove(L,(TString *)o);
  case '\x14':
    osize = *(int *)&o[1].tt + 0x19;
    break;
  case '\x05':
    luaH_free(L,(Table *)o);
    return;
  case '\x06':
    uVar1 = (uint)(byte)o->field_0x6;
    if (uVar1 != 0) {
      plVar4 = &o[1].tt;
      iVar3 = 0;
      do {
        plVar4 = plVar4 + 4;
        block = *(int **)plVar4;
        if (block != (int *)0x0) {
          iVar2 = block[1];
          block[1] = iVar2 + -1;
          if ((iVar2 + -1 == 0) && ((int *)*block == block + 2)) {
            luaM_realloc_(L,block,0x10,0);
          }
          uVar1 = (uint)(byte)o->field_0x6;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)uVar1);
    }
    osize = uVar1 * 4 + 0x10;
    break;
  case '\a':
    osize = *(int *)&o[1].tt + 0x18;
    break;
  case '\b':
    luaE_freethread(L,(lua_State *)o);
    return;
  case '\t':
    luaF_freeproto(L,(Proto *)o);
    return;
  default:
    return;
  case '&':
    osize = (uint)(byte)o->field_0x6 * 8 + 0x10;
  }
  luaM_realloc_(L,o,osize,0);
  return;
}


