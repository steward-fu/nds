/*
 * Ghidra decompilation
 *
 * Function : FUN_08072534
 * Address  : 08072534
 * Program  : drastic16
 */


uint FUN_08072534(char *param_1,char **param_2,uint param_3)

{
  char *pcVar1;
  size_t sVar2;
  uint uVar3;
  
  *param_2 = param_1;
  pcVar1 = strchr(param_1,0x20);
  uVar3 = 1;
  if ((pcVar1 == (char *)0x0 || param_3 != 0) && (pcVar1 != (char *)0x0 && param_3 != 1)) {
    do {
      param_1 = pcVar1 + 1;
      *pcVar1 = '\0';
      param_2 = param_2 + 1;
      *param_2 = param_1;
      uVar3 = uVar3 + 1;
      pcVar1 = strchr(param_1,0x20);
    } while ((pcVar1 == (char *)0x0 || uVar3 <= param_3) &&
             (pcVar1 != (char *)0x0 && param_3 != uVar3));
  }
  sVar2 = strlen(param_1);
  param_1[sVar2 - 1] = '\0';
  return uVar3;
}


