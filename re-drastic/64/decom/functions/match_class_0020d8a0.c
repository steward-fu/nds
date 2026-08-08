/*
 * Ghidra decompilation
 *
 * Function : match_class
 * Address  : 0020d8a0
 * Program  : drastic64
 */


ushort match_class(int param_1,int param_2)

{
  int iVar1;
  __int32_t **pp_Var2;
  ushort **ppuVar3;
  ushort *puVar4;
  ushort uVar5;
  
  pp_Var2 = __ctype_tolower_loc();
  iVar1 = (*pp_Var2)[param_2];
  if (iVar1 == 0x70) {
    ppuVar3 = __ctype_b_loc();
    puVar4 = *ppuVar3;
    uVar5 = puVar4[param_1] & 4;
  }
  else if (iVar1 < 0x71) {
    if (iVar1 == 100) {
      ppuVar3 = __ctype_b_loc();
      puVar4 = *ppuVar3;
      uVar5 = puVar4[param_1] & 0x800;
    }
    else if (iVar1 < 0x65) {
      if (iVar1 == 0x61) {
        ppuVar3 = __ctype_b_loc();
        puVar4 = *ppuVar3;
        uVar5 = puVar4[param_1] & 0x400;
      }
      else {
        if (iVar1 != 99) goto LAB_0020d99c;
        ppuVar3 = __ctype_b_loc();
        puVar4 = *ppuVar3;
        uVar5 = puVar4[param_1] & 2;
      }
    }
    else if (iVar1 == 0x67) {
      ppuVar3 = __ctype_b_loc();
      puVar4 = *ppuVar3;
      uVar5 = puVar4[param_1] & 0x8000;
    }
    else {
      if (iVar1 != 0x6c) goto LAB_0020d99c;
      ppuVar3 = __ctype_b_loc();
      puVar4 = *ppuVar3;
      uVar5 = puVar4[param_1] & 0x200;
    }
  }
  else if (iVar1 == 0x77) {
    ppuVar3 = __ctype_b_loc();
    puVar4 = *ppuVar3;
    uVar5 = puVar4[param_1] & 8;
  }
  else if (iVar1 < 0x78) {
    if (iVar1 == 0x73) {
      ppuVar3 = __ctype_b_loc();
      puVar4 = *ppuVar3;
      uVar5 = puVar4[param_1] & 0x2000;
    }
    else {
      if (iVar1 != 0x75) goto LAB_0020d99c;
      ppuVar3 = __ctype_b_loc();
      puVar4 = *ppuVar3;
      uVar5 = puVar4[param_1] & 0x100;
    }
  }
  else if (iVar1 == 0x78) {
    ppuVar3 = __ctype_b_loc();
    puVar4 = *ppuVar3;
    uVar5 = puVar4[param_1] & 0x1000;
  }
  else {
    if (iVar1 != 0x7a) {
LAB_0020d99c:
      return (ushort)(param_2 == param_1);
    }
    uVar5 = (ushort)(param_1 == 0);
    ppuVar3 = __ctype_b_loc();
    puVar4 = *ppuVar3;
  }
  if ((puVar4[param_2] >> 9 & 1) == 0) {
    uVar5 = (ushort)(uVar5 == 0);
  }
  return uVar5;
}


