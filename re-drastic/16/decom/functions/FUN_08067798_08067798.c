/*
 * Ghidra decompilation
 *
 * Function : FUN_08067798
 * Address  : 08067798
 * Program  : drastic16
 */


undefined4 FUN_08067798(int param_1,undefined4 param_2)

{
  undefined4 *__ptr;
  FILE *__s;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  char acStack_418 [1028];
  
  sprintf(acStack_418,"%s%cconfig%c%s",param_1 + 0x82030,0x2f,0x2f,param_2);
  __ptr = (undefined4 *)malloc(0x4000);
  printf("Saving directory config to file named %s\n",acStack_418);
  __s = fopen(acStack_418,"wb");
  *__ptr = 0x32435344;
  __ptr[1] = 2;
  __ptr[2] = uStack_420;
  __ptr[3] = uStack_41c;
  memcpy(__ptr + 4,(void *)(param_1 + 0x8135c),0x400);
  __ptr[0x104] = *(undefined4 *)(param_1 + 0x8175c);
  fwrite(__ptr,0x414,1,__s);
  fclose(__s);
  free(__ptr);
  return 0;
}


