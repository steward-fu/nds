/*
 * Ghidra decompilation
 *
 * Function : utflen
 * Address  : 00212e80
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void utflen(undefined8 param_1)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  int local_10;
  undefined4 uStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar8 = luaL_checklstring(param_1,1,&local_10,0);
  uVar9 = luaL_optinteger(param_1,2,1);
  uVar14 = uVar9 & 0xffffffff;
  iVar5 = (int)uVar9;
  if (iVar5 < 0) {
    if ((ulong)-(long)iVar5 <= CONCAT44(uStack_c,local_10)) {
      uVar14 = (ulong)(iVar5 + local_10 + 1);
      goto LAB_00212fcc;
    }
    iVar5 = luaL_optinteger(param_1,3,0xffffffff);
    if (iVar5 < 0) {
      if (CONCAT44(uStack_c,local_10) < (ulong)-(long)iVar5) {
        iVar5 = -1;
        uVar14 = 0;
      }
      else {
        iVar5 = iVar5 + local_10;
        uVar14 = 0;
      }
      goto LAB_00212f18;
    }
    iVar5 = iVar5 + -1;
    luaL_argerror(param_1,2,"initial position out of string");
    uVar14 = 0;
LAB_00212f30:
    if (iVar5 < local_10) goto LAB_00212f38;
  }
  else {
LAB_00212fcc:
    iVar7 = luaL_optinteger(param_1,3,0xffffffff);
    iVar5 = iVar7 + -1;
    if ((iVar7 < 0) && (iVar5 = iVar7 + local_10, CONCAT44(uStack_c,local_10) < (ulong)-(long)iVar7)
       ) {
      iVar5 = -1;
    }
    if (((int)uVar14 < 1) ||
       (uVar12 = (int)uVar14 - 1, uVar14 = (ulong)uVar12, local_10 < (int)uVar12)) {
LAB_00212f18:
      luaL_argerror(param_1,2,"initial position out of string");
      goto LAB_00212f30;
    }
    if (iVar5 < local_10) goto LAB_00212f38;
  }
  luaL_argerror(param_1,3,"final position out of string");
LAB_00212f38:
  if (iVar5 < (int)uVar14) {
    iVar7 = 0;
  }
  else {
    iVar7 = 0;
    do {
      iVar13 = (int)uVar14;
      bVar3 = *(byte *)(lVar8 + iVar13);
      uVar12 = (uint)bVar3;
      pbVar11 = (byte *)(lVar8 + iVar13);
      if (0x7f < bVar3) {
        if ((bVar3 >> 6 & 1) != 0) {
          pbVar1 = pbVar11 + 1;
          uVar6 = 0;
          pbVar4 = pbVar1;
          do {
            pbVar11 = pbVar4;
            iVar2 = (1 - (int)pbVar1) + (int)pbVar11;
            if ((*pbVar11 & 0xc0) != 0x80) goto LAB_00212fa8;
            uVar6 = *pbVar11 & 0x3f | uVar6 << 6;
            uVar12 = uVar12 * 2;
            pbVar4 = pbVar11 + 1;
          } while ((uVar12 >> 6 & 1) != 0);
          uVar6 = (uVar12 & 0x7f) << (ulong)(iVar2 * 5 & 0x1f) | uVar6;
          if ((iVar2 < 4 && uVar6 < 0x10ffff || iVar2 < 4 && uVar6 == 0x10ffff) &&
             (*(uint *)(&limits_5057 + (long)iVar2 * 4) < uVar6)) goto LAB_00213058;
        }
LAB_00212fa8:
        lua_pushnil(param_1);
        lua_pushinteger(param_1,iVar13 + 1);
        uVar10 = 2;
        goto LAB_0021307c;
      }
LAB_00213058:
      uVar14 = (ulong)(pbVar11 + (1 - lVar8)) & 0xffffffff;
      iVar7 = iVar7 + 1;
    } while ((int)(pbVar11 + (1 - lVar8)) <= iVar5);
  }
  lua_pushinteger(param_1,iVar7);
  uVar10 = 1;
LAB_0021307c:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10,local_8 - ___stack_chk_guard,0);
}


