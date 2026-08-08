/*
 * Ghidra decompilation
 *
 * Function : FUN_001d116c
 * Address  : 001d116c
 * Program  : drastic64
 */


undefined FUN_001d116c(long param_1,int *param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint extraout_var;
  uint extraout_var_00;
  ulong uVar5;
  uint uVar6;
  
  if (((*(char *)(param_2 + 2) == '\0') && (*(int *)(param_1 + 0xd0) + -0xf <= *param_2)) &&
     (cVar3 = Unpack::UnpReadBuf(), cVar3 == '\0')) {
    return 0;
  }
  uVar5 = BitInput::fgetbits();
  uVar6 = 0;
  iVar4 = 0;
  *param_2 = *param_2 + (param_2[1] + 2U >> 3);
  param_2[1] = param_2[1] + 2U & 7;
  do {
    BitInput::fgetbits();
    uVar2 = uVar6 & 0x1f;
    *param_2 = *param_2 + (param_2[1] + 8U >> 3);
    param_2[1] = param_2[1] + 8U & 7;
    uVar6 = uVar6 + 8;
    iVar4 = iVar4 + ((extraout_var & 0xffffff) << (ulong)uVar2);
  } while (uVar6 != (((uint)(uVar5 >> 0xe) & 0x3ffff) + 1) * 8);
  *(int *)(param_3 + 4) = iVar4;
  uVar5 = BitInput::fgetbits();
  uVar6 = 0;
  iVar4 = 0;
  *param_2 = *param_2 + (param_2[1] + 2U >> 3);
  param_2[1] = param_2[1] + 2U & 7;
  do {
    BitInput::fgetbits();
    uVar2 = uVar6 & 0x1f;
    *param_2 = *param_2 + (param_2[1] + 8U >> 3);
    param_2[1] = param_2[1] + 8U & 7;
    uVar6 = uVar6 + 8;
    iVar4 = iVar4 + ((extraout_var_00 & 0xffffff) << (ulong)uVar2);
  } while ((((uint)(uVar5 >> 0xe) & 0x3ffff) + 1) * 8 != uVar6);
  *(int *)(param_3 + 8) = iVar4;
  uVar5 = BitInput::fgetbits();
  *param_3 = (byte)(uVar5 >> 0xd);
  BitInput::faddbits((BitInput *)param_2,3);
  bVar1 = *param_3;
  if ((bVar1 & 0xfb) == 0) {
    uVar5 = BitInput::fgetbits();
    param_3[0xc] = (char)(uVar5 >> 0xb) + 1;
    BitInput::faddbits((BitInput *)param_2,5);
    bVar1 = *param_3;
  }
  if (bVar1 != 5) {
    return 1;
  }
  param_3[0xc] = 3;
  iVar4 = BitInput::fgetbits();
  *(int *)(param_3 + 0x10) = iVar4 + 1;
  BitInput::faddbits((BitInput *)param_2,0x10);
  uVar5 = BitInput::fgetbits();
  param_3[0x14] = (byte)(uVar5 >> 0xe);
  BitInput::faddbits((BitInput *)param_2,2);
  return 1;
}


