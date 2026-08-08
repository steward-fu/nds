/*
 * Ghidra decompilation
 *
 * Function : ToPercentUnlim
 * Address  : 001ed620
 * Program  : drastic64
 */


/* ToPercentUnlim(long long, long long) */

long ToPercentUnlim(longlong param_1,longlong param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    if (param_2 != 0) {
      lVar1 = (param_1 * 100) / param_2;
    }
    return lVar1;
  }
  return 0;
}


