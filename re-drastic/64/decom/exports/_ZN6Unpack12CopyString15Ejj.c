/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack12CopyString15Ejj
 * Address  : 001cf6e0
 * Program  : drastic64
 */


/* Unpack::CopyString15(unsigned int, unsigned int) */

void __thiscall Unpack::CopyString15(Unpack *this,uint param_1,uint param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  
  iVar2 = param_2 - 1;
  *(ulong *)(this + 0x4da0) = *(long *)(this + 0x4da0) - (ulong)param_2;
  if (param_2 != 0) {
    uVar1 = *(ulong *)(this + 0xc0);
    uVar3 = *(ulong *)(this + 0xe980);
    do {
      iVar2 = iVar2 + -1;
      *(undefined *)(*(long *)(this + 0x4b90) + uVar1) =
           *(undefined *)(*(long *)(this + 0x4b90) + (uVar1 - param_1 & uVar3));
      uVar3 = *(ulong *)(this + 0xe980);
      uVar1 = *(long *)(this + 0xc0) + 1U & uVar3;
      *(ulong *)(this + 0xc0) = uVar1;
    } while (iVar2 != -1);
  }
  return;
}


