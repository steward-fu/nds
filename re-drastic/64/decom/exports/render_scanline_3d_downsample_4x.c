/*
 * Ghidra decompilation
 *
 * Function : render_scanline_3d_downsample_4x
 * Address  : 001598b0
 * Program  : drastic64
 */


void render_scanline_3d_downsample_4x(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 + 2 <= param_2 || param_2 + 0x182 <= param_1) {
    puVar1 = param_2;
    do {
      puVar2 = puVar1 + 2;
      uVar3 = (int)*puVar1 + (int)puVar1[0x80] + (int)puVar1[0x100] + (int)puVar1[0x180];
      uVar4 = (int)(*puVar1 >> 0x20) + (int)(puVar1[0x80] >> 0x20) + (int)(puVar1[0x100] >> 0x20) +
              (int)(puVar1[0x180] >> 0x20);
      uVar5 = (int)puVar1[1] + (int)puVar1[0x81] + (int)puVar1[0x101] + (int)puVar1[0x181];
      uVar6 = (int)(puVar1[1] >> 0x20) + (int)(puVar1[0x81] >> 0x20) + (int)(puVar1[0x101] >> 0x20)
              + (int)(puVar1[0x181] >> 0x20);
      param_1[1] = CONCAT17((byte)(uVar6 >> 0x1a),
                            CONCAT16((char)((uint3)(uVar6 >> 10) >> 8),
                                     CONCAT15((char)((uVar6 >> 2) >> 8),
                                              CONCAT14((char)(uVar6 >> 2),
                                                       CONCAT13((byte)(uVar5 >> 0x1a),
                                                                (int3)(uVar5 >> 2)))))) &
                   0x1f3f3f3f1f3f3f3f;
      *param_1 = CONCAT17((byte)(uVar4 >> 0x1a),
                          CONCAT16((char)((uint3)(uVar4 >> 10) >> 8),
                                   CONCAT15((char)((uVar4 >> 2) >> 8),
                                            CONCAT14((char)(uVar4 >> 2),
                                                     CONCAT13((byte)(uVar3 >> 0x1a),
                                                              (int3)(uVar3 >> 2)))))) &
                 0x1f3f3f3f1f3f3f3f;
      param_1 = param_1 + 2;
      puVar1 = puVar2;
    } while (puVar2 != param_2 + 0x80);
    return;
  }
  puVar1 = param_2;
  do {
    puVar2 = (ulong *)((long)puVar1 + 4);
    *(uint *)param_1 =
         *(uint *)(puVar1 + 0x180) + *(uint *)(puVar1 + 0x100) +
         *(uint *)(puVar1 + 0x80) + *(uint *)puVar1 >> 2 & 0x1f3f3f3f;
    puVar1 = puVar2;
    param_1 = (ulong *)((long)param_1 + 4);
  } while (param_2 + 0x80 != puVar2);
  return;
}


