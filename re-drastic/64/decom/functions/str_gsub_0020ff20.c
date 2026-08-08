/*
 * Ghidra decompilation
 *
 * Function : str_gsub
 * Address  : 0020ff20
 * Program  : drastic64
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 str_gsub(undefined8 param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined *puVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  ushort **ppuVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  long local_1270;
  long local_1268;
  ulong local_1260;
  long local_1258;
  undefined *local_1250;
  undefined *local_1248;
  char *local_1240;
  undefined8 local_1238;
  int local_1230;
  undefined8 local_1228;
  long local_1220;
  long local_1028;
  ulong local_1020;
  ulong local_1018;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar8 = (undefined *)luaL_checklstring(param_1,1,&local_1270,0);
  pcVar9 = (char *)luaL_checklstring(param_1,2,&local_1268);
  iVar4 = lua_type(param_1,3);
  iVar5 = luaL_optinteger(param_1,4,(int)local_1270 + 1);
  cVar2 = *pcVar9;
  if (3 < iVar4 - 3U) {
    luaL_argerror(param_1,3,"string/function/table expected");
  }
  luaL_buffinit(param_1,&local_1028);
  if (cVar2 == '^') {
    pcVar9 = pcVar9 + 1;
    local_1268 = local_1268 + -1;
  }
  local_1240 = pcVar9 + local_1268;
  local_1248 = puVar8 + local_1270;
  iVar16 = 0;
  local_1258._0_4_ = 200;
  local_1250 = puVar8;
  local_1238 = param_1;
  do {
    while( true ) {
      puVar10 = puVar8;
      if (iVar5 <= iVar16) goto LAB_00210138;
      local_1230 = 0;
      puVar10 = (undefined *)match(&local_1258,puVar8,pcVar9);
      uVar3 = local_1238;
      if (puVar10 != (undefined *)0x0) break;
LAB_002100f8:
      puVar10 = puVar8;
      if (local_1248 <= puVar8) goto LAB_00210138;
      if (local_1020 <= local_1018) {
        luaL_prepbuffsize(&local_1028,1);
      }
      uVar18 = local_1018 + 1;
      puVar10 = puVar8 + 1;
      *(undefined *)(local_1028 + local_1018) = *puVar8;
      puVar8 = puVar10;
      local_1018 = uVar18;
      if (cVar2 == '^') goto LAB_00210138;
    }
    iVar16 = iVar16 + 1;
    if (iVar4 == 5) {
      if (local_1230 < 1) {
        lua_pushlstring(local_1238,puVar8,(long)puVar10 - (long)puVar8);
      }
      else if (local_1220 == -1) {
        luaL_error(local_1238,"unfinished capture");
        lua_pushlstring(local_1238,local_1228,0xffffffffffffffff);
      }
      else if (local_1220 == -2) {
        lua_pushinteger(local_1238,((int)local_1228 - (int)local_1250) + 1);
      }
      else {
        lua_pushlstring(local_1238,local_1228,local_1220);
      }
      lua_gettable(uVar3,3);
LAB_00210080:
      iVar7 = lua_toboolean(uVar3,0xffffffff);
      if (iVar7 == 0) {
        lua_settop(uVar3,0xfffffffe);
        lua_pushlstring(uVar3,puVar8,(long)puVar10 - (long)puVar8);
      }
      else {
        iVar7 = lua_isstring(uVar3,0xffffffff);
        if (iVar7 == 0) {
          uVar6 = lua_type(uVar3,0xffffffff);
          uVar11 = lua_typename(uVar3,uVar6);
          luaL_error(uVar3,"invalid replacement value (a %s)",uVar11);
        }
      }
      luaL_addvalue(&local_1028);
    }
    else {
      if (iVar4 == 6) {
        lua_pushvalue(local_1238,3);
        uVar6 = push_captures(&local_1258,puVar8,puVar10);
        lua_callk(uVar3,uVar6,1,0,0);
        goto LAB_00210080;
      }
      lVar12 = lua_tolstring(local_1238,3,&local_1260);
      uVar18 = 0;
      if (local_1260 != 0) {
        do {
          uVar17 = uVar18 + 1;
          if (*(char *)(lVar12 + uVar18) == '%') {
            ppuVar13 = __ctype_b_loc();
            uVar18 = uVar18 + 2;
            uVar14 = (uint)*(byte *)(lVar12 + uVar17);
            if (((*ppuVar13)[*(byte *)(lVar12 + uVar17)] >> 0xb & 1) == 0) {
              if (uVar14 != 0x25) {
                luaL_error(uVar3,"invalid use of \'%c\' in replacement string",0x25);
              }
              if (local_1020 <= local_1018) {
                luaL_prepbuffsize(&local_1028,1);
              }
              *(undefined *)(local_1028 + local_1018) = *(undefined *)(lVar12 + uVar17);
              uVar17 = uVar18;
              local_1018 = local_1018 + 1;
            }
            else if (uVar14 == 0x30) {
              luaL_addlstring(&local_1028,puVar8,(long)puVar10 - (long)puVar8);
              uVar17 = uVar18;
            }
            else {
              iVar7 = uVar14 - 0x31;
              if (iVar7 < local_1230) {
                lVar1 = (long)iVar7 + 3;
                lVar15 = *(long *)((long)&local_1258 + (lVar1 * 2 + 1) * 2 * 4);
                if (lVar15 == -1) {
                  luaL_error(local_1238,"unfinished capture");
                  uVar11 = *(undefined8 *)((long)&local_1258 + lVar1 * 4 * 4);
                }
                else {
                  uVar11 = *(undefined8 *)((long)&local_1258 + lVar1 * 4 * 4);
                  if (lVar15 == -2) {
                    lua_pushinteger(local_1238,((int)uVar11 - (int)local_1250) + 1);
                    goto LAB_002103b0;
                  }
                }
                lua_pushlstring(local_1238,uVar11,lVar15);
              }
              else if (iVar7 == 0) {
                lua_pushlstring(local_1238,puVar8,(long)puVar10 - (long)puVar8);
              }
              else {
                luaL_error(local_1238,"invalid capture index %%%d",uVar14 - 0x30);
              }
LAB_002103b0:
              luaL_tolstring(uVar3,0xffffffff,0);
              lua_rotate(uVar3,0xfffffffe,0xffffffff);
              lua_settop(uVar3,0xfffffffe);
              luaL_addvalue(&local_1028);
              uVar17 = uVar18;
            }
          }
          else {
            if (local_1020 <= local_1018) {
              luaL_prepbuffsize(&local_1028,1);
            }
            *(undefined *)(local_1028 + local_1018) = *(undefined *)(lVar12 + uVar18);
            local_1018 = local_1018 + 1;
          }
          uVar18 = uVar17;
        } while (uVar17 < local_1260);
      }
    }
    if (puVar10 <= puVar8) goto LAB_002100f8;
    puVar8 = puVar10;
  } while (cVar2 != '^');
LAB_00210138:
  luaL_addlstring(&local_1028,puVar10,(long)local_1248 - (long)puVar10);
  luaL_pushresult(&local_1028);
  lua_pushinteger(param_1,iVar16);
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
  }
  return 2;
}


