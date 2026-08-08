/*
 * Ghidra decompilation
 *
 * Function : FUN_001c190c
 * Address  : 001c190c
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c190c(void *param_1,size_t param_2)

{
  FILE *__stream;
  size_t sVar1;
  long lVar2;
  clock_t cVar3;
  int iVar4;
  RarTime aRStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  __stream = fopen64("/dev/urandom","r");
  if (__stream != (FILE *)0x0) {
    sVar1 = fread(param_1,param_2,1,__stream);
    fclose(__stream);
    if (param_2 == sVar1) goto LAB_001c1a04;
  }
  RarTime::RarTime(aRStack_10);
  RarTime::SetCurrentTime();
  lVar2 = RarTime::GetRaw();
  cVar3 = clock();
  if (param_2 != 0) {
    sVar1 = 0;
    do {
      iVar4 = (int)sVar1;
      *(byte *)((long)param_1 + sVar1) =
           ((byte)sVar1 ^ (byte)((ulong)(cVar3 + lVar2) >> ((sVar1 & 7) << 3))) +
           (byte)sVar1 + (char)GetRnd(unsigned_char*,unsigned_long)::Count;
      sVar1 = sVar1 + 1;
    } while (param_2 != sVar1);
    GetRnd(unsigned_char*,unsigned_long)::Count =
         GetRnd(unsigned_char*,unsigned_long)::Count + 1 + iVar4;
  }
LAB_001c1a04:
  if (lStack_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lStack_8 - ___stack_chk_guard,0);
}


