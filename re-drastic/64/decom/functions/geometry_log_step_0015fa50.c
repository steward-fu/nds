/*
 * Ghidra decompilation
 *
 * Function : geometry_log_step
 * Address  : 0015fa50
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void geometry_log_step(long param_1)

{
  char cVar1;
  FILE *pFVar2;
  char *pcVar3;
  long lVar4;
  uint local_40c;
  char acStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = *(char *)((long)&__DT_SYMTAB[0x104].st_size + param_1);
  if (cVar1 == '\x01') {
    pFVar2 = fopen("geometry_log_commands.bin","wb");
    *(FILE **)((long)&__DT_SYMTAB[0x103].st_value + param_1) = pFVar2;
    pFVar2 = fopen("geometry_log_parameters.bin","wb");
    *(FILE **)((long)&__DT_SYMTAB[0x103].st_size + param_1) = pFVar2;
    pFVar2 = fopen("geometry_log_vram.bin","wb");
    *(FILE **)((long)&__DT_SYMTAB[0x104].st_name + param_1) = pFVar2;
    pFVar2 = fopen("geometry_log_video_io.bin","wb");
    *(FILE **)((long)&__DT_SYMTAB[0x104].st_value + param_1) = pFVar2;
    pcVar3 = getcwd(acStack_408,0x400);
    if (pcVar3 != (char *)0x0) {
      __printf_chk(1,"Starting logging (%s).\n",acStack_408);
    }
    local_40c = 0;
    fputc(0x10,*(FILE **)((long)&__DT_SYMTAB[0x103].st_value + param_1));
    fwrite(&local_40c,4,1,*(FILE **)((long)&__DT_SYMTAB[0x103].st_size + param_1));
    fputc(0x16,*(FILE **)((long)&__DT_SYMTAB[0x103].st_value + param_1));
    fwrite((void *)(param_1 + 0x9824),0x40,1,*(FILE **)((long)&__DT_SYMTAB[0x103].st_size + param_1)
          );
    local_40c = 1;
    fputc(0x10,*(FILE **)((long)&__DT_SYMTAB[0x103].st_value + param_1));
    fwrite(&local_40c,4,1,*(FILE **)((long)&__DT_SYMTAB[0x103].st_size + param_1));
    fputc(0x16,*(FILE **)((long)&__DT_SYMTAB[0x103].st_value + param_1));
    fwrite(*(void **)(param_1 + 0x9a58),0x40,1,
           *(FILE **)((long)&__DT_SYMTAB[0x103].st_size + param_1));
    local_40c = 2;
    fputc(0x10,*(FILE **)((long)&__DT_SYMTAB[0x103].st_value + param_1));
    fwrite(&local_40c,4,1,*(FILE **)((long)&__DT_SYMTAB[0x103].st_size + param_1));
    fputc(0x16,*(FILE **)((long)&__DT_SYMTAB[0x103].st_value + param_1));
    fwrite(*(void **)(param_1 + 0x9a60),0x40,1,
           *(FILE **)((long)&__DT_SYMTAB[0x103].st_size + param_1));
    local_40c = 3;
    fputc(0x10,*(FILE **)((long)&__DT_SYMTAB[0x103].st_value + param_1));
    fwrite(&local_40c,4,1,*(FILE **)((long)&__DT_SYMTAB[0x103].st_size + param_1));
    fputc(0x16,*(FILE **)((long)&__DT_SYMTAB[0x103].st_value + param_1));
    fwrite((void *)(param_1 + 0x9864),0x40,1,*(FILE **)((long)&__DT_SYMTAB[0x103].st_size + param_1)
          );
    local_40c = (uint)*(byte *)(param_1 + 0x9ac2);
    fputc(0x10,*(FILE **)((long)&__DT_SYMTAB[0x103].st_value + param_1));
    fwrite(&local_40c,4,1,*(FILE **)((long)&__DT_SYMTAB[0x103].st_size + param_1));
    *(undefined *)((long)&__DT_SYMTAB[0x104].st_size + param_1) = 2;
  }
  else if (cVar1 == '\x02') {
    lVar4 = ***(long ***)(param_1 + 0x9a38);
    puts("frame done, logging VRAM and I/O");
    fwrite(*(void **)(lVar4 + 0x15020),0x20000,1,
           *(FILE **)((long)&__DT_SYMTAB[0x104].st_name + param_1));
    fwrite(*(void **)(lVar4 + 0x15028),0x20000,1,
           *(FILE **)((long)&__DT_SYMTAB[0x104].st_name + param_1));
    fwrite(*(void **)(lVar4 + 0x15030),0x20000,1,
           *(FILE **)((long)&__DT_SYMTAB[0x104].st_name + param_1));
    fwrite(*(void **)(lVar4 + 0x15038),0x20000,1,
           *(FILE **)((long)&__DT_SYMTAB[0x104].st_name + param_1));
    fwrite(*(void **)(lVar4 + 0x15040),0x10000,1,
           *(FILE **)((long)&__DT_SYMTAB[0x104].st_name + param_1));
    fwrite(*(void **)(lVar4 + 0x15048),0x4000,1,
           *(FILE **)((long)&__DT_SYMTAB[0x104].st_name + param_1));
    fwrite(*(void **)(lVar4 + 0x15050),0x4000,1,
           *(FILE **)((long)&__DT_SYMTAB[0x104].st_name + param_1));
    fwrite(*(void **)(lVar4 + 0x15058),0x8000,1,
           *(FILE **)((long)&__DT_SYMTAB[0x104].st_name + param_1));
    fwrite(*(void **)(lVar4 + 0x15060),0x4000,1,
           *(FILE **)((long)&__DT_SYMTAB[0x104].st_name + param_1));
    fwrite((void *)(lVar4 + 0x1b070),0x8000,1,
           *(FILE **)((long)&__DT_SYMTAB[0x104].st_value + param_1));
    fclose(*(FILE **)((long)&__DT_SYMTAB[0x103].st_value + param_1));
    fclose(*(FILE **)((long)&__DT_SYMTAB[0x103].st_size + param_1));
    fclose(*(FILE **)((long)&__DT_SYMTAB[0x104].st_name + param_1));
    fclose(*(FILE **)((long)&__DT_SYMTAB[0x104].st_value + param_1));
    *(undefined *)((long)&__DT_SYMTAB[0x104].st_size + param_1) = 0;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
}


