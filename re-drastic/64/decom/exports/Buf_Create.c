/*
 * Ghidra decompilation
 *
 * Function : Buf_Create
 * Address  : 001a7fd0
 * Program  : drastic64
 */


bool Buf_Create(long *param_1,long param_2,code **param_3)

{
  long lVar1;
  
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar1 = (**param_3)(param_3);
    *param_1 = lVar1;
    if (lVar1 != 0) {
      param_1[1] = param_2;
    }
    return lVar1 != 0;
  }
  *param_1 = 0;
  return true;
}


