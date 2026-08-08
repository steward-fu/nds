/*
 * Ghidra decompilation
 *
 * Function : FUN_0807b7f0
 * Address  : 0807b7f0
 * Program  : drastic16
 */


void FUN_0807b7f0(int *param_1)

{
  uint uVar1;
  timeval local_10;
  
  gettimeofday(&local_10,(__timezone_ptr_t)0x0);
  uVar1 = local_10.tv_sec * 1000000;
  *param_1 = local_10.tv_usec + uVar1;
  param_1[1] = (local_10.tv_usec >> 0x1f) + ((int)uVar1 >> 0x1f) +
               (uint)CARRY4(local_10.tv_usec,uVar1);
  return;
}


