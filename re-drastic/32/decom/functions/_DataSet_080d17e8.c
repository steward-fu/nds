/*
 * Ghidra decompilation
 *
 * Function : ~DataSet
 * Address  : 080d17e8
 * Program  : drastic
 */


/* DWARF original prototype: void * ~DataSet(DataSet * this, int __in_chrg) */

void * __thiscall DataSet::~DataSet(DataSet *this,int __in_chrg)

{
  wchar_t *pwVar1;
  int __in_chrg_00;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  int __in_chrg_01;
  
  CmdExtract::~CmdExtract(&this->Extract,__in_chrg);
  Archive::~Archive(&this->Arc,__in_chrg_00);
  pwVar1 = (this->Cmd).StoreArgs.StringData.Buffer;
  __in_chrg_01 = extraout_r1;
  if (pwVar1 != (wchar_t *)0x0) {
    free(pwVar1);
    __in_chrg_01 = extraout_r1_00;
  }
  pwVar1 = (this->Cmd).ArcNames.StringData.Buffer;
  if (pwVar1 != (wchar_t *)0x0) {
    free(pwVar1);
    __in_chrg_01 = extraout_r1_01;
  }
  pwVar1 = (this->Cmd).InclArgs.StringData.Buffer;
  if (pwVar1 != (wchar_t *)0x0) {
    free(pwVar1);
    __in_chrg_01 = extraout_r1_02;
  }
  pwVar1 = (this->Cmd).ExclArgs.StringData.Buffer;
  if (pwVar1 != (wchar_t *)0x0) {
    free(pwVar1);
    __in_chrg_01 = extraout_r1_03;
  }
  pwVar1 = (this->Cmd).FileArgs.StringData.Buffer;
  if (pwVar1 != (wchar_t *)0x0) {
    free(pwVar1);
    __in_chrg_01 = extraout_r1_04;
  }
  RAROptions::~RAROptions((RAROptions *)this,__in_chrg_01);
  return this;
}


