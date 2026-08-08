/*
 * Ghidra decompilation
 *
 * Function : SeqInStream_ReadByte
 * Address  : 080cc294
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

SRes SeqInStream_ReadByte(ISeqInStream *stream,Byte *buf)

{
  SRes SVar1;
  int __result__;
  size_t processed;
  int local_c;
  
  processed = 1;
  local_c = __stack_chk_guard;
  SVar1 = (*stream->Read)(stream,buf,&processed);
  if (SVar1 == 0) {
    if (processed == 1) {
      SVar1 = 0;
    }
    else {
      SVar1 = 6;
    }
  }
  if (local_c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return SVar1;
}


