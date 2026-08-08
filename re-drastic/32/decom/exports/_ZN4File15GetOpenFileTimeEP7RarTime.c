/*
 * Ghidra decompilation
 *
 * Function : _ZN4File15GetOpenFileTimeEP7RarTime
 * Address  : 080d6374
 * Program  : drastic
 */


/* DWARF original prototype: void GetOpenFileTime(File * this, RarTime * ft) */

void __thiscall File::GetOpenFileTime(File *this,RarTime *ft)

{
  int iVar1;
  int __fildes;
  stat_conflict st;
  
  iVar1 = __stack_chk_guard;
  __fildes = fileno((FILE *)this->hFile);
  __fxstat64(3,__fildes,(stat64 *)&st);
  RarTime::operator=(ft,st.st_mtim.tv_sec);
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


