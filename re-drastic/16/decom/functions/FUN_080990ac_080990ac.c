/*
 * Ghidra decompilation
 *
 * Function : FUN_080990ac
 * Address  : 080990ac
 * Program  : drastic16
 */


int FUN_080990ac(FILE **param_1,void *param_2,size_t *param_3)

{
  size_t sVar1;
  int iVar2;
  size_t __n;
  
  __n = *param_3;
  if (__n != 0) {
    sVar1 = fread(param_2,1,__n,*param_1);
    *param_3 = sVar1;
    if (__n != sVar1) {
      iVar2 = ferror(*param_1);
      return iVar2;
    }
  }
  return 0;
}


