/*
 * Ghidra decompilation
 *
 * Function : LzmaDecode
 * Address  : 080cf0c8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

SRes LzmaDecode(Byte *dest,SizeT *destLen,Byte *src,SizeT *srcLen,Byte *propData,uint propSize,
               ELzmaFinishMode finishMode,ELzmaStatus *status,ISzAlloc *alloc)

{
  int iVar1;
  SRes SVar2;
  SRes res;
  Byte d;
  uint uVar3;
  UInt32 UVar4;
  uint uVar5;
  uint uVar6;
  _func_void_void_ptr_void_ptr *p_Var7;
  uint uVar8;
  SizeT inSize;
  SizeT dicLimit;
  SizeT outSize;
  CLzmaDec p;
  
  iVar1 = __stack_chk_guard;
  uVar8 = *srcLen;
  dicLimit = *destLen;
  *destLen = 0;
  *srcLen = 0;
  if (uVar8 < 5) {
    SVar2 = 6;
  }
  else {
    p.probs = (UInt16 *)0x0;
    p.dic = (Byte *)0x0;
    if (4 < propSize) {
      uVar5 = *(uint *)(propData + 1);
      uVar3 = (uint)*propData;
      if (uVar5 < 0x1000) {
        uVar5 = 0x1000;
      }
      if (uVar3 < 0xe1) {
        uVar6 = (uVar3 / 9) % 5;
        UVar4 = (0x300 << uVar3 % 9 + uVar6) + 0x736;
        (*alloc->Free)(alloc,(void *)0x0);
        p.probs = (UInt16 *)0x0;
        p.probs = (UInt16 *)(*alloc->Alloc)(alloc,UVar4 * 2);
        p.numProbs = UVar4;
        if (p.probs == (UInt16 *)0x0) {
          SVar2 = 2;
        }
        else {
          p.dicPos = 0;
          p.prop.lp = uVar6;
          p.prop.lc = uVar3 % 9;
          p.prop.dicSize = uVar5;
          p.prop.pb = (uint)((ulonglong)uVar3 * 0x16c16c16d >> 0x21) * 0x80000 >> 0x18;
          *srcLen = uVar8;
          p.processedPos = 0;
          p.checkDicSize = 0;
          p.remainLen = 0;
          p.needFlush = 1;
          p.needInitState = 1;
          p.tempBufSize = 0;
          p.dic = dest;
          p.dicBufSize = dicLimit;
          SVar2 = LzmaDec_DecodeToDic(&p,dicLimit,src,srcLen,finishMode,status);
          if ((SVar2 == 0) && (*status == LZMA_STATUS_NEEDS_MORE_INPUT)) {
            SVar2 = 6;
          }
          p_Var7 = alloc->Free;
          *destLen = p.dicPos;
          (*p_Var7)(alloc,p.probs);
        }
        goto LAB_080cf124;
      }
    }
    SVar2 = 4;
  }
LAB_080cf124:
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return SVar2;
}


