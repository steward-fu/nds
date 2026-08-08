/*
 * Ghidra decompilation
 *
 * Function : _ZN9QuickOpen4TellEPx
 * Address  : 001ecb80
 * Program  : drastic64
 */


/* QuickOpen::Tell(long long*) */

void __thiscall QuickOpen::Tell(QuickOpen *this,longlong *param_1)

{
  if (this[0x1038] != (QuickOpen)0x0) {
    *param_1 = *(longlong *)(this + 0x1098);
  }
  return;
}


