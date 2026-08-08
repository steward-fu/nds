/*
 * Ghidra decompilation
 *
 * Function : Clean
 * Address  : 080e32f4
 * Program  : drastic
 */


/* DWARF original prototype: void Clean(SecPassword * this)
   Local variable d:byte *[r0:4] conflicts with parameter, skipped. */

void __thiscall SecPassword::Clean(SecPassword *this)

{
  SecPassword *pSVar1;
  SecPassword *pSVar2;
  
  this->PasswordSet = false;
  pSVar1 = this;
  do {
    pSVar2 = (SecPassword *)((int)pSVar1->Password + 1);
    *(undefined *)pSVar1->Password = 0;
    pSVar1 = pSVar2;
  } while (pSVar2 != (SecPassword *)&this->PasswordSet);
  return;
}


