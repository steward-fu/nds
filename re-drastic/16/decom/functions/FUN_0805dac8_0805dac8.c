/*
 * Ghidra decompilation
 *
 * Function : FUN_0805dac8
 * Address  : 0805dac8
 * Program  : drastic16
 */


void FUN_0805dac8(char *param_1,int param_2,void *param_3,uint param_4,char *param_5)

{
  FILE *__stream;
  size_t sVar1;
  long __off;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  char cVar5;
  
  *(int *)(param_1 + 0x400) = param_2;
  *(void **)(param_1 + 0x40c) = param_3;
  *(uint *)(param_1 + 0x408) = param_4 - 1;
  cVar5 = '\0';
  param_1[0x41e] = '\0';
  if (param_2 == 1) {
LAB_0805dc58:
    param_1[0x41c] = '\x03';
  }
  else {
    if (param_2 != 0) {
      if (param_2 != 2) goto LAB_0805db08;
      if (0x10000 < param_4) goto LAB_0805dc58;
      if (0x200 < param_4) {
        param_1[0x41c] = '\x02';
        goto LAB_0805db08;
      }
      cVar5 = '\x01';
    }
    param_1[0x41c] = cVar5;
  }
LAB_0805db08:
  if (param_5 == (char *)0x0) {
    *param_1 = '\0';
  }
  else {
    __stream = fopen(param_5,"rb");
    if (__stream == (FILE *)0x0) {
      puts("Failed to load backup file.");
      memset(param_3,param_4,0xff);
    }
    else {
      sVar1 = fread(param_3,param_4,1,__stream);
      if (sVar1 != 1) {
        puts(" Failed to load entire size.");
      }
      __off = ftell(__stream);
      fseek(__stream,0,2);
      uVar2 = ftell(__stream);
      fseek(__stream,__off,0);
      fclose(__stream);
      printf("Loading backup file %s, %d bytes\n",param_5,uVar2);
      if (uVar2 < param_4) {
        printf(" Backup file less than full size (should be %d, loaded %d).\n",param_4,uVar2);
        uVar4 = uVar2 - 0x400 & ~((int)(uVar2 - 0x400) >> 0x1f);
        pvVar3 = memmem((void *)((int)param_3 + uVar4),uVar2 - uVar4,
                        s__<__Snip_above_here_to_create_a_r_080fa740,0x52);
        if (pvVar3 != (void *)0x0) {
          uVar2 = (int)pvVar3 - (int)param_3;
          printf(" Found DeSmuME footer at position %d. Truncating it.\n",uVar2);
        }
        memset((void *)((int)param_3 + uVar2),param_4 - uVar2,0xff);
      }
    }
    strncpy(param_1,param_5,0x3ff);
    param_1[0x3ff] = '\0';
  }
  param_1[0x41b] = '\0';
  return;
}


