/*
 * Ghidra decompilation
 *
 * Function : _Z14GetNumberOfCPUv
 * Address  : 001e7650
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GetNumberOfCPU() */

int GetNumberOfCPU(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = sysconf(0x54);
  iVar1 = (int)lVar2;
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  return iVar1;
}


