/*
 * Ghidra decompilation
 *
 * Function : _ZN11SecPasswordD1Ev
 * Address  : 001c4140
 * Program  : drastic64
 */


/* SecPassword::~SecPassword() */

void __thiscall SecPassword::~SecPassword(SecPassword *this)

{
  SecPassword *pSVar1;
  SecPassword *pSVar2;
  
  pSVar2 = this;
  do {
    pSVar1 = pSVar2 + 1;
    *pSVar2 = (SecPassword)0x0;
    pSVar2 = pSVar1;
  } while (pSVar1 != this + 0x200);
  return;
}


