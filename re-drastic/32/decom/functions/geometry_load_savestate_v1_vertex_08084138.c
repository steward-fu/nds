/*
 * Ghidra decompilation
 *
 * Function : geometry_load_savestate_v1_vertex
 * Address  : 08084138
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void geometry_load_savestate_v1_vertex
               (mem_file_struct *savestate_file,geometry_legacy_vertex_struct *vertex)

{
  s32 sVar1;
  s32 *psVar2;
  s32 sVar3;
  u8 *puVar4;
  s32 sVar5;
  
  psVar2 = (s32 *)savestate_file->buffer_ptr;
  sVar1 = psVar2[2];
  sVar5 = psVar2[1];
  sVar3 = psVar2[3];
  vertex->coordinates[0] = *psVar2;
  vertex->coordinates[1] = sVar5;
  vertex->coordinates[2] = sVar1;
  vertex->coordinates[3] = sVar3;
  puVar4 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar4 + 0x10;
  vertex->z = *(s32 *)(puVar4 + 0x10);
  puVar4 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar4 + 4;
  vertex->color = *(u32 *)(puVar4 + 4);
  puVar4 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar4 + 4;
  vertex->u = *(s16 *)(puVar4 + 4);
  puVar4 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar4 + 2;
  vertex->v = *(s16 *)(puVar4 + 2);
  puVar4 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar4 + 2;
  vertex->x = *(u16 *)(puVar4 + 2);
  puVar4 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar4 + 2;
  vertex->y = puVar4[2];
  puVar4 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar4 + 1;
  vertex->clip_codes = puVar4[1];
  savestate_file->buffer_ptr = savestate_file->buffer_ptr + 1;
  return;
}


