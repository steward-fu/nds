/*
 * Ghidra decompilation
 *
 * Function : memory_store_savestate
 * Address  : 0801742c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void memory_store_savestate(memory_struct *memory,mem_file_struct *savestate_file,u32 version)

{
  u8 *puVar1;
  u8 *puVar2;
  
  memcpy(savestate_file->buffer_ptr,memory->main_ram,0x400000);
  puVar2 = savestate_file->buffer_ptr;
  puVar1 = memory->itcm;
  savestate_file->buffer_ptr = puVar2 + 0x400000;
  memcpy(puVar2 + 0x400000,puVar1,0x8000);
  puVar2 = savestate_file->buffer_ptr;
  puVar1 = memory->wram;
  savestate_file->buffer_ptr = puVar2 + 0x8000;
  memcpy(puVar2 + 0x8000,puVar1,0x8000);
  puVar2 = savestate_file->buffer_ptr;
  puVar1 = memory->dtcm;
  savestate_file->buffer_ptr = puVar2 + 0x8000;
  memcpy(puVar2 + 0x8000,puVar1,0x4000);
  puVar1 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar1 + 0x4000;
  memcpy(puVar1 + 0x4000,memory->arm7_wram,0x10000);
  puVar2 = savestate_file->buffer_ptr;
  puVar1 = memory->vram_a;
  savestate_file->buffer_ptr = puVar2 + 0x10000;
  memcpy(puVar2 + 0x10000,puVar1,0x20000);
  puVar2 = savestate_file->buffer_ptr;
  puVar1 = memory->vram_b;
  savestate_file->buffer_ptr = puVar2 + 0x20000;
  memcpy(puVar2 + 0x20000,puVar1,0x20000);
  puVar2 = savestate_file->buffer_ptr;
  puVar1 = memory->vram_c;
  savestate_file->buffer_ptr = puVar2 + 0x20000;
  memcpy(puVar2 + 0x20000,puVar1,0x20000);
  puVar2 = savestate_file->buffer_ptr;
  puVar1 = memory->vram_d;
  savestate_file->buffer_ptr = puVar2 + 0x20000;
  memcpy(puVar2 + 0x20000,puVar1,0x20000);
  puVar2 = savestate_file->buffer_ptr;
  puVar1 = memory->vram_e;
  savestate_file->buffer_ptr = puVar2 + 0x20000;
  memcpy(puVar2 + 0x20000,puVar1,0x10000);
  puVar2 = savestate_file->buffer_ptr;
  puVar1 = memory->vram_f;
  savestate_file->buffer_ptr = puVar2 + 0x10000;
  memcpy(puVar2 + 0x10000,puVar1,0x4000);
  puVar2 = savestate_file->buffer_ptr;
  puVar1 = memory->vram_g;
  savestate_file->buffer_ptr = puVar2 + 0x4000;
  memcpy(puVar2 + 0x4000,puVar1,0x4000);
  puVar2 = savestate_file->buffer_ptr;
  puVar1 = memory->vram_h;
  savestate_file->buffer_ptr = puVar2 + 0x4000;
  memcpy(puVar2 + 0x4000,puVar1,0x8000);
  puVar2 = savestate_file->buffer_ptr;
  puVar1 = memory->vram_i;
  savestate_file->buffer_ptr = puVar2 + 0x8000;
  memcpy(puVar2 + 0x8000,puVar1,0x4000);
  puVar1 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar1 + 0x4000;
  memcpy(puVar1 + 0x4000,memory->oam_ram,0x800);
  puVar1 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar1 + 0x800;
  memcpy(puVar1 + 0x800,memory->palette_ram,0x800);
  puVar1 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar1 + 0x800;
  memcpy(puVar1 + 0x800,memory->wifi_mem,0x4000);
  puVar1 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar1 + 0x4000;
  memcpy(puVar1 + 0x4000,memory->arm9_io_registers,0x8000);
  puVar1 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar1 + 0x8000;
  memcpy(puVar1 + 0x8000,memory->arm7_io_registers,0x8000);
  puVar1 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar1 + 0x8000;
  if (1 < version) {
    memcpy(puVar1 + 0x8000,memory->wifi_io_registers,0x400);
    puVar1 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar1 + 0x400;
    memcpy(puVar1 + 0x400,memory->wifi_baseband_buffer,0x80);
    savestate_file->buffer_ptr = savestate_file->buffer_ptr + 0x80;
  }
  dma_store_savestate(&memory->dma_arm9,savestate_file,version);
  dma_store_savestate(&memory->dma_arm7,savestate_file,version);
  ipc_store_savestate(&memory->ipc_receive_arm9,savestate_file,version);
  ipc_store_savestate(&memory->ipc_receive_arm7,savestate_file,version);
  coprocessor_store_savestate(&memory->coprocessor,savestate_file,version);
  return;
}


