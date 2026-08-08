/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack14ReadFilterDataER8BitInput
 * Address  : 001d0fe0
 * Program  : drastic64
 */


/* Unpack::ReadFilterData(BitInput&) */

int __thiscall Unpack::ReadFilterData(Unpack *this,BitInput *param_1)

{
  uint uVar1;
  uint extraout_var;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = BitInput::fgetbits();
  uVar3 = 0;
  iVar4 = 0;
  *(uint *)param_1 = *(int *)param_1 + (*(int *)(param_1 + 4) + 2U >> 3);
  *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) + 2U & 7;
  do {
    BitInput::fgetbits();
    uVar1 = uVar3 & 0x1f;
    *(uint *)param_1 = *(int *)param_1 + (*(int *)(param_1 + 4) + 8U >> 3);
    *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) + 8U & 7;
    uVar3 = uVar3 + 8;
    iVar4 = iVar4 + ((extraout_var & 0xffffff) << (ulong)uVar1);
  } while (uVar3 != (((uint)(uVar2 >> 0xe) & 0x3ffff) + 1) * 8);
  return iVar4;
}


