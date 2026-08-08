/*
 * Ghidra decompilation
 *
 * Function : spu_load_fake_microphone_data
 * Address  : 0016bb90
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void spu_load_fake_microphone_data(long param_1,char *param_2)

{
  FILE *__stream;
  ulong uVar1;
  size_t sVar2;
  long lVar3;
  undefined8 uVar4;
  void *__ptr;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_18;
  undefined4 local_14;
  short local_a;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __stream = fopen(param_2,"rb");
  if (__stream == (FILE *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    fseek(__stream,0,2);
    uVar1 = ftell(__stream);
    fseek(__stream,0,0);
    sVar2 = fread(&local_28,4,3,__stream);
    if (sVar2 == 3) {
      if (local_28 == 0x46464952) {
        if (local_24 == (int)uVar1 + -8) {
          if (local_20 == 0x45564157) {
            do {
              sVar2 = fread(&local_30,4,2,__stream);
              if (sVar2 != 2) {
                puts(" ERROR: Incomplete sub-chunk header.");
                goto LAB_0016bcd0;
              }
              if (local_30 == 0x20746d66) {
                if (local_2c != 0x10) {
                  puts(" ERROR: WAV fmt chunk is incorrectly sized.");
                  goto LAB_0016bcd0;
                }
                sVar2 = fread(&local_18,4,4,__stream);
                if (sVar2 != 4) {
                  puts(" ERROR: Could not read fmt data from WAV file.");
                  goto LAB_0016bcd0;
                }
                if (local_18 != 0x10001) {
                  __printf_chk(1," ERROR: WAV must be uncompressed PCM and mono (is %08x).\n");
                  goto LAB_0016bcd0;
                }
                if (local_a != 0x10) {
                  puts(" ERROR: WAV must be 16 bits per sample.");
                  goto LAB_0016bcd0;
                }
              }
              else {
                if (local_30 == 0x61746164) {
                  uVar1 = (ulong)local_2c;
                  __ptr = malloc(uVar1);
                  *(void **)(param_1 + 0x40d30) = __ptr;
                  sVar2 = fread(__ptr,uVar1,1,__stream);
                  if (sVar2 == 1) {
                    uVar4 = 0;
                    *(undefined4 *)(param_1 + 0x40d38) = local_14;
                    *(uint *)(param_1 + 0x40d3c) = local_2c >> 1;
                    goto LAB_0016bd7c;
                  }
                  puts(" ERROR: Could not read WAV data.");
                  free(*(void **)(param_1 + 0x40d30));
                  *(undefined8 *)(param_1 + 0x40d30) = 0;
                  goto LAB_0016bcd0;
                }
                fseek(__stream,(ulong)local_2c,1);
              }
              lVar3 = ftell(__stream);
            } while (lVar3 < (long)(uVar1 & 0xffffffff));
            puts("ERROR: Did not find data subchunk in WAV file.");
          }
          else {
            puts(" ERROR: WAV file does not have correct Format string.");
          }
        }
        else {
          __printf_chk(1," ERROR: WAV file does not have correct ChunkSize (%d should be %d)\n");
        }
      }
      else {
        puts(" ERROR: WAV file does not have correct ChunkID string.");
      }
    }
    else {
      __printf_chk(1," ERROR: Could not read WAV header from %s.\n",param_2);
    }
LAB_0016bcd0:
    fclose(__stream);
    uVar4 = 0xffffffff;
  }
LAB_0016bd7c:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4,local_8 - ___stack_chk_guard,0);
}


