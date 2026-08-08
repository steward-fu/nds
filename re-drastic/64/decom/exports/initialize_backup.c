/*
 * Ghidra decompilation
 *
 * Function : initialize_backup
 * Address  : 00172530
 * Program  : drastic64
 */


void initialize_backup(void *param_1,int param_2,void *param_3,uint param_4,char *param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined uVar4;
  FILE *__stream;
  size_t sVar5;
  long __off;
  ulong uVar6;
  void *pvVar7;
  uint uVar8;
  
  *(int *)((long)param_1 + 0x2400) = param_2;
  *(uint *)((long)param_1 + 0x2408) = param_4 - 1;
  *(void **)((long)param_1 + 0x2410) = param_3;
  *(undefined *)((long)param_1 + 0x2426) = 0;
  *(undefined4 *)((long)param_1 + 0x240c) = 0;
  if (param_2 != 1) {
    if (param_2 != 2) {
      if (param_2 == 0) {
        *(undefined *)((long)param_1 + 0x2424) = 0;
      }
      goto joined_r0x0017271c;
    }
    if (param_4 < 0x10001) {
      uVar4 = 2;
      if (param_4 < 0x201) {
        uVar4 = 1;
      }
      *(undefined *)((long)param_1 + 0x2424) = uVar4;
      goto joined_r0x0017271c;
    }
  }
  *(undefined *)((long)param_1 + 0x2424) = 3;
joined_r0x0017271c:
  if (param_5 == (char *)0x0) {
    *(char *)((long)param_1 + 0x2000) = '\0';
    *(undefined *)((long)param_1 + 0x2423) = 0;
    return;
  }
  __stream = fopen(param_5,"rb");
  *(undefined *)((long)param_1 + 0x2427) = 0;
  if (__stream == (FILE *)0x0) {
    puts("Failed to load backup file.");
    memset(param_3,param_4,0xff);
    memset(param_1,0xff,(ulong)(param_4 >> 0xc));
  }
  else {
    sVar5 = fread(param_3,(ulong)param_4,1,__stream);
    if (sVar5 != 1) {
      puts(" Failed to load entire size.");
    }
    __off = ftell(__stream);
    fseek(__stream,0,2);
    uVar6 = ftell(__stream);
    fseek(__stream,__off,0);
    fclose(__stream);
    __printf_chk(1,"Loading backup file %s, %d bytes\n",param_5,uVar6 & 0xffffffff);
    uVar8 = (uint)uVar6;
    if (param_4 + 0x7a != uVar8) {
      *(uint *)((long)param_1 + 0x240c) = param_4 + 0x7a;
    }
    uVar1 = param_4 + 0x3fff >> 0xe;
    if (uVar8 < param_4) {
      iVar2 = uVar8 - 0x400;
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      pvVar7 = memmem((void *)((long)param_3 + (long)iVar2),(ulong)(uVar8 - iVar2),
                      desmume_footer_str_11260,0x52);
      if (pvVar7 != (void *)0x0) {
        uVar6 = (long)pvVar7 - (long)param_3;
        __printf_chk(1," Found DeSmuME footer at position %d. Truncating.\n");
      }
      uVar3 = (uVar6 & 0xffffffff) >> 0xe;
      __printf_chk(1," Backup file less than full size (should be %d, loaded %d).\n",(ulong)param_4,
                   uVar6 & 0xffffffff);
      memset((void *)((long)param_3 + (uVar6 & 0xffffffff)),param_4 - (int)uVar6,0xff);
      memset(param_1,0,uVar3 << 2);
      memset((void *)((long)param_1 + uVar3 * 4),0xff,(ulong)((uVar1 - (int)uVar3) * 4));
    }
    else {
      memset(param_1,0,(ulong)uVar1);
    }
  }
  strncpy((char *)((long)param_1 + 0x2000),param_5,0x3ff);
  *(undefined *)((long)param_1 + 0x23ff) = 0;
  *(undefined *)((long)param_1 + 0x2423) = 0;
  return;
}


