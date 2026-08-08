/*
 * Ghidra decompilation
 *
 * Function : byteoffset
 * Address  : 00212c40
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 byteoffset(undefined8 param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  ulong uVar6;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  undefined auVar10 [16];
  int local_10;
  undefined4 uStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pbVar4 = (byte *)luaL_checklstring(param_1,1,&local_10,0);
  iVar3 = luaL_checkinteger(param_1,2);
  iVar7 = 1;
  if (iVar3 < 0) {
    iVar7 = local_10 + 1;
  }
  auVar10 = luaL_optinteger(param_1,3,iVar7);
  uVar6 = auVar10._8_8_;
  uVar9 = auVar10._0_8_ & 0xffffffff;
  iVar7 = auVar10._0_4_;
  if (iVar7 < 0) {
    uVar6 = -(long)iVar7;
    if (uVar6 <= CONCAT44(uStack_c,local_10)) {
      uVar9 = (ulong)(iVar7 + local_10 + 1);
      goto LAB_00212cec;
    }
    luaL_argerror(param_1,3,"position out of range");
    if (iVar3 != 0) {
      uVar9 = 0;
      bVar2 = *pbVar4;
      uVar6 = extraout_x1;
      goto joined_r0x00212d98;
    }
    uVar6 = 1;
  }
  else {
LAB_00212cec:
    if ((int)uVar9 < 1) {
LAB_00212d70:
      uVar8 = (uint)uVar9;
      luaL_argerror(param_1,3,"position out of range");
      uVar6 = extraout_x1_00;
    }
    else {
      uVar8 = (int)uVar9 - 1;
      uVar9 = (ulong)uVar8;
      if (local_10 < (int)uVar8) goto LAB_00212d70;
    }
    if (iVar3 == 0) {
      if (0 < (int)uVar8) {
        uVar9 = (ulong)(int)uVar8;
        do {
          uVar6 = uVar9 & 0xffffffff;
          if ((pbVar4[uVar9] & 0xc0) != 0x80) {
            uVar6 = (ulong)((int)uVar9 + 1);
            break;
          }
          uVar9 = uVar9 - 1;
        } while (0 < (int)uVar9);
        goto LAB_00212d38;
      }
    }
    else {
      bVar2 = pbVar4[(int)uVar9];
joined_r0x00212d98:
      if ((bVar2 & 0xc0) == 0x80) {
        luaL_error(param_1,"initial position is a continuation byte");
        uVar6 = extraout_x1_01;
      }
      uVar8 = (uint)uVar9;
      if (iVar3 < 0) {
        if (0 < (int)uVar8) {
          do {
            iVar7 = iVar3;
            uVar6 = (ulong)((int)uVar9 + -1);
            do {
              iVar5 = (int)uVar6;
              uVar9 = uVar6 & 0xffffffff;
              if (iVar5 == 0) goto LAB_00212e24;
              pbVar1 = pbVar4 + uVar6;
              uVar6 = uVar6 - 1;
            } while ((*pbVar1 & 0xc0) == 0x80);
            iVar3 = iVar7 + 1;
          } while ((iVar3 < 0 && iVar5 != 0) && (iVar3 >= 0 || -1 < iVar5));
LAB_00212e24:
          uVar6 = (ulong)(iVar5 + 1);
          if (iVar7 == -1) goto LAB_00212d38;
        }
LAB_00212e2c:
        lua_pushnil(param_1,uVar6);
        goto LAB_00212d40;
      }
      while (iVar3 = iVar3 + -1, iVar3 != 0) {
        if (local_10 <= (int)uVar9) goto LAB_00212e2c;
        uVar6 = (ulong)((int)uVar9 + 1);
        do {
          pbVar1 = pbVar4 + uVar6;
          uVar9 = uVar6 & 0xffffffff;
          uVar8 = (uint)uVar6;
          uVar6 = uVar6 + 1;
        } while ((*pbVar1 & 0xc0) == 0x80);
      }
    }
    uVar6 = (ulong)(uVar8 + 1);
  }
LAB_00212d38:
  lua_pushinteger(param_1,uVar6);
LAB_00212d40:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return 1;
}


