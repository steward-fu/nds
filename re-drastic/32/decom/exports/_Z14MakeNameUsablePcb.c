/*
 * Ghidra decompilation
 *
 * Function : _Z14MakeNameUsablePcb
 * Address  : 080d4878
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable s:char *[r0:4] conflicts with parameter, skipped. */

void MakeNameUsable(char *Name,bool Extended)

{
  char *pcVar1;
  uint __c;
  
  __c = (uint)(byte)*Name;
  if (__c != 0) {
    if (Extended) {
      do {
        pcVar1 = strchr("?*<>|\"",__c);
        if ((pcVar1 != (char *)0x0) || (__c < 0x20)) {
          *Name = 0x5f;
        }
        Name = (char *)((byte *)Name + 1);
        __c = (uint)(byte)*Name;
      } while (__c != 0);
    }
    else {
      do {
        pcVar1 = strchr("?*",__c);
        if (pcVar1 != (char *)0x0) {
          *Name = 0x5f;
        }
        Name = (char *)((byte *)Name + 1);
        __c = (uint)(byte)*Name;
      } while (__c != 0);
    }
  }
  return;
}


