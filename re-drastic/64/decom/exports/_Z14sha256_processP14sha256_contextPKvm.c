/*
 * Ghidra decompilation
 *
 * Function : _Z14sha256_processP14sha256_contextPKvm
 * Address  : 001c8690
 * Program  : drastic64
 */


/* sha256_process(sha256_context*, void const*, unsigned long) */

void sha256_process(sha256_context *param_1,void *param_2,ulong param_3)

{
  size_t __n;
  sha256_context *psVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  psVar1 = (sha256_context *)(uVar2 + param_3);
  *(sha256_context **)(param_1 + 0x20) = psVar1;
  if (param_3 != 0) {
    uVar2 = uVar2 & 0x3f;
    do {
      while( true ) {
        __n = 0x40 - uVar2;
        if (param_3 < 0x40 - uVar2) {
          __n = param_3;
        }
        if (__n == 0x40) {
          *(void **)(param_1 + 0x28) = param_2;
        }
        else {
          *(sha256_context **)(param_1 + 0x28) = param_1 + 0x30;
          psVar1 = (sha256_context *)memcpy(param_1 + 0x30 + uVar2,param_2,__n);
        }
        uVar2 = uVar2 + __n;
        param_2 = (void *)((long)param_2 + __n);
        param_3 = param_3 - __n;
        if (uVar2 == 0x40) break;
        if (param_3 == 0) goto LAB_001c8708;
      }
      uVar2 = 0;
      psVar1 = (sha256_context *)sha256_transform(param_1);
    } while (param_3 != 0);
  }
LAB_001c8708:
  sha256_transform(psVar1);
  return;
}


