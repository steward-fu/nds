/*
 * Ghidra decompilation
 *
 * Function : _ZN16FragmentedWindowD2Ev
 * Address  : 001dfc70
 * Program  : drastic64
 */


/* FragmentedWindow::~FragmentedWindow() */

void __thiscall FragmentedWindow::~FragmentedWindow(FragmentedWindow *this)

{
  void **ppvVar1;
  void *__ptr;
  
  ppvVar1 = (void **)(this + 0x100);
  do {
    __ptr = *(void **)this;
    this = (FragmentedWindow *)((long)this + 8);
    if (__ptr != (void *)0x0) {
      free(__ptr);
    }
  } while ((void **)this != ppvVar1);
  return;
}


