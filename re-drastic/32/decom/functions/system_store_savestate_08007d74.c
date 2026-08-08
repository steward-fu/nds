/*
 * Ghidra decompilation
 *
 * Function : system_store_savestate
 * Address  : 08007d74
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void system_store_savestate(system_struct *system,mem_file_struct *savestate_file,u32 version)

{
  undefined4 uVar1;
  u8 *puVar2;
  undefined4 *puVar3;
  
  cpu_store_savestate(&system->cpu_arm9,savestate_file,version);
  cpu_store_savestate(&system->cpu_arm7,savestate_file,version);
  memory_store_savestate(&system->memory,savestate_file,version);
  video_store_savestate(&system->video,savestate_file,version);
  spu_store_savestate(&system->spu,savestate_file,version);
  gamecard_store_savestate(&system->gamecard,savestate_file,version);
  spi_peripherals_store_savestate(&system->spi_peripherals,savestate_file,version);
  rtc_store_savestate(&system->rtc,savestate_file,version);
  event_list_store_savestate(&system->event_list,savestate_file,version);
  uVar1 = *(undefined4 *)((int)&system->frame_number + 4);
  puVar3 = (undefined4 *)savestate_file->buffer_ptr;
  *puVar3 = *(undefined4 *)&system->frame_number;
  puVar3[1] = uVar1;
  puVar2 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar2 + 8;
  uVar1 = *(undefined4 *)((int)&system->global_cycles + 4);
  *(undefined4 *)(puVar2 + 8) = *(undefined4 *)&system->global_cycles;
  *(undefined4 *)(puVar2 + 0xc) = uVar1;
  puVar2 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar2 + 8;
  *(u16 *)(puVar2 + 8) = system->scanline_number;
  savestate_file->buffer_ptr = savestate_file->buffer_ptr + 2;
  return;
}


