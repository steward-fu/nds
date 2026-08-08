/*
 * Ghidra decompilation
 *
 * Function : update_frame_geometry
 * Address  : 00162950
 * Program  : drastic64
 */


void update_frame_geometry(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 0x9a8c);
  uVar2 = (*(ushort *)(param_1 + 0x9aa6) & 0x7fff) << 9;
  lVar4 = *(long *)(param_1 + 0x9a30);
  if ((~*(ushort *)(param_1 + 0x9aa6) & 0x7fff) == 0) {
    uVar2 = 0xffffff;
  }
  uVar2 = uVar1 & 0x3f000000 | uVar2;
  uVar3 = texture_cache_build_pixel_custom_alpha(uVar1,uVar1 >> 0x10 & 0x1f);
  uVar3 = uVar3 | (uVar1 >> 0xf) << 0x1f;
  if (*(uint *)(nds_system + lVar4 + 0x3524a0c) != uVar2) {
    *(uint *)(nds_system + lVar4 + 0x3524a0c) = uVar2;
    *(undefined *)(param_1 + 0x9acf) = 1;
  }
  if (*(uint *)(nds_system + lVar4 + 0x3524a08) != uVar3) {
    *(uint *)(nds_system + lVar4 + 0x3524a08) = uVar3;
    *(undefined *)(param_1 + 0x9acf) = 1;
  }
  process_geometry(param_1);
  geometry_transform_vertexes(param_1);
  geometry_flush_polygons(param_1);
  if (*(char *)(param_1 + 0x9ac8) != '\0') {
    uVar2 = *(byte *)(param_1 + 0x9ac0) ^ 1;
    lVar4 = param_1 + (ulong)uVar2 * 0x10008;
    *(char *)(param_1 + 0x9ac0) = (char)uVar2;
    *(undefined *)(param_1 + 0x9acc) = *(undefined *)(param_1 + 0x9acd);
    *(undefined *)(param_1 + 0x9acd) = *(undefined *)(param_1 + 0x9acb);
    *(undefined *)(param_1 + 0x9acf) = 1;
    *(undefined4 *)(param_1 + (ulong)uVar2 * 0x18004 + 0x21ad4) = 0;
    *(undefined4 *)(lVar4 + 0x49ae0) = 0;
    *(undefined4 *)(lVar4 + 0x69af0) = 0;
    *(undefined2 *)(param_1 + 0x9aa0) = 0;
    *(undefined *)(param_1 + 0x9ac8) = 0;
  }
  if (*(char *)(param_1 + 0x9ac9) == '\0') {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x9a30);
  lVar4 = *(long *)(nds_system + lVar5 + 0x10cddd0);
  queue_geometry_command
            (param_1,*(undefined4 *)((long)&__DT_SYMTAB[0x103].st_name + param_1),
             *(undefined4 *)(&__DT_SYMTAB[0x103].st_info + param_1));
  *(undefined4 *)(nds_system + lVar5 + 0x10cdff8) = 0;
  *(uint *)(nds_system + lVar5 + 0x10cde60) = *(uint *)(nds_system + lVar5 + 0x10cde60) & 0xfffffffb
  ;
  *(uint *)(nds_system + lVar5 + 0x10cde58) =
       *(uint *)(lVar4 + 0x214) & *(uint *)(lVar4 + 0x210) & -*(int *)(lVar4 + 0x208);
  *(undefined *)(param_1 + 0x9ac9) = 0;
  lVar4 = cpu_block_lookup_base(lVar5 + 0x15c7d50,*(undefined4 *)(nds_system + lVar5 + 0x10ce10c));
  *(long *)(nds_system + lVar5 + 0x10cdfe8) = lVar4 + 8;
  return;
}


