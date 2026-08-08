/*
 * Ghidra decompilation
 *
 * Function : SzReadHashDigests
 * Address  : 08005040
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

SRes SzReadHashDigests(CSzData *sd,size_t numItems,Byte **digestsDefined,UInt32 **digests,
                      ISzAlloc *alloc)

{
  uint uVar1;
  SRes SVar2;
  int __result__;
  UInt32 *pUVar3;
  size_t i;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  Byte *b;
  
  SVar2 = SzReadBoolVector2(sd,numItems,digestsDefined,alloc);
  if (SVar2 != 0) {
    return SVar2;
  }
  if (numItems != 0) {
    pUVar3 = (UInt32 *)(*alloc->Alloc)(alloc,numItems << 2);
    *digests = pUVar3;
    if (pUVar3 == (UInt32 *)0x0) {
      return 2;
    }
    i = 0;
    do {
      if ((*digestsDefined)[i] != '\0') {
        uVar6 = 0;
        puVar4 = *digests + i;
        (*digests)[i] = 0;
        do {
          if (sd->Size == 0) {
            return 0x10;
          }
          pbVar7 = sd->Data;
          sd->Size = sd->Size - 1;
          uVar5 = *puVar4;
          sd->Data = pbVar7 + 1;
          b = (Byte *)(uint)*pbVar7;
          uVar1 = uVar6 & 0xff;
          uVar6 = uVar6 + 8;
          *puVar4 = uVar5 | (int)b << uVar1;
        } while (uVar6 != 0x20);
      }
      i = i + 1;
    } while (numItems != i);
    return 0;
  }
  *digests = (UInt32 *)0x0;
  return 0;
}


