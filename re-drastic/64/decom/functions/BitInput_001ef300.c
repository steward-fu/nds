/*
 * Ghidra decompilation
 *
 * Function : BitInput
 * Address  : 001ef300
 * Program  : drastic64
 */


/* BitInput::BitInput(bool) */

void __thiscall BitInput::BitInput(BitInput *this,bool param_1)

{
  void *__s;
  
  this[8] = (BitInput)0x0;
  if (!param_1) {
    *(undefined8 *)(this + 0x10) = 0;
    return;
  }
  __s = operator_new__(0x8003);
  *(void **)(this + 0x10) = __s;
  memset(__s,0,0x8003);
  return;
}


