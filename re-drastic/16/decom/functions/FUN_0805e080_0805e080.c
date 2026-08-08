/*
 * Ghidra decompilation
 *
 * Function : FUN_0805e080
 * Address  : 0805e080
 * Program  : drastic16
 */


void FUN_0805e080(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *__s1;
  
  if (param_3 == 0) {
    return;
  }
  iVar3 = param_1 + 1;
  uVar2 = 0;
  do {
    if (*(char *)(param_2 + uVar2) == '&') {
      __s1 = (char *)(param_2 + uVar2 + 1);
      iVar1 = strncmp(__s1,"amp;",4);
      if (iVar1 == 0) {
        *(undefined *)(iVar3 + -1) = 0x26;
        uVar2 = uVar2 + 3;
      }
      else {
        iVar1 = strncmp(__s1,"apos;",5);
        if (iVar1 == 0) {
          *(undefined *)(iVar3 + -1) = 0x27;
          uVar2 = uVar2 + 4;
        }
        else {
          iVar1 = strncmp(__s1,"quot;",5);
          if (iVar1 == 0) {
            uVar2 = uVar2 + 4;
            *(undefined *)(iVar3 + -1) = 0x22;
          }
          else {
            iVar1 = strncmp(__s1,"lt;",3);
            if (iVar1 == 0) {
              uVar2 = uVar2 + 2;
              *(undefined *)(iVar3 + -1) = 0x3c;
            }
            else {
              iVar1 = strncmp(__s1,"gt;",3);
              if (iVar1 == 0) {
                uVar2 = uVar2 + 2;
                *(undefined *)(iVar3 + -1) = 0x3e;
              }
            }
          }
        }
      }
      param_2 = param_2 + 1;
      if (param_3 <= uVar2) {
        return;
      }
    }
    else {
      *(char *)(iVar3 + -1) = *(char *)(param_2 + uVar2);
    }
    if (iVar3 == param_1 + param_4) {
      return;
    }
    uVar2 = uVar2 + 1;
    iVar3 = iVar3 + 1;
  } while (uVar2 < param_3);
  return;
}


