/*
 * Ghidra decompilation
 *
 * Function : etoupperw
 * Address  : 080d2344
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

wchar etoupperw(wchar ch)

{
  wchar wVar1;
  
  if (ch == 0x69) {
    return 0x49;
  }
  wVar1 = toupperw(ch);
  return wVar1;
}


