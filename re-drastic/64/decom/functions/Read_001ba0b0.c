/*
 * Ghidra decompilation
 *
 * Function : Read
 * Address  : 001ba0b0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Archive::Read(void*, unsigned long) */

void __thiscall Archive::Read(Archive *this,void *param_1,ulong param_2)

{
  char cVar1;
  ulong uVar2;
  uint local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = QuickOpen::Read((QuickOpen *)(this + 0x7630),param_1,param_2,(ulong *)&local_10);
  if (cVar1 == '\0') {
    uVar2 = File::Read((File *)this,param_1,param_2);
  }
  else {
    uVar2 = (ulong)local_10;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2,local_8 - ___stack_chk_guard,0);
}


