/*
 * Ghidra decompilation
 *
 * Function : WCheckOpen
 * Address  : 001bb4b0
 * Program  : drastic64
 */


/* Archive::WCheckOpen(wchar_t const*) */

char __thiscall Archive::WCheckOpen(Archive *this,wchar_t *param_1)

{
  char cVar1;
  
  cVar1 = File::WOpen((File *)this,param_1);
  if (cVar1 != '\0') {
    cVar1 = IsArchive(this,false);
    if (cVar1 == '\0') {
      File::Close();
    }
  }
  return cVar1;
}


