/*
 * Ghidra decompilation
 *
 * Function : _ZN7Archive14ProcessExtra50EP7RawReadmP9BaseBlock
 * Address  : 001bbe30
 * Program  : drastic64
 */


/* Archive::ProcessExtra50(RawRead*, unsigned long, BaseBlock*) */

void __thiscall
Archive::ProcessExtra50(Archive *this,RawRead *param_1,ulong param_2,BaseBlock *param_3)

{
  if (*(ulong *)(param_1 + 0x30) <= *(long *)(param_1 + 0x28) - param_2) {
    *(ulong *)(param_1 + 0x30) = *(long *)(param_1 + 0x28) - param_2;
    ProcessExtra50((RawRead *)this,(ulong)param_1,param_3);
    return;
  }
  return;
}


