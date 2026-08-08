/*
 * Ghidra decompilation
 *
 * Function : luaB_tonumber
 * Address  : 00208da0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 luaB_tonumber(undefined8 param_1)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  char *__s;
  size_t sVar5;
  ushort **ppuVar6;
  __int32_t **pp_Var7;
  long lVar8;
  int iVar9;
  byte *__s_00;
  int iVar10;
  ushort *puVar11;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = lua_type(param_1,2,&__stack_chk_guard,0);
  if (iVar4 < 1) {
    luaL_checkany(param_1,1);
    iVar4 = lua_type(param_1,1);
    if (iVar4 == 3) {
      lua_settop(param_1,1);
      goto LAB_00208e84;
    }
    lVar8 = lua_tolstring(param_1,1,&local_10);
    if ((lVar8 != 0) && (lVar8 = lua_stringtonumber(param_1,lVar8), lVar8 == local_10 + 1))
    goto LAB_00208e84;
  }
  else {
    iVar4 = luaL_checkinteger(param_1,2);
    luaL_checktype(param_1,1,4);
    __s = (char *)luaL_checklstring(param_1,1,&local_10);
    if (iVar4 - 2U < 0x23) {
      sVar5 = strspn(__s," \f\n\r\t\v");
      bVar1 = __s[sVar5];
      __s_00 = (byte *)(__s + sVar5);
      if (bVar1 != 0x2d) goto LAB_00208e44;
LAB_00208eb0:
      bVar1 = __s_00[1];
      __s_00 = __s_00 + 1;
      bVar3 = true;
LAB_00208ebc:
      ppuVar6 = __ctype_b_loc();
      puVar11 = *ppuVar6;
      uVar2 = puVar11[bVar1];
    }
    else {
      luaL_argerror(param_1,2,"base out of range");
      sVar5 = strspn(__s," \f\n\r\t\v");
      bVar1 = __s[sVar5];
      __s_00 = (byte *)(__s + sVar5);
      if (bVar1 == 0x2d) goto LAB_00208eb0;
LAB_00208e44:
      bVar3 = false;
      if (bVar1 != 0x2b) goto LAB_00208ebc;
      bVar1 = __s_00[1];
      ppuVar6 = __ctype_b_loc();
      puVar11 = *ppuVar6;
      __s_00 = __s_00 + 1;
      uVar2 = puVar11[bVar1];
    }
    if ((uVar2 >> 3 & 1) != 0) {
      iVar10 = 0;
      do {
        bVar1 = *__s_00;
        if ((uVar2 >> 0xb & 1) == 0) {
          pp_Var7 = __ctype_toupper_loc();
          iVar9 = (*pp_Var7)[(uint)bVar1] + -0x37;
        }
        else {
          iVar9 = bVar1 - 0x30;
        }
        if (iVar4 <= iVar9) goto LAB_00208e7c;
        __s_00 = __s_00 + 1;
        iVar10 = iVar9 + iVar4 * iVar10;
        uVar2 = puVar11[*__s_00];
      } while ((uVar2 >> 3 & 1) != 0);
      sVar5 = strspn((char *)__s_00," \f\n\r\t\v");
      iVar4 = -iVar10;
      if (!bVar3) {
        iVar4 = iVar10;
      }
      if (__s_00 + sVar5 == (byte *)(__s + local_10)) {
        lua_pushinteger(param_1,iVar4);
        goto LAB_00208e84;
      }
    }
  }
LAB_00208e7c:
  lua_pushnil(param_1);
LAB_00208e84:
  if (local_8 - ___stack_chk_guard == 0) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


