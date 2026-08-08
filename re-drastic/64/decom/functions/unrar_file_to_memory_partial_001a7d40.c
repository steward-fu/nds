/*
 * Ghidra decompilation
 *
 * Function : unrar_file_to_memory_partial
 * Address  : 001a7d40
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
unrar_file_to_memory_partial
          (undefined8 param_1,char *param_2,uint *param_3,long param_4,int param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  uVar3 = RAROpenArchiveEx(0,&local_38f8);
  if (local_38e4 == 0) {
    if ((local_38d0 & 0x1c500000000) == 0) {
      local_101c = 0;
      while (iVar1 = RARReadHeaderEx(uVar3,auStack_3848), iVar1 == 0) {
        pcVar4 = strrchr(acStack_2448,0x2e);
        if ((pcVar4 != (char *)0x0) && (iVar1 = strcasecmp(pcVar4 + 1,param_2), iVar1 == 0)) {
          *param_3 = local_103c;
          uVar5 = 0;
          if (param_4 == 0 || param_5 == 0) goto LAB_001a7e54;
          if ((uint)(param_5 + param_6) <= local_103c) {
            DAT_004ec428 = 0;
            unrar_userdata = param_4;
            DAT_004ec420 = param_5;
            DAT_004ec424 = param_6;
            RARSetProcessDataProc(uVar3,unrar_process_data_partial);
            uVar2 = RARProcessFile(uVar3,1,0,0);
            if (DAT_004ec420 != 0) {
              uVar5 = 0xffffffff;
              __printf_chk(1,"ERROR: %d/%d bytes remaining. %d\n",DAT_004ec420,param_5,uVar2);
            }
            goto LAB_001a7e54;
          }
          break;
        }
        RARProcessFile(uVar3,0,0,0);
      }
      uVar5 = 0xffffffff;
LAB_001a7e54:
      RARCloseArchive(uVar3);
    }
    else {
      RARCloseArchive();
      uVar5 = 0xffffffff;
      puts("ERROR: RAR file not supported");
    }
  }
  else {
    RARCloseArchive();
    uVar5 = 0xffffffff;
    puts("ERROR: could not open RAR");
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


