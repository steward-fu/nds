/*
 * Ghidra decompilation
 *
 * Function : geometry_texture_transform_texcoord
 * Address  : 0807e37c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void geometry_texture_transform_texcoord(geometry_struct *geometry,s32 u,s32 v)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = geometry->texture_matrix[5];
  iVar3 = geometry->texture_matrix[1];
  iVar4 = geometry->texture_matrix[9];
  iVar2 = geometry->texture_matrix[0xd];
  geometry->current_texture_u =
       (s16)((uint)(geometry->texture_matrix[0] * u + geometry->texture_matrix[4] * v +
                    geometry->texture_matrix[8] + geometry->texture_matrix[0xc]) >> 0xc);
  geometry->current_texture_v = (s16)((uint)(u * iVar3 + v * iVar1 + iVar4 + iVar2) >> 0xc);
  return;
}


