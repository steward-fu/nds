/*
 * Ghidra decompilation
 *
 * Function : _Z6GetRndPhm
 * Address  : 001c1910
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetRnd(unsigned char*, unsigned long) */

void GetRnd(uchar *param_1,ulong param_2)

{
  FILE *__stream;
  size_t sVar1;
  long lVar2;
  clock_t cVar3;
  int iVar4;
  ulong uVar5;
  RarTime aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
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
    uVar5 = 0;
    do {
      iVar4 = (int)uVar5;
      param_1[uVar5] =
           ((byte)uVar5 ^ (byte)((ulong)(cVar3 + lVar2) >> ((uVar5 & 7) << 3))) +
           (byte)uVar5 + (char)GetRnd(unsigned_char*,unsigned_long)::Count;
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
    GetRnd(unsigned_char*,unsigned_long)::Count =
         GetRnd(unsigned_char*,unsigned_long)::Count + 1 + iVar4;
  }
LAB_001c1a04:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


