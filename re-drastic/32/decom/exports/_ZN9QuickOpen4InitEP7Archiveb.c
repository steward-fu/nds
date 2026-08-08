/*
 * Ghidra decompilation
 *
 * Function : _ZN9QuickOpen4InitEP7Archiveb
 * Address  : 08108bf0
 * Program  : drastic
 */


/* DWARF original prototype: void Init(QuickOpen * this, Archive * Arc, bool WriteMode) */

void __thiscall QuickOpen::Init(QuickOpen *this,Archive *Arc,bool WriteMode)

{
  QuickOpenItem *pQVar1;
  byte *pbVar2;
  QuickOpenItem *Item;
  QuickOpenItem *pQVar3;
  QuickOpenItem *Next;
  
  if (Arc != (Archive *)0x0) {
    pQVar1 = this->ListStart;
    while (pQVar1 != (QuickOpenItem *)0x0) {
      pQVar3 = pQVar1->Next;
      if (pQVar1->Header != (byte *)0x0) {
        operator_delete__(pQVar1->Header);
      }
      operator_delete(pQVar1);
      pQVar1 = pQVar3;
    }
  }
  this->Arc = Arc;
  this->WriteMode = WriteMode;
  this->ListStart = (QuickOpenItem *)0x0;
  this->ListEnd = (QuickOpenItem *)0x0;
  if (this->Buf == (byte *)0x0) {
    pbVar2 = (byte *)operator_new__(0x10000);
    this->Buf = pbVar2;
  }
  this->CurBufSize = 0;
  this->Loaded = false;
  return;
}


