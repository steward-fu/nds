/*
 * Ghidra decompilation
 *
 * Function : spu_store_savestate
 * Address  : 0808e858
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void spu_store_savestate(spu_struct *spu,mem_file_struct *savestate_file,u32 version)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  u8 *puVar4;
  u64 *puVar5;
  u64 *puVar6;
  undefined4 uVar7;
  u32 dummy32;
  
  iVar1 = __stack_chk_guard;
  puVar3 = (undefined4 *)savestate_file->buffer_ptr;
  puVar5 = &spu->channels[0].sample_offset;
  do {
    uVar7 = *(undefined4 *)((int)puVar5 + 4);
    puVar6 = puVar5 + 0x17;
    *puVar3 = *(undefined4 *)puVar5;
    puVar3[1] = uVar7;
    puVar4 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar4 + 8;
    *(undefined4 *)(puVar4 + 8) = 0;
    puVar4 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar4 + 4;
    *(u32 *)(puVar4 + 4) = *(u32 *)((int)puVar5 + 0x1c);
    puVar4 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar4 + 4;
    *(u32 *)(puVar4 + 4) = *(u32 *)(puVar5 + 4);
    puVar4 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar4 + 4;
    *(u32 *)(puVar4 + 4) = *(u32 *)((int)puVar5 + 0x24);
    puVar4 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar4 + 4;
    *(s16 *)(puVar4 + 4) = *(s16 *)((int)puVar5 + 0x2c);
    puVar4 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar4 + 2;
    *(s16 *)(puVar4 + 2) = *(s16 *)((int)puVar5 + 0x2e);
    puVar4 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar4 + 2;
    puVar4[2] = *(u8 *)((int)puVar5 + 0x33);
    puVar4 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar4 + 1;
    puVar4[1] = *(u8 *)((int)puVar5 + 0x34);
    puVar4 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar4 + 1;
    puVar4[1] = *(u8 *)((int)puVar5 + 0x35);
    puVar4 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar4 + 1;
    puVar4[1] = *(u8 *)(puVar5 + 6);
    puVar4 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar4 + 1;
    puVar4[1] = *(u8 *)((int)puVar5 + 0x32);
    puVar4 = savestate_file->buffer_ptr;
    puVar3 = (undefined4 *)(puVar4 + 1);
    savestate_file->buffer_ptr = (u8 *)puVar3;
    puVar5 = puVar6;
  } while (puVar6 != (u64 *)(spu[1].audio.buffer + 0x10));
  uVar7 = *(undefined4 *)((int)&spu->last_cycles + 4);
  *puVar3 = *(undefined4 *)&spu->last_cycles;
  iVar2 = __stack_chk_guard;
  *(undefined4 *)(puVar4 + 5) = uVar7;
  savestate_file->buffer_ptr = savestate_file->buffer_ptr + 8;
  if (iVar1 == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


