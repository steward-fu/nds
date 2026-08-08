/*
 * Ghidra decompilation
 *
 * Function : system_load_savestate
 * Address  : 00110040
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void system_load_savestate(undefined8 *param_1,long param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = param_1 + 0x2b8faa;
  if (*(char *)(param_1 + 0x765535) != '\0') {
    param_1[0x4ba0bb] = 0;
    cpu_block_flush(puVar1,0xffffffff,param_1 + 0x4ba000,&__stack_chk_guard,0);
  }
  cpu_load_savestate(puVar1,param_2,param_3);
  puVar2 = param_1 + 0x4b9c68;
  cpu_load_savestate(puVar2,param_2,param_3);
  memory_load_savestate(param_1 + 0x6ba926,param_2,param_3);
  video_load_savestate(param_1 + 0x6da3d8,param_2,param_3);
  spu_load_savestate(param_1 + 0x2b0e00,param_2,param_3);
  gamecard_load_savestate(param_1 + 100,param_2,param_3);
  spi_peripherals_load_savestate(param_1 + 0x61a,param_2,param_3);
  rtc_load_savestate(param_1 + 0xaa5,param_2,param_3);
  event_list_load_savestate(param_1 + 3,param_2,param_3);
  *param_1 = **(undefined8 **)(param_2 + 0x20);
  lVar5 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar5 + 8;
  param_1[1] = *(undefined8 *)(lVar5 + 8);
  lVar5 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar5 + 8;
  *(undefined2 *)((long)param_1 + 0x14) = *(undefined2 *)(lVar5 + 8);
  *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 2;
  if (*(char *)(param_1 + 0x765535) != '\0') {
    iVar3 = *(int *)(param_1[0x2b93f4] + 0x10);
    *(uint *)(param_1 + 0x2b9422) = *(uint *)(param_1 + 0x2b9422) & 0xffffffdf;
    *(uint *)(param_1 + 0x4ba0e0) = *(uint *)(param_1 + 0x4ba0e0) & 0xffffffdf;
    uVar4 = cpu_block_lookup_base(puVar1,iVar3 + 8);
    param_1[0x2b93fb] = uVar4;
    uVar4 = cpu_block_lookup_base(puVar1,iVar3 + 0x18);
    param_1[0x2b93fa] = uVar4;
    uVar4 = cpu_block_lookup_base(puVar2,8);
    param_1[0x4ba0b9] = uVar4;
    uVar4 = cpu_block_lookup_base(puVar2,0x18);
    param_1[0x4ba0b8] = uVar4;
    lVar5 = cpu_block_lookup_base(puVar1,*(undefined4 *)((long)param_1 + 0x15ca10c));
    param_1[0x2b93fd] = lVar5 + 8;
    lVar5 = cpu_block_lookup_base(puVar2,*(undefined4 *)((long)param_1 + 0x25d06fc));
    param_1[0x4ba0bb] = lVar5 + 8;
  }
  param_1[0x2b93ee] = 0;
  param_1[0x4ba0ac] = 0;
  screen_wait_for_vsync();
  get_ticks_us(&local_10);
  param_1[0x76552f] = local_10 * 3;
  param_1[0x765530] = 0;
  *(undefined *)((long)param_1 + 0x3b2a9a1) = 0;
  *(undefined *)((long)param_1 + 0x3b2a9a3) = 0;
  *(undefined4 *)((long)param_1 + 0x3b2a9a4) = 0;
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


