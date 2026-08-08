/*
 * Ghidra decompilation
 *
 * Function : LookInStream_SeekTo
 * Address  : 080cc300
 * Program  : drastic
 */


SRes LookInStream_SeekTo(ILookInStream *stream,UInt64 offset)

{
  SRes SVar1;
  Int64 t;
  int local_14;
  
  local_14 = __stack_chk_guard;
  SVar1 = (*stream->Seek)(stream,&t,SZ_SEEK_SET);
  if (local_14 == __stack_chk_guard) {
    return SVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


