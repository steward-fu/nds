/*
 * Ghidra decompilation
 *
 * Function : _Z9ToPercentxx
 * Address  : 001ed5f0
 * Program  : drastic64
 */


/* ToPercent(long long, long long) */

long ToPercent(longlong param_1,longlong param_2)

{
  long lVar1;
  
  lVar1 = 100;
  if ((param_1 <= param_2) && (lVar1 = 0, param_2 != 0)) {
    lVar1 = 0;
    if (param_2 != 0) {
      lVar1 = (param_1 * 100) / param_2;
    }
  }
  return lVar1;
}


