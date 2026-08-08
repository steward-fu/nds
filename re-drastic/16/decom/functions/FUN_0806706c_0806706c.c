/*
 * Ghidra decompilation
 *
 * Function : FUN_0806706c
 * Address  : 0806706c
 * Program  : drastic16
 */


undefined4 FUN_0806706c(int param_1,undefined4 param_2)

{
  FILE *__stream;
  int iVar1;
  undefined4 uVar2;
  char acStack_430 [4];
  uint local_42c;
  undefined auStack_428 [8];
  char acStack_420 [1028];
  
  sprintf(acStack_420,"%s%cconfig%c%s",param_1 + 0x82030,0x2f,0x2f,param_2);
  printf("Loading config file %s\n",acStack_420);
  __stream = fopen(acStack_420,"rb");
  if (__stream == (FILE *)0x0) {
    printf("Config file %s does not exist.\n",acStack_420);
    uVar2 = 0xffffffff;
  }
  else {
    fread(acStack_430,4,1,__stream);
    fread(&local_42c,4,1,__stream);
    fread(auStack_428,8,1,__stream);
    iVar1 = strncmp(acStack_430,"DSCF",4);
    if ((iVar1 != 0) || (7 < local_42c)) {
      puts("ERROR: Config file could not be loaded.");
      fclose(__stream);
      return 0xffffffff;
    }
    fread((void *)(param_1 + 0x81760),4,1,__stream);
    fread((void *)(param_1 + 0x81764),4,1,__stream);
    fread((void *)(param_1 + 0x81768),4,1,__stream);
    fread((void *)(param_1 + 0x8176c),4,1,__stream);
    fread((void *)(param_1 + 0x81770),4,1,__stream);
    fread((void *)(param_1 + 0x81774),4,1,__stream);
    fread((void *)(param_1 + 0x8177c),4,1,__stream);
    fread((void *)(param_1 + 0x81780),4,1,__stream);
    fread((void *)(param_1 + 0x81784),4,1,__stream);
    if (1 < local_42c) {
      fread((void *)(param_1 + 0x81788),4,1,__stream);
      fread((void *)(param_1 + 0x8178c),4,1,__stream);
      fread((void *)(param_1 + 0x81790),4,1,__stream);
      fread((void *)(param_1 + 0x81794),4,1,__stream);
      if (2 < local_42c) {
        fread((void *)(param_1 + 0x81320),0x2c,1,__stream);
        fread((void *)(param_1 + 0x8134c),4,1,__stream);
        fread((void *)(param_1 + 0x81350),4,1,__stream);
        fread((void *)(param_1 + 0x81354),4,1,__stream);
        fread((void *)(param_1 + 0x81358),4,1,__stream);
        fread((void *)(param_1 + 0x81798),4,1,__stream);
        if (3 < local_42c) {
          fread((void *)(param_1 + 0x8179c),4,1,__stream);
          fread((void *)(param_1 + 0x817a0),4,1,__stream);
          fread((void *)(param_1 + 0x817a8),4,1,__stream);
          if ((4 < local_42c) && (fread((void *)(param_1 + 0x817b4),4,1,__stream), 5 < local_42c)) {
            fread((void *)(param_1 + 0x817bc),4,1,__stream);
            fread((void *)(param_1 + 0x817c0),4,1,__stream);
            if (6 < local_42c) {
              fread((void *)(param_1 + 0x817c4),4,1,__stream);
              fread((void *)(param_1 + 0x817b8),4,1,__stream);
            }
          }
        }
      }
    }
    fclose(__stream);
    FUN_0807a0a8(*(undefined4 *)(param_1 + 0x8176c));
    FUN_0807a090(*(undefined4 *)(param_1 + 0x81770));
    FUN_0807a0c0(*(undefined4 *)(param_1 + 0x81774));
    uVar2 = 0;
  }
  return uVar2;
}


