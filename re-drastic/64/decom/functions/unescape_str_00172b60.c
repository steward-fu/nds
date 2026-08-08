/*
 * Ghidra decompilation
 *
 * Function : unescape_str
 * Address  : 00172b60
 * Program  : drastic64
 */


void unescape_str(char *param_1,long param_2,uint param_3,int param_4)

{
  char *pcVar1;
  char *__s1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  if (param_3 == 0) {
    return;
  }
  pcVar1 = param_1 + (ulong)(param_4 - 1) + 1;
  uVar4 = 0;
  do {
    if (*(char *)(param_2 + (ulong)uVar4) == '&') {
      __s1 = (char *)(param_2 + (ulong)(uVar4 + 1));
      iVar3 = strncmp(__s1,"amp;",4);
      if (iVar3 == 0) {
        uVar4 = uVar4 + 4;
        *param_1 = '&';
      }
      else {
        iVar3 = strncmp(__s1,"apos;",5);
        if (iVar3 == 0) {
          uVar4 = uVar4 + 5;
          *param_1 = '\'';
        }
        else {
          iVar3 = strncmp(__s1,"quot;",5);
          if (iVar3 == 0) {
            uVar4 = uVar4 + 5;
            *param_1 = '\"';
          }
          else {
            cVar2 = *(char *)(param_2 + (ulong)(uVar4 + 1));
            if (((cVar2 == 'l') && (__s1[1] == 't')) && (__s1[2] == ';')) {
              uVar4 = uVar4 + 3;
              *param_1 = '<';
            }
            else {
              if (((cVar2 != 'g') || (__s1[1] != 't')) || (__s1[2] != ';')) {
                __printf_chk(1,"Unknown escape sequence in string %s\n",param_2);
                *param_1 = '_';
                goto LAB_00172bb4;
              }
              uVar4 = uVar4 + 3;
              *param_1 = '>';
            }
          }
        }
      }
      if (param_3 <= uVar4) {
        return;
      }
    }
    else {
      *param_1 = *(char *)(param_2 + (ulong)uVar4);
    }
LAB_00172bb4:
    param_1 = param_1 + 1;
    if (param_1 == pcVar1) {
      return;
    }
    uVar4 = uVar4 + 1;
    if (param_3 <= uVar4) {
      return;
    }
  } while( true );
}


