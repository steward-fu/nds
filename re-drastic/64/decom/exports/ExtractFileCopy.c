/*
 * Ghidra decompilation
 *
 * Function : ExtractFileCopy
 * Address  : 001c9ab0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CmdExtract::ExtractFileCopy(CommandData*, File&, wchar_t*, wchar_t*, wchar_t*, unsigned long) */

uint __thiscall
CmdExtract::ExtractFileCopy
          (CmdExtract *this,CommandData *param_1,File *param_2,wchar_t *param_3,wchar_t *param_4,
          wchar_t *param_5,ulong param_6)

{
  uint uVar1;
  int iVar2;
  void *__ptr;
  File aFStack_2030 [8232];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DosSlashToUnix(param_5,param_5,param_6);
  File::File(aFStack_2030);
                    /* try { // try from 001c9b1c to 001c9b1f has its CatchHandler @ 001c9bf4 */
  uVar1 = File::Open(aFStack_2030,param_5,0);
  if ((uVar1 & 0xff) == 0) {
                    /* try { // try from 001c9bcc to 001c9bef has its CatchHandler @ 001c9bf4 */
    ErrorHandler::OpenErrorMsg(&ErrHandler,param_3);
    *(undefined4 *)(param_1 + 0x125c0) = 0x17;
  }
  else {
    __ptr = malloc(0x100000);
    if (__ptr == (void *)0x0) {
      ErrorHandler::MemoryError();
    }
    while( true ) {
                    /* try { // try from 001c9b40 to 001c9b67 has its CatchHandler @ 001c9c08 */
      Wait();
      iVar2 = File::Read(aFStack_2030,__ptr,0x100000);
      if (iVar2 == 0) break;
      File::Write(param_2,__ptr,(long)iVar2);
    }
    if (__ptr != (void *)0x0) {
      free(__ptr);
    }
  }
  File::~File(aFStack_2030);
  if (local_8 - ___stack_chk_guard == 0) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


