/*
 * Ghidra decompilation
 *
 * Function : system_store_savestate
 * Address  : 00110300
 * Program  : drastic64
 */


void system_store_savestate(undefined8 *param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  
  cpu_store_savestate(param_1 + 0x2b8faa);
  cpu_store_savestate(param_1 + 0x4b9c68,param_2,param_3);
  memory_store_savestate(param_1 + 0x6ba926,param_2,param_3);
  video_store_savestate(param_1 + 0x6da3d8,param_2,param_3);
  spu_store_savestate(param_1 + 0x2b0e00,param_2,param_3);
  gamecard_store_savestate(param_1 + 100,param_2,param_3);
  spi_peripherals_store_savestate(param_1 + 0x61a,param_2,param_3);
  rtc_store_savestate(param_1 + 0xaa5,param_2,param_3);
  event_list_store_savestate(param_1 + 3,param_2,param_3);
  **(undefined8 **)(param_2 + 0x20) = *param_1;
  lVar1 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar1 + 8;
  *(undefined8 *)(lVar1 + 8) = param_1[1];
  lVar1 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar1 + 8;
  *(undefined2 *)(lVar1 + 8) = *(undefined2 *)((long)param_1 + 0x14);
  *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 2;
  return;
}


