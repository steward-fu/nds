/*
 * Ghidra decompilation
 *
 * Function : FUN_08078318
 * Address  : 08078318
 * Program  : drastic16
 */


void FUN_08078318(void *param_1,char *param_2)

{
  FILE *__stream;
  uint __size;
  
  __stream = fopen(param_2,"rb");
  if (__stream != (FILE *)0x0) {
    fseek(__stream,0,2);
    __size = ftell(__stream);
    fseek(__stream,0,0);
    if (0x7ffcd < __size) {
      __size = 0x7ffce;
    }
    fread(param_1,__size,1,__stream);
    fclose(__stream);
    printf("Playing back input from %s (%d input events).\n",param_2,__size / 10,
           __size * -0x33333333);
    *(undefined4 *)((int)param_1 + __size) = 0;
    *(undefined *)((int)param_1 + 0x8002c) = 2;
    return;
  }
  printf("Couldn\'t open %s for input playback.\n",param_2);
  return;
}


