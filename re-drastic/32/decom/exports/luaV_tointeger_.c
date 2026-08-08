/*
 * Ghidra decompilation
 *
 * Function : luaV_tointeger_
 * Address  : 08120f74
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaV_tointeger_(TValue *obj,lua_Integer *p)

{
  Value *pVVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  lua_Number f;
  float __x;
  lua_Number n;
  TValue v;
  
  iVar2 = __stack_chk_guard;
  do {
    uVar5 = obj->tt_;
    if (uVar5 == 3) {
      __x = (obj->value_).n;
      fVar6 = floorf(__x);
      if (((__x == fVar6) && (fVar6 < -2.147484e+09 == NAN(fVar6))) && (fVar6 < 2.147484e+09)) {
        iVar4 = 1;
        *p = (int)fVar6;
        goto LAB_08121008;
      }
      break;
    }
    if (uVar5 == 0x13) {
      iVar4 = 1;
      *p = (lua_Integer)obj->value_;
      goto LAB_08121008;
    }
    if ((uVar5 & 0xf) != 4) break;
    sVar3 = luaO_str2num((char *)((obj->value_).f + 0x18),&v);
    pVVar1 = &obj->value_;
    obj = &v;
  } while (sVar3 == *(int *)(pVVar1->f + 0xc) + 1U);
  iVar4 = 0;
LAB_08121008:
  if (iVar2 == __stack_chk_guard) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


