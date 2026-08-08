/*
 * Ghidra decompilation
 *
 * Function : luaV_lessthan
 * Address  : 08121364
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaV_lessthan(lua_State *L,TValue *l,TValue *r)

{
  int res;
  int temp;
  size_t sVar1;
  size_t len;
  int iVar2;
  uint uVar3;
  code *__s1;
  char *l_1;
  code *__s2;
  char *r_1;
  size_t sVar4;
  size_t ll;
  size_t sVar5;
  size_t lr;
  float fVar6;
  lua_Number nr;
  float fVar7;
  lua_Number nl;
  lua_Number x;
  lua_Number x_1;
  
  uVar3 = l->tt_;
  if (uVar3 == 0x13) {
    if (r->tt_ == 0x13) {
      return (uint)((l->value_).b < (r->value_).b);
    }
    fVar7 = (float)(longlong)(l->value_).b;
    if (r->tt_ != 3) goto LAB_0812138c;
  }
  else {
    if (uVar3 != 3) {
LAB_0812138c:
      if (((uVar3 & 0xf) == 4) && ((r->tt_ & 0xfU) == 4)) {
        sVar4 = *(size_t *)((l->value_).f + 0xc);
        __s1 = (l->value_).f + 0x18;
        sVar5 = *(size_t *)((r->value_).f + 0xc);
        __s2 = (r->value_).f + 0x18;
        while (uVar3 = strcoll((char *)__s1,(char *)__s2), uVar3 == 0) {
          sVar1 = strlen((char *)__s1);
          if (sVar1 == sVar5) {
            return 0;
          }
          if (sVar1 == sVar4) {
            return 1;
          }
          iVar2 = sVar1 + 1;
          __s1 = __s1 + iVar2;
          sVar4 = sVar4 - iVar2;
          __s2 = __s2 + iVar2;
          sVar5 = sVar5 - iVar2;
        }
        uVar3 = uVar3 >> 0x1f;
      }
      else {
        uVar3 = luaT_callorderTM(L,l,r,TM_LT);
        if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          luaG_ordererror(L,l,r);
        }
      }
      return uVar3;
    }
    fVar7 = (l->value_).n;
    if (r->tt_ != 3) {
      if (r->tt_ != 0x13) goto LAB_0812138c;
      fVar6 = (float)(longlong)(r->value_).b;
      goto LAB_081214a0;
    }
  }
  fVar6 = (r->value_).n;
LAB_081214a0:
  return (uint)(fVar6 != fVar7 && fVar6 < fVar7 == (NAN(fVar6) || NAN(fVar7)));
}


