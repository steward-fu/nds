/*
 * Ghidra decompilation
 *
 * Function : FUN_08060484
 * Address  : 08060484
 * Program  : drastic16
 */


__time_t FUN_08060484(int param_1,undefined4 param_2)

{
  int iVar1;
  stat sStack_4e0;
  char acStack_488 [1160];
  
  sprintf(acStack_488,"%s%csavestates%c%s_%d.dss",param_1 + 0x82030,0x2f,0x2f,param_1 + 0x82830,
          param_2);
  iVar1 = __xstat(3,acStack_488,&sStack_4e0);
  if (iVar1 != 0) {
    sStack_4e0.st_mtim.tv_sec = 0;
  }
  return sStack_4e0.st_mtim.tv_sec;
}


