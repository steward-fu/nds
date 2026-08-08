/*
 * Ghidra decompilation
 *
 * Function : _ZN7ArchiveD0Ev
 * Address  : 001b9870
 * Program  : drastic64
 */


/* Archive::~Archive() */

void __thiscall Archive::~Archive(Archive *this)

{
  ~Archive(this);
  operator_delete(this,0x13258);
  return;
}


