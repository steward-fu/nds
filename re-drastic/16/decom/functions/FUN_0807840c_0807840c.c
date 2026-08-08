/*
 * Ghidra decompilation
 *
 * Function : FUN_0807840c
 * Address  : 0807840c
 * Program  : drastic16
 */


void FUN_0807840c(void *param_1)

{
  int iVar1;
  FILE *__stream;
  uint __size;
  stat sStack_470;
  char acStack_418 [1028];
  
  sprintf(acStack_418,"%s%cinput_record%c%s.ir",*(int *)((int)param_1 + 0x80004) + 0x81c30,0x2f,0x2f
          ,*(int *)((int)param_1 + 0x80004) + 0x82830);
  iVar1 = __xstat(3,acStack_418,&sStack_470);
  if (iVar1 == 0) {
    __stream = fopen(acStack_418,"rb");
    if (__stream == (FILE *)0x0) {
      printf("Couldn\'t open %s for input playback.\n",acStack_418);
    }
    else {
      fseek(__stream,0,2);
      __size = ftell(__stream);
      fseek(__stream,0,0);
      if (0x7ffcd < __size) {
        __size = 0x7ffce;
      }
      fread(param_1,__size,1,__stream);
      fclose(__stream);
      printf("Playing back input from %s (%d input events).\n",acStack_418,__size / 10,
             __size * -0x33333333);
      *(undefined4 *)((int)param_1 + __size) = 0;
      *(undefined *)((int)param_1 + 0x8002c) = 2;
    }
  }
  *(void **)((int)param_1 + 0x80000) = param_1;
  *(undefined4 *)((int)param_1 + 0x80008) = 0;
  *(undefined *)((int)param_1 + 0x80015) = 0;
  *(undefined4 *)((int)param_1 + 0x8000c) = 0;
  *(undefined4 *)((int)param_1 + 0x80010) = 0;
  *(undefined *)((int)param_1 + 0x80016) = 0;
  *(undefined *)((int)param_1 + 0x80014) = 0;
  FUN_08079e70();
  return;
}


