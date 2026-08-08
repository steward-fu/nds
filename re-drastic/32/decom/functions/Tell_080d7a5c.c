/*
 * Ghidra decompilation
 *
 * Function : Tell
 * Address  : 080d7a5c
 * Program  : drastic
 */


/* DWARF original prototype: int64 Tell(Archive * this) */

int64 __thiscall Archive::Tell(Archive *this)

{
  bool bVar1;
  int64 QPos;
  int local_14;
  
  local_14 = __stack_chk_guard;
  bVar1 = QuickOpen::Tell(&this->QOpen,&QPos);
  if (!bVar1) {
    QPos = File::Tell(&this->super_File);
  }
  if (local_14 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return QPos;
}


