/*
 * Ghidra decompilation
 *
 * Function : SzFolder_Free
 * Address  : 080c9e94
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void SzFolder_Free(CSzFolder *p,ISzAlloc *alloc)

{
  CSzCoderInfo *pCVar1;
  CBuf *p_00;
  int iVar2;
  uint uVar3;
  
  pCVar1 = p->Coders;
  if ((pCVar1 != (CSzCoderInfo *)0x0) && (p->NumCoders != 0)) {
    iVar2 = 0;
    uVar3 = 0;
    do {
      p_00 = (CBuf *)((int)&(pCVar1->Props).data + iVar2);
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x18;
      Buf_Free(p_00,alloc);
      Buf_Init(p_00);
      pCVar1 = p->Coders;
    } while (uVar3 < p->NumCoders);
  }
  (*alloc->Free)(alloc,pCVar1);
  (*alloc->Free)(alloc,p->BindPairs);
  (*alloc->Free)(alloc,p->PackStreams);
  (*alloc->Free)(alloc,p->UnpackSizes);
  p->Coders = (CSzCoderInfo *)0x0;
  p->BindPairs = (CSzBindPair *)0x0;
  p->PackStreams = (UInt32 *)0x0;
  p->UnpackSizes = (UInt64 *)0x0;
  p->NumCoders = 0;
  p->NumBindPairs = 0;
  p->NumPackStreams = 0;
  p->UnpackCRCDefined = 0;
  p->UnpackCRC = 0;
  p->NumUnpackStreams = 0;
  return;
}


