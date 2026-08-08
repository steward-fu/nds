/*
 * Ghidra decompilation
 *
 * Function : luaV_lessequal
 * Address  : 081214ec
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaV_lessequal(lua_State *L,TValue *l,TValue *r)

{
  int res;
  int temp;
  size_t sVar1;
  size_t len;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  size_t lr;
  code *__s1;
  char *l_1;
  code *__s2;
  char *r_1;
  size_t sVar5;
  size_t ll;
  float fVar6;
  lua_Number nr;
  float fVar7;
  lua_Number nl;
  lua_Number x;
  lua_Number x_1;
  
  uVar3 = l->tt_;
  if (uVar3 == 0x13) {
    if (r->tt_ == 0x13) {
      return (uint)((l->value_).b <= (r->value_).b);
    }
    fVar7 = (float)(longlong)(l->value_).b;
    if (r->tt_ != 3) goto LAB_08121510;
  }
  else {
    if (uVar3 != 3) {
LAB_08121510:
      if (((uVar3 & 0xf) == 4) && ((r->tt_ & 0xfU) == 4)) {
        sVar5 = *(size_t *)((l->value_).f + 0xc);
        __s1 = (l->value_).f + 0x18;
        sVar4 = *(size_t *)((r->value_).f + 0xc);
        __s2 = (r->value_).f + 0x18;
        while (iVar2 = strcoll((char *)__s1,(char *)__s2), iVar2 == 0) {
          sVar1 = strlen((char *)__s1);
          if (sVar1 == sVar4) {
            return (uint)(sVar4 == sVar5);
          }
          if (sVar1 == sVar5) {
            return 1;
          }
          iVar2 = sVar1 + 1;
          __s1 = __s1 + iVar2;
          sVar5 = sVar5 - iVar2;
          __s2 = __s2 + iVar2;
          sVar4 = sVar4 - iVar2;
        }
        uVar3 = (uint)(iVar2 < 1);
      }
      else {
        uVar3 = luaT_callorderTM(L,l,r,TM_LE);
        if ((int)uVar3 < 0) {
          iVar2 = luaT_callorderTM(L,r,l,TM_LT);
          if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
            luaG_ordererror(L,l,r);
          }
          uVar3 = (uint)(iVar2 == 0);
        }
      }
      return uVar3;
    }
    fVar7 = (l->value_).n;
    if (r->tt_ != 3) {
      if (r->tt_ != 0x13) goto LAB_08121510;
      fVar6 = (float)(longlong)(r->value_).b;
      goto LAB_08121624;
    }
  }
  fVar6 = (r->value_).n;
LAB_08121624:
  return (uint)(fVar7 <= fVar6);
}


