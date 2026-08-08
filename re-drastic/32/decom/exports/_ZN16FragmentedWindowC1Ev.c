/*
 * Ghidra decompilation
 *
 * Function : _ZN16FragmentedWindowC1Ev
 * Address  : 080f5c44
 * Program  : drastic
 */


/* DWARF original prototype: FragmentedWindow * FragmentedWindow(FragmentedWindow * this) */

FragmentedWindow * __thiscall FragmentedWindow::FragmentedWindow(FragmentedWindow *this)

{
  memset(this,0,0x80);
  memset(this->MemSize,0,0x80);
  return this;
}


