/*
 * Ghidra decompilation
 *
 * Function : save_state_thread_function
 * Address  : 08094f8c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void * save_state_thread_function(void *arg)

{
  int iVar1;
  savestate_thread_data_struct *savestate_thread_data;
  void *__ptr;
  u8 *compressed_savestate_buffer;
  u32 error_code;
  int iVar2;
  u32 uncompressed_length;
  void *__ptr_00;
  u8 *savestate_buffer;
  u32 compressed_length;
  char path [1024];
  char new_path [1024];
  
  iVar1 = __stack_chk_guard;
  __ptr_00 = *(void **)((int)arg + 0x818);
  if ((*(uint *)((int)arg + 0x81c) & 1) == 0) {
    fwrite(*(void **)((int)arg + 0x810),
           *(int *)((int)arg + 0x814) - (int)*(void **)((int)arg + 0x810),1,
           *(FILE **)((int)arg + 0x804));
  }
  else {
    compressed_length = compressBound(0x680000);
    iVar2 = (*(int *)((int)arg + 0x814) - *(int *)((int)arg + 0x810)) + -0x40;
    __ptr = malloc(compressed_length);
    compressed_savestate_buffer =
         (u8 *)compress(__ptr,&compressed_length,(int)__ptr_00 + 0x40,iVar2);
    if (compressed_savestate_buffer != (u8 *)0x0) {
      puts(" ERROR: Couldn\'t compress savestate.");
      free(__ptr);
      fclose(*(FILE **)((int)arg + 0x804));
      free(__ptr_00);
      *(undefined4 *)((int)arg + 0x820) = 0;
      goto LAB_0809512c;
    }
    fwrite(__ptr_00,0x40,1,*(FILE **)((int)arg + 0x804));
    fwrite(&compressed_length,4,1,*(FILE **)((int)arg + 0x804));
    __printf_chk(1," Compressed savestate from %d to %d bytes.\n",iVar2,compressed_length);
    fwrite(__ptr,compressed_length,1,*(FILE **)((int)arg + 0x804));
    free(__ptr);
  }
  fclose(*(FILE **)((int)arg + 0x804));
  free(__ptr_00);
  __sprintf_chk(path,1,0x400,"%s%c%s",arg,0x2f,"_savestate_temp.dss");
  __sprintf_chk(new_path,1,0x400,"%s%c%s",arg,0x2f,(int)arg + 0x400);
  __printf_chk(1,"Renaming savestate file to %s.\n",new_path);
  iVar2 = rename(path,new_path);
  if (iVar2 != 0) {
    remove(new_path);
    rename(path,new_path);
  }
  *(undefined4 *)((int)arg + 0x820) = 0;
LAB_0809512c:
  if (iVar1 == __stack_chk_guard) {
    return (void *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


