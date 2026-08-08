/*
 * Ghidra decompilation
 *
 * Function : operator[]
 * Address  : 001dfdd0
 * Program  : drastic64
 */


/* FragmentedWindow::operator[](unsigned long) */

long __thiscall FragmentedWindow::operator[](FragmentedWindow *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 < *(ulong *)(this + 0x100)) {
    return *(long *)this + param_1;
  }
  uVar2 = 1;
  do {
    uVar1 = uVar2 + 1;
    if (param_1 < *(ulong *)(this + uVar2 * 8 + 0x100)) {
      return *(long *)(this + (uVar2 & 0xffffffff) * 8) +
             (param_1 - *(long *)(this + ((ulong)((int)uVar2 - 1) + 0x20) * 8));
    }
    uVar2 = uVar1;
  } while (uVar1 != 0x20);
  return *(long *)this;
}


