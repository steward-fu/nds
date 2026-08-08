/*
 * Ghidra decompilation
 *
 * Function : texture_cache_convert_compressed
 * Address  : 00169810
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void texture_cache_convert_compressed
               (long param_1,long param_2,long param_3,int param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  void *pvVar15;
  long lVar16;
  uint *puVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined1 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  size_t __size;
  uint uVar25;
  uint uVar26;
  uint *local_470;
  undefined8 *local_468;
  uint local_460;
  uint local_428 [4];
  uint local_418 [260];
  long local_8;
  
  puVar21 = *(undefined8 **)(param_1 + 0x10);
  uVar24 = (uint)(*(ushort *)(param_1 + 0x42) >> 2);
  local_8 = ___stack_chk_guard;
  uVar6 = *(ushort *)(param_1 + 0x40);
  if (*(ushort *)(param_1 + 0x42) >> 2 == 0) {
    __size = 4;
    uVar23 = 1;
    uVar24 = 0;
LAB_00169e1c:
    local_470 = local_418;
    local_418[0] = 0;
    pvVar15 = malloc(__size);
    *(void **)(param_1 + 0x18) = pvVar15;
    memcpy(pvVar15,local_470,__size);
    pvVar15 = realloc(*(void **)(param_1 + 0x10),(ulong)uVar24);
    *(void **)(param_1 + 0x10) = pvVar15;
    *(undefined2 *)(param_1 + 0x49) = 0x108;
    if (uVar23 == 1) goto LAB_00169cac;
  }
  else {
    uVar13 = (uint)(uVar6 >> 2);
    uVar12 = (uint)uVar6 * 2;
    lVar16 = (ulong)(uVar13 - 1) + 1;
    uVar14 = (uint)uVar6;
    uVar1 = uVar12 + uVar14;
    uVar23 = 1;
    local_460 = 0;
    local_468 = puVar21;
    do {
      lVar22 = 0;
      puVar18 = local_468;
      if (uVar6 >> 2 != 0) {
        do {
          uVar8 = *(ushort *)(param_3 + lVar22 * 2);
          uVar2 = (uVar8 & 0x3fff) * 2 + param_4;
          uVar8 = uVar8 >> 0xe;
          lVar11 = ((ulong)uVar2 & 0x1fff) * 2;
          uVar5 = *(uint *)(param_2 + lVar22 * 4);
          puVar20 = *(undefined1 **)(param_5 + (ulong)(uVar2 >> 0xd) * 8);
          puVar4 = &zero_palette_11294;
          if (puVar20 != (undefined1 *)0x0) {
            puVar4 = puVar20;
          }
          uVar9 = *(ushort *)(puVar4 + lVar11);
          uVar7 = *(ushort *)(puVar4 + lVar11 + 2);
          uVar19 = (uVar7 >> 5 & 0x1f) << 8 | (uVar7 >> 10 & 0x1f) << 0x10 | uVar7 & 0x1f;
          uVar25 = (uVar9 >> 5 & 0x1f) << 8 | (uVar9 >> 10 & 0x1f) << 0x10 | uVar9 & 0x1f;
          uVar2 = (uVar19 + 0x1f1f1f >> 5 & 0x10101) + uVar19 * 2;
          uVar3 = (uVar25 + 0x1f1f1f >> 5 & 0x10101) + uVar25 * 2;
          local_428[0] = uVar3 | 0x1f000000;
          local_428[1] = uVar2 | 0x1f000000;
          if (uVar8 == 2) {
            uVar8 = *(ushort *)(puVar4 + lVar11 + 6);
            uVar7 = *(ushort *)(puVar4 + lVar11 + 4);
            uVar19 = (uVar7 >> 5 & 0x1f) << 8 | (uVar7 >> 10 & 0x1f) << 0x10 | uVar7 & 0x1f;
            uVar25 = (uVar8 >> 5 & 0x1f) << 8 | (uVar8 >> 10 & 0x1f) << 0x10 | uVar8 & 0x1f;
            local_428[2] = (uVar19 + 0x1f1f1f >> 5 & 0x10101) + uVar19 * 2 | 0x1f000000;
            local_428[3] = (uVar25 + 0x1f1f1f >> 5 & 0x10101) + uVar25 * 2 | 0x1f000000;
          }
          else if (uVar8 == 3) {
            uVar26 = uVar19 * 5 + uVar25 * 3 >> 3 & 0x1f1f1f;
            uVar19 = uVar19 * 3 + uVar25 * 5 >> 3 & 0x1f1f1f;
            local_428[2] = (uVar19 + 0x1f1f1f >> 5 & 0x10101) + uVar19 * 2 | 0x1f000000;
            local_428[3] = (uVar26 + 0x1f1f1f >> 5 & 0x10101) + uVar26 * 2 | 0x1f000000;
          }
          else {
            if (uVar8 == 1) {
              local_428[3] = 0;
              uVar19 = uVar19 + uVar25 >> 1 & 0x1f1f1f;
            }
            else {
              uVar8 = *(ushort *)(puVar4 + lVar11 + 4);
              local_428[3] = 0;
              uVar19 = (uVar8 >> 5 & 0x1f) << 8 | (uVar8 >> 10 & 0x1f) << 0x10 | uVar8 & 0x1f;
            }
            local_428[3] = 0;
            local_428[2] = (uVar19 + 0x1f1f1f >> 5 & 0x10101) + uVar19 * 2 | 0x1f000000;
          }
          if (uVar23 < 0x101) {
            uVar19 = (uVar3 & 0x3f00) >> 2 | (uVar3 & 0x3f0000) >> 4 | uVar3 & 0x3f;
            if ((&unique_color_map_11295)[uVar19] == '\0') {
              (&unique_color_map_11295)[uVar19] = (char)uVar23;
              local_418[uVar23] = uVar3 | 0x1f000000;
              uVar23 = uVar23 + 1;
            }
            uVar3 = (uVar2 & 0x3f00) >> 2 | (uVar2 & 0x3f0000) >> 4 | uVar2 & 0x3f;
            if ((&unique_color_map_11295)[uVar3] == '\0') {
              (&unique_color_map_11295)[uVar3] = (char)uVar23;
              local_418[uVar23] = uVar2 | 0x1f000000;
              uVar23 = uVar23 + 1;
            }
            uVar2 = local_428[2] >> 2 & 0xfc0 | local_428[2] >> 4 & 0x3f000 | local_428[2] & 0x3f;
            if ((&unique_color_map_11295)[uVar2] == '\0') {
              (&unique_color_map_11295)[uVar2] = (char)uVar23;
              local_418[uVar23] = local_428[2];
              uVar23 = uVar23 + 1;
            }
            if ((local_428[3] != 0) &&
               (uVar2 = local_428[3] >> 2 & 0xfc0 | local_428[3] >> 4 & 0x3f000 |
                        local_428[3] & 0x3f, (&unique_color_map_11295)[uVar2] == '\0')) {
              (&unique_color_map_11295)[uVar2] = (char)uVar23;
              local_418[uVar23] = local_428[3];
              uVar23 = uVar23 + 1;
            }
          }
          lVar22 = lVar22 + 1;
          uVar26 = local_428[(ulong)(uVar5 >> 2) & 3];
          uVar25 = local_428[(ulong)uVar5 & 3];
          uVar2 = local_428[(ulong)(uVar5 >> 8) & 3];
          uVar3 = local_428[(ulong)(uVar5 >> 10) & 3];
          uVar19 = local_428[(ulong)(uVar5 >> 0xc) & 3];
          puVar18[1] = CONCAT44(local_428[(ulong)(uVar5 >> 6) & 3],
                                local_428[(ulong)(uVar5 >> 4) & 3]);
          *puVar18 = CONCAT44(uVar26,uVar25);
          *(uint *)((long)puVar18 + (ulong)uVar6 * 4) = uVar2;
          uVar2 = local_428[(ulong)(uVar5 >> 0xe) & 3];
          *(uint *)((long)puVar18 + (ulong)(uVar14 + 1) * 4) = uVar3;
          *(uint *)((long)puVar18 + (ulong)(uVar14 + 2) * 4) = uVar19;
          *(uint *)((long)puVar18 + (ulong)(uVar14 + 3) * 4) = uVar2;
          *(uint *)((long)puVar18 + (ulong)uVar12 * 4) = local_428[(ulong)(uVar5 >> 0x10) & 3];
          *(uint *)((long)puVar18 + (ulong)(uVar12 + 1) * 4) = local_428[(ulong)(uVar5 >> 0x12) & 3]
          ;
          *(uint *)((long)puVar18 + (ulong)(uVar12 + 2) * 4) = local_428[(ulong)(uVar5 >> 0x14) & 3]
          ;
          *(uint *)((long)puVar18 + (ulong)(uVar12 + 3) * 4) = local_428[(ulong)(uVar5 >> 0x16) & 3]
          ;
          *(uint *)((long)puVar18 + (ulong)uVar1 * 4) = local_428[(ulong)(uVar5 >> 0x18) & 3];
          uVar2 = local_428[(ulong)(uVar5 >> 0x1c) & 3];
          *(uint *)((long)puVar18 + (ulong)(uVar1 + 1) * 4) = local_428[(ulong)(uVar5 >> 0x1a) & 3];
          *(uint *)((long)puVar18 + (ulong)(uVar1 + 2) * 4) = uVar2;
          *(uint *)((long)puVar18 + (ulong)(uVar1 + 3) * 4) = local_428[uVar5 >> 0x1e];
          puVar18 = puVar18 + 2;
        } while ((uint)lVar22 < uVar13);
        param_2 = param_2 + lVar16 * 4;
        param_3 = param_3 + lVar16 * 2;
        local_468 = local_468 + lVar16 * 2;
      }
      local_460 = local_460 + 1;
      local_468 = (undefined8 *)((long)local_468 + (ulong)uVar1 * 4);
    } while (uVar24 != local_460);
    if (uVar23 < 0x101) {
      __size = (size_t)(uVar23 << 2);
      iVar10 = uVar13 * uVar24;
      uVar24 = iVar10 * 0x10;
      if (iVar10 != 0) {
        lVar16 = 0;
        do {
          while (uVar1 = *(uint *)((long)puVar21 + lVar16 * 4), uVar1 == 0) {
            *(undefined *)((long)puVar21 + lVar16) = 0;
            lVar16 = lVar16 + 1;
            if (uVar24 <= (uint)lVar16) goto LAB_00169e1c;
          }
          *(undefined1 *)((long)puVar21 + lVar16) =
               (&unique_color_map_11295)[uVar1 & 0x3f | uVar1 >> 2 & 0xfc0 | uVar1 >> 4 & 0x3f000];
          lVar16 = lVar16 + 1;
        } while ((uint)lVar16 < uVar24);
      }
      goto LAB_00169e1c;
    }
  }
  local_470 = local_418;
  puVar17 = local_418 + 1;
  while( true ) {
    uVar24 = local_470[1];
    (&unique_color_map_11295)[uVar24 & 0x3f | uVar24 >> 2 & 0xfc0 | uVar24 >> 4 & 0x3f000] = 0;
    if (puVar17 == local_418 + 1 + (uVar23 - 2)) break;
    local_470 = puVar17;
    puVar17 = puVar17 + 1;
  }
LAB_00169cac:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
  }
  return;
}


