/*
 * Ghidra decompilation
 *
 * Function : Lzma2Decode
 * Address  : 080d0028
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

SRes Lzma2Decode(Byte *dest,SizeT *destLen,Byte *src,SizeT *srcLen,Byte prop,
                ELzmaFinishMode finishMode,ELzmaStatus *status,ISzAlloc *alloc)

{
  int iVar1;
  int iVar2;
  SRes SVar3;
  int __result__;
  SRes res;
  SizeT dicLimit;
  SizeT outSize;
  SizeT inSize;
  SizeT SVar4;
  UInt32 dicSize;
  uint uVar5;
  CLzma2Dec decoder;
  Byte props [5];
  
  iVar2 = __stack_chk_guard;
  dicLimit = *destLen;
  SVar4 = *srcLen;
  uVar5 = (uint)prop;
  *srcLen = 0;
  *destLen = 0;
  decoder.decoder.probs = (UInt16 *)0x0;
  *status = LZMA_STATUS_NOT_SPECIFIED;
  decoder.decoder.dic = dest;
  decoder.decoder.dicBufSize = dicLimit;
  if (uVar5 < 0x29) {
    if (uVar5 == 0x28) {
      props[1] = 0xff;
      props[2] = props[1];
      props[3] = props[1];
      props[4] = props[1];
    }
    else {
      iVar1 = (uVar5 & 1 | 2) << (prop >> 1) + 0xb;
      props[1] = (Byte)iVar1;
      props[2] = (Byte)((uint)iVar1 >> 8);
      props[3] = (Byte)((uint)iVar1 >> 0x10);
      props[4] = (Byte)((uint)iVar1 >> 0x18);
    }
    props[0] = '\x04';
    SVar3 = LzmaDec_AllocateProbs(&decoder.decoder,props,5,alloc);
    if (SVar3 == 0) {
      *srcLen = SVar4;
      SVar3 = Lzma2Dec_DecodeToDic(&decoder,dicLimit,src,srcLen,finishMode,status);
      *destLen = decoder.decoder.dicPos;
      if ((SVar3 == 0) && (*status == LZMA_STATUS_NEEDS_MORE_INPUT)) {
        SVar3 = 6;
      }
      LzmaDec_FreeProbs(&decoder.decoder,alloc);
    }
  }
  else {
    SVar3 = 4;
  }
  if (iVar2 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return SVar3;
}


