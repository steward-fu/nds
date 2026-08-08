/*
 * Ghidra decompilation
 *
 * Function : SeqInStream_Read
 * Address  : 080cc1f0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

SRes SeqInStream_Read(ISeqInStream *stream,void *buf,size_t size)

{
  int __result__;
  SRes SVar1;
  void *unaff_r5;
  ISeqInStream *unaff_r6;
  bool bVar2;
  size_t processed;
  int local_1c;
  
  bVar2 = size != 0;
  if (bVar2) {
    unaff_r6 = stream;
  }
  if (bVar2) {
    unaff_r5 = buf;
  }
  local_1c = __stack_chk_guard;
  if (bVar2) {
    do {
      processed = size;
      SVar1 = (*unaff_r6->Read)(unaff_r6,unaff_r5,&processed);
      if (SVar1 != 0) goto LAB_080cc25c;
      if (processed == 0) {
        SVar1 = 6;
        goto LAB_080cc25c;
      }
      size = size - processed;
      unaff_r5 = (void *)((int)unaff_r5 + processed);
    } while (size != 0);
  }
  SVar1 = 0;
LAB_080cc25c:
  if (local_1c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return SVar1;
}


