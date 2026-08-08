/*
 * Ghidra decompilation
 *
 * Function : SzReadBoolVector2
 * Address  : 08004fa0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

SRes SzReadBoolVector2(CSzData *sd,size_t numItems,Byte **v,ISzAlloc *alloc)

{
  SRes SVar1;
  size_t i;
  Byte *pBVar2;
  Byte *allAreDefined;
  
  if (sd->Size == 0) {
    return 0x10;
  }
  pBVar2 = sd->Data;
  sd->Size = sd->Size - 1;
  sd->Data = pBVar2 + 1;
  if (*pBVar2 == '\0') {
    SVar1 = SzReadBoolVector(sd,numItems,v,alloc);
    return SVar1;
  }
  if (numItems == 0) {
    *v = (Byte *)0x0;
    return 0;
  }
  pBVar2 = (Byte *)(*alloc->Alloc)(alloc,numItems);
  *v = pBVar2;
  if (pBVar2 == (Byte *)0x0) {
    return 2;
  }
  i = 0;
  do {
    (*v)[i] = '\x01';
    i = i + 1;
  } while (numItems != i);
  return 0;
}


