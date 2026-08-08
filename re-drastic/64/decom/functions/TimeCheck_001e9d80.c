/*
 * Ghidra decompilation
 *
 * Function : TimeCheck
 * Address  : 001e9d80
 * Program  : drastic64
 */


/* CommandData::TimeCheck(RarTime&) */

bool __thiscall CommandData::TimeCheck(CommandData *this,RarTime *param_1)

{
  bool bVar1;
  
  if ((*(ulong *)(this + 0xc4c0) == 0) ||
     (bVar1 = true, *(ulong *)param_1 < *(ulong *)(this + 0xc4c0))) {
    bVar1 = false;
    if (*(ulong *)(this + 0xc4c8) != 0) {
      return *(ulong *)param_1 <= *(ulong *)(this + 0xc4c8);
    }
  }
  return bVar1;
}


