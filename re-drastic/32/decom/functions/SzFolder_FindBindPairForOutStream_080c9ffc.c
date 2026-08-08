/*
 * Ghidra decompilation
 *
 * Function : SzFolder_FindBindPairForOutStream
 * Address  : 080c9ffc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int SzFolder_FindBindPairForOutStream(CSzFolder *p,UInt32 outStreamIndex)

{
  CSzBindPair *pCVar1;
  UInt32 UVar2;
  CSzBindPair *pCVar3;
  
  if (p->NumBindPairs == 0) {
LAB_080ca03c:
    UVar2 = 0xffffffff;
  }
  else if (outStreamIndex == p->BindPairs->OutIndex) {
    UVar2 = 0;
  }
  else {
    UVar2 = 0;
    pCVar3 = p->BindPairs;
    do {
      UVar2 = UVar2 + 1;
      if (UVar2 == p->NumBindPairs) goto LAB_080ca03c;
      pCVar1 = pCVar3 + 1;
      pCVar3 = pCVar3 + 1;
    } while (pCVar1->OutIndex != outStreamIndex);
  }
  return UVar2;
}


