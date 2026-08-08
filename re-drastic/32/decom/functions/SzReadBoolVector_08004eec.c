/*
 * Ghidra decompilation
 *
 * Function : SzReadBoolVector
 * Address  : 08004eec
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

SRes SzReadBoolVector(CSzData *sd,size_t numItems,Byte **v,ISzAlloc *alloc)

{
  uint uVar1;
  size_t sVar2;
  Byte *pBVar3;
  size_t i;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  
  if (numItems == 0) {
    *v = (Byte *)0x0;
  }
  else {
    pBVar3 = (Byte *)(*alloc->Alloc)(alloc,numItems);
    *v = pBVar3;
    if (pBVar3 == (Byte *)0x0) {
      return 2;
    }
  }
  uVar4 = 0;
  sVar2 = 0;
  uVar6 = 0;
  do {
    if (sVar2 == numItems) {
      return 0;
    }
    if (uVar6 == 0) {
      uVar6 = 0x80;
      if (sd->Size == 0) {
        return 0x10;
      }
      pbVar5 = sd->Data;
      sd->Size = sd->Size - 1;
      sd->Data = pbVar5 + 1;
      uVar4 = (uint)*pbVar5;
    }
    uVar1 = uVar6 & uVar4;
    uVar6 = uVar6 >> 1;
    (*v)[sVar2] = uVar1 != 0;
    sVar2 = sVar2 + 1;
  } while( true );
}


