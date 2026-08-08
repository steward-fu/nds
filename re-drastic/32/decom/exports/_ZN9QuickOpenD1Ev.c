/*
 * Ghidra decompilation
 *
 * Function : _ZN9QuickOpenD1Ev
 * Address  : 08108b70
 * Program  : drastic
 */


/* DWARF original prototype: void * ~QuickOpen(QuickOpen * this, int __in_chrg) */

void * __thiscall QuickOpen::~QuickOpen(QuickOpen *this,int __in_chrg)

{
  QuickOpenItem *pQVar1;
  uchar *__ptr;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
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
    __in_chrg = extraout_r1;
  }
  if (this->Buf != (byte *)0x0) {
    operator_delete__(this->Buf);
    __in_chrg = extraout_r1_00;
  }
  __ptr = (this->LastReadHeader).Buffer;
  if (__ptr != (uchar *)0x0) {
    free(__ptr);
    __in_chrg = extraout_r1_01;
  }
  CryptData::~CryptData(&this->Crypt,__in_chrg);
  return this;
}


