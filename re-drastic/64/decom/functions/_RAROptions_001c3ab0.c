/*
 * Ghidra decompilation
 *
 * Function : ~RAROptions
 * Address  : 001c3ab0
 * Program  : drastic64
 */


/* RAROptions::~RAROptions() */

void __thiscall RAROptions::~RAROptions(RAROptions *this)

{
  SecPassword::Clean();
  if (*(void **)(this + 0xc278) != (void *)0x0) {
    free(*(void **)(this + 0xc278));
  }
  SecPassword::~SecPassword((SecPassword *)(this + 0xa02c));
  return;
}


