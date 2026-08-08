/*
 * Ghidra decompilation
 *
 * Function : ReadBlockHeader
 * Address  : 001dfa00
 * Program  : drastic64
 */


/* Unpack::ReadBlockHeader(BitInput&, UnpackBlockHeader&) */

undefined8 __thiscall
Unpack::ReadBlockHeader(Unpack *this,BitInput *param_1,UnpackBlockHeader *param_2)

{
  int iVar1;
  BitInput BVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint extraout_var;
  uint extraout_var_00;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  BVar2 = param_1[8];
  *(undefined4 *)(param_2 + 0xc) = 0;
  if (((BVar2 != (BitInput)0x0) || (*(int *)param_1 < *(int *)(this + 0xd0) + -6)) ||
     (cVar5 = UnpReadBuf(), cVar5 != '\0')) {
    BitInput::faddbits(param_1,-*(int *)(param_1 + 4) & 7);
    uVar6 = BitInput::fgetbits();
    uVar6 = uVar6 >> 8 & 0xffffff;
    uVar4 = (uint)(uVar6 >> 3) & 3;
    BitInput::faddbits(param_1,8);
    if (uVar4 != 3) {
      uVar7 = (uint)uVar6;
      *(uint *)(param_2 + 4) = (uVar7 & 7) + 1;
      *(uint *)(param_2 + 0xc) = uVar4 + 3;
      BitInput::fgetbits();
      uVar8 = 0;
      uVar9 = 0;
      BitInput::faddbits(param_1,8);
      do {
        BitInput::fgetbits();
        uVar3 = uVar8 & 0x1f;
        iVar1 = *(int *)param_1 + (*(int *)(param_1 + 4) + 8U >> 3);
        *(int *)param_1 = iVar1;
        *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) + 8U & 7;
        uVar8 = uVar8 + 8;
        uVar9 = ((extraout_var_00 & 0xffffff) << (ulong)uVar3) + uVar9;
      } while (uVar8 != (uVar4 + 1) * 8);
      *(uint *)param_2 = uVar9;
      if ((extraout_var & 0xff) ==
          ((uVar9 ^ (int)uVar9 >> 8 ^ uVar7 ^ (int)uVar9 >> 0x10 ^ 0x5a) & 0xff)) {
        *(int *)(param_2 + 8) = iVar1;
        iVar1 = uVar9 + iVar1 + -1;
        if (*(int *)(this + 0xd4) < iVar1) {
          iVar1 = *(int *)(this + 0xd4);
        }
        *(int *)(this + 0xd4) = iVar1;
        param_2[0x10] = (UnpackBlockHeader)((byte)((uVar7 & 0xff) >> 6) & 1);
        param_2[0x11] = (UnpackBlockHeader)((byte)(uVar6 >> 7) & 1);
        return 1;
      }
    }
  }
  return 0;
}


