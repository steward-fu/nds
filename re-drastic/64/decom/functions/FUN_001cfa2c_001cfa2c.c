/*
 * Ghidra decompilation
 *
 * Function : FUN_001cfa2c
 * Address  : 001cfa2c
 * Program  : drastic64
 */


void FUN_001cfa2c(ComprDataIO **param_1)

{
  ComprDataIO *pCVar1;
  ComprDataIO *pCVar2;
  
  pCVar2 = param_1[0x18];
  pCVar1 = param_1[0x19];
  if ((pCVar2 != pCVar1) && (*(undefined *)((long)param_1 + 0x4daa) = 1, pCVar2 < pCVar1)) {
    ComprDataIO::UnpWrite
              (*param_1,(uchar *)(param_1[0x972] + (long)pCVar1),
               (long)-(int)pCVar1 & (ulong)param_1[0x1d30]);
    ComprDataIO::UnpWrite(*param_1,(uchar *)param_1[0x972],(ulong)param_1[0x18]);
    *(undefined *)((long)param_1 + 0x4da9) = 1;
    param_1[0x19] = param_1[0x18];
    return;
  }
  ComprDataIO::UnpWrite
            (*param_1,(uchar *)(param_1[0x972] + (long)pCVar1),(long)pCVar2 - (long)pCVar1);
  param_1[0x19] = param_1[0x18];
  return;
}


