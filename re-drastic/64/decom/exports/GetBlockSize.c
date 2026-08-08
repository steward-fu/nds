/*
 * Ghidra decompilation
 *
 * Function : GetBlockSize
 * Address  : 001e17b0
 * Program  : drastic64
 */


/* FragmentedWindow::GetBlockSize(unsigned long, unsigned long) */

ulong __thiscall FragmentedWindow::GetBlockSize(FragmentedWindow *this,ulong param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  puVar1 = (ulong *)(this + 0x100);
  do {
    uVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    if (param_1 < uVar2) {
      uVar2 = uVar2 - param_1;
      if (param_2 < uVar2) {
        uVar2 = param_2;
      }
      return uVar2;
    }
  } while (puVar1 != (ulong *)(this + 0x200));
  return 0;
}


