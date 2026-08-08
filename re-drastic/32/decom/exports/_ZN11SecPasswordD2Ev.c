/*
 * Ghidra decompilation
 *
 * Function : _ZN11SecPasswordD2Ev
 * Address  : 080e32d8
 * Program  : drastic
 */


/* DWARF original prototype: void * ~SecPassword(SecPassword * this, int __in_chrg)
   Local variable d:byte *[r0:4] conflicts with parameter, skipped. */

void * __thiscall SecPassword::~SecPassword(SecPassword *this,int __in_chrg)

{
  SecPassword *pSVar1;
  SecPassword *pSVar2;
  
  pSVar1 = this;
  do {
    pSVar2 = (SecPassword *)((int)pSVar1->Password + 1);
    *(undefined *)pSVar1->Password = 0;
    pSVar1 = pSVar2;
  } while (pSVar2 != (SecPassword *)&this->PasswordSet);
  return this;
}


