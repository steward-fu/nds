/*
 * Ghidra decompilation
 *
 * Function : faddbits
 * Address  : 001ef370
 * Program  : drastic64
 */


/* BitInput::faddbits(unsigned int) */

void __thiscall BitInput::faddbits(BitInput *this,uint param_1)

{
  *(uint *)this = *(int *)this + (param_1 + *(int *)(this + 4) >> 3);
  *(uint *)(this + 4) = param_1 + *(int *)(this + 4) & 7;
  return;
}


