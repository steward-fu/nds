/*
 * Ghidra decompilation
 *
 * Function : FUN_0806001c
 * Address  : 0806001c
 * Program  : drastic16
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0806001c(undefined4 *param_1,char *param_2,char *param_3,void *param_4,void *param_5)

{
  undefined4 *__ptr;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *__dest;
  FILE *local_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 *local_4f0;
  undefined4 *local_4ec;
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 local_4c8;
  uint local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  char acStack_4a8 [1156];
  
  __ptr = (undefined4 *)malloc(0x680000);
  sprintf(acStack_4a8,"%s%c%s",param_2,0x2f,"_savestate_temp.dss");
  printf("Saving state to %s.\n",acStack_4a8);
  local_4fc = fopen(acStack_4a8,"wb");
  local_4f0 = __ptr;
  local_4ec = __ptr;
  if (local_4fc == (FILE *)0x0) {
    printf("Error: could not open %s.\n",acStack_4a8);
    free(__ptr);
    uVar1 = 0xffffffff;
  }
  else {
    uVar2 = param_1[0x205e4];
    if (uVar2 != 0) {
      uVar2 = 1;
    }
    if ((param_1[0x205e5] != 0) && (param_4 != (void *)0x0 && param_5 != (void *)0x0)) {
      uVar2 = uVar2 | 2;
    }
    if ((param_1[0x205e8] != 0) && ((uint)param_1[0x397] < 0x80000)) {
      uVar2 = uVar2 | 0x10;
    }
    local_4ac = 0;
    local_4e8._0_1_ = 'D';
    local_4e8._1_1_ = 'r';
    local_4e8._2_1_ = 'a';
    local_4e8._3_1_ = 'S';
    uStack_4e4._0_1_ = 't';
    uStack_4e4._1_1_ = 'i';
    uStack_4e4._2_1_ = 'c';
    uStack_4e4._3_1_ = '-';
    uStack_4e0._0_1_ = 'S';
    uStack_4e0._1_1_ = 'a';
    uStack_4e0._2_1_ = 'v';
    uStack_4e0._3_1_ = 'e';
    uStack_4dc._0_1_ = 'S';
    uStack_4dc._1_1_ = 't';
    uStack_4dc._2_1_ = 'a';
    uStack_4dc._3_1_ = 't';
    uVar3 = uVar2 | (uint)*(byte *)((int)param_1 + 0x26a7f3e) << 2;
    uVar4 = uVar3 | 0x20;
    __dest = __ptr + 0x10;
    local_4d8._0_1_ = 'e';
    local_4d8._1_1_ = '-';
    local_4d8._2_1_ = '-';
    local_4d8._3_1_ = '-';
    uStack_4d4._0_1_ = '-';
    uStack_4d4._1_1_ = '-';
    uStack_4d4._2_1_ = '-';
    uStack_4d4._3_1_ = '-';
    uStack_4d0._0_1_ = '-';
    uStack_4d0._1_1_ = '-';
    uStack_4d0._2_1_ = '-';
    uStack_4d0._3_1_ = '-';
    uStack_4cc._0_1_ = '-';
    uStack_4cc._1_1_ = '-';
    uStack_4cc._2_1_ = '-';
    uStack_4cc._3_1_ = '-';
    local_4c0 = 0;
    local_4c8 = 0xc;
    local_4c4 = uVar4;
    local_4bc = __aeabi_uldivmod(*param_1,param_1[1],0x3c,0);
    local_4b4 = param_1[0x28d];
    local_4b0 = 0x2030000;
    *__ptr = local_4e8;
    __ptr[1] = uStack_4e4;
    __ptr[2] = uStack_4e0;
    __ptr[3] = uStack_4dc;
    __ptr[4] = local_4d8;
    __ptr[5] = uStack_4d4;
    __ptr[6] = uStack_4d0;
    __ptr[7] = uStack_4cc;
    __ptr[8] = 0xc;
    __ptr[9] = uVar4;
    __ptr[10] = local_4c0;
    __ptr[0xb] = local_4bc;
    __ptr[0xc] = local_4b8;
    __ptr[0xd] = local_4b4;
    __ptr[0xe] = 0x2030000;
    __ptr[0xf] = local_4ac;
    local_4ec = __dest;
    if ((uVar2 & 2) != 0) {
      memcpy(__dest,param_4,0x18000);
      local_4ec = local_4ec + 0x6000;
      memcpy(local_4ec,param_5,0x18000);
      local_4ec = local_4ec + 0x6000;
    }
    if ((uVar3 & 0x10) != 0) {
      FUN_0805dd4c(param_1 + 0x295,&local_4fc,0xc);
    }
    FUN_08006428(param_1,&local_4fc,0xc);
    if (DAT_081c4fb0 != 0) {
      puts("Can\'t savestate, busy saving old one, waiting..");
      while (DAT_081c4fb0 != 0) {
        usleep(1);
      }
    }
    DAT_081c4fb0 = 1;
    DAT_081c4f94 = local_4fc;
    DAT_081c4f98 = uStack_4f8;
    DAT_081c4f9c = uStack_4f4;
    DAT_081c4fa0 = local_4f0;
    DAT_081c4fa4 = local_4ec;
    DAT_081c4fa8 = __ptr;
    DAT_081c4fac = uVar4;
    strncpy(&DAT_081c4790,param_2,0x400);
    strncpy(&DAT_081c4b90,param_3,0x400);
    pthread_create((pthread_t *)&DAT_081c4f90,(pthread_attr_t *)0x0,(__start_routine *)&DAT_0805f858
                   ,&DAT_081c4790);
    uVar1 = 0;
  }
  return uVar1;
}


