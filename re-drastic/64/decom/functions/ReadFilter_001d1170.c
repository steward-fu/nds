/*
 * Ghidra decompilation
 *
 * Function : ReadFilter
 * Address  : 001d1170
 * Program  : drastic64
 */


/* Unpack::ReadFilter(BitInput&, UnpackFilter&) */

undefined __thiscall Unpack::ReadFilter(Unpack *this,BitInput *param_1,UnpackFilter *param_2)

{
  UnpackFilter UVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint extraout_var;
  uint extraout_var_00;
  ulong uVar5;
  uint uVar6;
  
  if (((param_1[8] == (BitInput)0x0) && (*(int *)(this + 0xd0) + -0xf <= *(int *)param_1)) &&
     (cVar3 = UnpReadBuf(), cVar3 == '\0')) {
    return 0;
  }
  uVar5 = BitInput::fgetbits();
  uVar6 = 0;
  iVar4 = 0;
  *(uint *)param_1 = *(int *)param_1 + (*(int *)(param_1 + 4) + 2U >> 3);
  *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) + 2U & 7;
  do {
    BitInput::fgetbits();
    uVar2 = uVar6 & 0x1f;
    *(uint *)param_1 = *(int *)param_1 + (*(int *)(param_1 + 4) + 8U >> 3);
    *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) + 8U & 7;
    uVar6 = uVar6 + 8;
    iVar4 = iVar4 + ((extraout_var & 0xffffff) << (ulong)uVar2);
  } while (uVar6 != (((uint)(uVar5 >> 0xe) & 0x3ffff) + 1) * 8);
  *(int *)(param_2 + 4) = iVar4;
  uVar5 = BitInput::fgetbits();
  uVar6 = 0;
  iVar4 = 0;
  *(uint *)param_1 = *(int *)param_1 + (*(int *)(param_1 + 4) + 2U >> 3);
  *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) + 2U & 7;
  do {
    BitInput::fgetbits();
    uVar2 = uVar6 & 0x1f;
    *(uint *)param_1 = *(int *)param_1 + (*(int *)(param_1 + 4) + 8U >> 3);
    *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) + 8U & 7;
    uVar6 = uVar6 + 8;
    iVar4 = iVar4 + ((extraout_var_00 & 0xffffff) << (ulong)uVar2);
  } while ((((uint)(uVar5 >> 0xe) & 0x3ffff) + 1) * 8 != uVar6);
  *(int *)(param_2 + 8) = iVar4;
  uVar5 = BitInput::fgetbits();
  *param_2 = SUB81(uVar5 >> 0xd,0);
  BitInput::faddbits(param_1,3);
  UVar1 = *param_2;
  if (((byte)UVar1 & 0xfb) == 0) {
    uVar5 = BitInput::fgetbits();
    param_2[0xc] = (UnpackFilter)((char)(uVar5 >> 0xb) + '\x01');
    BitInput::faddbits(param_1,5);
    UVar1 = *param_2;
  }
  if (UVar1 != (UnpackFilter)0x5) {
    return 1;
  }
  param_2[0xc] = (UnpackFilter)0x3;
  iVar4 = BitInput::fgetbits();
  *(int *)(param_2 + 0x10) = iVar4 + 1;
  BitInput::faddbits(param_1,0x10);
  uVar5 = BitInput::fgetbits();
  param_2[0x14] = SUB81(uVar5 >> 0xe,0);
  BitInput::faddbits(param_1,2);
  return 1;
}


