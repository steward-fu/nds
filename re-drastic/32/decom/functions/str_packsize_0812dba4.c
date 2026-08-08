/*
 * Ghidra decompilation
 *
 * Function : str_packsize
 * Address  : 0812dba4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int str_packsize(lua_State *L)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  KOption KVar4;
  int ntoalign;
  byte *pbVar5;
  uint uVar6;
  int a_4;
  int a_1;
  int a_2;
  int a_3;
  int a;
  uint uVar7;
  uint n;
  char *fmt;
  int align;
  Header h;
  
  iVar2 = __stack_chk_guard;
  n = 0;
  pcVar3 = luaL_checklstring(L,1,(size_t *)0x0);
  h.islittle = 1;
  h.maxalign = 1;
  cVar1 = *pcVar3;
  h.L = L;
  do {
    if (cVar1 == '\0') {
      fmt = pcVar3;
      lua_pushinteger(L,n);
      if (iVar2 == __stack_chk_guard) {
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    fmt = pcVar3 + 1;
    switch(*pcVar3) {
    case ' ':
      uVar6 = 1;
      a_4 = 0;
      uVar7 = 8;
      align = a_4;
      break;
    case '!':
      if ((byte)pcVar3[1] - 0x30 < 10) {
        a = 0;
        pbVar5 = (byte *)fmt;
        do {
          fmt = (char *)(pbVar5 + 1);
          a = (*pbVar5 - 0x30) + a * 10;
          pbVar5 = (byte *)fmt;
        } while (a < 0xccccccc && (byte)*fmt - 0x30 < 10);
        if (0xf < a - 1U) {
          luaL_error(h.L,"integral size (%d) out of limits [1,%d]",a,0x10);
        }
      }
      else {
        a = 8;
      }
      uVar6 = 1;
      uVar7 = 8;
      a_4 = 0;
      align = a_4;
      h.maxalign = a;
      break;
    default:
      luaL_error(h.L,"invalid format option \'%c\'");
      uVar6 = 1;
      a_4 = 0;
      uVar7 = 8;
      align = 0;
      break;
    case '<':
    case '=':
      uVar6 = 1;
      a_4 = 0;
      uVar7 = 8;
      h.islittle = 1;
      align = a_4;
      break;
    case '>':
      uVar6 = 1;
      a_4 = 0;
      uVar7 = 8;
      h.islittle = 0;
      align = a_4;
      break;
    case 'B':
      uVar6 = 1;
      a_4 = 1;
      uVar7 = 1;
      align = a_4;
      break;
    case 'H':
      uVar6 = 0;
      a_4 = 2;
      uVar7 = 1;
      align = a_4;
      break;
    case 'I':
      if (9 < (byte)pcVar3[1] - 0x30) goto switchD_0812dc24_caseD_4a;
      a_1 = 0;
      pbVar5 = (byte *)fmt;
      do {
        fmt = (char *)(pbVar5 + 1);
        a_1 = (*pbVar5 - 0x30) + a_1 * 10;
        pbVar5 = (byte *)fmt;
      } while (a_1 < 0xccccccc && (byte)*fmt - 0x30 < 10);
      a_4 = a_1;
      if (a_1 - 1U < 0x10) {
        uVar7 = 1;
        uVar6 = (uint)(a_1 < 2);
        align = a_1;
      }
      else {
        uVar7 = 1;
        luaL_error(h.L,"integral size (%d) out of limits [1,%d]",a_1);
        uVar6 = (uint)(a_1 < 2);
        align = a_1;
      }
      break;
    case 'J':
    case 'L':
    case 'T':
switchD_0812dc24_caseD_4a:
      uVar6 = 0;
      a_4 = 4;
      uVar7 = 1;
      align = a_4;
      break;
    case 'X':
      align = 0;
      if (((pcVar3[1] == '\0') || (KVar4 = getoption(&h,&fmt,&align), KVar4 == Kchar)) ||
         (align == 0)) {
        luaL_argerror(h.L,1,"invalid next option for option \'X\'");
        uVar6 = (uint)(align < 2);
        a_4 = 0;
        uVar7 = 7;
      }
      else {
        uVar6 = (uint)(align < 2);
        a_4 = 0;
        uVar7 = 7;
      }
      break;
    case 'b':
      uVar6 = 1;
      uVar7 = 0;
      a_4 = 1;
      align = a_4;
      break;
    case 'c':
      if ((byte)pcVar3[1] - 0x30 < 10) {
        a_4 = 0;
        pbVar5 = (byte *)fmt;
        do {
          fmt = (char *)(pbVar5 + 1);
          a_4 = (*pbVar5 - 0x30) + a_4 * 10;
          if (9 < (byte)*fmt - 0x30) {
            if (a_4 == 0xffffffff) goto LAB_0812dfb4;
            break;
          }
          pbVar5 = (byte *)fmt;
        } while (a_4 < 0xccccccc);
        uVar6 = 1;
        uVar7 = 3;
        align = a_4;
      }
      else {
LAB_0812dfb4:
        a_4 = 0xffffffff;
        uVar7 = 3;
        luaL_error(h.L,"missing size for format option \'c\'");
        uVar6 = 1;
        align = a_4;
      }
      break;
    case 'd':
      uVar6 = 0;
      a_4 = 8;
      uVar7 = 2;
      align = a_4;
      break;
    case 'f':
    case 'n':
      uVar6 = 0;
      a_4 = 4;
      uVar7 = 2;
      align = a_4;
      break;
    case 'h':
      uVar6 = 0;
      a_4 = 2;
      uVar7 = 0;
      align = a_4;
      break;
    case 'i':
      if (9 < (byte)pcVar3[1] - 0x30) goto switchD_0812dc24_caseD_6a;
      a_2 = 0;
      pbVar5 = (byte *)fmt;
      do {
        fmt = (char *)(pbVar5 + 1);
        a_4 = (*pbVar5 - 0x30) + a_2 * 10;
        pbVar5 = (byte *)fmt;
        a_2 = a_4;
      } while (a_4 < 0xccccccc && (byte)*fmt - 0x30 < 10);
      uVar7 = 0;
      if (a_4 - 1U < 0x10) {
LAB_0812e068:
        uVar6 = (uint)(a_4 < 2);
        align = a_4;
      }
      else {
        luaL_error(h.L,"integral size (%d) out of limits [1,%d]",a_4);
        uVar6 = (uint)(a_4 < 2);
        align = a_4;
      }
      break;
    case 'j':
    case 'l':
switchD_0812dc24_caseD_6a:
      uVar6 = 0;
      a_4 = 4;
      uVar7 = uVar6;
      align = a_4;
      break;
    case 's':
      if ((byte)pcVar3[1] - 0x30 < 10) {
        a_4 = 0;
        pbVar5 = (byte *)fmt;
        do {
          fmt = (char *)(pbVar5 + 1);
          a_4 = (*pbVar5 - 0x30) + a_4 * 10;
          pbVar5 = (byte *)fmt;
        } while (a_4 < 0xccccccc && (byte)*fmt - 0x30 < 10);
        if (0xf < a_4 - 1U) {
          uVar7 = 4;
          luaL_error(h.L,"integral size (%d) out of limits [1,%d]",a_4);
          goto LAB_0812e068;
        }
        uVar6 = (uint)(a_4 < 2);
        uVar7 = 4;
        align = a_4;
      }
      else {
        a_4 = 4;
        uVar6 = 0;
        uVar7 = a_4;
        align = a_4;
      }
      break;
    case 'x':
      uVar6 = 1;
      a_4 = uVar6;
      uVar7 = 6;
      align = uVar6;
      break;
    case 'z':
      uVar6 = 1;
      a_4 = 0;
      uVar7 = 5;
      align = 0;
    }
    if (uVar6 == 0) {
      if (h.maxalign < align) {
        align = h.maxalign;
      }
      uVar6 = align - 1;
      if ((uVar6 & align) != 0) {
        luaL_argerror(h.L,1,"format asks for alignment not power of 2");
        uVar6 = align - 1;
      }
      ntoalign = uVar6 & align - (uVar6 & n);
    }
    else {
      ntoalign = 0;
    }
    if (0x7fffffffU - (ntoalign + a_4) < n) {
      luaL_argerror(L,1,"format result too large");
    }
    n = n + ntoalign + a_4;
    if (uVar7 - 4 < 2) {
      luaL_argerror(L,1,"variable-length format");
    }
    cVar1 = *fmt;
    pcVar3 = fmt;
  } while( true );
}


