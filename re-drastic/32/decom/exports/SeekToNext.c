/*
 * Ghidra decompilation
 *
 * Function : SeekToNext
 * Address  : 080d7b3c
 * Program  : drastic
 */


/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x080d7bd4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: void SeekToNext(Archive * this) */

void __thiscall Archive::SeekToNext(Archive *this)

{
  bool bVar1;
  _func_int_varargs *p_Var2;
  int Method;
  uint in_stack_ffffffec;
  
  p_Var2 = (this->super_File)._vptr_File[3];
  if (p_Var2 == Seek) {
    bVar1 = QuickOpen::Seek(&this->QOpen,(ulonglong)in_stack_ffffffec << 0x20,0);
    if (!bVar1) {
      File::Seek(&this->super_File,(ulonglong)in_stack_ffffffec << 0x20,Method);
    }
  }
  else {
    (*p_Var2)(this,p_Var2,*(undefined4 *)&this->NextBlockPos,
              *(undefined4 *)((int)&this->NextBlockPos + 4),0);
  }
  return;
}


