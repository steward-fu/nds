/*
 * Ghidra decompilation
 *
 * Function : DecodeNum
 * Address  : 001cf740
 * Program  : drastic64
 */


/* Unpack::DecodeNum(unsigned int, unsigned int, unsigned int*, unsigned int*) */

int __thiscall Unpack::DecodeNum(Unpack *this,uint param_1,uint param_2,uint *param_3,uint *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  uVar3 = param_1 & 0xfff0;
  if (uVar3 < *param_3) {
    BitInput::faddbits((BitInput *)(this + 8),param_2);
  }
  else {
    lVar1 = 4;
    do {
      lVar2 = lVar1;
      param_2 = param_2 + 1;
      lVar1 = lVar2 + 4;
    } while (*(uint *)((long)param_3 + lVar2) <= uVar3);
    BitInput::faddbits((BitInput *)(this + 8),param_2);
    uVar3 = uVar3 - *(int *)((long)param_3 + lVar2 + -4);
  }
  return (uVar3 >> (ulong)(0x10 - param_2 & 0x1f)) + param_4[param_2];
}


