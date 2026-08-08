/*
 * Ghidra decompilation
 *
 * Function : _Z18GetNumberOfThreadsv
 * Address  : 001e7670
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GetNumberOfThreads() */

uint GetNumberOfThreads(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = sysconf(0x54);
  uVar2 = (uint)lVar3;
  uVar1 = uVar2;
  if (uVar2 == 0) {
    uVar1 = 1;
  }
  if (0x20 < uVar2) {
    uVar1 = 0x20;
  }
  return uVar1;
}


