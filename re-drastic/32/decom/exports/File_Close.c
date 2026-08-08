/*
 * Ghidra decompilation
 *
 * Function : File_Close
 * Address  : 080cbc30
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

WRes File_Close(CSzFile *p)

{
  int iVar1;
  int res;
  
  if ((FILE *)p->file != (FILE *)0x0) {
    iVar1 = fclose((FILE *)p->file);
    if (iVar1 == 0) {
      p->file = (FILE *)0x0;
    }
    return iVar1;
  }
  return 0;
}


