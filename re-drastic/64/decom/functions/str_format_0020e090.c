/*
 * Ghidra decompilation
 *
 * Function : str_format
 * Address  : 0020e090
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void str_format(undefined8 param_1)

{
  byte *pbVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  char *pcVar9;
  ushort **ppuVar10;
  undefined8 uVar11;
  size_t sVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ushort *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  int iVar19;
  byte *pbVar20;
  long lVar21;
  byte *pbVar22;
  float fVar23;
  long local_1060;
  ulong local_1058;
  long local_1050;
  ulong local_1048;
  ulong local_1040;
  undefined auStack_30 [16];
  char local_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = lua_gettop(param_1,&__stack_chk_guard,0);
  pbVar7 = (byte *)luaL_checklstring(param_1,1,&local_1060);
  pbVar1 = pbVar7 + local_1060;
  luaL_buffinit(param_1,&local_1050);
  if (pbVar7 < pbVar1) {
    iVar19 = 1;
    do {
      while (pbVar20 = pbVar7 + 1, *pbVar7 == 0x25) {
        if (pbVar7[1] != 0x25) {
          uVar8 = luaL_prepbuffsize(&local_1050,0x200);
          iVar19 = iVar19 + 1;
          if (iVar4 < iVar19) {
            luaL_argerror(param_1,iVar19,"no value");
          }
          uVar13 = (uint)pbVar7[1];
          pbVar18 = pbVar7 + 2;
          pbVar17 = pbVar20;
          pbVar22 = pbVar20;
          if (pbVar7[1] != 0) {
            do {
              pbVar17 = pbVar22;
              pcVar9 = strchr("-+ #0",uVar13);
              pbVar22 = pbVar17 + 1;
              if (pcVar9 == (char *)0x0) {
                pbVar18 = pbVar22;
                if ((ulong)((long)pbVar17 - (long)pbVar20) < 6) goto LAB_0020e268;
                goto LAB_0020e354;
              }
              uVar13 = (uint)*pbVar22;
            } while (*pbVar22 != 0);
            pbVar18 = pbVar17 + 2;
            pbVar17 = pbVar22;
            if (5 < (ulong)((long)pbVar22 - (long)pbVar20)) {
LAB_0020e354:
              luaL_error(param_1,"invalid format (repeated flags)");
            }
LAB_0020e268:
            uVar13 = (uint)*pbVar17;
          }
          ppuVar10 = __ctype_b_loc();
          uVar14 = (ulong)uVar13;
          puVar16 = *ppuVar10;
          pbVar7 = pbVar17;
          pbVar22 = pbVar18;
          if ((puVar16[uVar14] >> 0xb & 1) == 0) {
LAB_0020e3e0:
            pbVar18 = pbVar7;
            if ((int)uVar14 == 0x2e) {
LAB_0020e3e8:
              pbVar7 = pbVar22;
              if ((puVar16[pbVar18[1]] >> 0xb & 1) == 0) {
                pbVar22 = pbVar7 + 1;
              }
              else {
                pbVar7 = pbVar18 + 2;
                pbVar22 = pbVar18 + 3;
                if ((puVar16[pbVar18[2]] >> 0xb & 1) != 0) {
                  bVar3 = pbVar18[3];
                  pbVar7 = pbVar22;
                  pbVar22 = pbVar18 + 4;
                  goto LAB_0020e2b0;
                }
              }
            }
          }
          else {
            uVar14 = (ulong)pbVar17[1];
            if ((puVar16[uVar14] >> 0xb & 1) == 0) {
              pbVar22 = pbVar18 + 1;
              pbVar7 = pbVar18;
              goto LAB_0020e3e0;
            }
            bVar3 = pbVar17[2];
            pbVar7 = pbVar17 + 2;
            pbVar18 = pbVar17 + 2;
            pbVar22 = pbVar17 + 3;
            if (bVar3 == 0x2e) goto LAB_0020e3e8;
LAB_0020e2b0:
            if ((puVar16[bVar3] >> 0xb & 1) != 0) {
              luaL_error(param_1,"invalid format (width or precision too long)");
            }
          }
          local_20[0] = '%';
          __memcpy_chk(local_20 + 1,pbVar20,pbVar7 + (1 - (long)pbVar20),0x11);
          pbVar7[(long)(local_20 + (2 - (long)pbVar20))] = 0;
          uVar13 = (uint)*pbVar7;
          if (*pbVar7 < 0x68) {
            if (0x40 < uVar13) {
              uVar14 = 1L << ((ulong)(uVar13 - 0x41) & 0x3f);
              if ((uVar14 & 0x7100000051) == 0) {
                if ((uVar14 & 0x800800000) != 0) goto LAB_0020e684;
                if ((uVar14 >> 0x22 & 1) == 0) goto LAB_0020e338;
                uVar6 = luaL_checkinteger(param_1,iVar19);
                iVar5 = __sprintf_chk(uVar8,1,0xffffffffffffffff,local_20,uVar6);
                lVar21 = (long)iVar5;
              }
              else {
                sVar12 = strlen(local_20);
                local_20[sVar12] = '\0';
                fVar23 = (float)luaL_checknumber(param_1,iVar19);
                iVar5 = __sprintf_chk((double)fVar23,uVar8,1,0xffffffffffffffff,local_20);
                lVar21 = (long)iVar5;
              }
              goto LAB_0020e3c4;
            }
          }
          else {
            uVar13 = uVar13 - 0x69 & 0xff;
            if (uVar13 < 0x10) {
              uVar14 = 1L << ((ulong)uVar13 & 0x3f);
              if ((uVar14 & 0x9041) == 0) {
                uVar13 = (uint)uVar14;
                lVar21 = 0;
                if ((uVar13 >> 8 & 1) == 0) {
                  if ((uVar13 >> 10 & 1) == 0) goto LAB_0020e338;
                  uVar11 = luaL_tolstring(param_1,iVar19,&local_1058);
                  pcVar9 = strchr(local_20,0x2e);
                  if ((pcVar9 == (char *)0x0) && (99 < local_1058)) {
                    luaL_addvalue(&local_1050);
                  }
                  else {
                    iVar5 = __sprintf_chk(uVar8,1,0xffffffffffffffff,local_20,uVar11);
                    lVar21 = (long)iVar5;
                    lua_settop(param_1,0xfffffffe);
                  }
                }
                else {
                  pbVar7 = (byte *)luaL_checklstring(param_1,iVar19,&local_1058);
                  if (local_1048 <= local_1040) {
                    luaL_prepbuffsize(&local_1050,1);
                  }
                  uVar14 = local_1040 + 1;
                  *(undefined *)(local_1050 + local_1040) = 0x22;
                  uVar15 = local_1058 - 1;
                  bVar2 = local_1058 != 0;
                  local_1058 = uVar15;
                  local_1040 = uVar14;
                  if (bVar2) {
                    do {
                      while( true ) {
                        bVar3 = *pbVar7;
                        if ((bVar3 != 0x22 && bVar3 != 0x5c) && bVar3 != 10) break;
                        uVar14 = local_1040;
                        if (local_1048 <= local_1040) {
                          luaL_prepbuffsize(&local_1050,1);
                          uVar14 = local_1040;
                        }
                        local_1040 = uVar14 + 1;
                        *(undefined *)(local_1050 + uVar14) = 0x5c;
                        if (local_1048 <= local_1040) {
LAB_0020e5e0:
                          luaL_prepbuffsize(&local_1050,1);
                        }
LAB_0020e580:
                        uVar14 = local_1040 + 1;
                        *(byte *)(local_1050 + local_1040) = *pbVar7;
                        uVar15 = local_1058 - 1;
                        bVar2 = local_1058 == 0;
                        pbVar7 = pbVar7 + 1;
                        local_1058 = uVar15;
                        local_1040 = uVar14;
                        if (bVar2) goto LAB_0020e634;
                      }
                      if ((bVar3 != 0) && (((*ppuVar10)[bVar3] >> 1 & 1) == 0)) {
                        if (local_1048 <= local_1040) goto LAB_0020e5e0;
                        goto LAB_0020e580;
                      }
                      if (((*ppuVar10)[pbVar7[1]] >> 0xb & 1) == 0) {
                        __sprintf_chk(auStack_30,1,10,&DAT_0022b0e8);
                      }
                      else {
                        __sprintf_chk(auStack_30,1,10,"\\%03d");
                      }
                      luaL_addstring(&local_1050,auStack_30);
                      pbVar7 = pbVar7 + 1;
                      uVar14 = local_1058 - 1;
                      bVar2 = local_1058 != 0;
                      local_1058 = uVar14;
                    } while (bVar2);
                  }
LAB_0020e634:
                  if (local_1048 <= local_1040) {
                    luaL_prepbuffsize(&local_1050,1);
                  }
                  *(undefined *)(local_1050 + local_1040) = 0x22;
                  local_1040 = local_1040 + 1;
                }
              }
              else {
LAB_0020e684:
                uVar6 = luaL_checkinteger(param_1,iVar19);
                sVar12 = strlen(local_20);
                local_20[sVar12] = '\0';
                iVar5 = __sprintf_chk(uVar8,1,0xffffffffffffffff,local_20,uVar6);
                lVar21 = (long)iVar5;
              }
LAB_0020e3c4:
              pbVar20 = pbVar22;
              local_1040 = local_1040 + lVar21;
              goto LAB_0020e150;
            }
          }
LAB_0020e338:
          uVar8 = luaL_error(param_1,"invalid option \'%%%c\' to \'format\'");
          goto LAB_0020e1b4;
        }
        if (local_1048 <= local_1040) {
          luaL_prepbuffsize(&local_1050,1);
        }
        uVar14 = local_1040 + 1;
        pbVar20 = pbVar7 + 2;
        *(byte *)(local_1050 + local_1040) = pbVar7[1];
        pbVar7 = pbVar20;
        local_1040 = uVar14;
        if (pbVar1 <= pbVar20) goto LAB_0020e1a8;
      }
      if (local_1048 <= local_1040) {
        luaL_prepbuffsize(&local_1050,1);
      }
      *(byte *)(local_1050 + local_1040) = *pbVar7;
      local_1040 = local_1040 + 1;
LAB_0020e150:
      pbVar7 = pbVar20;
    } while (pbVar20 < pbVar1);
  }
LAB_0020e1a8:
  luaL_pushresult(&local_1050);
  uVar8 = 1;
LAB_0020e1b4:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8,local_8 - ___stack_chk_guard,0);
}


