/*
 * Ghidra decompilation
 *
 * Function : LzmaDec_Allocate
 * Address  : 080cef2c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

SRes LzmaDec_Allocate(CLzmaDec *p,Byte *props,uint propsSize,ISzAlloc *alloc)

{
  SRes SVar1;
  UInt16 *pUVar2;
  Byte *pBVar3;
  Byte d;
  uint uVar4;
  size_t sVar5;
  SizeT dicBufSize;
  uint uVar6;
  UInt32 UVar7;
  UInt32 numProbs;
  
  if (propsSize < 5) {
    return 4;
  }
  sVar5 = *(size_t *)(props + 1);
  uVar4 = (uint)*props;
  if (sVar5 < 0x1000) {
    sVar5 = 0x1000;
  }
  if (uVar4 < 0xe1) {
    uVar6 = (uVar4 / 9) % 5;
    UVar7 = (0x300 << uVar4 % 9 + uVar6) + 0x736;
    if ((p->probs == (UInt16 *)0x0) || (UVar7 != p->numProbs)) {
      (*alloc->Free)(alloc,p->probs);
      p->probs = (UInt16 *)0x0;
      pUVar2 = (UInt16 *)(*alloc->Alloc)(alloc,UVar7 * 2);
      p->probs = pUVar2;
      p->numProbs = UVar7;
      if (pUVar2 == (UInt16 *)0x0) {
        return 2;
      }
    }
    if ((p->dic == (Byte *)0x0) || (p->dicBufSize != sVar5)) {
      (*alloc->Free)(alloc,p->dic);
      p->dic = (Byte *)0x0;
      pBVar3 = (Byte *)(*alloc->Alloc)(alloc,sVar5);
      p->dic = pBVar3;
      if (pBVar3 == (Byte *)0x0) {
        (*alloc->Free)(alloc,p->probs);
        p->probs = (UInt16 *)0x0;
        return 2;
      }
    }
    SVar1 = 0;
    (p->prop).lc = uVar4 % 9;
    (p->prop).lp = uVar6;
    (p->prop).dicSize = sVar5;
    p->dicBufSize = sVar5;
    (p->prop).pb = ((uint)((ulonglong)uVar4 * 0x16c16c16d >> 0x21) << 0x13) >> 0x18;
  }
  else {
    SVar1 = 4;
  }
  return SVar1;
}


