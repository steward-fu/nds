/*
 * Ghidra decompilation
 *
 * Function : codepoint
 * Address  : 00213290
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int codepoint(undefined8 param_1)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar7 = luaL_checklstring(param_1,1,&local_10,0);
  iVar5 = luaL_optinteger(param_1,2,1);
  if (iVar5 < 0) {
    if ((ulong)-(long)iVar5 <= local_10) {
      iVar5 = iVar5 + (int)local_10 + 1;
      goto LAB_00213384;
    }
    iVar5 = 0;
    iVar6 = luaL_optinteger(param_1,3,0);
    if ((iVar6 < 0) &&
       (lVar8 = (long)iVar6, iVar6 = iVar6 + (int)local_10 + 1,
       local_10 <= (ulong)-lVar8 && -local_10 != lVar8)) {
      iVar6 = 0;
    }
LAB_00213338:
    luaL_argerror(param_1,2,"out of range");
    if ((int)local_10 < iVar6) goto LAB_00213358;
LAB_002133c4:
    if (iVar5 <= iVar6) goto LAB_002133cc;
  }
  else {
LAB_00213384:
    iVar6 = luaL_optinteger(param_1,3,iVar5);
    if (iVar6 < 0) {
      lVar8 = (long)iVar6;
      iVar1 = iVar6 + (int)local_10;
      iVar6 = 0;
      if ((ulong)-lVar8 <= local_10) {
        iVar6 = iVar1 + 1;
      }
    }
    if (iVar5 < 1) goto LAB_00213338;
    if (iVar6 <= (int)local_10) goto LAB_002133c4;
LAB_00213358:
    luaL_argerror(param_1,3,"out of range");
    if (iVar5 <= iVar6) {
LAB_002133cc:
      iVar1 = (iVar6 - iVar5) + 1;
      if (iVar1 + iVar5 <= iVar6) {
        iVar5 = luaL_error(param_1,"string slice too long");
        goto LAB_00213480;
      }
      pbVar11 = (byte *)(lVar7 + (long)iVar5 + -1);
      luaL_checkstack(param_1,iVar1,"string slice too long");
      if (pbVar11 < (byte *)(lVar7 + iVar6)) {
        iVar5 = 0;
        do {
          bVar3 = *pbVar11;
          uVar9 = (uint)bVar3;
          if (0x7f < bVar3) {
            if ((bVar3 >> 6 & 1) != 0) {
              pbVar2 = pbVar11 + 1;
              uVar10 = 0;
              pbVar4 = pbVar2;
              do {
                pbVar11 = pbVar4;
                iVar1 = (1 - (int)pbVar2) + (int)pbVar11;
                if ((*pbVar11 & 0xc0) != 0x80) goto LAB_0021346c;
                uVar10 = *pbVar11 & 0x3f | uVar10 << 6;
                uVar9 = uVar9 * 2;
                pbVar4 = pbVar11 + 1;
              } while ((uVar9 >> 6 & 1) != 0);
              uVar10 = (uVar9 & 0x7f) << (ulong)(iVar1 * 5 & 0x1f) | uVar10;
              if ((iVar1 < 4 && uVar10 < 0x10ffff || iVar1 < 4 && uVar10 == 0x10ffff) &&
                 (*(uint *)(&limits_5057 + (long)iVar1 * 4) < uVar10)) goto LAB_002134f4;
            }
LAB_0021346c:
            iVar5 = luaL_error(param_1,"invalid UTF-8 code");
            break;
          }
LAB_002134f4:
          pbVar11 = pbVar11 + 1;
          lua_pushinteger(param_1);
          iVar5 = iVar5 + 1;
        } while (pbVar11 < (byte *)(lVar7 + iVar6));
        goto LAB_00213480;
      }
    }
  }
  iVar5 = 0;
LAB_00213480:
  if (local_8 - ___stack_chk_guard == 0) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


