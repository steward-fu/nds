/*
 * Ghidra decompilation
 *
 * Function : str_unpack
 * Address  : 00210bc0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int str_unpack(undefined8 param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  uint3 uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  size_t sVar10;
  uint uVar11;
  char *pcVar12;
  float *pfVar13;
  long lVar14;
  long lVar15;
  char *pcVar16;
  char cVar17;
  char *pcVar18;
  int iVar19;
  char *pcVar20;
  float fVar21;
  int local_48;
  int iStack_44;
  char *local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  float local_20;
  undefined4 uStack_1c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_40 = (char *)luaL_checklstring(param_1,1,0,0);
  lVar9 = luaL_checklstring(param_1,2,&local_38);
  iVar7 = luaL_optinteger(param_1,3,1);
  if (iVar7 < 0) {
    if ((char *)-(long)iVar7 <= local_38) {
      iVar7 = iVar7 + (int)local_38 + 1;
      goto LAB_00210c7c;
    }
    pcVar20 = (char *)0xffffffffffffffff;
  }
  else {
LAB_00210c7c:
    pcVar20 = (char *)((long)iVar7 + -1);
    if (pcVar20 <= local_38) {
      cVar17 = *local_40;
      goto joined_r0x00210ca0;
    }
  }
  luaL_argerror(param_1,3,"initial position out of string");
  cVar17 = *local_40;
joined_r0x00210ca0:
  local_30 = param_1;
  if (cVar17 == '\0') {
    local_28 = 0x100000001;
    iVar7 = (int)pcVar20;
    iVar19 = 1;
  }
  else {
    local_28 = 0x100000001;
    iVar7 = 0;
    do {
      while( true ) {
        uVar8 = getdetails(&local_30,pcVar20,&local_40,&local_48,&iStack_44);
        if (((char *)~(ulong)pcVar20 < local_40 + CONCAT44(iStack_44,local_48)) ||
           (pcVar18 = local_40, local_38 < local_40 + CONCAT44(iStack_44,local_48) + (long)pcVar20))
        {
          luaL_argerror(param_1,2,"data string too short");
          pcVar18 = (char *)(long)iStack_44;
        }
        luaL_checkstack(param_1,2,"too many results");
        iVar19 = local_48;
        pcVar20 = pcVar20 + (long)pcVar18;
        iVar1 = iVar7 + 1;
        pcVar18 = pcVar20;
        if (uVar8 == 4) {
          iVar3 = local_48;
          if (4 < local_48) {
            iVar3 = 4;
          }
          pcVar12 = pcVar20 + lVar9;
          if (iVar3 + -1 < 0) {
            lVar15 = 0;
          }
          else {
            if ((int)local_28 == 0) {
              iVar4 = local_48 + -1;
              uVar8 = (uint)(byte)pcVar12[local_48 - iVar3];
              if (iVar3 != 1) {
                uVar5 = CONCAT11(pcVar12[local_48 - iVar3],pcVar12[iVar4 - (iVar3 + -2)]);
                uVar8 = (uint)uVar5;
                if (iVar3 != 2) {
                  uVar6 = CONCAT21(uVar5,pcVar12[iVar4 - (iVar3 + -3)]);
                  uVar8 = (uint)uVar6;
                  if (iVar3 + -3 != 0) {
                    uVar8 = CONCAT31(uVar6,pcVar12[iVar4]);
                  }
                }
              }
            }
            else {
              uVar8 = (uint)(byte)pcVar12[iVar3 + -1];
              if (iVar3 != 1) {
                uVar5 = CONCAT11(pcVar12[iVar3 + -1],pcVar12[iVar3 + -2]);
                uVar8 = (uint)uVar5;
                if (iVar3 != 2) {
                  uVar6 = CONCAT21(uVar5,pcVar12[iVar3 + -3]);
                  uVar8 = (uint)uVar6;
                  if (iVar3 + -3 != 0) {
                    uVar8 = CONCAT31(uVar6,*pcVar12);
                  }
                }
              }
            }
            lVar15 = (long)(int)uVar8;
            pcVar18 = pcVar20 + lVar15;
          }
          if (4 < local_48) {
            if ((int)local_28 == 0) {
              iVar19 = local_48 + -1;
              lVar14 = (long)local_48;
              pcVar16 = pcVar12 + (lVar14 - iVar3);
              do {
                if (pcVar16[-1] != '\0') {
                  luaL_error(param_1,"%d-byte integer does not fit into Lua Integer");
                }
                pcVar16 = pcVar16 + -1;
              } while (pcVar16 !=
                       pcVar12 + ((lVar14 + -1) - ((ulong)(uint)(iVar19 - iVar3) + (long)iVar3)));
            }
            else {
              lVar14 = (long)iVar3;
              do {
                if (pcVar12[lVar14] != '\0') {
                  luaL_error(param_1,"%d-byte integer does not fit into Lua Integer");
                }
                lVar14 = lVar14 + 1;
              } while ((int)lVar14 < iVar19);
            }
          }
          lVar14 = (long)local_48;
          if (local_38 < pcVar18 + lVar14) {
            luaL_argerror(param_1,2,"data string too short");
            lVar14 = (long)local_48;
          }
          lua_pushlstring(param_1,pcVar20 + lVar9 + lVar14,lVar15);
          iVar19 = iVar7 + 2;
          iVar7 = iVar1;
          goto LAB_00210d10;
        }
        if (uVar8 < 5) break;
        if (uVar8 == 5) {
          sVar10 = strlen(pcVar20 + lVar9);
          lua_pushlstring(param_1,pcVar20 + lVar9);
          iVar19 = iVar7 + 2;
          pcVar18 = pcVar20 + (long)(int)sVar10 + 1;
          iVar7 = iVar1;
        }
        else {
          iVar19 = iVar1;
          if (2 < uVar8 - 6) goto LAB_00210db4;
        }
LAB_00210d10:
        pcVar20 = pcVar18 + local_48;
        if (*local_40 == '\0') goto LAB_00210dd4;
      }
      if (uVar8 == 2) {
        pcVar20 = pcVar20 + lVar9;
        fVar21 = local_20;
        if ((int)local_28 == 1) {
          if (local_48 != 0) {
            pfVar13 = &local_20;
            pcVar12 = pcVar20;
            do {
              pcVar16 = pcVar12 + 1;
              *(char *)pfVar13 = *pcVar12;
              pfVar13 = (float *)((long)pfVar13 + 1);
              pcVar12 = pcVar16;
            } while (pcVar20 + (ulong)(local_48 - 1) + 1 != pcVar16);
            goto LAB_00210fc0;
          }
        }
        else if (local_48 != 0) {
          pcVar12 = (char *)((long)&local_28 + (long)local_48 + 7);
          pcVar16 = pcVar20;
          do {
            pcVar2 = pcVar16 + 1;
            *pcVar12 = *pcVar16;
            pcVar12 = pcVar12 + -1;
            pcVar16 = pcVar2;
          } while (pcVar2 != pcVar20 + (ulong)(local_48 - 1) + 1);
LAB_00210fc0:
          fVar21 = local_20;
          if ((local_48 != 4) && (local_48 == 8)) {
            fVar21 = (float)(double)CONCAT44(uStack_1c,local_20);
          }
        }
        lua_pushnumber(fVar21,param_1);
        iVar19 = iVar7 + 2;
        iVar7 = iVar1;
        goto LAB_00210d10;
      }
      if (uVar8 == 3) {
        lua_pushlstring(param_1,pcVar20 + lVar9,(long)local_48);
        iVar19 = iVar7 + 2;
        iVar7 = iVar1;
        goto LAB_00210d10;
      }
      if (uVar8 == 2) goto LAB_00210db4;
      iVar3 = local_48;
      if (4 < local_48) {
        iVar3 = 4;
      }
      pcVar18 = pcVar20 + lVar9;
      if (iVar3 + -1 < 0) {
        uVar11 = 0;
LAB_00210e84:
        if (local_48 < 4) goto LAB_00210e90;
LAB_002110cc:
        if (local_48 != 4) {
          cVar17 = -1;
          if ((uVar8 & 1 | ~uVar11 >> 0x1f) != 0) {
            cVar17 = '\0';
          }
          if ((int)local_28 == 0) {
            lVar14 = (long)local_48;
            lVar15 = (long)iVar3;
            do {
              if (cVar17 != pcVar18[(lVar14 + -1) - lVar15]) {
                luaL_error(param_1,"%d-byte integer does not fit into Lua Integer");
              }
              lVar15 = lVar15 + 1;
            } while ((int)lVar15 < iVar19);
          }
          else {
            lVar15 = (long)iVar3;
            do {
              if (pcVar18[lVar15] != cVar17) {
                luaL_error(param_1,"%d-byte integer does not fit into Lua Integer");
              }
              lVar15 = lVar15 + 1;
            } while ((int)lVar15 < iVar19);
          }
        }
      }
      else {
        if ((int)local_28 != 0) {
          uVar11 = (uint)(byte)pcVar18[iVar3 + -1];
          if (iVar3 != 1) {
            uVar5 = CONCAT11(pcVar18[iVar3 + -1],pcVar18[iVar3 + -2]);
            uVar11 = (uint)uVar5;
            if (iVar3 != 2) {
              uVar6 = CONCAT21(uVar5,pcVar18[iVar3 + -3]);
              uVar11 = (uint)uVar6;
              if (iVar3 + -3 != 0) {
                uVar11 = CONCAT31(uVar6,*pcVar18);
              }
            }
          }
          goto LAB_00210e84;
        }
        iVar4 = local_48 + -1;
        uVar11 = (uint)(byte)pcVar18[local_48 - iVar3];
        if (iVar3 == 1) goto LAB_00210e84;
        uVar5 = CONCAT11(pcVar18[local_48 - iVar3],pcVar18[iVar4 - (iVar3 + -2)]);
        uVar11 = (uint)uVar5;
        if (iVar3 == 2) goto LAB_00210e84;
        uVar6 = CONCAT21(uVar5,pcVar18[iVar4 - (iVar3 + -3)]);
        uVar11 = (uint)uVar6;
        if (iVar3 + -3 == 0) goto LAB_00210e84;
        uVar11 = CONCAT31(uVar6,pcVar18[iVar4]);
        if (3 < local_48) goto LAB_002110cc;
LAB_00210e90:
        if (uVar8 == 0) {
          uVar8 = 1 << (ulong)(local_48 * 8 - 1U & 0x1f);
          uVar11 = (uVar8 ^ uVar11) - uVar8;
        }
      }
      lua_pushinteger(param_1,uVar11);
LAB_00210db4:
      iVar19 = iVar7 + 2;
      pcVar20 = pcVar20 + local_48;
      iVar7 = iVar1;
    } while (*local_40 != '\0');
LAB_00210dd4:
    iVar7 = (int)pcVar20;
  }
  lua_pushinteger(param_1,iVar7 + 1);
  if (local_8 - ___stack_chk_guard == 0) {
    return iVar19;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
}


