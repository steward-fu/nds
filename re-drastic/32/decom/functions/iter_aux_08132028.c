/*
 * Ghidra decompilation
 *
 * Function : iter_aux
 * Address  : 08132028
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int iter_aux(lua_State *L)

{
  byte bVar1;
  char *pcVar2;
  char *s;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint c;
  int code;
  char *pcVar8;
  uchar *s_1;
  size_t len;
  int local_1c;
  
  local_1c = __stack_chk_guard;
  pcVar2 = luaL_checklstring(L,1,&len);
  iVar3 = lua_tointegerx(L,2,(int *)0x0);
  if (iVar3 + -1 < 0) {
    iVar3 = 0;
LAB_081320d8:
    if (iVar3 < (int)len) {
      code = (int)(byte)pcVar2[iVar3];
      pcVar8 = pcVar2 + iVar3;
      if ((uint)code < 0x80) {
LAB_08132180:
        if ((pcVar8 != (char *)0xffffffff) && ((pcVar8[1] & 0xc0U) != 0x80)) {
          lua_pushinteger(L,iVar3 + 1);
          lua_pushinteger(L,code);
          iVar3 = 2;
          goto LAB_08132084;
        }
      }
      else {
        uVar6 = code & 0x40;
        if ((pcVar2[iVar3] & 0x40U) == 0) {
          code = code & 0x7f;
LAB_08132168:
          if (utf8_decode::limits[uVar6] < (uint)code) {
            pcVar8 = pcVar8 + uVar6;
            goto LAB_08132180;
          }
        }
        else {
          uVar7 = (uint)(byte)pcVar8[1];
          if ((uVar7 & 0xc0) == 0x80) {
            pbVar5 = (byte *)(pcVar8 + 1);
            uVar4 = 0;
            uVar6 = 1;
            do {
              code = code << 1;
              uVar7 = uVar7 & 0x3f;
              uVar4 = uVar7 | uVar4 << 6;
              if ((code & 0x40U) == 0) {
                if ((int)uVar6 < 4) {
                  uVar7 = 0;
                }
                code = uVar4 | (code & 0x7fU) << (uVar6 * 5 & 0xff);
                if (3 < (int)uVar6) {
                  uVar7 = 1;
                }
                if (0x10ffff < (uint)code) {
                  uVar7 = uVar7 | 1;
                }
                if (uVar7 == 0) goto LAB_08132168;
                break;
              }
              pbVar5 = pbVar5 + 1;
              uVar7 = (uint)*pbVar5;
              uVar6 = uVar6 + 1;
            } while ((uVar7 & 0xc0) == 0x80);
          }
        }
      }
      iVar3 = luaL_error(L,"invalid UTF-8 code");
      goto LAB_08132084;
    }
  }
  else if (iVar3 + -1 < (int)len) {
    pbVar5 = (byte *)(pcVar2 + iVar3);
    bVar1 = pcVar2[iVar3];
    while ((bVar1 & 0xc0) == 0x80) {
      pbVar5 = pbVar5 + 1;
      iVar3 = iVar3 + 1;
      bVar1 = *pbVar5;
    }
    goto LAB_081320d8;
  }
  iVar3 = 0;
LAB_08132084:
  if (local_1c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}


