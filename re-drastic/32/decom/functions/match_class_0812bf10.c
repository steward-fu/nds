/*
 * Ghidra decompilation
 *
 * Function : match_class
 * Address  : 0812bf10
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int match_class(int c,int cl)

{
  __int32_t **pp_Var1;
  ushort **ppuVar2;
  int __res;
  ushort *puVar3;
  int res;
  
  __res = cl;
  if (cl + 0x80U < 0x180) {
    pp_Var1 = __ctype_tolower_loc();
    __res = (*pp_Var1)[cl];
  }
  switch(__res) {
  case 0x61:
    ppuVar2 = __ctype_b_loc();
    puVar3 = *ppuVar2;
    res = puVar3[c] & 0x400;
    break;
  default:
    return (uint)(cl == c);
  case 99:
    ppuVar2 = __ctype_b_loc();
    puVar3 = *ppuVar2;
    res = puVar3[c] & 2;
    break;
  case 100:
    ppuVar2 = __ctype_b_loc();
    puVar3 = *ppuVar2;
    res = puVar3[c] & 0x800;
    break;
  case 0x67:
    ppuVar2 = __ctype_b_loc();
    puVar3 = *ppuVar2;
    res = puVar3[c] & 0x8000;
    break;
  case 0x6c:
    ppuVar2 = __ctype_b_loc();
    puVar3 = *ppuVar2;
    res = puVar3[c] & 0x200;
    break;
  case 0x70:
    ppuVar2 = __ctype_b_loc();
    puVar3 = *ppuVar2;
    res = puVar3[c] & 4;
    break;
  case 0x73:
    ppuVar2 = __ctype_b_loc();
    puVar3 = *ppuVar2;
    res = puVar3[c] & 0x2000;
    break;
  case 0x75:
    ppuVar2 = __ctype_b_loc();
    puVar3 = *ppuVar2;
    res = puVar3[c] & 0x100;
    break;
  case 0x77:
    ppuVar2 = __ctype_b_loc();
    puVar3 = *ppuVar2;
    res = puVar3[c] & 8;
    break;
  case 0x78:
    ppuVar2 = __ctype_b_loc();
    puVar3 = *ppuVar2;
    res = puVar3[c] & 0x1000;
    break;
  case 0x7a:
    ppuVar2 = __ctype_b_loc();
    puVar3 = *ppuVar2;
    res = (int)(c == 0);
  }
  if ((puVar3[cl] & 0x200) == 0) {
    res = (int)(res == 0);
  }
  return res;
}


