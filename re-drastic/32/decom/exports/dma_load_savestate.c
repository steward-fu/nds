/*
 * Ghidra decompilation
 *
 * Function : dma_load_savestate
 * Address  : 08020264
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void dma_load_savestate(dma_struct *dma,mem_file_struct *savestate_file,u32 version)

{
  u8 *puVar1;
  u32 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  u32 *puVar5;
  u32 *puVar6;
  
  if (version < 4) {
    puVar6 = &dma->channels[0].source_address;
    do {
      puVar2 = puVar6 + 8;
      *puVar6 = *(u32 *)savestate_file->buffer_ptr;
      puVar1 = savestate_file->buffer_ptr;
      savestate_file->buffer_ptr = puVar1 + 4;
      puVar6[1] = *(u32 *)(puVar1 + 4);
      puVar1 = savestate_file->buffer_ptr;
      savestate_file->buffer_ptr = puVar1 + 4;
      puVar6[2] = *(u32 *)(puVar1 + 4);
      puVar1 = savestate_file->buffer_ptr;
      savestate_file->buffer_ptr = puVar1 + 4;
      *(u8 *)(puVar6 + 3) = puVar1[4];
      savestate_file->buffer_ptr = savestate_file->buffer_ptr + 1;
      ((dma_channel_struct *)(puVar6 + -4))->completion_timestamp = 0;
      *(u8 *)((int)puVar6 + 0xe) = '\0';
      puVar6 = puVar2;
    } while (&dma[1].channels[0].cpu != (cpu_struct **)puVar2);
  }
  else {
    if (version != 4) {
      puVar2 = (u32 *)savestate_file->buffer_ptr;
      puVar6 = &dma->channels[0].source_address;
      do {
        puVar5 = puVar6 + 8;
        *puVar6 = *puVar2;
        puVar1 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar1 + 4;
        puVar6[1] = *(u32 *)(puVar1 + 4);
        puVar1 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar1 + 4;
        puVar6[2] = *(u32 *)(puVar1 + 4);
        puVar1 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar1 + 4;
        *(u8 *)(puVar6 + 3) = puVar1[4];
        puVar1 = savestate_file->buffer_ptr;
        puVar3 = (undefined4 *)(puVar1 + 1);
        savestate_file->buffer_ptr = (u8 *)puVar3;
        uVar4 = *(undefined4 *)(puVar1 + 5);
        *(undefined4 *)&((dma_channel_struct *)(puVar6 + -4))->completion_timestamp = *puVar3;
        puVar6[-3] = uVar4;
        puVar1 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar1 + 8;
        *(u8 *)((int)puVar6 + 0xe) = puVar1[8];
        puVar2 = (u32 *)(savestate_file->buffer_ptr + 1);
        savestate_file->buffer_ptr = (u8 *)puVar2;
        puVar6 = puVar5;
      } while ((cpu_struct **)puVar5 != &dma[1].channels[0].cpu);
      return;
    }
    puVar6 = &dma->channels[0].source_address;
    do {
      puVar2 = puVar6 + 8;
      *puVar6 = *(u32 *)savestate_file->buffer_ptr;
      puVar1 = savestate_file->buffer_ptr;
      savestate_file->buffer_ptr = puVar1 + 4;
      puVar6[1] = *(u32 *)(puVar1 + 4);
      puVar1 = savestate_file->buffer_ptr;
      savestate_file->buffer_ptr = puVar1 + 4;
      puVar6[2] = *(u32 *)(puVar1 + 4);
      puVar1 = savestate_file->buffer_ptr;
      savestate_file->buffer_ptr = puVar1 + 4;
      *(u8 *)(puVar6 + 3) = puVar1[4];
      puVar1 = savestate_file->buffer_ptr;
      puVar3 = (undefined4 *)(puVar1 + 1);
      savestate_file->buffer_ptr = (u8 *)puVar3;
      uVar4 = *(undefined4 *)(puVar1 + 5);
      *(undefined4 *)&((dma_channel_struct *)(puVar6 + -4))->completion_timestamp = *puVar3;
      puVar6[-3] = uVar4;
      savestate_file->buffer_ptr = savestate_file->buffer_ptr + 8;
      *(u8 *)((int)puVar6 + 0xe) = '\0';
      puVar6 = puVar2;
    } while ((cpu_struct **)puVar2 != &dma[1].channels[0].cpu);
  }
  return;
}


