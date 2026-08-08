/*
 * Ghidra decompilation
 *
 * Function : Close
 * Address  : 08108c94
 * Program  : drastic
 */


/* DWARF original prototype: void Close(QuickOpen * this) */

void __thiscall QuickOpen::Close(QuickOpen *this)

{
  QuickOpenItem *pQVar1;
  QuickOpenItem *Item;
  QuickOpenItem *pQVar2;
  QuickOpenItem *Next;
  
  pQVar1 = this->ListStart;
  while (pQVar1 != (QuickOpenItem *)0x0) {
    pQVar2 = pQVar1->Next;
    if (pQVar1->Header != (byte *)0x0) {
      operator_delete__(pQVar1->Header);
    }
    operator_delete(pQVar1);
    pQVar1 = pQVar2;
  }
  return;
}


