/*
 * Ghidra decompilation
 *
 * Function : FUN_0806179c
 * Address  : 0806179c
 * Program  : drastic16
 */


int FUN_0806179c(char **param_1,char **param_2)

{
  int iVar1;
  char *__s1;
  char *__s2;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  __s1 = param_1[1];
  __s2 = param_2[1];
  uVar4 = 1 - (int)__s1;
  if ((char *)0x1 < __s1) {
    uVar4 = 0;
  }
  if (__s2 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar4 & 1;
  }
  if (uVar2 == 0) {
    uVar2 = 1 - (int)__s2;
    if ((char *)0x1 < __s2) {
      uVar2 = 0;
    }
    if (__s1 == (char *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar2 & 1;
    }
    if (uVar3 == 0) {
      if (uVar4 != 0) {
        __s1 = *param_1;
      }
      if (uVar2 != 0) {
        __s2 = *param_2;
      }
      iVar1 = strcasecmp(__s1,__s2);
      return iVar1;
    }
    iVar1 = 1;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


