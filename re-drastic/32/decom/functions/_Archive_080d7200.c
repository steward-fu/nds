/*
 * Ghidra decompilation
 *
 * Function : ~Archive
 * Address  : 080d7200
 * Program  : drastic
 */


/* DWARF original prototype: void * ~Archive(Archive * this, int __in_chrg) */

void * __thiscall Archive::~Archive(Archive *this,int __in_chrg)

{
  bool bVar1;
  uchar *puVar2;
  undefined **__in_chrg_00;
  undefined **extraout_r1;
  undefined **extraout_r1_00;
  undefined **extraout_r1_01;
  int __in_chrg_01;
  int __in_chrg_02;
  int __in_chrg_03;
  int __in_chrg_04;
  int __in_chrg_05;
  int __in_chrg_06;
  int __in_chrg_07;
  RAROptions *this_00;
  
  __in_chrg_00 = &PTR__Archive_08144d68;
  bVar1 = this->DummyCmd;
  (this->super_File)._vptr_File = (_func_int_varargs **)&PTR__Archive_08144d68;
  if ((bVar1 != false) && (this_00 = this->Cmd, this_00 != (RAROptions *)0x0)) {
    RAROptions::~RAROptions(this_00,0x8144d68);
    operator_delete(this_00);
    __in_chrg_00 = extraout_r1;
  }
  puVar2 = (this->SubHead).SubData.Buffer;
  if (puVar2 != (uchar *)0x0) {
    free(puVar2);
    __in_chrg_00 = extraout_r1_00;
  }
  puVar2 = (this->FileHead).SubData.Buffer;
  if (puVar2 != (uchar *)0x0) {
    free(puVar2);
    __in_chrg_00 = extraout_r1_01;
  }
  QuickOpen::~QuickOpen(&this->QOpen,(int)__in_chrg_00);
  DataHash::~DataHash(&(this->SubDataIO).UnpHash,__in_chrg_01);
  DataHash::~DataHash(&(this->SubDataIO).PackHash,__in_chrg_02);
  DataHash::~DataHash(&(this->SubDataIO).PackedDataHash,__in_chrg_03);
  CryptData::~CryptData(&(this->SubDataIO).Decrypt,__in_chrg_04);
  CryptData::~CryptData(&(this->SubDataIO).Crypt,__in_chrg_05);
  CryptData::~CryptData(&this->HeadersCrypt,__in_chrg_06);
  File::~File(&this->super_File,__in_chrg_07);
  return this;
}


