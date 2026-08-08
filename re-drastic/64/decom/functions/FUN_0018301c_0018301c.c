/*
 * Ghidra decompilation
 *
 * Function : FUN_0018301c
 * Address  : 0018301c
 * Program  : drastic64
 */


ulong FUN_0018301c(char *param_1,char **param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  ulong uVar5;
  
  sVar3 = strlen(param_1);
  *param_2 = param_1;
  iVar2 = (int)sVar3;
  if ((iVar2 != 0) && ((param_1[iVar2 - 1U] != '\n' || (param_1[iVar2 - 1U] = '\0', iVar2 != 1)))) {
    pcVar4 = strchr(param_1,0x20);
    uVar5 = 1;
    if ((pcVar4 != (char *)0x0 && param_3 != 0) && (pcVar4 == (char *)0x0 || param_3 != 1)) {
      do {
        *pcVar4 = '\0';
        param_2[uVar5] = pcVar4 + 1;
        uVar1 = (int)uVar5 + 1;
        uVar5 = (ulong)uVar1;
        pcVar4 = strchr(pcVar4 + 1,0x20);
      } while ((pcVar4 != (char *)0x0 && uVar1 <= param_3) &&
               (pcVar4 == (char *)0x0 || param_3 != uVar1));
      return uVar5;
    }
  }
  return 1;
}


