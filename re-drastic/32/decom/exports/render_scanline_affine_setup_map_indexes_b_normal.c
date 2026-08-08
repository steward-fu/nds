/*
 * Ghidra decompilation
 *
 * Function : render_scanline_affine_setup_map_indexes_b_normal
 * Address  : 080b99ec
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_scanline_affine_setup_map_indexes_b_normal
               (u16 *map_indexes,u32 source_x,u32 source_y,u32 dx,u32 dy,u32 wrap_mask,
               u32 map_pitch_shift)

{
  u16 uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  uVar3 = -((uint)((int)map_indexes << 0x1d) >> 0x1e) & 7;
  uVar1 = ((ushort)wrap_mask & (ushort)(source_x >> 0xb)) +
          (short)((wrap_mask & source_y >> 0xb) << (map_pitch_shift & 0xff));
  uVar8 = uVar3;
  if (uVar3 == 0) {
    iVar7 = 0x100;
    uVar2 = 0x20;
    iVar6 = iVar7;
    iVar9 = iVar7;
  }
  else {
    *map_indexes = uVar1;
    if (uVar3 == 1) {
      iVar7 = 0xff;
    }
    else {
      map_indexes[1] = uVar1;
      if (uVar3 == 2) {
        iVar7 = 0xfe;
      }
      else {
        map_indexes[2] = uVar1;
        if (uVar3 == 3) {
          iVar7 = 0xfd;
        }
        else {
          map_indexes[3] = uVar1;
          if (uVar3 == 4) {
            iVar7 = 0xfc;
          }
          else {
            map_indexes[4] = uVar1;
            if (uVar3 == 5) {
              iVar7 = 0xfb;
            }
            else {
              map_indexes[5] = uVar1;
              if (uVar3 == 7) {
                iVar7 = 0xf9;
                map_indexes[6] = uVar1;
              }
              else {
                iVar7 = 0xfa;
                uVar8 = 6;
              }
            }
          }
        }
      }
    }
    uVar2 = 0x1f;
    iVar6 = 0x100 - uVar3;
    iVar9 = 0xf8;
  }
  uVar3 = 0;
  puVar4 = (undefined8 *)(map_indexes + uVar3);
  do {
    uVar3 = uVar3 + 1;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = puVar4 + 2;
  } while (uVar3 < uVar2);
  iVar5 = uVar8 + iVar9;
  iVar7 = iVar7 - iVar9;
  if (iVar6 != iVar9) {
    map_indexes[iVar5] = uVar1;
    if (iVar7 != 1) {
      map_indexes[iVar5 + 1] = uVar1;
      if (iVar7 != 2) {
        map_indexes[iVar5 + 2] = uVar1;
        if (iVar7 != 3) {
          map_indexes[iVar5 + 3] = uVar1;
          if (iVar7 != 4) {
            map_indexes[iVar5 + 4] = uVar1;
            if (iVar7 != 5) {
              iVar6 = iVar5 + 6;
              if (iVar7 != 6) {
                iVar6 = iVar6 * 2;
              }
              map_indexes[iVar5 + 5] = uVar1;
              if (iVar7 != 6) {
                *(u16 *)((int)map_indexes + iVar6) = uVar1;
              }
            }
          }
        }
      }
    }
  }
  return;
}


