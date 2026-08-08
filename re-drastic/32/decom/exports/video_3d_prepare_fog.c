/*
 * Ghidra decompilation
 *
 * Function : video_3d_prepare_fog
 * Address  : 08071650
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_3d_prepare_fog(geometry_struct *geometry,video_3d_struct *video_3d)

{
  u8 uVar1;
  u8 uVar2;
  u8 uVar3;
  u8 uVar4;
  u8 uVar5;
  u8 uVar6;
  u8 uVar7;
  u8 uVar8;
  u8 uVar9;
  uint uVar10;
  u32 fog_entry;
  uint uVar11;
  undefined auVar12 [16];
  
  uVar10 = *(uint *)geometry->fog_table;
  video_3d->fog_table_constant = 0xffffffff;
  uVar11 = *(uint *)(geometry->fog_table + 0x1c);
  if (((*(uint *)(geometry->fog_table + 4) & *(uint *)(geometry->fog_table + 8) &
        *(uint *)(geometry->fog_table + 0xc) & uVar10 & *(uint *)(geometry->fog_table + 0x10) &
        *(uint *)(geometry->fog_table + 0x14) & *(uint *)(geometry->fog_table + 0x18) & uVar11) ==
       (uVar11 | uVar10 | *(uint *)(geometry->fog_table + 4) | *(uint *)(geometry->fog_table + 8) |
                          *(uint *)(geometry->fog_table + 0xc) |
                 *(uint *)(geometry->fog_table + 0x10) | *(uint *)(geometry->fog_table + 0x14) |
                 *(uint *)(geometry->fog_table + 0x18))) &&
     ((uVar11 >> 8 & ~(uVar11 & 0xff & uVar11 >> 0x10)) == 0)) {
    video_3d->fog_table_constant = uVar11 >> 8;
  }
  auVar12 = VectorSub(*(undefined (*) [16])(geometry->fog_table + 1),
                      *(undefined (*) [16])geometry->fog_table,1);
  *(longlong *)geometry->fog_diff_table = auVar12._0_8_;
  *(longlong *)(geometry->fog_diff_table + 8) = auVar12._8_8_;
  uVar1 = geometry->fog_table[0x11];
  uVar2 = geometry->fog_table[0x12];
  uVar3 = geometry->fog_table[0x13];
  uVar4 = geometry->fog_table[0x14];
  uVar5 = geometry->fog_table[0x15];
  uVar6 = geometry->fog_table[0x16];
  uVar7 = geometry->fog_table[0x17];
  geometry->fog_diff_table[0x10] = uVar1 - geometry->fog_table[0x10];
  uVar8 = geometry->fog_table[0x18];
  geometry->fog_diff_table[0x11] = uVar2 - uVar1;
  uVar1 = geometry->fog_table[0x19];
  uVar9 = geometry->fog_table[0x1a];
  geometry->fog_diff_table[0x12] = uVar3 - uVar2;
  geometry->fog_diff_table[0x13] = uVar4 - uVar3;
  uVar2 = geometry->fog_table[0x1b];
  uVar3 = geometry->fog_table[0x1c];
  geometry->fog_diff_table[0x14] = uVar5 - uVar4;
  uVar4 = geometry->fog_table[0x1d];
  geometry->fog_diff_table[0x15] = uVar6 - uVar5;
  geometry->fog_diff_table[0x16] = uVar7 - uVar6;
  uVar5 = geometry->fog_table[0x1e];
  geometry->fog_diff_table[0x17] = uVar8 - uVar7;
  geometry->fog_diff_table[0x18] = uVar1 - uVar8;
  geometry->fog_diff_table[0x19] = uVar9 - uVar1;
  geometry->fog_diff_table[0x1a] = uVar2 - uVar9;
  geometry->fog_diff_table[0x1b] = uVar3 - uVar2;
  geometry->fog_diff_table[0x1c] = uVar4 - uVar3;
  geometry->fog_diff_table[0x1d] = uVar5 - uVar4;
  geometry->fog_diff_table[0x1e] = geometry->fog_table[0x1f] - uVar5;
  return;
}


