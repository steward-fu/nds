/*
 * Ghidra decompilation
 *
 * Function : memory_load_savestate
 * Address  : 080170f4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void memory_load_savestate(memory_struct *memory,mem_file_struct *savestate_file,u32 version)

{
  u8 *puVar1;
  u8 *puVar2;
  
  memcpy(memory->main_ram,savestate_file->buffer_ptr,0x400000);
  puVar2 = savestate_file->buffer_ptr;
  puVar1 = memory->itcm;
  savestate_file->buffer_ptr = puVar2 + 0x400000;
  memcpy(puVar1,puVar2 + 0x400000,0x8000);
  puVar2 = savestate_file->buffer_ptr;
  puVar1 = memory->wram;
  savestate_file->buffer_ptr = puVar2 + 0x8000;
  memcpy(puVar1,puVar2 + 0x8000,0x8000);
  puVar2 = savestate_file->buffer_ptr;
  puVar1 = memory->dtcm;
  savestate_file->buffer_ptr = puVar2 + 0x8000;
  memcpy(puVar1,puVar2 + 0x8000,0x4000);
  puVar1 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar1 + 0x4000;
  memcpy(memory->arm7_wram,puVar1 + 0x4000,0x10000);
  puVar2 = savestate_file->buffer_ptr;
  puVar1 = memory->vram_a;
  savestate_file->buffer_ptr = puVar2 + 0x10000;
  memcpy(puVar1,puVar2 + 0x10000,0x20000);
  puVar2 = savestate_file->buffer_ptr;
  puVar1 = memory->vram_b;
  savestate_file->buffer_ptr = puVar2 + 0x20000;
  memcpy(puVar1,puVar2 + 0x20000,0x20000);
  puVar2 = savestate_file->buffer_ptr;
  puVar1 = memory->vram_c;
  savestate_file->buffer_ptr = puVar2 + 0x20000;
  memcpy(puVar1,puVar2 + 0x20000,0x20000);
  puVar2 = savestate_file->buffer_ptr;
  puVar1 = memory->vram_d;
  savestate_file->buffer_ptr = puVar2 + 0x20000;
  memcpy(puVar1,puVar2 + 0x20000,0x20000);
  puVar2 = savestate_file->buffer_ptr;
  puVar1 = memory->vram_e;
  savestate_file->buffer_ptr = puVar2 + 0x20000;
  memcpy(puVar1,puVar2 + 0x20000,0x10000);
  puVar2 = savestate_file->buffer_ptr;
  puVar1 = memory->vram_f;
  savestate_file->buffer_ptr = puVar2 + 0x10000;
  memcpy(puVar1,puVar2 + 0x10000,0x4000);
  puVar2 = savestate_file->buffer_ptr;
  puVar1 = memory->vram_g;
  savestate_file->buffer_ptr = puVar2 + 0x4000;
  memcpy(puVar1,puVar2 + 0x4000,0x4000);
  puVar2 = savestate_file->buffer_ptr;
  puVar1 = memory->vram_h;
  savestate_file->buffer_ptr = puVar2 + 0x4000;
  memcpy(puVar1,puVar2 + 0x4000,0x8000);
  puVar2 = savestate_file->buffer_ptr;
  puVar1 = memory->vram_i;
  savestate_file->buffer_ptr = puVar2 + 0x8000;
  memcpy(puVar1,puVar2 + 0x8000,0x4000);
  puVar1 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar1 + 0x4000;
  memcpy(memory->oam_ram,puVar1 + 0x4000,0x800);
  puVar1 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar1 + 0x800;
  memcpy(memory->palette_ram,puVar1 + 0x800,0x800);
  puVar1 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar1 + 0x800;
  memcpy(memory->wifi_mem,puVar1 + 0x800,0x4000);
  puVar1 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar1 + 0x4000;
  memcpy(memory->arm9_io_registers,puVar1 + 0x4000,0x8000);
  puVar1 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar1 + 0x8000;
  memcpy(memory->arm7_io_registers,puVar1 + 0x8000,0x8000);
  puVar1 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar1 + 0x8000;
  if (1 < version) {
    memcpy(memory->wifi_io_registers,puVar1 + 0x8000,0x400);
    puVar1 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar1 + 0x400;
    memcpy(memory->wifi_baseband_buffer,puVar1 + 0x400,0x80);
    savestate_file->buffer_ptr = savestate_file->buffer_ptr + 0x80;
  }
  dma_load_savestate(&memory->dma_arm9,savestate_file,version);
  dma_load_savestate(&memory->dma_arm7,savestate_file,version);
  ipc_load_savestate(&memory->ipc_receive_arm9,savestate_file,version);
  ipc_load_savestate(&memory->ipc_receive_arm7,savestate_file,version);
  coprocessor_load_savestate(&memory->coprocessor,savestate_file,version);
  if ((memory->custom_bios_loaded & 2) != 0) {
    memcpy(memory->arm9_bios + 0x20,memory->gamecard->nds_file->data + 0xc0,0x9e);
  }
  remap_wram(memory);
  return;
}


