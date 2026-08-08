/*
 * Ghidra decompilation
 *
 * Function : save_state
 * Address  : 00174da0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void save_state(ulong *param_1,char *param_2,char *param_3,void *param_4,void *param_5)

{
  uint uVar1;
  undefined8 *__ptr;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  FILE *local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 *local_4d8;
  undefined8 *puStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined4 local_4a8;
  uint uStack_4a4;
  undefined4 local_4a0;
  undefined4 uStack_49c;
  undefined4 local_498;
  undefined4 local_494;
  undefined4 uStack_490;
  undefined4 local_48c;
  char acStack_488 [1152];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __ptr = (undefined8 *)malloc(0x680000);
  __sprintf_chk(acStack_488,1,0x480,"%s%c%s",param_2,0x2f,"_savestate_temp.dss");
  __printf_chk(1,"Saving state to %s.\n",acStack_488);
  local_4f0 = fopen(acStack_488,"wb");
  local_4d8 = __ptr;
  if (local_4f0 == (FILE *)0x0) {
    puStack_4d0 = __ptr;
    __printf_chk(1,"Error: could not open %s.\n",acStack_488);
    free(__ptr);
    uVar2 = 0xffffffff;
  }
  else {
    uVar5 = (uint)(*(int *)(param_1 + 0x10b43) != 0);
    if (*(int *)((long)param_1 + 0x85a1c) != 0) {
      uVar4 = (uint)(*(int *)(param_1 + 0x10b43) != 0);
      uVar5 = uVar4 | 2;
      if (param_4 == (void *)0x0 || param_5 == (void *)0x0) {
        uVar5 = uVar4;
      }
    }
    uVar4 = uVar5;
    if ((*(int *)((long)param_1 + 0x85a2c) != 0) &&
       (uVar4 = uVar5 | 0x10, 0x7ffff < *(uint *)(param_1 + 0x612))) {
      uVar4 = uVar5;
    }
    uVar3 = *param_1;
    uVar1 = uVar4 | (uint)*(byte *)((long)param_1 + 0x36d1e42) << 2;
    local_494 = *(undefined4 *)(param_1 + 0x18b);
    uVar5 = uVar1 | 0x20;
    puStack_4d0 = __ptr + 8;
    *__ptr = 0x2d63697453617244;
    __ptr[1] = 0x7461745365766153;
    __ptr[2] = 0x2d2d2d2d2d2d2d65;
    __ptr[3] = 0x2d2d2d2d2d2d2d2d;
    *(undefined4 *)(__ptr + 4) = 0xe;
    *(uint *)((long)__ptr + 0x24) = uVar5;
    uStack_49c = (undefined4)(uVar3 / 0x3c);
    *(undefined4 *)(__ptr + 5) = 0;
    *(undefined4 *)((long)__ptr + 0x2c) = uStack_49c;
    *(undefined4 *)(__ptr + 6) = local_498;
    *(undefined4 *)((long)__ptr + 0x34) = local_494;
    __ptr[7] = 0x2050202;
    local_4c8._0_1_ = 'D';
    local_4c8._1_1_ = 'r';
    local_4c8._2_1_ = 'a';
    local_4c8._3_1_ = 'S';
    local_4c8._4_1_ = 't';
    local_4c8._5_1_ = 'i';
    local_4c8._6_1_ = 'c';
    local_4c8._7_1_ = '-';
    uStack_4c0._0_1_ = 'S';
    uStack_4c0._1_1_ = 'a';
    uStack_4c0._2_1_ = 'v';
    uStack_4c0._3_1_ = 'e';
    uStack_4c0._4_1_ = 'S';
    uStack_4c0._5_1_ = 't';
    uStack_4c0._6_1_ = 'a';
    uStack_4c0._7_1_ = 't';
    local_4b8._0_1_ = 'e';
    local_4b8._1_1_ = '-';
    local_4b8._2_1_ = '-';
    local_4b8._3_1_ = '-';
    local_4b8._4_1_ = '-';
    local_4b8._5_1_ = '-';
    local_4b8._6_1_ = '-';
    local_4b8._7_1_ = '-';
    uStack_4b0._0_1_ = '-';
    uStack_4b0._1_1_ = '-';
    uStack_4b0._2_1_ = '-';
    uStack_4b0._3_1_ = '-';
    uStack_4b0._4_1_ = '-';
    uStack_4b0._5_1_ = '-';
    uStack_4b0._6_1_ = '-';
    uStack_4b0._7_1_ = '-';
    local_4a8 = 0xe;
    local_4a0 = 0;
    uStack_490 = 0x2050202;
    local_48c = 0;
    uStack_4a4 = uVar5;
    if ((uVar4 & 2) != 0) {
      memcpy(puStack_4d0,param_4,0x18000);
      memcpy(__ptr + 0x3008,param_5,0x18000);
      puStack_4d0 = __ptr + 0x6008;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      backup_data_store_savestate(param_1 + 0x191,&local_4f0,0xe);
    }
    system_store_savestate(param_1,&local_4f0,0xe);
    if (DAT_004ec27c != 0) {
      puts("Can\'t savestate, busy saving old one, waiting..");
      while (DAT_004ec27c != 0) {
        delay_us(1);
      }
    }
    DAT_004ec248 = local_4f0;
    DAT_004ec250 = uStack_4e8;
    DAT_004ec258 = local_4e0;
    DAT_004ec260 = local_4d8;
    DAT_004ec268 = puStack_4d0;
    DAT_004ec27c = 1;
    DAT_004ec270 = __ptr;
    DAT_004ec278 = uVar5;
    strncpy(&savestate_thread_data,param_2,0x3ff);
    strncpy(&DAT_004ebe40,param_3,0x3ff);
    pthread_create((pthread_t *)&DAT_004ec240,(pthread_attr_t *)0x0,save_state_thread_function,
                   &savestate_thread_data);
    uVar2 = 0;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2,local_8 - ___stack_chk_guard,0);
}


