/*
 * Ghidra decompilation
 *
 * Function : FUN_001ba01c
 * Address  : 001ba01c
 * Program  : drastic64
 */


void FUN_001ba01c(long *param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = param_1[0x2240];
  if (*(code **)(*param_1 + 0x18) != Archive::Seek) {
                    /* WARNING: Could not recover jumptable at 0x001ba0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1,lVar2,0);
    return;
  }
  cVar1 = QuickOpen::Seek((QuickOpen *)(param_1 + 0xec6),lVar2,0);
  if (cVar1 != '\0') {
    return;
  }
  File::Seek((File *)param_1,lVar2,0);
  return;
}


