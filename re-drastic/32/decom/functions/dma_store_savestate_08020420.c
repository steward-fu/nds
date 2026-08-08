/*
 * Ghidra decompilation
 *
 * Function : dma_store_savestate
 * Address  : 08020420
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void dma_store_savestate(dma_struct *dma,mem_file_struct *savestate_file,u32 version)

{
  u32 *puVar1;
  u32 *puVar2;
  u32 *puVar3;
  u8 *puVar4;
  undefined4 uVar5;
  
  if (version < 4) {
    puVar3 = &dma->channels[0].source_address;
    do {
      puVar1 = puVar3 + 8;
      *(u32 *)savestate_file->buffer_ptr = *puVar3;
      puVar4 = savestate_file->buffer_ptr;
      savestate_file->buffer_ptr = puVar4 + 4;
      *(u32 *)(puVar4 + 4) = puVar3[1];
      puVar4 = savestate_file->buffer_ptr;
      savestate_file->buffer_ptr = puVar4 + 4;
      *(u32 *)(puVar4 + 4) = puVar3[2];
      puVar4 = savestate_file->buffer_ptr;
      savestate_file->buffer_ptr = puVar4 + 4;
      puVar4[4] = *(u8 *)(puVar3 + 3);
      savestate_file->buffer_ptr = savestate_file->buffer_ptr + 1;
      ((dma_channel_struct *)(puVar3 + -4))->completion_timestamp = 0;
      *(u8 *)((int)puVar3 + 0xe) = '\0';
      puVar3 = puVar1;
    } while (&dma[1].channels[0].cpu != (cpu_struct **)puVar1);
  }
  else {
    if (version != 4) {
      puVar1 = (u32 *)savestate_file->buffer_ptr;
      puVar3 = &dma->channels[0].source_address;
      do {
        puVar2 = puVar3 + 8;
        *puVar1 = *puVar3;
        puVar4 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar4 + 4;
        *(u32 *)(puVar4 + 4) = puVar3[1];
        puVar4 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar4 + 4;
        *(u32 *)(puVar4 + 4) = puVar3[2];
        puVar4 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar4 + 4;
        puVar4[4] = *(u8 *)(puVar3 + 3);
        puVar4 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar4 + 1;
        uVar5 = puVar3[-3];
        *(undefined4 *)(puVar4 + 1) =
             *(undefined4 *)&((dma_channel_struct *)(puVar3 + -4))->completion_timestamp;
        *(undefined4 *)(puVar4 + 5) = uVar5;
        puVar4 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar4 + 8;
        puVar4[8] = *(u8 *)((int)puVar3 + 0xe);
        puVar1 = (u32 *)(savestate_file->buffer_ptr + 1);
        savestate_file->buffer_ptr = (u8 *)puVar1;
        puVar3 = puVar2;
      } while ((cpu_struct **)puVar2 != &dma[1].channels[0].cpu);
      return;
    }
    puVar3 = &dma->channels[0].source_address;
    do {
      puVar1 = puVar3 + 8;
      *(u32 *)savestate_file->buffer_ptr = *puVar3;
      puVar4 = savestate_file->buffer_ptr;
      savestate_file->buffer_ptr = puVar4 + 4;
      *(u32 *)(puVar4 + 4) = puVar3[1];
      puVar4 = savestate_file->buffer_ptr;
      savestate_file->buffer_ptr = puVar4 + 4;
      *(u32 *)(puVar4 + 4) = puVar3[2];
      puVar4 = savestate_file->buffer_ptr;
      savestate_file->buffer_ptr = puVar4 + 4;
      puVar4[4] = *(u8 *)(puVar3 + 3);
      puVar4 = savestate_file->buffer_ptr;
      savestate_file->buffer_ptr = puVar4 + 1;
      uVar5 = puVar3[-3];
      *(undefined4 *)(puVar4 + 1) =
           *(undefined4 *)&((dma_channel_struct *)(puVar3 + -4))->completion_timestamp;
      *(undefined4 *)(puVar4 + 5) = uVar5;
      savestate_file->buffer_ptr = savestate_file->buffer_ptr + 8;
      *(u8 *)((int)puVar3 + 0xe) = '\0';
      puVar3 = puVar1;
    } while ((cpu_struct **)puVar1 != &dma[1].channels[0].cpu);
  }
  return;
}


