/*
 * Ghidra decompilation
 *
 * Function : unrar_file
 * Address  : 001a7ab0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * unrar_file(undefined8 param_1,char *param_2,uint *param_3,char *param_4)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  FILE *__stream;
  void *__ptr;
  void *local_3900;
  undefined8 local_38f8;
  undefined8 local_38f0;
  undefined4 local_38e8;
  int local_38e4;
  undefined8 local_38e0;
  undefined8 uStack_38d8;
  ulong local_38d0;
  undefined8 uStack_38c8;
  undefined8 local_38c0;
  undefined8 uStack_38b8;
  undefined8 local_38b0;
  undefined8 uStack_38a8;
  undefined8 local_38a0;
  undefined8 uStack_3898;
  undefined8 local_3890;
  undefined8 uStack_3888;
  undefined8 local_3880;
  undefined8 uStack_3878;
  undefined8 local_3870;
  undefined8 uStack_3868;
  undefined8 local_3860;
  undefined8 uStack_3858;
  undefined8 local_3850;
  undefined auStack_3848 [5120];
  char acStack_2448 [5132];
  uint local_103c;
  undefined8 local_101c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *param_3 = 0;
  local_38f0 = 0;
  local_38e8 = 1;
  local_38e4 = 0;
  local_38e0 = 0;
  uStack_38d8 = 0;
  local_38d0 = 0;
  uStack_38c8 = 0;
  local_38c0 = 0;
  uStack_38b8 = 0;
  local_38b0 = 0;
  uStack_38a8 = 0;
  local_38a0 = 0;
  uStack_3898 = 0;
  local_3890 = 0;
  uStack_3888 = 0;
  local_3880 = 0;
  uStack_3878 = 0;
  local_3870 = 0;
  uStack_3868 = 0;
  local_3860 = 0;
  uStack_3858 = 0;
  local_3850 = 0;
  local_38f8 = param_1;
  uVar2 = RAROpenArchiveEx(&local_38f8);
  if (local_38e4 == 0) {
    if ((local_38d0 & 0x1c500000000) == 0) {
      local_101c = 0;
      while (iVar1 = RARReadHeaderEx(uVar2,auStack_3848), iVar1 == 0) {
        pcVar3 = strrchr(acStack_2448,0x2e);
        if ((pcVar3 != (char *)0x0) && (iVar1 = strcasecmp(pcVar3 + 1,param_2), iVar1 == 0)) {
          *param_3 = local_103c;
          g_current_unpack_size = (ulong)local_103c;
          g_current_unpack_done = 0;
          if (param_4 == (char *)0x0) {
            __ptr = malloc(g_current_unpack_size);
            local_3900 = __ptr;
            if (__ptr == (void *)0x0) {
              puts("ERROR: could not allocate memory for RAR extraction");
              goto LAB_001a7c20;
            }
            RARSetCallback(uVar2,unrar_callback_extract_buffer,&local_3900);
            iVar1 = RARProcessFile(uVar2,1,0,0);
            if (iVar1 != 0) {
              free(__ptr);
              __ptr = (void *)0x0;
              goto LAB_001a7c20;
            }
          }
          else {
            __stream = fopen64(param_4,"wb");
            RARSetCallback(uVar2,unrar_callback_extract_file,__stream);
            iVar1 = RARProcessFile(uVar2,1,0,0);
            if (iVar1 != 0) {
              puts("ERROR: could not extract RAR file");
              fclose(__stream);
              __ptr = (void *)0x0;
              goto LAB_001a7c20;
            }
            __ptr = (void *)0x1;
            fclose(__stream);
          }
          __printf_chk(1,"%s unrar\'ed\n",param_1);
          goto LAB_001a7c20;
        }
        RARProcessFile(uVar2,0,0,0);
      }
      __ptr = (void *)0x0;
LAB_001a7c20:
      RARCloseArchive(uVar2);
    }
    else {
      RARCloseArchive();
      __ptr = (void *)0x0;
      puts("ERROR: RAR file not supported");
    }
  }
  else {
    RARCloseArchive();
    __ptr = (void *)0x0;
    puts("ERROR: could not open RAR");
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


