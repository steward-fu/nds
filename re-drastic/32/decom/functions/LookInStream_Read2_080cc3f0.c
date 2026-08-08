/*
 * Ghidra decompilation
 *
 * Function : LookInStream_Read2
 * Address  : 080cc3f0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

SRes LookInStream_Read2(ILookInStream *stream,void *buf,size_t size,SRes errorType)

{
  int __result__;
  SRes SVar1;
  void *unaff_r5;
  ILookInStream *unaff_r6;
  SRes unaff_r8;
  bool bVar2;
  size_t processed;
  int local_1c;
  
  bVar2 = size != 0;
  if (bVar2) {
    unaff_r5 = buf;
    unaff_r6 = stream;
  }
  if (bVar2) {
    unaff_r8 = errorType;
  }
  local_1c = __stack_chk_guard;
  if (bVar2) {
    do {
      processed = size;
      SVar1 = (*unaff_r6->Read)(unaff_r6,unaff_r5,&processed);
      if ((SVar1 != 0) || (SVar1 = unaff_r8, processed == 0)) goto LAB_080cc464;
      size = size - processed;
      unaff_r5 = (void *)((int)unaff_r5 + processed);
    } while (size != 0);
  }
  SVar1 = 0;
LAB_080cc464:
  if (local_1c == __stack_chk_guard) {
    return SVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


