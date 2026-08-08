/*
 * Ghidra decompilation
 *
 * Function : RawSeek
 * Address  : 001b82b0
 * Program  : drastic64
 */


/* File::RawSeek(long long, int) */

bool __thiscall File::RawSeek(File *this,longlong param_1,int param_2)

{
  int iVar1;
  __off64_t _Var2;
  long lVar3;
  FILE *__stream;
  
  __stream = *(FILE **)(this + 8);
  if (__stream == (FILE *)0x0) {
    return true;
  }
  if (param_1 < 0 && param_2 != 0) {
    if (param_2 == 1) {
      if (*(code **)(*(long *)this + 0x20) == Tell) {
        _Var2 = ftello64(__stream);
        __stream = *(FILE **)(this + 8);
        param_1 = param_1 + _Var2;
        param_2 = 0;
        goto LAB_001b830c;
      }
      lVar3 = (**(code **)(*(long *)this + 0x20))();
    }
    else {
      lVar3 = FileLength(this);
    }
    param_1 = param_1 + lVar3;
    param_2 = 0;
    __stream = *(FILE **)(this + 8);
  }
LAB_001b830c:
  this[0x10] = (File)0x0;
  iVar1 = fseeko64(__stream,param_1,param_2);
  return iVar1 == 0;
}


