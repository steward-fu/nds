/*
 * Ghidra decompilation
 *
 * Function : video_load_savestate
 * Address  : 001315e0
 * Program  : drastic64
 */


void video_load_savestate(long param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  uint uVar4;
  uint *puVar5;
  ulong uVar6;
  uint uVar7;
  uint *puVar8;
  
  video_2d_load_savestate(param_1 + 0x2e78);
  video_2d_load_savestate(param_1 + 0x84298,param_2,param_3);
  geometry_load_savestate(param_1 + 0x356cf0,param_2,param_3);
  puVar5 = (uint *)(param_1 + 0x14);
  uVar6 = 0;
  *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 2;
  puVar8 = puVar5;
  do {
    if (*puVar8 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20a0 + uVar6 * 8);
      *(undefined2 *)(param_1 + 0x2e70) = 0;
      remap_vram_body(param_1,uVar3,uVar6 & 0xffffffff,0,1);
      uVar4 = (uint)*(ushort *)(param_1 + 0x2e70);
      if (*(ushort *)(param_1 + 0x2e70) != 0) {
        uVar7 = 0;
        do {
          if ((uVar4 & 1) != 0) {
            lVar1 = param_1 + (ulong)uVar7 * 8;
            *(undefined4 *)(param_1 + (ulong)uVar7 * 0x10 + 0x14) = 0xffffffff;
            remap_vram_body(param_1,*(undefined8 *)(lVar1 + 0x20a0),uVar7,
                            **(undefined **)(lVar1 + 0x20e8),0);
          }
          uVar4 = uVar4 >> 1;
          uVar7 = uVar7 + 1;
        } while (uVar4 != 0);
      }
    }
    uVar6 = uVar6 + 1;
    puVar8 = puVar8 + 4;
  } while (uVar6 != 9);
  uVar6 = 0;
  do {
    bVar2 = **(byte **)(param_1 + 0x20e8 + uVar6 * 8);
    if ((uint)bVar2 != *puVar5) {
      uVar3 = *(undefined8 *)(param_1 + 0x20a0 + uVar6 * 8);
      *(undefined2 *)(param_1 + 0x2e70) = 0;
      remap_vram_body(param_1,uVar3,uVar6 & 0xffffffff,bVar2,1);
      uVar4 = (uint)*(ushort *)(param_1 + 0x2e70);
      if (*(ushort *)(param_1 + 0x2e70) != 0) {
        uVar7 = 0;
        do {
          if ((uVar4 & 1) != 0) {
            lVar1 = param_1 + (ulong)uVar7 * 8;
            *(undefined4 *)(param_1 + (ulong)uVar7 * 0x10 + 0x14) = 0xffffffff;
            remap_vram_body(param_1,*(undefined8 *)(lVar1 + 0x20a0),uVar7,
                            **(undefined **)(lVar1 + 0x20e8),0);
          }
          uVar4 = uVar4 >> 1;
          uVar7 = uVar7 + 1;
        } while (uVar4 != 0);
      }
    }
    uVar6 = uVar6 + 1;
    puVar5 = puVar5 + 4;
  } while (uVar6 != 9);
  *(undefined4 *)(polygon_sort_list_13776 + param_1 + 0x6e200) = 0;
  *(undefined8 *)(polygon_sort_list_13776 + param_1 + 0x6e238) = 0;
  *(undefined8 *)(polygon_sort_list_15121 + param_1 + 0xed690) = 0;
  flush_texture_cache(param_1 + 0x34ecc0);
  return;
}


