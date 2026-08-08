/*
 * Ghidra decompilation
 *
 * Function : iter_aux
 * Address  : 00213520
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void iter_aux(undefined8 param_1)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  undefined8 uVar6;
  byte *pbVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pbVar5 = (byte *)luaL_checklstring(param_1,1,local_10,0);
  iVar4 = lua_tointegerx(param_1,2,0);
  if (iVar4 + -1 < 0) {
    iVar4 = 0;
    pbVar7 = pbVar5;
  }
  else {
    uVar6 = 0;
    if (local_10[0] <= iVar4 + -1) goto LAB_0021362c;
    pbVar7 = pbVar5 + iVar4;
    if ((pbVar5[iVar4] & 0xc0) == 0x80) {
      lVar9 = (long)(iVar4 + 1);
      do {
        pbVar1 = pbVar5 + lVar9;
        iVar4 = (int)lVar9;
        pbVar7 = pbVar5 + lVar9;
        lVar9 = lVar9 + 1;
      } while ((*pbVar1 & 0xc0) == 0x80);
    }
  }
  uVar6 = 0;
  if (local_10[0] <= iVar4) goto LAB_0021362c;
  bVar3 = *pbVar7;
  uVar11 = (uint)bVar3;
  if (bVar3 < 0x80) {
LAB_00213688:
    if ((pbVar7[1] & 0xc0) != 0x80) {
      lua_pushinteger(param_1,iVar4 + 1);
      lua_pushinteger(param_1,uVar11);
      uVar6 = 2;
      goto LAB_0021362c;
    }
  }
  else if ((bVar3 >> 6 & 1) != 0) {
    iVar10 = (int)pbVar7;
    uVar8 = 0;
    do {
      pbVar7 = pbVar7 + 1;
      iVar2 = (int)pbVar7 - iVar10;
      if ((*pbVar7 & 0xc0) != 0x80) goto LAB_0021361c;
      uVar8 = *pbVar7 & 0x3f | uVar8 << 6;
      uVar11 = uVar11 * 2;
    } while ((uVar11 >> 6 & 1) != 0);
    uVar11 = (uVar11 & 0x7f) << (ulong)(iVar2 * 5 & 0x1f) | uVar8;
    if ((iVar2 < 4 && uVar11 < 0x10ffff || iVar2 < 4 && uVar11 == 0x10ffff) &&
       (*(uint *)(&limits_5057 + (long)iVar2 * 4) < uVar11)) goto LAB_00213688;
  }
LAB_0021361c:
  uVar6 = luaL_error(param_1,"invalid UTF-8 code");
LAB_0021362c:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6,local_8 - ___stack_chk_guard,0);
}


