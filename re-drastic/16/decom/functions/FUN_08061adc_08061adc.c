/*
 * Ghidra decompilation
 *
 * Function : FUN_08061adc
 * Address  : 08061adc
 * Program  : drastic16
 */


undefined4 FUN_08061adc(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char *__src;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  char *__s;
  char *__dest;
  char *__dest_00;
  char *pcStack_30;
  char acStack_29 [5];
  
  __s = *(char **)(param_2 + 0x18);
  uVar6 = *(uint *)(param_2 + 0x20);
  sVar3 = strlen(__s);
  uVar4 = *(uint *)(param_2 + 0x1c) + 8 & 0xfffffff8;
  iVar1 = -uVar4;
  iVar2 = uVar4 * -2;
  __dest = acStack_29 + iVar1 + 1;
  __dest_00 = acStack_29 + iVar2 + 1;
  switch(*param_3) {
  case 2:
    if (uVar6 != 0) {
      uVar6 = uVar6 - 1;
    }
    goto LAB_08061bb8;
  case 3:
    if (sVar3 <= uVar6) goto LAB_08061bb8;
    break;
  default:
    return *param_3;
  case 5:
    if (uVar6 == 0) {
      if (sVar3 != 0) {
        memcpy(__dest,__s,sVar3 + 1);
        strcpy(__s,acStack_29 + iVar1 + 2);
      }
    }
    else {
      memcpy(__dest,__s,sVar3 + 1);
      __src = __s + uVar6;
      uVar6 = uVar6 - 1;
      strcpy(__dest_00,__src);
      __dest[uVar6] = '\0';
      sprintf(__s,"%s%s",__dest,__dest_00);
    }
    goto LAB_08061bb8;
  case 10:
    if (sVar3 < *(uint *)(param_2 + 0x1c)) {
      memcpy(__dest,__s,sVar3 + 1);
      strcpy(__dest_00,__s + uVar6);
      uVar5 = param_3[1];
      __dest[uVar6] = '\0';
      *(char **)((int)&pcStack_30 + iVar2) = __dest_00;
      uVar6 = uVar6 + 1;
      sprintf(__s,"%s%c%s",__dest,uVar5);
      goto LAB_08061bb8;
    }
    if (sVar3 <= uVar6) goto LAB_08061bb8;
    __s[uVar6] = (char)param_3[1];
  }
  uVar6 = uVar6 + 1;
LAB_08061bb8:
  *(uint *)(param_2 + 0x20) = uVar6;
  return 0xb;
}


