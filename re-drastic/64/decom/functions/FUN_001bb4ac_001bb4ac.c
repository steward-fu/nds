/*
 * Ghidra decompilation
 *
 * Function : FUN_001bb4ac
 * Address  : 001bb4ac
 * Program  : drastic64
 */


char FUN_001bb4ac(File *param_1,wchar_t *param_2)

{
  char cVar1;
  
  cVar1 = File::WOpen(param_1,param_2);
  if (cVar1 != '\0') {
    cVar1 = Archive::IsArchive((Archive *)param_1,false);
    if (cVar1 == '\0') {
      File::Close();
    }
  }
  return cVar1;
}


