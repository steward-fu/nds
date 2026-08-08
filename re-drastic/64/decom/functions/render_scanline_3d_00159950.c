/*
 * Ghidra decompilation
 *
 * Function : render_scanline_3d
 * Address  : 00159950
 * Program  : drastic64
 */


undefined8 * render_scanline_3d(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar6 = *(uint *)(*(long *)(param_1 + 8) + 0x4a0);
  iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x468);
  if (uVar6 == 0) {
    lVar2 = (param_2 & 0xffffff) * 0x400;
    if (iVar1 != 0) {
      return (undefined8 *)(*(long *)(polygon_sort_list_15121 + param_1 + 0xe5520) + lVar2);
    }
    return (undefined8 *)(*(long *)(polygon_sort_list_15121 + param_1 + 0xe5518) + lVar2);
  }
  if (iVar1 == 0) {
    lVar2 = *(long *)(polygon_sort_list_15121 + param_1 + 0xe5518);
  }
  else {
    lVar2 = *(long *)(polygon_sort_list_15121 + param_1 + 0xe5520);
  }
  puVar3 = (undefined8 *)(lVar2 + (param_2 & 0x3fffff) * 0x1000);
  if ((uVar6 & 1) != 0) {
    return puVar3;
  }
  puVar4 = (ulong *)&scanline_3d_downsampled;
  if (&scanline_3d_downsampled < puVar3 + 0x182 && puVar3 < &DAT_04028130) {
    do {
      puVar5 = (ulong *)((long)puVar4 + 4);
      *(uint *)puVar4 =
           (uint)(*(int *)(puVar3 + 0x180) + *(int *)(puVar3 + 0x100) +
                 *(int *)(puVar3 + 0x80) + *(int *)puVar3) >> 2 & 0x1f3f3f3f;
      puVar3 = (undefined8 *)((long)puVar3 + 4);
      puVar4 = puVar5;
    } while (puVar5 != (ulong *)reciprocal_table_u);
  }
  else {
    do {
      uVar6 = (int)*puVar3 + (int)puVar3[0x80] + (int)puVar3[0x100] + (int)puVar3[0x180];
      uVar7 = (int)((ulong)*puVar3 >> 0x20) + (int)((ulong)puVar3[0x80] >> 0x20) +
              (int)((ulong)puVar3[0x100] >> 0x20) + (int)((ulong)puVar3[0x180] >> 0x20);
      uVar8 = (int)puVar3[1] + (int)puVar3[0x81] + (int)puVar3[0x101] + (int)puVar3[0x181];
      uVar9 = (int)((ulong)puVar3[1] >> 0x20) + (int)((ulong)puVar3[0x81] >> 0x20) +
              (int)((ulong)puVar3[0x101] >> 0x20) + (int)((ulong)puVar3[0x181] >> 0x20);
      puVar5 = puVar4 + 2;
      puVar4[1] = CONCAT17((byte)(uVar9 >> 0x1a),
                           CONCAT16((char)((uint3)(uVar9 >> 10) >> 8),
                                    CONCAT15((char)((uVar9 >> 2) >> 8),
                                             CONCAT14((char)(uVar9 >> 2),
                                                      CONCAT13((byte)(uVar8 >> 0x1a),
                                                               (int3)(uVar8 >> 2)))))) &
                  0x1f3f3f3f1f3f3f3f;
      *puVar4 = CONCAT17((byte)(uVar7 >> 0x1a),
                         CONCAT16((char)((uint3)(uVar7 >> 10) >> 8),
                                  CONCAT15((char)((uVar7 >> 2) >> 8),
                                           CONCAT14((char)(uVar7 >> 2),
                                                    CONCAT13((byte)(uVar6 >> 0x1a),
                                                             (int3)(uVar6 >> 2)))))) &
                0x1f3f3f3f1f3f3f3f;
      puVar3 = puVar3 + 2;
      puVar4 = puVar5;
    } while (puVar5 != (ulong *)reciprocal_table_u);
  }
  return (undefined8 *)&scanline_3d_downsampled;
}


