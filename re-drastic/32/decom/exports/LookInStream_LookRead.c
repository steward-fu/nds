/*
 * Ghidra decompilation
 *
 * Function : LookInStream_LookRead
 * Address  : 080cc354
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

SRes LookInStream_LookRead(ILookInStream *stream,void *buf,size_t *size)

{
  ILookInStream *pIVar1;
  int __result__;
  void *lookBuf;
  int local_1c;
  
  if (*size == 0) {
    stream = (ILookInStream *)0x0;
  }
  local_1c = __stack_chk_guard;
  pIVar1 = stream;
  if ((*size != 0) &&
     (pIVar1 = (ILookInStream *)(*stream->Look)(stream,&lookBuf,size),
     pIVar1 == (ILookInStream *)0x0)) {
    memcpy(buf,lookBuf,*size);
    pIVar1 = (ILookInStream *)(*stream->Skip)(stream,*size);
  }
  if (local_1c == __stack_chk_guard) {
    return (SRes)pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


