/*
 * Ghidra decompilation
 *
 * Function : input_log_playback
 * Address  : 080a6d40
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void input_log_playback(input_struct *input,char *file_name)

{
  FILE *__stream;
  FILE *log_file;
  uint __size;
  u32 log_size;
  
  __stream = fopen(file_name,"rb");
  if (__stream != (FILE *)0x0) {
    fseek(__stream,0,2);
    __size = ftell(__stream);
    fseek(__stream,0,0);
    if (0x7ffcd < __size) {
      __size = 0x7ffce;
    }
    fread(input,__size,1,__stream);
    fclose(__stream);
    __printf_chk(1,"Playing back input from %s (%d input events).\n",file_name,__size / 10);
    *(undefined4 *)(input->capture_buffer + __size) = 0;
    input->log_mode = '\x02';
    return;
  }
  __printf_chk(1,"Couldn\'t open %s for input playback.\n",file_name);
  return;
}


