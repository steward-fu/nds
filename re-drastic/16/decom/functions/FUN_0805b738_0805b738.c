/*
 * Ghidra decompilation
 *
 * Function : FUN_0805b738
 * Address  : 0805b738
 * Program  : drastic16
 */


undefined4 FUN_0805b738(int param_1,char *param_2)

{
  FILE *__s;
  size_t sVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *extraout_r1;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char acStack_820 [1024];
  char acStack_420 [1028];
  
  iVar7 = *(int *)(param_1 + 0x880);
  pcVar4 = acStack_820;
  if (*(int *)(iVar7 + 0x8179c) == 0) {
    pcVar4 = (undefined *)0x0;
  }
  else {
    sprintf(acStack_820,"%s%cunzip_cache",iVar7 + 0x81c30,0x2f);
  }
  if (*(int *)(param_1 + 0x884) != 0) {
    if (*(int *)(param_1 + 0xcc8) == 0) {
      iVar5 = *(int *)(param_1 + 0x86c);
    }
    else {
      FUN_0805d844(param_1 + 0x8b4);
      iVar5 = *(int *)(param_1 + 0x86c);
    }
    if (((iVar5 != 0) && (*(char *)(param_1 + 0x873) != '\0')) && (*(int *)(param_1 + 0x85c) != 0))
    {
      __s = fopen((char *)(param_1 + 0x458),"wb");
      if (__s == (FILE *)0x0) {
        printf("ERROR: Couldn\'t save GBA backup %s\n",(char *)(param_1 + 0x458));
      }
      else {
        puts("Saving GBA backup file.");
        sVar1 = fwrite(*(void **)(param_1 + 0x85c),*(size_t *)(param_1 + 0x864),1,__s);
        if (sVar1 != 1) {
          puts("ERROR: Couldn\'t write all of GBA backup.");
        }
        fclose(__s);
      }
    }
    free(*(void **)(param_1 + 0xcd4));
    *(undefined4 *)(param_1 + 0xcd4) = 0;
    FUN_08060d14(*(undefined4 *)(param_1 + 0x884));
    *(undefined4 *)(param_1 + 0x884) = 0;
    if (-1 < *(int *)(param_1 + 0x898)) {
      close(*(int *)(param_1 + 0x898));
    }
  }
  iVar5 = FUN_08060658(param_2,pcVar4,*(undefined4 *)(iVar7 + 0x817b0));
  if (iVar5 == 0) {
    printf("ERROR: Could not open %s\n",param_2);
    uVar3 = 0xffffffff;
  }
  else {
    uVar6 = *(uint *)(iVar5 + 8);
    *(int *)(param_1 + 0x884) = iVar5;
    if (uVar6 < 0x200) {
      printf("%s does not have a valid gamecard_header.\n",param_2);
      uVar3 = 0xffffffff;
    }
    else {
      pcVar2 = strrchr(param_2,0x2f);
      pcVar4 = extraout_r1;
      if (pcVar2 != (char *)0x0) {
        pcVar4 = pcVar2 + 1;
      }
      if (pcVar2 == (char *)0x0) {
        pcVar4 = param_2;
      }
      strncpy(acStack_420,pcVar4,0x400);
      pcVar4 = strrchr(acStack_420,0x2e);
      if (pcVar4 != (char *)0x0) {
        *pcVar4 = '\0';
      }
      strncpy((char *)(iVar7 + 0x81830),param_2,0x400);
      *(undefined *)(iVar7 + 0x81c2f) = 0;
      pcVar4 = strrchr(param_2,0x2f);
      pcVar2 = (char *)(iVar7 + 0x82830);
      if (pcVar4 != (char *)0x0) {
        param_2 = pcVar4 + 1;
      }
      strncpy(pcVar2,param_2,0x3ff);
      *(undefined *)(iVar7 + 0x82c2f) = 0;
      memcpy((void *)(iVar7 + 0x82430),pcVar2,0x400);
      pcVar4 = strrchr(pcVar2,0x2e);
      if (pcVar4 != (char *)0x0) {
        *pcVar4 = '\0';
      }
      FUN_08077978(iVar7 + 0x155e000);
      pcVar4 = getcwd((char *)(iVar7 + 0x8135c),0x400);
      if (pcVar4 == (char *)0x0) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}


