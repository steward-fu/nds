/*
 * Ghidra decompilation
 *
 * Function : Seek
 * Address  : 080d7ac8
 * Program  : drastic
 */


/* DWARF original prototype: void Seek(Archive * this, int64 Offset, int Method) */

void __thiscall Archive::Seek(Archive *this,int64 Offset,int Method)

{
  bool bVar1;
  int Method_00;
  undefined4 in_stack_ffffffe4;
  
  bVar1 = QuickOpen::Seek(&this->QOpen,CONCAT44(in_stack_ffffffe4,(undefined4)Offset),Method);
  if (bVar1) {
    return;
  }
  File::Seek(&this->super_File,Offset,Method_00);
  return;
}


