/*
 * Ghidra decompilation
 *
 * Function : FUN_001ebfac
 * Address  : 001ebfac
 * Program  : drastic64
 */


void FUN_001ebfac(long param_1)

{
  long lVar1;
  FindFile *this;
  
  if (-1 < *(int *)(param_1 + 0x2000)) {
    lVar1 = (long)*(int *)(param_1 + 0x2000);
    do {
      this = *(FindFile **)(param_1 + lVar1 * 8);
      lVar1 = lVar1 + -1;
      if (this != (FindFile *)0x0) {
        FindFile::~FindFile(this);
        operator_delete(this,0x2010);
      }
    } while (-1 < (int)lVar1);
  }
  return;
}


