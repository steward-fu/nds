/*
 * Ghidra decompilation
 *
 * Function : SzFolder_GetUnpackSize
 * Address  : 080ca04c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

UInt64 SzFolder_GetUnpackSize(CSzFolder *p)

{
  UInt32 *pUVar1;
  CSzBindPair *pCVar2;
  CSzCoderInfo *pCVar3;
  UInt32 UVar4;
  CSzCoderInfo *pCVar5;
  CSzBindPair *pCVar6;
  int iVar7;
  int i;
  UInt32 UVar8;
  bool bVar9;
  
  if (p->NumCoders != 0) {
    pCVar5 = p->Coders;
    iVar7 = 0;
    pCVar3 = pCVar5 + p->NumCoders;
    do {
      pUVar1 = &pCVar5->NumOutStreams;
      pCVar5 = pCVar5 + 1;
      iVar7 = iVar7 + *pUVar1;
    } while (pCVar3 != pCVar5);
    if ((iVar7 != 0) && (UVar8 = iVar7 - 1, -1 < (int)UVar8)) {
      while (p->NumBindPairs != 0) {
        if (UVar8 != p->BindPairs->OutIndex) {
          UVar4 = 0;
          pCVar6 = p->BindPairs;
          do {
            UVar4 = UVar4 + 1;
            if (UVar4 == p->NumBindPairs) goto LAB_080ca0d0;
            pCVar2 = pCVar6 + 1;
            pCVar6 = pCVar6 + 1;
          } while (UVar8 != pCVar2->OutIndex);
          if ((int)UVar4 < 0) break;
        }
        bVar9 = UVar8 == 0;
        UVar8 = UVar8 - 1;
        if (bVar9) {
          return 0;
        }
      }
LAB_080ca0d0:
      return p->UnpackSizes[UVar8];
    }
  }
  return 0;
}


