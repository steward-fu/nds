/*
 * Ghidra decompilation
 *
 * Function : FUN_001df9ac
 * Address  : 001df9ac
 * Program  : drastic64
 */


void FUN_001df9ac(ComprDataIO **param_1,uchar *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((long)param_1[0x9b6] < (long)param_1[0x9b4]) {
    uVar2 = (long)param_1[0x9b4] - (long)param_1[0x9b6];
    uVar1 = param_3;
    if ((long)uVar2 < (long)param_3) {
      uVar1 = uVar2;
    }
    ComprDataIO::UnpWrite(*param_1,param_2,uVar1);
    param_1[0x9b6] = param_1[0x9b6] + param_3;
  }
  return;
}


