/*
 * Ghidra decompilation
 *
 * Function : _Z14MakeNameUsablePcb
 * Address  : 001b69e0
 * Program  : drastic64
 */


/* MakeNameUsable(char*, bool) */

void MakeNameUsable(char *param_1,bool param_2)

{
  byte bVar1;
  char *pcVar2;
  uint __c;
  
  __c = (uint)(byte)*param_1;
  if (*param_1 != 0) {
    if (param_2) {
      do {
        pcVar2 = strchr("?*<>|\"",__c);
        if ((pcVar2 != (char *)0x0 || __c < 0x1f) || pcVar2 == (char *)0x0 && __c == 0x1f) {
          do {
            *param_1 = 0x5f;
            param_1 = (char *)((byte *)param_1 + 1);
            bVar1 = *param_1;
            if (bVar1 == 0) {
              return;
            }
            pcVar2 = strchr("?*<>|\"",(uint)bVar1);
          } while ((pcVar2 != (char *)0x0 || bVar1 < 0x1f) || pcVar2 == (char *)0x0 && bVar1 == 0x1f
                  );
        }
        param_1 = (char *)((byte *)param_1 + 1);
        __c = (uint)(byte)*param_1;
      } while (__c != 0);
    }
    else {
      do {
        while (pcVar2 = strchr("?*",__c), pcVar2 != (char *)0x0) {
          *param_1 = 0x5f;
          param_1 = (char *)((byte *)param_1 + 1);
          __c = (uint)(byte)*param_1;
          if (__c == 0) {
            return;
          }
        }
        param_1 = (char *)((byte *)param_1 + 1);
        __c = (uint)(byte)*param_1;
      } while (__c != 0);
    }
  }
  return;
}


