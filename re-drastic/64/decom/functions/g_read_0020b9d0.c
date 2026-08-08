/*
 * Ghidra decompilation
 *
 * Function : g_read
 * Address  : 0020b9d0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void g_read(undefined8 param_1,FILE *param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  lconv *plVar13;
  ushort **ppuVar14;
  long lVar15;
  _IO_FILE *p_Var16;
  ushort *puVar17;
  uint uVar18;
  FILE *local_e8;
  uint local_e0;
  int local_dc;
  byte local_d8 [208];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar5 = lua_gettop(param_1,0);
  clearerr(param_2);
  if (iVar5 == 1) {
    iVar5 = param_3 + 1;
    uVar6 = read_line(param_1,param_2,1);
LAB_0020ba3c:
    iVar7 = ferror(param_2);
    if (iVar7 != 0) {
LAB_0020bdd8:
      uVar11 = luaL_fileresult(param_1,0,0);
      goto LAB_0020ba50;
    }
    if (uVar6 == 0) goto LAB_0020bd6c;
  }
  else {
    iVar7 = iVar5 + -2;
    luaL_checkstack(param_1,iVar5 + 0x13,"too many arguments");
    iVar5 = param_3;
    do {
      iVar7 = iVar7 + iVar5;
      iVar8 = lua_type(param_1,iVar5);
      iVar4 = iVar5;
joined_r0x0020bad4:
      iVar3 = iVar7 - iVar4;
      if (iVar8 != 3) {
        pbVar12 = (byte *)luaL_checklstring(param_1,iVar4,0);
        bVar1 = *pbVar12;
        if (bVar1 == 0x2a) {
          bVar1 = pbVar12[1];
        }
        if (bVar1 == 0x6c) {
          uVar6 = read_line(param_1,param_2,1);
          goto LAB_0020bb6c;
        }
        if (bVar1 < 0x6d) {
          if (bVar1 != 0x4c) {
            if (bVar1 != 0x61) goto LAB_0020bd9c;
            read_all(param_1,param_2);
            goto LAB_0020bb28;
          }
          uVar6 = read_line(param_1,param_2,0);
          goto LAB_0020bb6c;
        }
        if (bVar1 == 0x6e) {
          local_dc = 0;
          local_e8 = param_2;
          plVar13 = localeconv();
          bVar1 = *plVar13->decimal_point;
          flockfile(local_e8);
          ppuVar14 = __ctype_b_loc();
          pbVar12 = (byte *)local_e8->_IO_read_ptr;
          p_Var16 = local_e8;
          if (local_e8->_IO_read_end <= pbVar12) goto LAB_0020bbec;
LAB_0020bbc0:
          puVar17 = *ppuVar14;
          p_Var16->_IO_read_ptr = (char *)(pbVar12 + 1);
          uVar11 = (ulong)*pbVar12;
          uVar2 = puVar17[uVar11];
          local_e0 = (uint)*pbVar12;
          iVar5 = local_dc;
          do {
            local_dc = iVar5;
            if ((uVar2 >> 0xd & 1) == 0) {
              uVar6 = (uint)uVar11;
              if ((uVar6 - 0x2b & 0xfffffffd) == 0) {
                if (iVar5 < 200) {
                  local_dc = iVar5 + 1;
                  local_d8[iVar5] = (byte)uVar11;
                  pbVar12 = (byte *)local_e8->_IO_read_ptr;
                  if (pbVar12 < local_e8->_IO_read_end) {
                    local_e8->_IO_read_ptr = (char *)(pbVar12 + 1);
                    uVar6 = (uint)*pbVar12;
                    local_e0 = (uint)*pbVar12;
                  }
                  else {
                    uVar6 = __uflow(local_e8);
                    local_e0 = uVar6;
                  }
                  goto LAB_0020bcac;
                }
                local_d8[0] = 0;
                if (uVar6 != 0x30) goto LAB_0020bcb4;
LAB_0020bc6c:
                iVar8 = 0;
                iVar5 = 0;
                local_d8[0] = 0;
              }
              else {
LAB_0020bcac:
                if (uVar6 == 0x30) {
                  if (199 < local_dc) goto LAB_0020bc6c;
                  local_d8[local_dc] = 0x30;
                  pbVar12 = (byte *)local_e8->_IO_read_ptr;
                  if (pbVar12 < local_e8->_IO_read_end) {
                    local_e8->_IO_read_ptr = (char *)(pbVar12 + 1);
                    local_e0 = (uint)*pbVar12;
                    local_dc = local_dc + 1;
                  }
                  else {
                    local_dc = local_dc + 1;
                    local_e0 = __uflow(local_e8);
                  }
                  if ((local_e0 & 0xffffffdf) == 0x58) {
                    if (local_dc < 200) {
                      local_d8[local_dc] = (byte)local_e0;
                      pbVar12 = (byte *)local_e8->_IO_read_ptr;
                      if (pbVar12 < local_e8->_IO_read_end) {
                        local_e8->_IO_read_ptr = (char *)(pbVar12 + 1);
                        local_e0 = (uint)*pbVar12;
                        local_dc = local_dc + 1;
                      }
                      else {
                        local_dc = local_dc + 1;
                        local_e0 = __uflow(local_e8);
                      }
                      iVar8 = 1;
                      iVar5 = 0;
                    }
                    else {
                      iVar8 = 0;
                      iVar5 = 1;
                      local_d8[0] = 0;
                    }
                  }
                  else {
                    iVar8 = 0;
                    iVar5 = 1;
                  }
                }
                else {
LAB_0020bcb4:
                  iVar8 = 0;
                  iVar5 = 0;
                }
              }
              iVar9 = readdigits(&local_e8,iVar8);
              iVar9 = iVar9 + iVar5;
              if (local_e0 == bVar1) {
                if (local_dc < 200) {
                  local_d8[local_dc] = bVar1;
                  pbVar12 = (byte *)local_e8->_IO_read_ptr;
                  if (pbVar12 < local_e8->_IO_read_end) {
                    local_e8->_IO_read_ptr = (char *)(pbVar12 + 1);
                    local_e0 = (uint)*pbVar12;
                    local_dc = local_dc + 1;
                  }
                  else {
                    local_dc = local_dc + 1;
                    local_e0 = __uflow(local_e8);
                  }
                  iVar5 = readdigits(&local_e8,iVar8);
                  iVar9 = iVar9 + iVar5;
                }
                else {
                  local_d8[0] = 0;
                }
              }
              uVar6 = local_e0;
              if (iVar9 < 1) goto LAB_0020bd28;
              uVar10 = 0x70;
              if (iVar8 == 0) {
                uVar10 = 0x65;
              }
              uVar18 = 0x50;
              if (iVar8 == 0) {
                uVar18 = 0x45;
              }
              if ((local_e0 != uVar10) && (local_e0 == 0 || local_e0 != uVar18)) goto LAB_0020bd28;
              if (199 < local_dc) {
LAB_0020be50:
                local_d8[0] = 0;
                uVar6 = local_e0;
                goto LAB_0020bd28;
              }
              local_d8[local_dc] = (byte)local_e0;
              pbVar12 = (byte *)local_e8->_IO_read_ptr;
              if (pbVar12 < local_e8->_IO_read_end) {
                local_e8->_IO_read_ptr = (char *)(pbVar12 + 1);
                uVar11 = (ulong)*pbVar12;
                local_dc = local_dc + 1;
              }
              else {
                local_dc = local_dc + 1;
                uVar6 = __uflow(local_e8);
                uVar11 = (ulong)uVar6;
              }
              local_e0 = (uint)uVar11;
              if ((local_e0 - 0x2b & 0xfffffffd) == 0) {
                if (199 < local_dc) {
                  local_d8[0] = 0;
                  uVar6 = local_e0;
                  if (((*ppuVar14)[(int)local_e0] >> 0xb & 1) != 0) goto LAB_0020be50;
                  goto LAB_0020bd28;
                }
                local_d8[local_dc] = (byte)uVar11;
                pbVar12 = (byte *)local_e8->_IO_read_ptr;
                if (pbVar12 < local_e8->_IO_read_end) {
                  local_e8->_IO_read_ptr = (char *)(pbVar12 + 1);
                  uVar11 = (ulong)*pbVar12;
                  local_e0 = (uint)*pbVar12;
                  local_dc = local_dc + 1;
                }
                else {
                  local_dc = local_dc + 1;
                  local_e0 = __uflow(local_e8);
                  uVar11 = (ulong)local_e0;
                }
              }
              puVar17 = *ppuVar14;
              uVar2 = puVar17[(int)uVar11];
              iVar5 = local_dc;
              bVar1 = local_d8[0];
              lVar15 = local_8;
              goto joined_r0x0020bf84;
            }
            pbVar12 = (byte *)p_Var16->_IO_read_ptr;
            if (pbVar12 < p_Var16->_IO_read_end) goto LAB_0020bbc0;
LAB_0020bbec:
            local_e0 = __uflow(p_Var16);
            uVar11 = (ulong)local_e0;
            uVar2 = (*ppuVar14)[(int)local_e0];
            p_Var16 = local_e8;
            iVar5 = local_dc;
          } while( true );
        }
LAB_0020bd9c:
        uVar11 = luaL_argerror(param_1,iVar4,"invalid format");
        goto LAB_0020ba50;
      }
      iVar5 = luaL_checkinteger(param_1,iVar4);
      if (iVar5 == 0) {
        iVar5 = getc(param_2);
        ungetc(iVar5,param_2);
        lua_pushlstring(param_1,0,0);
        uVar6 = (uint)(iVar5 != -1);
      }
      else {
        uVar6 = read_chars(param_1,param_2,(long)iVar5);
      }
LAB_0020bb6c:
      iVar5 = iVar4 + 1;
      iVar7 = iVar3 + -1;
      if (iVar3 == 0) goto LAB_0020ba3c;
    } while (uVar6 != 0);
LAB_0020bd60:
    iVar5 = iVar4 + 1;
    iVar7 = ferror(param_2);
    if (iVar7 != 0) goto LAB_0020bdd8;
LAB_0020bd6c:
    lua_settop(param_1,0xfffffffe);
    lua_pushnil(param_1);
  }
LAB_0020ba4c:
  uVar11 = (ulong)(uint)(iVar5 - param_3);
LAB_0020ba50:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar11,local_8 - ___stack_chk_guard,0);
  }
  return;
joined_r0x0020bf84:
  uVar6 = (uint)uVar11;
  local_dc = iVar5;
  local_d8[0] = bVar1;
  local_8 = lVar15;
  if ((uVar2 >> 0xb & 1) != 0) {
    if (199 < iVar5) {
      local_d8[0] = 0;
      goto LAB_0020bd28;
    }
    local_dc = iVar5 + 1;
    local_d8[iVar5] = (byte)uVar11;
    pbVar12 = (byte *)local_e8->_IO_read_ptr;
    if (pbVar12 < local_e8->_IO_read_end) {
      local_e8->_IO_read_ptr = (char *)(pbVar12 + 1);
      uVar11 = (ulong)*pbVar12;
      uVar2 = puVar17[uVar11];
      local_e0 = (uint)*pbVar12;
      iVar5 = local_dc;
    }
    else {
      local_e0 = __uflow(local_e8);
      uVar11 = (ulong)local_e0;
      puVar17 = *ppuVar14;
      uVar2 = puVar17[(int)local_e0];
      iVar5 = local_dc;
      bVar1 = local_d8[0];
      lVar15 = local_8;
    }
    goto joined_r0x0020bf84;
  }
LAB_0020bd28:
  ungetc(uVar6,local_e8);
  funlockfile(local_e8);
  local_d8[local_dc] = 0;
  lVar15 = lua_stringtonumber(param_1,local_d8);
  if (lVar15 == 0) {
    lua_pushnil(param_1);
    goto LAB_0020bd60;
  }
LAB_0020bb28:
  iVar5 = iVar4 + 1;
  if (iVar3 == 0) {
    iVar7 = ferror(param_2);
    if (iVar7 == 0) goto LAB_0020ba4c;
    goto LAB_0020bdd8;
  }
  iVar8 = lua_type(param_1,iVar5);
  iVar4 = iVar5;
  goto joined_r0x0020bad4;
}


