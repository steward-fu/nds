/*
 * Ghidra decompilation
 *
 * Function : luaB_tonumber
 * Address  : 081276d8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaB_tonumber(lua_State *L)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  lua_Integer lVar5;
  lua_Integer base;
  char *pcVar6;
  char *s;
  size_t sVar7;
  ushort **ppuVar8;
  __int32_t **pp_Var9;
  char *s_1;
  size_t sVar10;
  int digit;
  uint uVar11;
  byte *__s;
  ushort *puVar12;
  byte *pbVar13;
  byte *n;
  size_t l;
  int local_2c;
  
  local_2c = __stack_chk_guard;
  iVar4 = lua_type(L,2);
  if (iVar4 < 1) {
    luaL_checkany(L,1);
    iVar4 = lua_type(L,1);
    if (iVar4 == 3) {
      lua_settop(L,1);
      goto LAB_0812780c;
    }
    pcVar6 = lua_tolstring(L,1,&l);
    if ((pcVar6 != (char *)0x0) && (sVar10 = lua_stringtonumber(L,pcVar6), sVar10 == l + 1))
    goto LAB_0812780c;
  }
  else {
    lVar5 = luaL_checkinteger(L,2);
    luaL_checktype(L,1,4);
    pcVar6 = luaL_checklstring(L,1,&l);
    if (0x22 < lVar5 - 2U) {
      luaL_argerror(L,2,"base out of range");
    }
    sVar7 = strspn(pcVar6," \f\n\r\t\v");
    uVar11 = (uint)(byte)pcVar6[sVar7];
    __s = (byte *)(pcVar6 + sVar7);
    if (uVar11 == 0x2d) {
      uVar11 = (uint)__s[1];
      __s = __s + 1;
      bVar3 = true;
    }
    else {
      if (uVar11 == 0x2b) {
        uVar11 = (uint)__s[1];
        __s = __s + 1;
      }
      bVar3 = false;
    }
    ppuVar8 = __ctype_b_loc();
    puVar12 = *ppuVar8;
    uVar2 = puVar12[uVar11];
    uVar11 = (uint)uVar2;
    pbVar13 = (byte *)(uVar11 & 8);
    n = pbVar13;
    if ((uVar2 & 8) != 0) {
      n = (byte *)0x0;
      do {
        bVar1 = *__s;
        if ((uVar11 & 0x800) == 0) {
          pp_Var9 = __ctype_toupper_loc();
          iVar4 = (*pp_Var9)[bVar1] + -0x37;
        }
        else {
          iVar4 = bVar1 - 0x30;
        }
        if (lVar5 <= iVar4) {
          pbVar13 = (byte *)0x0;
          n = (byte *)0x0;
          goto LAB_081277f4;
        }
        __s = __s + 1;
        n = (byte *)((int)n * lVar5 + iVar4);
        uVar2 = puVar12[*__s];
        uVar11 = (uint)uVar2;
      } while ((uVar2 & 8) != 0);
      sVar7 = strspn((char *)__s," \f\n\r\t\v");
      pbVar13 = __s + sVar7;
      if (bVar3) {
        n = (byte *)-(int)n;
      }
    }
LAB_081277f4:
    if (pbVar13 == (byte *)(pcVar6 + l)) {
      lua_pushinteger(L,(lua_Integer)n);
      goto LAB_0812780c;
    }
  }
  lua_pushnil(L);
LAB_0812780c:
  if (local_2c == __stack_chk_guard) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


