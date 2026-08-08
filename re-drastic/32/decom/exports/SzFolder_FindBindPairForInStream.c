/*
 * Ghidra decompilation
 *
 * Function : SzFolder_FindBindPairForInStream
 * Address  : 080c9fb8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int SzFolder_FindBindPairForInStream(CSzFolder *p,UInt32 inStreamIndex)

{
  UInt32 UVar1;
  UInt32 UVar2;
  
  if (p->NumBindPairs == 0) {
LAB_080c9ff4:
    UVar1 = 0xffffffff;
  }
  else {
    UVar1 = 0;
    UVar2 = p->BindPairs->InIndex;
    while (inStreamIndex != UVar2) {
      UVar1 = UVar1 + 1;
      if (UVar1 == p->NumBindPairs) goto LAB_080c9ff4;
      UVar2 = p->BindPairs[UVar1].InIndex;
    }
  }
  return UVar1;
}


