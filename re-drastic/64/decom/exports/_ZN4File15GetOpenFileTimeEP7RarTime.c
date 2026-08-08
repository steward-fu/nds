/*
 * Ghidra decompilation
 *
 * Function : _ZN4File15GetOpenFileTimeEP7RarTime
 * Address  : 001b8000
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* File::GetOpenFileTime(RarTime*) */

void __thiscall File::GetOpenFileTime(File *this,RarTime *param_1)

{
  int __fildes;
  long local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __fildes = fileno(*(FILE **)(this + 8));
  __fxstat64(0,__fildes,(stat64 *)&stack0xffffffffffffff78);
  RarTime::operator=(param_1,local_30);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


