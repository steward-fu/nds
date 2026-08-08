/*
 * Ghidra decompilation
 *
 * Function : GetNumberOfThreads
 * Address  : 081030dc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

uint GetNumberOfThreads(void)

{
  uint uVar1;
  uint Count;
  
  uVar1 = sysconf(0x54);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  else if (0x1f < uVar1) {
    uVar1 = 0x20;
  }
  return uVar1;
}


