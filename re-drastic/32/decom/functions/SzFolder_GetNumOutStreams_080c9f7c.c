/*
 * Ghidra decompilation
 *
 * Function : SzFolder_GetNumOutStreams
 * Address  : 080c9f7c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

UInt32 SzFolder_GetNumOutStreams(CSzFolder *p)

{
  UInt32 *pUVar1;
  UInt32 UVar2;
  CSzCoderInfo *pCVar3;
  CSzCoderInfo *pCVar4;
  
  if (p->NumCoders == 0) {
    UVar2 = 0;
  }
  else {
    pCVar4 = p->Coders;
    UVar2 = 0;
    pCVar3 = pCVar4 + p->NumCoders;
    do {
      pUVar1 = &pCVar4->NumOutStreams;
      pCVar4 = pCVar4 + 1;
      UVar2 = UVar2 + *pUVar1;
    } while (pCVar3 != pCVar4);
  }
  return UVar2;
}


