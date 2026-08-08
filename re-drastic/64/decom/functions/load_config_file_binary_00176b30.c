/*
 * Ghidra decompilation
 *
 * Function : load_config_file_binary
 * Address  : 00176b30
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 load_config_file_binary(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  void *__s;
  undefined4 uVar2;
  ushort uVar3;
  FILE *__stream;
  ushort *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  int local_438;
  uint local_434;
  undefined auStack_430 [8];
  char acStack_428 [1056];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = *(undefined4 *)(param_1 + 0x85a20);
  __sprintf_chk(acStack_428,1,0x420,"%s%cconfig%c%s",param_1 + 0x8ab80,0x2f,0x2f,param_2);
  __printf_chk(1,"Loading binary config file %s\n",acStack_428);
  __stream = fopen(acStack_428,"rb");
  if (__stream == (FILE *)0x0) {
    uVar6 = 0xffffffff;
    __printf_chk(1,"Config file %s does not exist.\n",acStack_428);
  }
  else {
    fread(&local_438,4,1,__stream);
    fread(&local_434,4,1,__stream);
    fread(auStack_430,8,1,__stream);
    if ((local_438 == 0x46435344) && (uVar6 = 0, local_434 < 9)) {
      fread((void *)(param_1 + 0x859e8),4,1,__stream);
      fread((void *)(param_1 + 0x859ec),4,1,__stream);
      fread((void *)(param_1 + 0x859f0),4,1,__stream);
      fread((void *)(param_1 + 0x859f4),4,1,__stream);
      fread((void *)(param_1 + 0x859fc),4,1,__stream);
      fread((void *)(param_1 + 0x85a04),4,1,__stream);
      fread((void *)(param_1 + 0x85a08),4,1,__stream);
      fread((void *)(param_1 + 0x85a0c),4,1,__stream);
      if (1 < local_434) {
        fread((void *)(param_1 + 0x85a10),4,1,__stream);
        fread((void *)(param_1 + 0x85a14),4,1,__stream);
        fread((void *)(param_1 + 0x85a18),4,1,__stream);
        fread((void *)(param_1 + 0x85a1c),4,1,__stream);
        if (2 < local_434) {
          fread((void *)(param_1 + 0x855a8),0x2c,1,__stream);
          fread((void *)(param_1 + 0x855d4),4,1,__stream);
          fread((void *)(param_1 + 0x855d8),4,1,__stream);
          fread((void *)(param_1 + 0x855dc),4,1,__stream);
          fread((void *)(param_1 + 0x855e0),4,1,__stream);
          fread((void *)(param_1 + 0x85a20),4,1,__stream);
          if (3 < local_434) {
            fread((void *)(param_1 + 0x85a24),4,1,__stream);
            fread((void *)(param_1 + 0x85a2c),4,1,__stream);
            fread((void *)(param_1 + 0x85a34),4,1,__stream);
            if ((4 < local_434) && (fread((void *)(param_1 + 0x85a40),4,1,__stream), 5 < local_434))
            {
              fread((void *)(param_1 + 0x85a64),4,1,__stream);
              fread((void *)(param_1 + 0x85a68),8,1,__stream);
              if (6 < local_434) {
                fread((void *)(param_1 + 0x85a70),4,1,__stream);
                fread((void *)(param_1 + 0x85a44),4,1,__stream);
                if (7 < local_434) {
                  fread((void *)(param_1 + 0x85a48),4,1,__stream);
                }
              }
            }
          }
        }
      }
      fclose(__stream);
      __s = (void *)(param_1 + 0x86318);
      set_screen_orientation(*(undefined4 *)(param_1 + 0x859f4));
      set_screen_swap(*(undefined4 *)(param_1 + 0x859fc));
      memset(__s,0,0x4000);
      puVar4 = (ushort *)(param_1 + 0x862c6);
      uVar5 = 0;
      do {
        uVar3 = puVar4[-0x29];
        if (uVar3 != 0xffff) {
          *(ulong *)((long)__s + (ulong)uVar3 * 8) =
               *(ulong *)((long)__s + (ulong)uVar3 * 8) | 1L << (uVar5 & 0x3f);
        }
        uVar3 = *puVar4;
        if (uVar3 != 0xffff) {
          *(ulong *)((long)__s + (ulong)uVar3 * 8) =
               *(ulong *)((long)__s + (ulong)uVar3 * 8) | 1L << (uVar5 & 0x3f);
        }
        uVar1 = (int)uVar5 + 1;
        uVar5 = (ulong)uVar1;
        puVar4 = puVar4 + 1;
      } while (uVar1 != 0x29);
      if (param_3 != 0) {
        *(undefined4 *)(param_1 + 0x85a20) = uVar2;
      }
    }
    else {
      puts("ERROR: Config file could not be loaded.");
      uVar6 = 0xffffffff;
      fclose(__stream);
    }
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return uVar6;
}


