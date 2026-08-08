/*
 * Ghidra decompilation
 *
 * Function : ParseDone
 * Address  : 001e80e0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CommandData::ParseDone() */

void CommandData::ParseDone(void)

{
  int iVar1;
  long in_x0;
  
  if ((*(int *)(in_x0 + 0x16660) == 0) && (*(char *)(in_x0 + 0x125e8) == '\0')) {
    StringList::AddString((StringList *)(in_x0 + 0x16638),L"*");
  }
  iVar1 = toupperw(*(int *)(in_x0 + 0x125f4));
  if (iVar1 == 0x58 || iVar1 == 0x45) {
    if (*(char *)(in_x0 + 0xc4e1) == '\0') goto LAB_001e8130;
  }
  else {
    if (iVar1 != 0x50) goto LAB_001e8130;
    if (*(char *)(in_x0 + 0xc4e1) == '\0') {
      return;
    }
  }
  *(undefined *)(in_x0 + 0xc4e1) = 0;
LAB_001e8130:
  if ((iVar1 == 0x4c || iVar1 == 0x56) && (*(int *)(in_x0 + 0x125f8) == 0x42)) {
    *(undefined *)(in_x0 + 0x125f0) = 1;
    return;
  }
  return;
}


