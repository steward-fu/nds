/*
 * Ghidra decompilation
 *
 * Function : geometry_light_colors_0
 * Address  : 0807e520
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void geometry_light_colors_0
               (geometry_struct *geometry,u16 *normal_colors,s16 *normals_xyz,u32 normals)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 *puVar4;
  u32 color;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar2 = (ushort)((geometry->base_color_cache[2] >> 0xe) << 10) |
          (ushort)((geometry->base_color_cache[1] >> 0xe) << 5) |
          (ushort)(geometry->base_color_cache[0] >> 0xe);
  if (normals != 0) {
    uVar3 = -((uint)((int)normal_colors << 0x1d) >> 0x1e) & 7;
    if (normals <= uVar3) {
      uVar3 = normals;
    }
    uVar6 = normals;
    if ((normals < 0xb) || (uVar6 = uVar3, uVar3 != 0)) {
      *normal_colors = uVar2;
      uVar3 = uVar6;
      if ((((uVar6 != 1) &&
           (((normal_colors[1] = uVar2, uVar6 != 2 && (normal_colors[2] = uVar2, uVar6 != 3)) &&
            (normal_colors[3] = uVar2, uVar6 != 4)))) &&
          (((normal_colors[4] = uVar2, uVar6 != 5 && (normal_colors[5] = uVar2, uVar6 != 6)) &&
           (normal_colors[6] = uVar2, uVar6 != 7)))) && (normal_colors[7] = uVar2, uVar6 != 8)) {
        normal_colors[8] = uVar2;
        if (uVar6 == 10) {
          normal_colors[9] = uVar2;
        }
        else {
          uVar3 = 9;
        }
      }
      if (normals == uVar6) {
        return;
      }
    }
    uVar7 = ((normals - uVar6) - 8 >> 3) + 1;
    iVar1 = uVar7 * 8;
    if (6 < (normals - 1) - uVar6) {
      uVar5 = 0;
      puVar4 = (undefined8 *)(normal_colors + uVar6);
      do {
        uVar5 = uVar5 + 1;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4 = puVar4 + 2;
      } while (uVar5 < uVar7);
      uVar3 = uVar3 + iVar1;
      if (normals - uVar6 == iVar1) {
        return;
      }
    }
    normal_colors[uVar3] = uVar2;
    if (uVar3 + 1 < normals) {
      normal_colors[uVar3 + 1] = uVar2;
      if (uVar3 + 2 < normals) {
        normal_colors[uVar3 + 2] = uVar2;
        if (uVar3 + 3 < normals) {
          normal_colors[uVar3 + 3] = uVar2;
          if (uVar3 + 4 < normals) {
            normal_colors[uVar3 + 4] = uVar2;
            if (uVar3 + 5 < normals) {
              uVar7 = uVar3 + 6;
              uVar6 = uVar7;
              if (uVar7 < normals) {
                uVar6 = uVar7 * 2;
              }
              normal_colors[uVar3 + 5] = uVar2;
              if (uVar7 < normals) {
                *(ushort *)((int)normal_colors + uVar6) = uVar2;
              }
            }
          }
        }
      }
    }
  }
  return;
}


