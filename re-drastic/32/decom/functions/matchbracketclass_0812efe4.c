/*
 * Ghidra decompilation
 *
 * Function : matchbracketclass
 * Address  : 0812efe4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int matchbracketclass(int c,char *p,char *ec)

{
  byte bVar1;
  __int32_t **pp_Var2;
  ushort **ppuVar3;
  char *pcVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  int res;
  
  pcVar4 = p + 1;
  if (*pcVar4 == '^') {
    p = p + 1;
  }
  uVar7 = (uint)(*pcVar4 != '^');
  do {
    while( true ) {
      pcVar4 = p;
      if (ec <= pcVar4 + 1) {
        return uVar7 ^ 1;
      }
      uVar6 = (uint)(byte)pcVar4[1];
      if (uVar6 == 0x25) break;
      if ((pcVar4[2] == '-') && (p = pcVar4 + 3, p < ec)) {
        if (((int)uVar6 <= c) && (c <= (int)(uint)(byte)pcVar4[3])) {
          return uVar7;
        }
      }
      else {
        p = pcVar4 + 1;
        if (c == uVar6) {
          return uVar7;
        }
      }
    }
    bVar1 = pcVar4[2];
    pp_Var2 = __ctype_tolower_loc();
    switch((*pp_Var2)[(short)(ushort)bVar1]) {
    case 0x61:
      ppuVar3 = __ctype_b_loc();
      puVar5 = *ppuVar3;
      res = puVar5[c] & 0x400;
      break;
    default:
      res = (int)((uint)bVar1 == c);
      goto LAB_0812f110;
    case 99:
      ppuVar3 = __ctype_b_loc();
      puVar5 = *ppuVar3;
      res = puVar5[c] & 2;
      break;
    case 100:
      ppuVar3 = __ctype_b_loc();
      puVar5 = *ppuVar3;
      res = puVar5[c] & 0x800;
      break;
    case 0x67:
      ppuVar3 = __ctype_b_loc();
      puVar5 = *ppuVar3;
      res = puVar5[c] & 0x8000;
      break;
    case 0x6c:
      ppuVar3 = __ctype_b_loc();
      puVar5 = *ppuVar3;
      res = puVar5[c] & 0x200;
      break;
    case 0x70:
      ppuVar3 = __ctype_b_loc();
      puVar5 = *ppuVar3;
      res = puVar5[c] & 4;
      break;
    case 0x73:
      ppuVar3 = __ctype_b_loc();
      puVar5 = *ppuVar3;
      res = puVar5[c] & 0x2000;
      break;
    case 0x75:
      ppuVar3 = __ctype_b_loc();
      puVar5 = *ppuVar3;
      res = puVar5[c] & 0x100;
      break;
    case 0x77:
      ppuVar3 = __ctype_b_loc();
      puVar5 = *ppuVar3;
      res = puVar5[c] & 8;
      break;
    case 0x78:
      ppuVar3 = __ctype_b_loc();
      puVar5 = *ppuVar3;
      res = puVar5[c] & 0x1000;
      break;
    case 0x7a:
      ppuVar3 = __ctype_b_loc();
      puVar5 = *ppuVar3;
      res = (int)(c == 0);
    }
    if ((puVar5[(short)(ushort)bVar1] & 0x200) == 0) {
      res = (int)(res == 0);
    }
LAB_0812f110:
    p = pcVar4 + 2;
    if (res != 0) {
      return uVar7;
    }
  } while( true );
}


