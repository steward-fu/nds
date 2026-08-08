/*
 * Ghidra decompilation
 *
 * Function : SizeCheck
 * Address  : 001e9dc0
 * Program  : drastic64
 */


/* CommandData::SizeCheck(long long) */

bool __thiscall CommandData::SizeCheck(CommandData *this,longlong param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0xc4d0);
  bVar1 = lVar2 != 0x7fffffff7fffffff && lVar2 <= param_1;
  if ((lVar2 == 0x7fffffff7fffffff || lVar2 > param_1) &&
     (bVar1 = param_1 <= *(long *)(this + 0xc4d8), *(long *)(this + 0xc4d8) == 0x7fffffff7fffffff))
  {
    bVar1 = false;
  }
  return bVar1;
}


