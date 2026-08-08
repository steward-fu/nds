/*
 * Ghidra decompilation
 *
 * Function : _ZN7ArchiveD0Ev
 * Address  : 080d7384
 * Program  : drastic
 */


/* DWARF original prototype: void * ~Archive(Archive * this, int __in_chrg) */

void * __thiscall Archive::~Archive(Archive *this,int __in_chrg)

{
  ~Archive(this,__in_chrg);
  operator_delete(this);
  return this;
}


