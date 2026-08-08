/*
 * Ghidra decompilation
 *
 * Function : ~CommandData
 * Address  : 080d1768
 * Program  : drastic
 */


/* DWARF original prototype: void * ~CommandData(CommandData * this, int __in_chrg) */

void * __thiscall CommandData::~CommandData(CommandData *this,int __in_chrg)

{
  wchar_t *pwVar1;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  
  pwVar1 = (this->StoreArgs).StringData.Buffer;
  if (pwVar1 != (wchar_t *)0x0) {
    free(pwVar1);
    __in_chrg = extraout_r1;
  }
  pwVar1 = (this->ArcNames).StringData.Buffer;
  if (pwVar1 != (wchar_t *)0x0) {
    free(pwVar1);
    __in_chrg = extraout_r1_00;
  }
  pwVar1 = (this->InclArgs).StringData.Buffer;
  if (pwVar1 != (wchar_t *)0x0) {
    free(pwVar1);
    __in_chrg = extraout_r1_01;
  }
  pwVar1 = (this->ExclArgs).StringData.Buffer;
  if (pwVar1 != (wchar_t *)0x0) {
    free(pwVar1);
    __in_chrg = extraout_r1_02;
  }
  pwVar1 = (this->FileArgs).StringData.Buffer;
  if (pwVar1 != (wchar_t *)0x0) {
    free(pwVar1);
    __in_chrg = extraout_r1_03;
  }
  RAROptions::~RAROptions(&this->super_RAROptions,__in_chrg);
  return this;
}


