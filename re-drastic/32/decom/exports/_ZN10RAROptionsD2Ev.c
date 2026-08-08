/*
 * Ghidra decompilation
 *
 * Function : _ZN10RAROptionsD2Ev
 * Address  : 080e29a0
 * Program  : drastic
 */


/* DWARF original prototype: void * ~RAROptions(RAROptions * this, int __in_chrg) */

void * __thiscall RAROptions::~RAROptions(RAROptions *this,int __in_chrg)

{
  longlong *__ptr;
  int extraout_r1;
  int extraout_r1_00;
  int __in_chrg_00;
  
  memset(this,0,0x125c0);
  __ptr = (this->NextVolSizes).Buffer;
  __in_chrg_00 = extraout_r1;
  if (__ptr != (longlong *)0x0) {
    free(__ptr);
    __in_chrg_00 = extraout_r1_00;
  }
  SecPassword::~SecPassword(&this->Password,__in_chrg_00);
  return this;
}


