/*
 * Ghidra decompilation
 *
 * Function : SzAr_Free
 * Address  : 080ca154
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void SzAr_Free(CSzAr *p,ISzAlloc *alloc)

{
  CSzFolder *pCVar1;
  int iVar2;
  uint uVar3;
  
  pCVar1 = p->Folders;
  if ((pCVar1 != (CSzFolder *)0x0) && (p->NumFolders != 0)) {
    iVar2 = 0;
    uVar3 = 0;
    while( true ) {
      SzFolder_Free((CSzFolder *)((int)&pCVar1->Coders + iVar2),alloc);
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x28;
      if (p->NumFolders <= uVar3) break;
      pCVar1 = p->Folders;
    }
  }
  (*alloc->Free)(alloc,p->PackSizes);
  (*alloc->Free)(alloc,p->PackCRCsDefined);
  (*alloc->Free)(alloc,p->PackCRCs);
  (*alloc->Free)(alloc,p->Folders);
  (*alloc->Free)(alloc,p->Files);
  p->PackSizes = (UInt64 *)0x0;
  p->PackCRCsDefined = (Byte *)0x0;
  p->PackCRCs = (UInt32 *)0x0;
  p->Folders = (CSzFolder *)0x0;
  p->Files = (CSzFileItem *)0x0;
  p->NumPackStreams = 0;
  p->NumFolders = 0;
  p->NumFiles = 0;
  return;
}


