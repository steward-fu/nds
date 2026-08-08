/*
 * Ghidra decompilation
 *
 * Function : geometry_transform_normal_coordinates
 * Address  : 0807e40c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void geometry_transform_normal_coordinates
               (s16 *normals_xyz,s32 *input_normals,s32 *direction_matrix,u32 normals)

{
  s16 *normals_x;
  int iVar1;
  s32 normal_y;
  s32 *psVar2;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  u32 normal_vector;
  s32 normal_z;
  int iVar12;
  int iVar13;
  s16 *psVar14;
  int iVar15;
  s32 normal_x;
  s16 *local_48;
  s32 *psVar3;
  
  if (normals == 0) {
    return;
  }
  iVar4 = direction_matrix[2];
  iVar12 = *direction_matrix;
  iVar13 = direction_matrix[1];
  local_48 = normals_xyz + 0x8f;
  iVar5 = direction_matrix[4];
  iVar6 = direction_matrix[5];
  iVar7 = direction_matrix[6];
  iVar8 = direction_matrix[8];
  iVar9 = direction_matrix[9];
  iVar10 = direction_matrix[10];
  psVar2 = input_normals;
  psVar14 = normals_xyz + -1;
  do {
    psVar3 = psVar2 + 1;
    iVar11 = *psVar2;
    iVar1 = (iVar11 << 0xc) >> 0x16;
    iVar15 = (iVar11 << 0x16) >> 0x16;
    iVar11 = (iVar11 << 2) >> 0x16;
    psVar14[1] = (s16)((uint)(iVar11 * iVar8 + iVar15 * iVar12 + iVar1 * iVar5) >> 0xc);
    psVar14[0x49] = (s16)((uint)(iVar11 * iVar9 + iVar15 * iVar13 + iVar1 * iVar6) >> 0xc);
    local_48 = local_48 + 1;
    *local_48 = (s16)((uint)(iVar11 * iVar10 + iVar15 * iVar4 + iVar1 * iVar7) >> 0xc);
    psVar2 = psVar3;
    psVar14 = psVar14 + 1;
  } while (input_normals + normals != psVar3);
  return;
}


