/*
 * Ghidra decompilation
 *
 * Function : load_nds
 * Address  : 0016fd30
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int load_nds(long param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  FILE *__s;
  size_t sVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  undefined *puVar8;
  char acStack_c48 [1056];
  undefined auStack_828 [2080];
  long local_8;
  
  lVar7 = *(long *)(param_1 + 0x918);
  local_8 = ___stack_chk_guard;
  lVar1 = lVar7 + 0x8a780;
  __sprintf_chk(auStack_828,1,0x820,"%s%cunzip_cache",lVar1,0x2f);
  puVar8 = auStack_828;
  if (*(int *)(lVar7 + 0x85a24) == 0) {
    puVar8 = (undefined *)0x0;
  }
  if (*(long *)(param_1 + 0x920) == 0) {
LAB_0016fe48:
    lVar4 = nds_file_open(param_2,puVar8,*(undefined4 *)(lVar7 + 0x85a3c),
                          *(undefined4 *)(lVar7 + 0x85a28));
  }
  else {
    if (*(int *)(param_1 + 0x2d84) == 0) {
      iVar2 = *(int *)(param_1 + 0x8dc);
    }
    else {
      backup_save(param_1 + 0x968);
      iVar2 = *(int *)(param_1 + 0x8dc);
    }
    if (((iVar2 != 0) && (*(char *)(param_1 + 0x8e3) != '\0')) && (*(long *)(param_1 + 0x8c8) != 0))
    {
      __s = fopen((char *)(param_1 + 0x4a0),"wb");
      if (__s == (FILE *)0x0) {
        __printf_chk(1,"ERROR: Couldn\'t save GBA backup %s\n",(char *)(param_1 + 0x4a0));
      }
      else {
        puts("Saving GBA backup file.");
        sVar3 = fwrite(*(void **)(param_1 + 0x8c8),(ulong)*(uint *)(param_1 + 0x8d4),1,__s);
        if (sVar3 != 1) {
          puts("ERROR: Couldn\'t write all of GBA backup.");
        }
        fclose(__s);
      }
    }
    free(*(void **)(param_1 + 0x2d90));
    *(undefined8 *)(param_1 + 0x2d90) = 0;
    nds_file_close(*(undefined8 *)(param_1 + 0x920));
    *(undefined8 *)(param_1 + 0x920) = 0;
    if (*(int *)(param_1 + 0x93c) < 0) goto LAB_0016fe48;
    close(*(int *)(param_1 + 0x93c));
    lVar4 = nds_file_open(param_2,puVar8,*(undefined4 *)(lVar7 + 0x85a3c),
                          *(undefined4 *)(lVar7 + 0x85a28));
  }
  if ((lVar4 == 0) &&
     ((*(int *)(lVar7 + 0x85a24) != 0 ||
      (lVar4 = nds_file_open(param_2,auStack_828,*(undefined4 *)(lVar7 + 0x85a3c),
                             *(undefined4 *)(lVar7 + 0x85a28)), lVar4 == 0)))) {
    iVar2 = -1;
    __printf_chk(1,"ERROR: Could not open %s\n",param_2);
    goto LAB_0016ff3c;
  }
  *(long *)(param_1 + 0x920) = lVar4;
  if (*(uint *)(lVar4 + 0x10) < 0x200) {
    iVar2 = -1;
    __printf_chk(1,"%s does not have a valid gamecard_header.\n",param_2);
    goto LAB_0016ff3c;
  }
  pcVar5 = strrchr(param_2,0x2f);
  pcVar6 = param_2;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5 + 1;
  }
  pcVar6 = strncpy(acStack_c48,pcVar6,0x400);
  pcVar6 = strrchr(pcVar6,0x2e);
  if (pcVar6 != (char *)0x0) {
    *pcVar6 = '\0';
  }
  strncpy((char *)(lVar7 + 0x8a380),param_2,0x400);
  *(undefined *)(lVar7 + 0x8a77f) = 0;
  pcVar5 = strrchr(param_2,0x2f);
  pcVar6 = (char *)(lVar7 + 0x8b380);
  if (pcVar5 != (char *)0x0) {
    param_2 = pcVar5 + 1;
  }
  strncpy(pcVar6,param_2,0x400);
  *(undefined *)(lVar7 + 0x8b77f) = 0;
  memcpy((void *)(lVar7 + 0x8af80),pcVar6,0x400);
  pcVar5 = strrchr(pcVar6,0x2e);
  if (pcVar5 != (char *)0x0) {
    *pcVar5 = '\0';
  }
  pcVar5 = getcwd((char *)(lVar7 + 0x855e4),0x400);
  if (pcVar5 == (char *)0x0) {
    iVar2 = -1;
    goto LAB_0016ff3c;
  }
  if (*(int *)(lVar7 + 0x85a50) == 0) {
LAB_0016ff38:
    iVar2 = 0;
  }
  else {
    puVar8 = &DAT_0021f028;
    __sprintf_chk(auStack_828,1,0x820,"%s%c%s%c%s.%s",lVar1,0x2f,"scripts",0x2f,pcVar6,&DAT_0021f028
                 );
    __printf_chk(1,"Attempting to load lua script %s\n",auStack_828);
    iVar2 = lua_load_script(auStack_828);
    if (iVar2 != 0) {
      __sprintf_chk(auStack_828,1,0x820,"%s%c%s%cdefault.%s",lVar1,0x2f,"scripts",0x2f,&DAT_0021f028
                    ,puVar8);
      __printf_chk(1,"Attempting to load lua script %s\n",auStack_828);
      iVar2 = lua_load_script(auStack_828);
      if (iVar2 != 0) goto LAB_0016ff38;
    }
    __printf_chk(1,"Using lua script %s\n",auStack_828);
    lua_on_load_game(pcVar6);
  }
LAB_0016ff3c:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return iVar2;
}


