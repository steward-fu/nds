/*
 * Ghidra decompilation
 *
 * Function : _ZN5RarVMD1Ev
 * Address  : 001eddd0
 * Program  : drastic64
 */


/* RarVM::~RarVM() */

void __thiscall RarVM::~RarVM(RarVM *this)

{
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x18));
  }
  BitInput::~BitInput((BitInput *)this);
  return;
}


