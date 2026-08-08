/*
 * Ghidra decompilation
 *
 * Function : FUN_0804c75c
 * Address  : 0804c75c
 * Program  : drastic16
 */


void FUN_0804c75c(int param_1)

{
  FILE *pFVar1;
  char *pcVar2;
  int iVar3;
  uint local_428 [2];
  char acStack_420 [1028];
  
  if (*(char *)(param_1 + 0xe9ac8) == '\x01') {
    pFVar1 = fopen("geometry_log_commands.bin","wb");
    *(FILE **)(param_1 + 0xe9ab8) = pFVar1;
    pFVar1 = fopen("geometry_log_parameters.bin","wb");
    *(FILE **)(param_1 + 0xe9abc) = pFVar1;
    pFVar1 = fopen("geometry_log_vram.bin","wb");
    *(FILE **)(param_1 + 0xe9ac0) = pFVar1;
    pFVar1 = fopen("geometry_log_video_io.bin","wb");
    *(FILE **)(param_1 + 0xe9ac4) = pFVar1;
    pcVar2 = getcwd(acStack_420,0x400);
    if (pcVar2 != (char *)0x0) {
      printf("Starting logging (%s).\n",acStack_420);
    }
    local_428[0] = 0;
    fputc(0x10,*(FILE **)(param_1 + 0xe9ab8));
    fwrite(local_428,4,1,*(FILE **)(param_1 + 0xe9abc));
    fputc(0x16,*(FILE **)(param_1 + 0xe9ab8));
    fwrite((void *)(param_1 + 0x9810),0x40,1,*(FILE **)(param_1 + 0xe9abc));
    local_428[0] = 1;
    fputc(0x10,*(FILE **)(param_1 + 0xe9ab8));
    fwrite(local_428,4,1,*(FILE **)(param_1 + 0xe9abc));
    fputc(0x16,*(FILE **)(param_1 + 0xe9ab8));
    fwrite(*(void **)(param_1 + 0x9a38),0x40,1,*(FILE **)(param_1 + 0xe9abc));
    local_428[0] = 2;
    fputc(0x10,*(FILE **)(param_1 + 0xe9ab8));
    fwrite(local_428,4,1,*(FILE **)(param_1 + 0xe9abc));
    fputc(0x16,*(FILE **)(param_1 + 0xe9ab8));
    fwrite(*(void **)(param_1 + 0x9a3c),0x40,1,*(FILE **)(param_1 + 0xe9abc));
    local_428[0] = 3;
    fputc(0x10,*(FILE **)(param_1 + 0xe9ab8));
    fwrite(local_428,4,1,*(FILE **)(param_1 + 0xe9abc));
    fputc(0x16,*(FILE **)(param_1 + 0xe9ab8));
    fwrite((void *)(param_1 + 0x9850),0x40,1,*(FILE **)(param_1 + 0xe9abc));
    local_428[0] = (uint)*(byte *)(param_1 + 0x9a87);
    fputc(0x10,*(FILE **)(param_1 + 0xe9ab8));
    fwrite(local_428,4,1,*(FILE **)(param_1 + 0xe9abc));
    *(undefined *)(param_1 + 0xe9ac8) = 2;
    return;
  }
  if (*(char *)(param_1 + 0xe9ac8) != '\x02') {
    return;
  }
  iVar3 = ***(int ***)(param_1 + 0x9a1c);
  puts("frame done, logging VRAM and I/O");
  fwrite(*(void **)(iVar3 + 0x15010),0x20000,1,*(FILE **)(param_1 + 0xe9ac0));
  fwrite(*(void **)(iVar3 + 0x15014),0x20000,1,*(FILE **)(param_1 + 0xe9ac0));
  fwrite(*(void **)(iVar3 + 0x15018),0x20000,1,*(FILE **)(param_1 + 0xe9ac0));
  fwrite(*(void **)(iVar3 + 0x1501c),0x20000,1,*(FILE **)(param_1 + 0xe9ac0));
  fwrite(*(void **)(iVar3 + 0x15020),0x10000,1,*(FILE **)(param_1 + 0xe9ac0));
  fwrite(*(void **)(iVar3 + 0x15024),0x4000,1,*(FILE **)(param_1 + 0xe9ac0));
  fwrite(*(void **)(iVar3 + 0x15028),0x4000,1,*(FILE **)(param_1 + 0xe9ac0));
  fwrite(*(void **)(iVar3 + 0x1502c),0x8000,1,*(FILE **)(param_1 + 0xe9ac0));
  fwrite(*(void **)(iVar3 + 0x15030),0x4000,1,*(FILE **)(param_1 + 0xe9ac0));
  fwrite((void *)(iVar3 + 0x1b040),0x8000,1,*(FILE **)(param_1 + 0xe9ac4));
  fclose(*(FILE **)(param_1 + 0xe9ab8));
  fclose(*(FILE **)(param_1 + 0xe9abc));
  fclose(*(FILE **)(param_1 + 0xe9ac0));
  fclose(*(FILE **)(param_1 + 0xe9ac4));
  *(undefined *)(param_1 + 0xe9ac8) = 0;
  return;
}


