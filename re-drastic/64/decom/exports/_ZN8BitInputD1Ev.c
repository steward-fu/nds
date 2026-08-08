/*
 * Ghidra decompilation
 *
 * Function : _ZN8BitInputD1Ev
 * Address  : 001ef350
 * Program  : drastic64
 */


/* BitInput::~BitInput() */

void __thiscall BitInput::~BitInput(BitInput *this)

{
  if ((this[8] == (BitInput)0x0) && (*(void **)(this + 0x10) != (void *)0x0)) {
    operator_delete__(*(void **)(this + 0x10));
    return;
  }
  return;
}


