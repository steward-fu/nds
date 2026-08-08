/*
 * Ghidra decompilation
 *
 * Function : LzmaDec_AllocateProbs
 * Address  : 080cedf4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

SRes LzmaDec_AllocateProbs(CLzmaDec *p,Byte *props,uint propsSize,ISzAlloc *alloc)

{
  undefined8 uVar1;
  undefined8 uVar2;
  SRes SVar3;
  UInt16 *pUVar4;
  Byte d;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  UInt32 UVar8;
  UInt32 numProbs;
  
  if (propsSize < 5) {
    return 4;
  }
  uVar6 = *(uint *)(props + 1);
  uVar5 = (uint)*props;
  if (uVar6 < 0x1000) {
    uVar6 = 0x1000;
  }
  if (uVar5 < 0xe1) {
    uVar7 = (uVar5 / 9) % 5;
    UVar8 = (0x300 << uVar5 % 9 + uVar7) + 0x736;
    if ((p->probs == (UInt16 *)0x0) || (UVar8 != p->numProbs)) {
      (*alloc->Free)(alloc,p->probs);
      p->probs = (UInt16 *)0x0;
      pUVar4 = (UInt16 *)(*alloc->Alloc)(alloc,UVar8 * 2);
      p->probs = pUVar4;
      p->numProbs = UVar8;
      if (pUVar4 == (UInt16 *)0x0) {
        return 2;
      }
    }
    SVar3 = 0;
    uVar1 = CONCAT44(uVar7,uVar5 % 9);
    uVar2 = CONCAT44(uVar6,((uint)((ulonglong)uVar5 * 0x16c16c16d >> 0x21) << 0x13) >> 0x18);
    (p->prop).lc = (int)uVar1;
    (p->prop).lp = (int)((ulonglong)uVar1 >> 0x20);
    (p->prop).pb = (int)uVar2;
    (p->prop).dicSize = (int)((ulonglong)uVar2 >> 0x20);
  }
  else {
    SVar3 = 4;
  }
  return SVar3;
}


