/*
 * Ghidra decompilation
 *
 * Function : InFile_Open
 * Address  : 080cbb90
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

WRes InFile_Open(CSzFile *p,char *name)

{
  FILE *pFVar1;
  int *piVar2;
  
  pFVar1 = fopen64(name,"rb");
  p->file = (FILE *)pFVar1;
  if (pFVar1 == (FILE *)0x0) {
    piVar2 = __errno_location();
    return *piVar2;
  }
  return 0;
}


