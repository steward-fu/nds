/*
 * Ghidra decompilation
 *
 * Function : load_system_file
 * Address  : 08006638
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 load_system_file(system_struct *system,char *file_name,u8 *buffer,u32 size)

{
  int iVar1;
  FILE *__stream;
  FILE *load_file;
  long __off;
  size_t sVar2;
  u32 file_size;
  s32 sVar3;
  char path [1024];
  
  iVar1 = __stack_chk_guard;
  __sprintf_chk(path,1,0x400,"%s%csystem%c%s",system->root_path,0x2f,0x2f,file_name);
  __stream = fopen(path,"rb");
  if (__stream == (FILE *)0x0) {
    __printf_chk(1,"***Failed to load system file %s.\n",file_name);
    sVar3 = -1;
  }
  else {
    __off = ftell(__stream);
    fseek(__stream,0,2);
    sVar2 = ftell(__stream);
    fseek(__stream,__off,0);
    if (sVar2 == size) {
      sVar2 = fread(buffer,sVar2,1,__stream);
      if (sVar2 == 1) {
        sVar3 = 0;
      }
      else {
        __printf_chk(1,"***System file %s failed to load.\n",file_name);
        sVar3 = -1;
      }
    }
    else {
      __printf_chk(1,"***System file %s is the wrong size (should be %d bytes, is %d)\n",file_name,
                   size,sVar2);
      sVar3 = -1;
    }
  }
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return sVar3;
}


