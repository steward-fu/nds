/*
 * Ghidra decompilation
 *
 * Function : input_log_playback
 * Address  : 00188ef0
 * Program  : drastic64
 */


void input_log_playback(void *param_1,char *param_2)

{
  uint uVar1;
  FILE *__stream;
  long lVar2;
  size_t sVar3;
  
  __stream = fopen(param_2,"rb");
  if (__stream == (FILE *)0x0) {
    __printf_chk(1,"Couldn\'t open %s for input playback.\n",param_2);
    return;
  }
  fseek(__stream,0,2);
  lVar2 = ftell(__stream);
  fseek(__stream,0,0);
  uVar1 = (uint)lVar2;
  if (0x7ffce < (uint)lVar2) {
    uVar1 = 0x7ffce;
  }
  sVar3 = fread(param_1,(ulong)uVar1,1,__stream);
  if (sVar3 != 1) {
    puts("ERROR: Couldn\'t read back from capture buffer.");
  }
  fclose(__stream);
  __printf_chk(1,"Playing back input from %s (%d input events).\n",param_2,(ulong)uVar1 / 10);
  *(undefined4 *)((long)param_1 + (ulong)uVar1) = 0;
  *(undefined *)((long)param_1 + 0x80050) = 2;
  return;
}


