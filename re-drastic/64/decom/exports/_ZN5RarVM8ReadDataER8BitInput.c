/*
 * Ghidra decompilation
 *
 * Function : _ZN5RarVM8ReadDataER8BitInput
 * Address  : 001ee380
 * Program  : drastic64
 */


/* RarVM::ReadData(BitInput&) */

ulong RarVM::ReadData(BitInput *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = BitInput::fgetbits();
  uVar2 = (uint)uVar3 & 0xc000;
  if (uVar2 == 0x4000) {
    if ((uVar3 & 0x3c00) == 0) {
      BitInput::faddbits(param_1,0xe);
      return (ulong)((uint)uVar3 >> 2 | 0xffffff00);
    }
    BitInput::faddbits(param_1,10);
    return (uVar3 & 0xffffffff) >> 6 & 0xff;
  }
  if (uVar2 != 0x8000) {
    if ((uVar3 & 0xc000) != 0) {
      BitInput::faddbits(param_1,2);
      iVar1 = BitInput::fgetbits();
      BitInput::faddbits(param_1,0x10);
      uVar2 = BitInput::fgetbits();
      BitInput::faddbits(param_1,0x10);
      return (ulong)(iVar1 << 0x10 | uVar2);
    }
    BitInput::faddbits(param_1,6);
    return (uVar3 & 0xffffffff) >> 10 & 0xf;
  }
  BitInput::faddbits(param_1,2);
  uVar3 = BitInput::fgetbits();
  BitInput::faddbits(param_1,0x10);
  return uVar3 & 0xffffffff;
}


