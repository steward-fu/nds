/*
 * Ghidra decompilation
 *
 * Function : load_logo
 * Address  : 0017fad0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void load_logo(long *param_1)

{
  time_t tVar1;
  FILE *__stream;
  void *__ptr;
  size_t sVar2;
  long lVar3;
  char acStack_428 [1056];
  long local_8;
  
  lVar3 = *param_1;
  local_8 = ___stack_chk_guard;
  tVar1 = time((time_t *)0x0);
  __sprintf_chk(acStack_428,1,0x420,"%s%cdrastic_logo_%d.raw",lVar3 + 0x8a780,0x2f,(uint)tVar1 & 1);
  __stream = fopen(acStack_428,"rb");
  if (__stream == (FILE *)0x0) {
    param_1[7] = 0;
  }
  else {
    __ptr = malloc(120000);
    param_1[7] = (long)__ptr;
    sVar2 = fread(__ptr,120000,1,__stream);
    if (sVar2 != 1) {
      free((void *)param_1[7]);
      param_1[7] = 0;
    }
    fclose(__stream);
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


