/*
 * Ghidra decompilation
 *
 * Function : str_pack
 * Address  : 002112b0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 str_pack(undefined8 param_1)

{
  long lVar1;
  undefined uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  char *__s;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  size_t sVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  uint local_1068;
  int local_1064;
  char *local_1060;
  size_t local_1058;
  undefined8 local_1050;
  undefined8 local_1048;
  undefined8 local_1040;
  long local_1028;
  ulong local_1020;
  ulong local_1018;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_1060 = (char *)luaL_checklstring(param_1,1,0,0);
  local_1048 = 0x100000001;
  local_1050 = param_1;
  lua_pushnil(param_1);
  luaL_buffinit(param_1,&local_1028);
  if (*local_1060 != '\0') {
    lVar15 = 0;
    iVar17 = 1;
    do {
      uVar6 = getdetails(&local_1050,lVar15,&local_1060,&local_1068,&local_1064);
      lVar15 = lVar15 + (int)(local_1064 + local_1068);
      uVar14 = local_1018;
      while (bVar4 = 0 < local_1064, local_1064 = local_1064 + -1, local_1018 = uVar14, bVar4) {
        while (local_1020 <= local_1018) {
          luaL_prepbuffsize(&local_1028,1);
          uVar14 = local_1018 + 1;
          *(undefined *)(local_1028 + local_1018) = 0;
          iVar18 = local_1064 + -1;
          bVar4 = local_1064 < 1;
          local_1064 = iVar18;
          local_1018 = uVar14;
          if (bVar4) goto joined_r0x002113e0;
        }
        uVar14 = local_1018 + 1;
        *(undefined *)(local_1028 + local_1018) = 0;
      }
joined_r0x002113e0:
      if (uVar6 == 4) {
        iVar17 = iVar17 + 1;
        uVar7 = luaL_checklstring(param_1,iVar17,&local_1058);
        if (((int)local_1068 < 8) &&
           ((ulong)(1L << ((ulong)(local_1068 << 3) & 0x3f)) <= local_1058)) {
          luaL_argerror(param_1,iVar17,"string length does not fit in given size");
        }
        uVar14 = local_1058;
        uVar6 = local_1068;
        iVar18 = (int)local_1048;
        lVar16 = (long)(int)local_1068;
        puVar8 = (undefined *)luaL_prepbuffsize(&local_1028,lVar16);
        uVar11 = uVar14 & 0xffffffff;
        uVar2 = (undefined)uVar14;
        if (iVar18 == 0) {
          puVar8[(int)(uVar6 - 1)] = uVar2;
          if (uVar6 - 1 != 0 && 0 < (int)uVar6) {
            puVar8 = puVar8 + lVar16;
            puVar10 = puVar8 + ~(ulong)(uVar6 - 2);
            do {
              puVar8[-2] = (char)(uVar11 >> 8);
              puVar8 = puVar8 + -1;
              uVar11 = uVar11 >> 8;
            } while (puVar8 != puVar10);
          }
        }
        else {
          *puVar8 = uVar2;
          if (1 < (int)uVar6) {
            puVar10 = puVar8 + 1;
            do {
              puVar9 = puVar10 + 1;
              *puVar10 = (char)(uVar11 >> 8);
              puVar10 = puVar9;
              uVar11 = uVar11 >> 8;
            } while (puVar9 != puVar8 + (ulong)(uVar6 - 2) + 2);
          }
        }
        local_1018 = local_1018 + lVar16;
        luaL_addlstring(&local_1028,uVar7,local_1058);
        lVar15 = lVar15 + local_1058;
      }
      else {
        iVar18 = iVar17 + 1;
        if (uVar6 < 5) {
          if (uVar6 == 2) {
            puVar8 = (undefined *)luaL_prepbuffsize(&local_1028,(long)(int)local_1068);
            fVar19 = (float)luaL_checknumber(param_1,iVar18);
            if (local_1068 == 4) {
              local_1040 = (double)CONCAT44(local_1040._4_4_,fVar19);
              uVar6 = 3;
              if ((int)local_1048 != 1) goto LAB_002119d4;
LAB_00211a34:
              puVar13 = &local_1040;
              puVar10 = puVar8;
              do {
                puVar9 = puVar10 + 1;
                *puVar10 = *(undefined *)puVar13;
                puVar13 = (undefined8 *)((long)puVar13 + 1);
                puVar10 = puVar9;
              } while (puVar8 + (ulong)uVar6 + 1 != puVar9);
LAB_00211a08:
              lVar16 = (long)(int)local_1068;
            }
            else {
              uVar6 = local_1068 - 1;
              if (local_1068 == 8) {
                uVar6 = 7;
                local_1040 = (double)fVar19;
                if ((int)local_1048 == 1) goto LAB_00211a34;
LAB_002119d4:
                puVar13 = &local_1040;
                puVar10 = puVar8 + (long)(int)local_1068 + -1;
                do {
                  puVar9 = puVar10 + -1;
                  *puVar10 = *(undefined *)puVar13;
                  puVar13 = (undefined8 *)((long)puVar13 + 1);
                  puVar10 = puVar9;
                } while (puVar9 != puVar8 + (long)(int)local_1068 + -1 + ~(ulong)uVar6);
                goto LAB_00211a08;
              }
              local_1040 = (double)CONCAT44(local_1040._4_4_,fVar19);
              if ((int)local_1048 == 1) {
                lVar16 = 0;
                if (local_1068 != 0) goto LAB_00211a34;
              }
              else {
                lVar16 = 0;
                if (local_1068 != 0) goto LAB_002119d4;
              }
            }
            local_1018 = local_1018 + lVar16;
            iVar17 = iVar18;
          }
          else if (uVar6 == 3) {
            uVar7 = luaL_checklstring(param_1,iVar18,&local_1058);
            sVar12 = local_1058;
            if ((long)(int)local_1068 != local_1058) {
              luaL_argerror(param_1,iVar18,"wrong length");
              sVar12 = (size_t)(int)local_1068;
            }
            luaL_addlstring(&local_1028,uVar7,sVar12);
            iVar17 = iVar18;
          }
          else {
            if (uVar6 == 0) {
              uVar6 = luaL_checkinteger(param_1,iVar18);
              if ((int)local_1068 < 4) {
                iVar17 = 1 << (ulong)(local_1068 * 8 - 1 & 0x1f);
                bVar4 = false;
                if (-iVar17 <= (int)uVar6) {
                  bVar4 = (int)(uVar6 - iVar17) < 0;
                }
                if (bVar4 == (-iVar17 <= (int)uVar6 && SBORROW4(uVar6,iVar17))) {
                  luaL_argerror(param_1,iVar18,"integer overflow");
                }
              }
              uVar3 = local_1068;
              iVar17 = (int)local_1048;
              lVar16 = (long)(int)local_1068;
              puVar8 = (undefined *)luaL_prepbuffsize(&local_1028,lVar16);
              if (iVar17 == 0) {
                puVar8[(int)(uVar3 - 1)] = (char)uVar6;
                if (uVar3 - 1 != 0 && 0 < (int)uVar3) {
                  puVar10 = puVar8 + lVar16;
                  puVar9 = puVar10 + ~(ulong)(uVar3 - 2);
                  uVar14 = (ulong)uVar6;
                  do {
                    puVar10[-2] = (char)(uVar14 >> 8);
                    puVar10 = puVar10 + -1;
                    uVar14 = uVar14 >> 8;
                  } while (puVar10 != puVar9);
                  bVar5 = (int)uVar6 < 0;
                  bVar4 = false;
                  if (bVar5) {
                    bVar4 = (int)(uVar3 - 4) < 0;
                  }
                  if ((bVar5 && uVar3 != 4) && bVar4 == (bVar5 && SBORROW4(uVar3,4))) {
                    sVar12 = 1;
                    if (4 < (int)uVar3) {
                      sVar12 = (ulong)(uVar3 - 5) + 1;
                    }
                    lVar1 = 0;
                    if (4 < (int)uVar3) {
                      lVar1 = -(ulong)(uVar3 - 5);
                    }
                    memset(puVar8 + lVar1 + lVar16 + -5,0xff,sVar12);
                    local_1018 = local_1018 + lVar16;
                    iVar17 = iVar18;
                    goto LAB_00211430;
                  }
                }
              }
              else {
                *puVar8 = (char)uVar6;
                if (1 < (int)uVar3) {
                  puVar10 = puVar8 + 1;
                  uVar14 = (ulong)uVar6;
                  do {
                    puVar9 = puVar10 + 1;
                    *puVar10 = (char)(uVar14 >> 8);
                    puVar10 = puVar9;
                    uVar14 = uVar14 >> 8;
                  } while (puVar9 != puVar8 + (ulong)(uVar3 - 2) + 2);
                  bVar5 = (int)uVar6 < 0;
                  bVar4 = false;
                  if (bVar5) {
                    bVar4 = (int)(uVar3 - 4) < 0;
                  }
                  if ((bVar5 && uVar3 != 4) && bVar4 == (bVar5 && SBORROW4(uVar3,4))) {
                    sVar12 = 1;
                    if (4 < (int)uVar3) {
                      sVar12 = (ulong)(uVar3 - 5) + 1;
                    }
                    memset(puVar8 + 4,0xff,sVar12);
                    local_1018 = local_1018 + lVar16;
                    iVar17 = iVar18;
                    goto LAB_00211430;
                  }
                }
              }
            }
            else {
              iVar17 = iVar18;
              if (uVar6 != 1) goto LAB_00211430;
              uVar6 = luaL_checkinteger(param_1,iVar18);
              if (((int)local_1068 < 4) && ((uint)(1 << (ulong)((local_1068 & 3) << 3)) <= uVar6)) {
                luaL_argerror(param_1,iVar18,"unsigned overflow");
              }
              uVar3 = local_1068;
              iVar17 = (int)local_1048;
              lVar16 = (long)(int)local_1068;
              puVar8 = (undefined *)luaL_prepbuffsize(&local_1028,lVar16);
              if (iVar17 == 0) {
                puVar8[(int)(uVar3 - 1)] = (char)uVar6;
                if (uVar3 - 1 != 0 && 0 < (int)uVar3) {
                  puVar8 = puVar8 + lVar16;
                  puVar10 = puVar8 + ~(ulong)(uVar3 - 2);
                  do {
                    puVar8[-2] = (char)(uVar6 >> 8);
                    puVar8 = puVar8 + -1;
                    uVar6 = uVar6 >> 8;
                  } while (puVar10 != puVar8);
                }
              }
              else {
                *puVar8 = (char)uVar6;
                if (1 < (int)uVar3) {
                  puVar10 = puVar8 + 1;
                  do {
                    puVar9 = puVar10 + 1;
                    *puVar10 = (char)(uVar6 >> 8);
                    puVar10 = puVar9;
                    uVar6 = uVar6 >> 8;
                  } while (puVar8 + (ulong)(uVar3 - 2) + 2 != puVar9);
                  local_1018 = local_1018 + lVar16;
                  iVar17 = iVar18;
                  goto LAB_00211430;
                }
              }
            }
            local_1018 = local_1018 + lVar16;
            iVar17 = iVar18;
          }
        }
        else if (uVar6 == 6) {
          if (local_1020 <= local_1018) {
            luaL_prepbuffsize(&local_1028,1);
          }
          *(undefined *)(local_1028 + local_1018) = 0;
          local_1018 = local_1018 + 1;
        }
        else if (uVar6 < 7) {
          iVar17 = iVar18;
          if (uVar6 == 5) {
            __s = (char *)luaL_checklstring(param_1,iVar18,&local_1058);
            sVar12 = strlen(__s);
            if (sVar12 == local_1058) {
              luaL_addlstring(&local_1028,__s);
              if (local_1020 <= local_1018) {
LAB_00211984:
                luaL_prepbuffsize(&local_1028,1);
              }
            }
            else {
              luaL_argerror(param_1,iVar18,"string contains zeros");
              luaL_addlstring(&local_1028,__s,local_1058);
              if (local_1020 <= local_1018) goto LAB_00211984;
            }
            *(undefined *)(local_1028 + local_1018) = 0;
            lVar15 = lVar15 + local_1058 + 1;
            local_1018 = local_1018 + 1;
          }
        }
        else if (1 < uVar6 - 7) {
          iVar17 = iVar18;
        }
      }
LAB_00211430:
    } while (*local_1060 != '\0');
  }
  luaL_pushresult(&local_1028);
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return 1;
}


