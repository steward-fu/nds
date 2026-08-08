/*
 * Ghidra decompilation
 *
 * Function : getoption
 * Address  : 0812cdd8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

KOption getoption(Header *h,char **fmt,int *size)

{
  char cVar1;
  KOption KVar2;
  int iVar3;
  int a_4;
  byte *pbVar4;
  byte *pbVar5;
  int a_3;
  int a_2;
  int a_1;
  int a;
  char *pcVar6;
  
  pcVar6 = *fmt;
  pbVar4 = (byte *)(pcVar6 + 1);
  *fmt = (char *)pbVar4;
  cVar1 = *pcVar6;
  *size = 0;
  switch(cVar1) {
  case ' ':
    KVar2 = Knop;
    break;
  case '!':
    if ((byte)pcVar6[1] - 0x30 < 10) {
      a_3 = 0;
      do {
        pbVar5 = pbVar4 + 1;
        *fmt = (char *)pbVar5;
        a_3 = (*pbVar4 - 0x30) + a_3 * 10;
        pbVar4 = pbVar5;
      } while (a_3 < 0xccccccc && *pbVar5 - 0x30 < 10);
      if (0xf < a_3 - 1U) {
        luaL_error(h->L,"integral size (%d) out of limits [1,%d]",a_3,0x10);
      }
    }
    else {
      a_3 = 8;
    }
    KVar2 = Knop;
    h->maxalign = a_3;
    break;
  default:
    luaL_error(h->L,"invalid format option \'%c\'");
    KVar2 = Knop;
    break;
  case '<':
  case '=':
    KVar2 = Knop;
    h->islittle = 1;
    break;
  case '>':
    KVar2 = Knop;
    h->islittle = 0;
    break;
  case 'B':
    KVar2 = Kuint;
    *size = 1;
    break;
  case 'H':
    KVar2 = Kuint;
    *size = 2;
    break;
  case 'I':
    if ((byte)pcVar6[1] - 0x30 < 10) {
      a_1 = 0;
      do {
        pbVar5 = pbVar4 + 1;
        *fmt = (char *)pbVar5;
        a_1 = (*pbVar4 - 0x30) + a_1 * 10;
        pbVar4 = pbVar5;
      } while (a_1 < 0xccccccc && *pbVar5 - 0x30 < 10);
      if (0xf < a_1 - 1U) {
        luaL_error(h->L,"integral size (%d) out of limits [1,%d]",a_1,0x10);
      }
    }
    else {
      a_1 = 4;
    }
    KVar2 = Kuint;
    *size = a_1;
    break;
  case 'J':
  case 'L':
  case 'T':
    KVar2 = Kuint;
    *size = 4;
    break;
  case 'X':
    KVar2 = Kpaddalign;
    break;
  case 'b':
    KVar2 = Kint;
    *size = 1;
    break;
  case 'c':
    if ((byte)pcVar6[1] - 0x30 < 10) {
      iVar3 = 0;
      do {
        pbVar5 = pbVar4 + 1;
        *fmt = (char *)pbVar5;
        iVar3 = (*pbVar4 - 0x30) + iVar3 * 10;
        if (9 < *pbVar5 - 0x30) {
          *size = iVar3;
          if (iVar3 != -1) {
            return Kchar;
          }
          goto LAB_0812d0ec;
        }
        pbVar4 = pbVar5;
      } while (iVar3 < 0xccccccc);
      KVar2 = Kchar;
      *size = iVar3;
    }
    else {
      *size = -1;
LAB_0812d0ec:
      luaL_error(h->L,"missing size for format option \'c\'");
      KVar2 = Kchar;
    }
    break;
  case 'd':
    KVar2 = Kfloat;
    *size = 8;
    break;
  case 'f':
  case 'n':
    KVar2 = Kfloat;
    *size = 4;
    break;
  case 'h':
    KVar2 = Kint;
    *size = 2;
    break;
  case 'i':
    if ((byte)pcVar6[1] - 0x30 < 10) {
      a = 0;
      do {
        pbVar5 = pbVar4 + 1;
        *fmt = (char *)pbVar5;
        a = (*pbVar4 - 0x30) + a * 10;
        pbVar4 = pbVar5;
      } while (a < 0xccccccc && *pbVar5 - 0x30 < 10);
      if (0xf < a - 1U) {
        luaL_error(h->L,"integral size (%d) out of limits [1,%d]",a,0x10);
      }
    }
    else {
      a = 4;
    }
    KVar2 = Kint;
    *size = a;
    break;
  case 'j':
  case 'l':
    KVar2 = Kint;
    *size = 4;
    break;
  case 's':
    if ((byte)pcVar6[1] - 0x30 < 10) {
      a_2 = 0;
      do {
        pbVar5 = pbVar4 + 1;
        *fmt = (char *)pbVar5;
        a_2 = (*pbVar4 - 0x30) + a_2 * 10;
        pbVar4 = pbVar5;
      } while (a_2 < 0xccccccc && *pbVar5 - 0x30 < 10);
      if (0xf < a_2 - 1U) {
        luaL_error(h->L,"integral size (%d) out of limits [1,%d]",a_2,0x10);
      }
    }
    else {
      a_2 = 4;
    }
    KVar2 = Kstring;
    *size = a_2;
    break;
  case 'x':
    KVar2 = Kpadding;
    *size = 1;
    break;
  case 'z':
    KVar2 = Kzstr;
  }
  return KVar2;
}


