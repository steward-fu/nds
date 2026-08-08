/*
 * Ghidra decompilation
 *
 * Function : _ZN9CryptDataC1Ev
 * Address  : 001c1410
 * Program  : drastic64
 */


/* CryptData::CryptData() */

void __thiscall CryptData::CryptData(CryptData *this)

{
  long lVar1;
  SecPassword *this_00;
  
                    /* try { // try from 001c1430 to 001c144b has its CatchHandler @ 001c1490 */
  SecPassword::SecPassword((SecPassword *)this);
  lVar1 = 2;
  this_00 = (SecPassword *)this;
  do {
    this_00 = this_00 + 0x278;
    SecPassword::SecPassword(this_00);
    lVar1 = lVar1 + -1;
  } while (lVar1 != -1);
                    /* try { // try from 001c145c to 001c145f has its CatchHandler @ 001c14b4 */
  Rijndael::Rijndael((Rijndael *)(this + 0x9e8));
  memset(this,0,0x9e0);
  *(undefined8 *)(this + 0x9e0) = 0;
  memset(this + 0xaec,0,0x400);
  return;
}


