/*
 * Ghidra decompilation
 *
 * Function : str_packsize
 * Address  : 0020eb20
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 str_packsize(undefined8 param_1)

{
  bool bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  uint local_24;
  byte *local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = (byte *)luaL_checklstring(param_1,1,0,0);
  local_10 = 0x100000001;
  local_18 = param_1;
  if (*local_20 == 0) {
    uVar8 = 0;
  }
  else {
    uVar12 = 0;
LAB_0020ebd0:
    do {
      pbVar3 = local_20 + 1;
      uVar8 = uVar12;
      switch(*local_20) {
      case 0x20:
        uVar13 = 4;
        uVar11 = 0x7fffffff;
        local_20 = pbVar3;
        break;
      case 0x21:
        iVar5 = 8;
        if (local_20[1] - 0x30 < 10) {
          iVar5 = 0;
          pbVar3 = local_20 + 2;
          do {
            local_20 = pbVar3;
            iVar5 = (local_20[-1] - 0x30) + iVar5 * 10;
            bVar1 = *local_20 - 0x30 < 10;
            bVar4 = false;
            if (bVar1) {
              bVar4 = iVar5 + -0xccccccb < 0;
            }
            pbVar3 = local_20 + 1;
          } while (bVar1 && iVar5 == 0xccccccb || bVar4 != (bVar1 && SBORROW4(iVar5,0xccccccb)));
          pbVar3 = local_20;
          if (0xf < iVar5 - 1U) {
            luaL_error(local_18,"integral size (%d) out of limits [1,%d]",iVar5,0x10);
            pbVar3 = local_20;
          }
        }
        local_20 = pbVar3;
        uVar13 = 4;
        uVar11 = 0x7fffffff;
        local_10 = CONCAT44(iVar5,(undefined4)local_10);
        break;
      default:
        uVar13 = 4;
        uVar11 = 0x7fffffff;
        local_20 = pbVar3;
        luaL_error(local_18,"invalid format option \'%c\'");
        break;
      case 0x3c:
      case 0x3d:
        uVar13 = 4;
        uVar11 = 0x7fffffff;
        local_10 = CONCAT44(local_10._4_4_,1);
        local_20 = pbVar3;
        break;
      case 0x3e:
        uVar13 = 4;
        uVar11 = 0x7fffffff;
        local_10 = (ulong)local_10._4_4_ << 0x20;
        local_20 = pbVar3;
        break;
      case 0x42:
        uVar13 = 0xfffffffd;
        uVar11 = 0x7ffffffe;
        uVar8 = uVar12 + 1;
        local_20 = pbVar3;
        break;
      case 0x48:
        uVar13 = 0xfffffffd;
        uVar6 = 2;
        local_24 = 2;
        local_20 = pbVar3;
        goto LAB_0020ec14;
      case 0x49:
        if (local_20[1] - 0x30 < 10) {
          uVar6 = 0;
          pbVar3 = local_20 + 2;
          do {
            local_20 = pbVar3;
            uVar6 = (local_20[-1] - 0x30) + uVar6 * 10;
            bVar1 = *local_20 - 0x30 < 10;
            bVar4 = false;
            if (bVar1) {
              bVar4 = (int)(uVar6 + 0xf3333335) < 0;
            }
            pbVar3 = local_20 + 1;
          } while (bVar1 && uVar6 == 0xccccccb || bVar4 != (bVar1 && SBORROW4(uVar6,0xccccccb)));
          if (uVar6 - 1 < 0x10) {
            uVar13 = 0xfffffffd;
            local_24 = uVar6;
          }
          else {
            luaL_error(local_18,"integral size (%d) out of limits [1,%d]",uVar6,0x10);
            uVar13 = 0xfffffffd;
            local_24 = uVar6;
          }
          goto LAB_0020ed58;
        }
        uVar13 = 0xfffffffd;
        uVar6 = 4;
        local_24 = 4;
LAB_0020ee78:
        local_20 = pbVar3;
        if ((int)local_10._4_4_ < (int)uVar6) goto LAB_0020ec20;
        uVar7 = uVar6 - 1;
        uVar10 = uVar6;
        goto LAB_0020ec34;
      case 0x4a:
        uVar13 = 0xfffffffd;
        uVar6 = 4;
        local_24 = 4;
        local_20 = pbVar3;
        goto LAB_0020ec14;
      case 0x4c:
      case 0x54:
        uVar13 = 0xfffffffd;
        uVar6 = 8;
        local_24 = 8;
        local_20 = pbVar3;
        goto LAB_0020ec14;
      case 0x58:
        local_24 = 0;
        pbVar2 = local_20 + 1;
        local_20 = pbVar3;
        if (((*pbVar2 == 0) || (iVar5 = getoption(&local_18,&local_20,&local_24), iVar5 == 3)) ||
           (local_24 == 0)) {
          luaL_argerror(local_18,1,"invalid next option for option \'X\'");
          uVar13 = 3;
          uVar6 = 0;
        }
        else {
          uVar13 = 3;
          uVar6 = 0;
        }
        goto LAB_0020ed58;
      case 0x62:
        uVar13 = 0xfffffffc;
        uVar11 = 0x7ffffffe;
        uVar8 = uVar12 + 1;
        local_20 = pbVar3;
        break;
      case 99:
        if (local_20[1] - 0x30 < 10) {
          iVar5 = 0;
          pbVar3 = local_20 + 2;
          do {
            local_20 = pbVar3;
            iVar5 = (local_20[-1] - 0x30) + iVar5 * 10;
            if (9 < *local_20 - 0x30) {
              pbVar3 = local_20;
              if (iVar5 == -1) goto LAB_0020eec4;
              break;
            }
            pbVar3 = local_20 + 1;
          } while (iVar5 < 0xccccccc);
          lVar9 = (long)iVar5;
          uVar11 = 0x7fffffff - lVar9;
        }
        else {
LAB_0020eec4:
          local_20 = pbVar3;
          luaL_error(local_18,"missing size for format option \'c\'");
          lVar9 = -1;
          uVar11 = 0x80000000;
        }
        uVar8 = uVar12 + lVar9;
        if (uVar11 < uVar12) {
          luaL_argerror(param_1,1,"format result too large");
        }
        goto LAB_0020ebc4;
      case 100:
        uVar13 = 0xfffffffe;
        uVar6 = 8;
        local_24 = 8;
        local_20 = pbVar3;
        goto LAB_0020ec14;
      case 0x66:
      case 0x6e:
        uVar6 = 4;
        uVar13 = 0xfffffffe;
        local_24 = 4;
        local_20 = pbVar3;
        goto LAB_0020ec14;
      case 0x68:
        uVar13 = 0xfffffffc;
        uVar6 = 2;
        local_24 = 2;
        local_20 = pbVar3;
        goto LAB_0020ec14;
      case 0x69:
        if (9 < local_20[1] - 0x30) {
          uVar6 = 4;
          uVar13 = 0xfffffffc;
          local_24 = 4;
          goto LAB_0020ee78;
        }
        uVar6 = 0;
        pbVar3 = local_20 + 2;
        do {
          local_20 = pbVar3;
          uVar6 = (local_20[-1] - 0x30) + uVar6 * 10;
          bVar1 = *local_20 - 0x30 < 10;
          bVar4 = false;
          if (bVar1) {
            bVar4 = (int)(uVar6 + 0xf3333335) < 0;
          }
          pbVar3 = local_20 + 1;
        } while (bVar1 && uVar6 == 0xccccccb || bVar4 != (bVar1 && SBORROW4(uVar6,0xccccccb)));
        if (uVar6 - 1 < 0x10) {
          uVar13 = 0xfffffffc;
          local_24 = uVar6;
        }
        else {
          luaL_error(local_18,"integral size (%d) out of limits [1,%d]",uVar6,0x10);
          uVar13 = 0xfffffffc;
          local_24 = uVar6;
        }
        goto LAB_0020ed58;
      case 0x6a:
        uVar13 = 0xfffffffc;
        uVar6 = 4;
        local_24 = 4;
        local_20 = pbVar3;
        goto LAB_0020ec14;
      case 0x6c:
        uVar13 = 0xfffffffc;
        uVar6 = 8;
        local_24 = 8;
        local_20 = pbVar3;
LAB_0020ec14:
        uVar10 = uVar6;
        if ((int)local_10._4_4_ < (int)local_24) {
LAB_0020ec20:
          uVar10 = uVar6;
          local_24 = local_10._4_4_;
        }
        uVar7 = local_24 - 1;
        uVar6 = local_24;
        if ((uVar7 & local_24) != 0) {
          luaL_argerror(local_18,1,"format asks for alignment not power of 2");
          uVar7 = local_24 - 1;
          uVar6 = local_24;
        }
LAB_0020ec34:
        lVar9 = (long)(int)((uVar6 - (uVar7 & (uint)uVar12) & uVar7) + uVar10);
        uVar11 = 0x7fffffff - lVar9;
        uVar8 = lVar9 + uVar12;
        break;
      case 0x73:
        if (9 < local_20[1] - 0x30) {
          uVar13 = 0;
          uVar6 = 8;
          local_24 = 8;
          goto LAB_0020ee78;
        }
        uVar6 = 0;
        pbVar3 = local_20 + 2;
        do {
          local_20 = pbVar3;
          uVar6 = (local_20[-1] - 0x30) + uVar6 * 10;
          bVar1 = *local_20 - 0x30 < 10;
          bVar4 = false;
          if (bVar1) {
            bVar4 = (int)(uVar6 + 0xf3333335) < 0;
          }
          pbVar3 = local_20 + 1;
        } while (bVar1 && uVar6 == 0xccccccb || bVar4 != (bVar1 && SBORROW4(uVar6,0xccccccb)));
        if (uVar6 - 1 < 0x10) {
          uVar13 = 0;
          local_24 = uVar6;
        }
        else {
          luaL_error(local_18,"integral size (%d) out of limits [1,%d]",uVar6,0x10);
          uVar13 = 0;
          local_24 = uVar6;
        }
LAB_0020ed58:
        if (1 < (int)local_24) goto LAB_0020ec14;
        uVar11 = 0x7fffffff - (long)(int)uVar6;
        uVar8 = (long)(int)uVar6 + uVar12;
        break;
      case 0x78:
        uVar13 = 2;
        uVar11 = 0x7ffffffe;
        uVar8 = uVar12 + 1;
        local_20 = pbVar3;
        break;
      case 0x7a:
        uVar13 = 1;
        uVar11 = 0x7fffffff;
        local_20 = pbVar3;
      }
      if (uVar11 < uVar12) {
        luaL_argerror(param_1,1,"format result too large");
        if (1 < uVar13) goto LAB_0020ebc4;
LAB_0020ec7c:
        luaL_argerror(param_1,1,"variable-length format");
        uVar12 = uVar8;
        if (*local_20 == 0) break;
        goto LAB_0020ebd0;
      }
      if (uVar13 < 2) goto LAB_0020ec7c;
LAB_0020ebc4:
      uVar12 = uVar8;
    } while (*local_20 != 0);
    uVar8 = uVar8 & 0xffffffff;
  }
  lua_pushinteger(param_1,uVar8);
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return 1;
}


