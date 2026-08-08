/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack13UnpWriteBuf20Ev
 * Address  : 001cfa30
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Unpack::UnpWriteBuf20() */

void Unpack::UnpWriteBuf20(void)

{
  ComprDataIO **in_x0;
  ComprDataIO *pCVar1;
  ComprDataIO *pCVar2;
  
  pCVar2 = in_x0[0x18];
  pCVar1 = in_x0[0x19];
  if ((pCVar2 != pCVar1) && (*(undefined *)((long)in_x0 + 0x4daa) = 1, pCVar2 < pCVar1)) {
    ComprDataIO::UnpWrite
              (*in_x0,(uchar *)(in_x0[0x972] + (long)pCVar1),
               (long)-(int)pCVar1 & (ulong)in_x0[0x1d30]);
    ComprDataIO::UnpWrite(*in_x0,(uchar *)in_x0[0x972],(ulong)in_x0[0x18]);
    *(undefined *)((long)in_x0 + 0x4da9) = 1;
    in_x0[0x19] = in_x0[0x18];
    return;
  }
  ComprDataIO::UnpWrite(*in_x0,(uchar *)(in_x0[0x972] + (long)pCVar1),(long)pCVar2 - (long)pCVar1);
  in_x0[0x19] = in_x0[0x18];
  return;
}


