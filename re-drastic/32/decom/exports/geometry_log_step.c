/*
 * Ghidra decompilation
 *
 * Function : geometry_log_step
 * Address  : 0807e95c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void geometry_log_step(geometry_struct *geometry)

{
  u8 uVar1;
  int iVar2;
  FILE *pFVar3;
  char *pcVar4;
  memory_struct *pmVar5;
  memory_struct *memory;
  u32 _param_val;
  char current_path [1024];
  
  iVar2 = __stack_chk_guard;
  uVar1 = (geometry->log).mode;
  if (uVar1 == '\x01') {
    pFVar3 = fopen("geometry_log_commands.bin","wb");
    (geometry->log).commands = (FILE *)pFVar3;
    pFVar3 = fopen("geometry_log_parameters.bin","wb");
    (geometry->log).parameters = (FILE *)pFVar3;
    pFVar3 = fopen("geometry_log_vram.bin","wb");
    (geometry->log).vram = (FILE *)pFVar3;
    pFVar3 = fopen("geometry_log_video_io.bin","wb");
    (geometry->log).io = (FILE *)pFVar3;
    pcVar4 = getcwd(current_path,0x400);
    if (pcVar4 != (char *)0x0) {
      __printf_chk(1,"Starting logging (%s).\n",current_path);
    }
    _param_val = 0;
    fputc(0x10,(FILE *)(geometry->log).commands);
    fwrite(&_param_val,4,1,(FILE *)(geometry->log).parameters);
    fputc(0x16,(FILE *)(geometry->log).commands);
    fwrite(geometry->projection_matrix,0x40,1,(FILE *)(geometry->log).parameters);
    _param_val = 1;
    fputc(0x10,(FILE *)(geometry->log).commands);
    fwrite(&_param_val,4,1,(FILE *)(geometry->log).parameters);
    fputc(0x16,(FILE *)(geometry->log).commands);
    fwrite(geometry->position_matrix,0x40,1,(FILE *)(geometry->log).parameters);
    _param_val = 2;
    fputc(0x10,(FILE *)(geometry->log).commands);
    fwrite(&_param_val,4,1,(FILE *)(geometry->log).parameters);
    fputc(0x16,(FILE *)(geometry->log).commands);
    fwrite(geometry->direction_matrix,0x40,1,(FILE *)(geometry->log).parameters);
    _param_val = 3;
    fputc(0x10,(FILE *)(geometry->log).commands);
    fwrite(&_param_val,4,1,(FILE *)(geometry->log).parameters);
    fputc(0x16,(FILE *)(geometry->log).commands);
    fwrite(geometry->texture_matrix,0x40,1,(FILE *)(geometry->log).parameters);
    _param_val = (u32)geometry->matrix_mode;
    fputc(0x10,(FILE *)(geometry->log).commands);
    fwrite(&_param_val,4,1,(FILE *)(geometry->log).parameters);
    (geometry->log).mode = '\x02';
  }
  else if (uVar1 == '\x02') {
    pmVar5 = geometry->texture_cache->video->memory;
    puts("frame done, logging VRAM and I/O");
    fwrite(pmVar5->vram_a,0x20000,1,(FILE *)(geometry->log).vram);
    fwrite(pmVar5->vram_b,0x20000,1,(FILE *)(geometry->log).vram);
    fwrite(pmVar5->vram_c,0x20000,1,(FILE *)(geometry->log).vram);
    fwrite(pmVar5->vram_d,0x20000,1,(FILE *)(geometry->log).vram);
    fwrite(pmVar5->vram_e,0x10000,1,(FILE *)(geometry->log).vram);
    fwrite(pmVar5->vram_f,0x4000,1,(FILE *)(geometry->log).vram);
    fwrite(pmVar5->vram_g,0x4000,1,(FILE *)(geometry->log).vram);
    fwrite(pmVar5->vram_h,0x8000,1,(FILE *)(geometry->log).vram);
    fwrite(pmVar5->vram_i,0x4000,1,(FILE *)(geometry->log).vram);
    fwrite(pmVar5->arm9_io_registers,0x8000,1,(FILE *)(geometry->log).io);
    fclose((FILE *)(geometry->log).commands);
    fclose((FILE *)(geometry->log).parameters);
    fclose((FILE *)(geometry->log).vram);
    fclose((FILE *)(geometry->log).io);
    (geometry->log).mode = '\0';
  }
  if (iVar2 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


