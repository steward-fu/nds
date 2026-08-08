/*
 * Ghidra decompilation
 *
 * Function : Read
 * Address  : 080d7bdc
 * Program  : drastic
 */


/* DWARF original prototype: int Read(Archive * this, void * Data, size_t Size) */

int __thiscall Archive::Read(Archive *this,void *Data,size_t Size)

{
  bool bVar1;
  size_t Result;
  int local_1c;
  
  local_1c = __stack_chk_guard;
  bVar1 = QuickOpen::Read(&this->QOpen,Data,Size,&Result);
  if (!bVar1) {
    Result = File::Read(&this->super_File,Data,Size);
  }
  if (local_1c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return Result;
}


