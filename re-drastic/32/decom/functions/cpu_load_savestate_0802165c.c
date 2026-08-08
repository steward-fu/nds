/*
 * Ghidra decompilation
 *
 * Function : cpu_load_savestate
 * Address  : 0802165c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void cpu_load_savestate(cpu_struct *cpu,mem_file_struct *savestate_file,u32 version)

{
  u32 (*pauVar1) [2];
  u32 *puVar2;
  u32 uVar3;
  u8 *puVar4;
  u32 *puVar5;
  u64 *puVar6;
  u64 *puVar7;
  u32 (*pauVar8) [2];
  u32 *puVar9;
  u32 uVar10;
  u32 uVar11;
  
  puVar2 = (u32 *)savestate_file->buffer_ptr;
  puVar6 = &cpu->timers[0].reload_timestamp;
  do {
    puVar7 = puVar6 + 4;
    uVar3 = puVar2[1];
    *(u32 *)puVar6 = *puVar2;
    *(u32 *)((int)puVar6 + 4) = uVar3;
    puVar4 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar4 + 8;
    *(u32 *)((int)puVar6 + 0xc) = *(u32 *)(puVar4 + 8);
    puVar4 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar4 + 4;
    *(u16 *)(puVar6 + 2) = *(u16 *)(puVar4 + 4);
    puVar4 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar4 + 2;
    *(u16 *)((int)puVar6 + 0x12) = *(u16 *)(puVar4 + 2);
    puVar4 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar4 + 2;
    *(u8 *)((int)puVar6 + 0x14) = puVar4[2];
    puVar4 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar4 + 1;
    *(u8 *)((int)puVar6 + 0x16) = puVar4[1];
    puVar4 = savestate_file->buffer_ptr;
    puVar2 = (u32 *)(puVar4 + 1);
    savestate_file->buffer_ptr = (u8 *)puVar2;
    puVar6 = puVar7;
  } while ((u64 *)(cpu->block_lookup_mini_hash + 2) != puVar7);
  pauVar1 = cpu->banked_reg;
  do {
    pauVar8 = pauVar1;
    puVar9 = puVar2;
    puVar2 = puVar9 + 4;
    uVar10 = puVar9[1];
    uVar3 = puVar9[2];
    uVar11 = puVar9[3];
    (*pauVar8)[0] = *puVar9;
    (*pauVar8)[1] = uVar10;
    pauVar8[1][0] = uVar3;
    pauVar8[1][1] = uVar11;
    pauVar1 = pauVar8 + 2;
  } while (puVar2 != (u32 *)(puVar4 + 0x31));
  uVar3 = puVar9[5];
  pauVar8[2][0] = *puVar2;
  pauVar8[2][1] = uVar3;
  puVar4 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar4 + 0x38;
  uVar11 = *(u32 *)(puVar4 + 0x3c);
  uVar10 = *(u32 *)(puVar4 + 0x40);
  uVar3 = *(u32 *)(puVar4 + 0x44);
  cpu->banked_reg_fiq[0] = *(u32 *)(puVar4 + 0x38);
  cpu->banked_reg_fiq[1] = uVar11;
  cpu->banked_reg_fiq[2] = uVar10;
  cpu->banked_reg_fiq[3] = uVar3;
  uVar11 = *(u32 *)(puVar4 + 0x4c);
  uVar10 = *(u32 *)(puVar4 + 0x50);
  uVar3 = *(u32 *)(puVar4 + 0x54);
  cpu->banked_reg_fiq[4] = *(u32 *)(puVar4 + 0x48);
  cpu->banked_reg_fiq[5] = uVar11;
  cpu->banked_reg_fiq[6] = uVar10;
  cpu->banked_reg_fiq[7] = uVar3;
  puVar4 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar4 + 0x20;
  uVar10 = *(u32 *)(puVar4 + 0x24);
  uVar3 = *(u32 *)(puVar4 + 0x28);
  uVar11 = *(u32 *)(puVar4 + 0x2c);
  cpu->spsr[0] = *(u32 *)(puVar4 + 0x20);
  cpu->spsr[1] = uVar10;
  cpu->spsr[2] = uVar3;
  cpu->spsr[3] = uVar11;
  uVar3 = *(u32 *)(puVar4 + 0x38);
  uVar10 = *(u32 *)(puVar4 + 0x34);
  cpu->spsr[4] = *(u32 *)(puVar4 + 0x30);
  cpu->spsr[5] = uVar10;
  cpu->spsr[6] = uVar3;
  puVar4 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar4 + 0x1c;
  cpu->mode = *(u32 *)(puVar4 + 0x1c);
  puVar4 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar4 + 4;
  cpu->state = puVar4[4];
  puVar4 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar4 + 1;
  cpu->pc = *(u32 *)(puVar4 + 1);
  puVar4 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar4 + 4;
  cpu->cpsr = *(u32 *)(puVar4 + 4);
  puVar4 = savestate_file->buffer_ptr;
  puVar2 = (u32 *)(puVar4 + 4);
  savestate_file->buffer_ptr = (u8 *)puVar2;
  puVar9 = cpu->reg;
  do {
    puVar5 = puVar2 + 4;
    uVar10 = puVar2[1];
    uVar3 = puVar2[2];
    uVar11 = puVar2[3];
    *puVar9 = *puVar2;
    puVar9[1] = uVar10;
    puVar9[2] = uVar3;
    puVar9[3] = uVar11;
    puVar2 = puVar5;
    puVar9 = puVar9 + 4;
  } while (puVar5 != (u32 *)(puVar4 + 0x44));
  puVar4 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar4 + 0x40;
  cpu->cycles_remaining = *(s32 *)(puVar4 + 0x40);
  savestate_file->buffer_ptr = savestate_file->buffer_ptr + 4;
  return;
}


