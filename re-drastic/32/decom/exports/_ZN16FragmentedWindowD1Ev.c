/*
 * Ghidra decompilation
 *
 * Function : _ZN16FragmentedWindowD1Ev
 * Address  : 080f5c88
 * Program  : drastic
 */


/* DWARF original prototype: void * ~FragmentedWindow(FragmentedWindow * this, int __in_chrg) */

void * __thiscall FragmentedWindow::~FragmentedWindow(FragmentedWindow *this,int __in_chrg)

{
  size_t *psVar1;
  
  psVar1 = this[-1].MemSize + 0x1f;
  do {
    psVar1 = psVar1 + 1;
    if ((void *)*psVar1 != (void *)0x0) {
      free((void *)*psVar1);
    }
  } while ((byte **)psVar1 != this->Mem + 0x1f);
  return this;
}


