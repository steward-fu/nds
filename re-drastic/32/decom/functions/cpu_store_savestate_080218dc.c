/*
 * Ghidra decompilation
 *
 * Function : cpu_store_savestate
 * Address  : 080218dc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void cpu_store_savestate(cpu_struct *cpu,mem_file_struct *savestate_file,u32 version)

{
  u32 uVar1;
  u32 *puVar2;
  u8 *puVar3;
  u64 *puVar4;
  u64 *puVar5;
  u32 (*pauVar6) [2];
  u32 (*pauVar7) [2];
  u32 *puVar8;
  u32 *puVar9;
  u32 uVar10;
  u32 uVar11;
  
  puVar2 = (u32 *)savestate_file->buffer_ptr;
  puVar4 = &cpu->timers[0].reload_timestamp;
  do {
    uVar1 = *(u32 *)((int)puVar4 + 4);
    puVar5 = puVar4 + 4;
    *puVar2 = *(u32 *)puVar4;
    puVar2[1] = uVar1;
    puVar3 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar3 + 8;
    *(u32 *)(puVar3 + 8) = *(u32 *)((int)puVar4 + 0xc);
    puVar3 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar3 + 4;
    *(u16 *)(puVar3 + 4) = *(u16 *)(puVar4 + 2);
    puVar3 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar3 + 2;
    *(u16 *)(puVar3 + 2) = *(u16 *)((int)puVar4 + 0x12);
    puVar3 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar3 + 2;
    puVar3[2] = *(u8 *)((int)puVar4 + 0x14);
    puVar3 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar3 + 1;
    puVar3[1] = *(u8 *)((int)puVar4 + 0x16);
    puVar2 = (u32 *)(savestate_file->buffer_ptr + 1);
    savestate_file->buffer_ptr = (u8 *)puVar2;
    puVar4 = puVar5;
  } while (puVar5 != (u64 *)(cpu->block_lookup_mini_hash + 2));
  if (cpu->system->use_recompiler != '\0') {
    cpu_block_load_pc(cpu);
    puVar2 = (u32 *)savestate_file->buffer_ptr;
  }
  pauVar7 = cpu->banked_reg;
  do {
    pauVar6 = pauVar7;
    puVar8 = puVar2;
    pauVar7 = pauVar6 + 2;
    uVar11 = (*pauVar6)[1];
    uVar10 = pauVar6[1][0];
    uVar1 = pauVar6[1][1];
    *puVar8 = (*pauVar6)[0];
    puVar8[1] = uVar11;
    puVar8[2] = uVar10;
    puVar8[3] = uVar1;
    puVar2 = puVar8 + 4;
  } while (pauVar7 != cpu->banked_reg + 6);
  uVar1 = pauVar6[2][1];
  puVar8[4] = (*pauVar7)[0];
  puVar8[5] = uVar1;
  puVar3 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar3 + 0x38;
  uVar11 = cpu->banked_reg_fiq[1];
  uVar10 = cpu->banked_reg_fiq[2];
  uVar1 = cpu->banked_reg_fiq[3];
  *(u32 *)(puVar3 + 0x38) = cpu->banked_reg_fiq[0];
  *(u32 *)(puVar3 + 0x3c) = uVar11;
  *(u32 *)(puVar3 + 0x40) = uVar10;
  *(u32 *)(puVar3 + 0x44) = uVar1;
  uVar11 = cpu->banked_reg_fiq[5];
  uVar10 = cpu->banked_reg_fiq[6];
  uVar1 = cpu->banked_reg_fiq[7];
  *(u32 *)(puVar3 + 0x48) = cpu->banked_reg_fiq[4];
  *(u32 *)(puVar3 + 0x4c) = uVar11;
  *(u32 *)(puVar3 + 0x50) = uVar10;
  *(u32 *)(puVar3 + 0x54) = uVar1;
  puVar3 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar3 + 0x20;
  uVar10 = cpu->spsr[1];
  uVar1 = cpu->spsr[2];
  uVar11 = cpu->spsr[3];
  *(u32 *)(puVar3 + 0x20) = cpu->spsr[0];
  *(u32 *)(puVar3 + 0x24) = uVar10;
  *(u32 *)(puVar3 + 0x28) = uVar1;
  *(u32 *)(puVar3 + 0x2c) = uVar11;
  uVar1 = cpu->spsr[6];
  uVar10 = cpu->spsr[5];
  *(u32 *)(puVar3 + 0x30) = cpu->spsr[4];
  *(u32 *)(puVar3 + 0x34) = uVar10;
  *(u32 *)(puVar3 + 0x38) = uVar1;
  puVar3 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar3 + 0x1c;
  *(u32 *)(puVar3 + 0x1c) = cpu->mode;
  puVar3 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar3 + 4;
  puVar3[4] = cpu->state;
  puVar3 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar3 + 1;
  *(u32 *)(puVar3 + 1) = cpu->pc;
  puVar3 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar3 + 4;
  *(u32 *)(puVar3 + 4) = cpu->cpsr;
  puVar3 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar3 + 4;
  puVar2 = (u32 *)(puVar3 + 4);
  puVar8 = cpu->reg;
  do {
    puVar9 = puVar8 + 4;
    uVar11 = puVar8[1];
    uVar10 = puVar8[2];
    uVar1 = puVar8[3];
    *puVar2 = *puVar8;
    puVar2[1] = uVar11;
    puVar2[2] = uVar10;
    puVar2[3] = uVar1;
    puVar2 = puVar2 + 4;
    puVar8 = puVar9;
  } while (puVar9 != (u32 *)&cpu->cycles_remaining);
  puVar3 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar3 + 0x40;
  *(s32 *)(puVar3 + 0x40) = cpu->cycles_remaining;
  savestate_file->buffer_ptr = savestate_file->buffer_ptr + 4;
  return;
}


