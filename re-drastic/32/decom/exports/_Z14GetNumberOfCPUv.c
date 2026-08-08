/*
 * Ghidra decompilation
 *
 * Function : _Z14GetNumberOfCPUv
 * Address  : 081030b8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

uint GetNumberOfCPU(void)

{
  uint uVar1;
  uint Count;
  
  uVar1 = sysconf(0x54);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}


