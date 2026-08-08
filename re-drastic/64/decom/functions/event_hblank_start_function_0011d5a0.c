/*
 * Ghidra decompilation
 *
 * Function : event_hblank_start_function
 * Address  : 0011d5a0
 * Program  : drastic64
 */


void event_hblank_start_function(long param_1)

{
  int iVar1;
  byte bVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  uint *puVar7;
  
  bVar2 = nds_system[param_1 + 0x30f39a4];
  nds_system[param_1 + 0x30f39a4] = bVar2 | 2;
  if ((bVar2 >> 4 & 1) != 0) {
    lVar6 = *(long *)(nds_system + param_1 + 0x10cddd0);
    uVar4 = *(uint *)(lVar6 + 0x214) | 2;
    *(uint *)(lVar6 + 0x214) = uVar4;
    if ((*(uint *)(nds_system + param_1 + 0x10cde60) & 6) == 0) {
      *(uint *)(nds_system + param_1 + 0x10cde58) =
           -*(int *)(lVar6 + 0x208) & uVar4 & *(uint *)(lVar6 + 0x210);
    }
  }
  bVar2 = nds_system[param_1 + 0x30fb9a4];
  nds_system[param_1 + 0x30fb9a4] = bVar2 | 2;
  if ((bVar2 >> 4 & 1) != 0) {
    lVar6 = *(long *)(nds_system + param_1 + 0x20d43c0);
    uVar4 = *(uint *)(lVar6 + 0x214) | 2;
    *(uint *)(lVar6 + 0x214) = uVar4;
    if ((*(uint *)(nds_system + param_1 + 0x20d4450) & 6) == 0) {
      *(uint *)(nds_system + param_1 + 0x20d4448) =
           -*(int *)(lVar6 + 0x208) & uVar4 & *(uint *)(lVar6 + 0x210);
    }
  }
  if (*(ushort *)(param_1 + 0x14) < 0xc0) {
    lVar6 = param_1 + 0x36d1bc8;
    if (((*(uint *)(nds_system + param_1 + 0x31d8dc8) >> 0x11 & 1) == 0) &&
       (nds_system[param_1 + 0x362e9a0] == '\0')) {
      iVar1 = *(int *)(nds_system + param_1 + 0x31d5bf8);
    }
    else {
      video_render_scanlines(param_1 + 0x36d1ec0);
      iVar1 = *(int *)(nds_system + param_1 + 0x31d5bf8);
    }
    if ((iVar1 < 0) && (nds_system[param_1 + 0x31d5bfc] == '\x02')) {
      if (*(int *)(nds_system + param_1 + 0x31d5bf4) + 0xfa000000U < 0x800000) {
        video_render_scanlines(param_1 + 0x36d1ec0,*(undefined2 *)(param_1 + 0x14));
      }
      dma_transfer(lVar6,param_1 + 0x36d1bd8);
    }
    if ((*(int *)(nds_system + param_1 + 0x31d5c20) < 0) &&
       (nds_system[param_1 + 0x31d5c24] == '\x02')) {
      if (*(int *)(nds_system + param_1 + 0x31d5c1c) + 0xfa000000U < 0x800000) {
        video_render_scanlines(param_1 + 0x36d1ec0,*(undefined2 *)(param_1 + 0x14));
      }
      dma_transfer(lVar6,param_1 + 0x36d1c00);
    }
    if ((*(int *)(nds_system + param_1 + 0x31d5c48) < 0) &&
       (nds_system[param_1 + 0x31d5c4c] == '\x02')) {
      if (*(int *)(nds_system + param_1 + 0x31d5c44) + 0xfa000000U < 0x800000) {
        video_render_scanlines(param_1 + 0x36d1ec0,*(undefined2 *)(param_1 + 0x14));
      }
      dma_transfer(lVar6,param_1 + 0x36d1c28);
    }
    if ((*(int *)(nds_system + param_1 + 0x31d5c70) < 0) &&
       (nds_system[param_1 + 0x31d5c74] == '\x02')) {
      if (*(int *)(nds_system + param_1 + 0x31d5c6c) + 0xfa000000U < 0x800000) {
        video_render_scanlines(param_1 + 0x36d1ec0,*(undefined2 *)(param_1 + 0x14));
      }
      dma_transfer(lVar6,param_1 + 0x36d1c50);
    }
    if ((nds_system[param_1 + 0x362e99d] != '\0') && (*(short *)(param_1 + 0x14) == 0xbf)) {
      *(undefined2 *)(nds_system + param_1 + 0x30f39a6) = 0xc0;
      *(undefined2 *)(nds_system + param_1 + 0x30fb9a6) = 0xc0;
    }
  }
  lVar6 = param_1 + 0x48;
  if (*(uint **)(param_1 + 0x318) == (uint *)0x0) {
    *(undefined4 *)(param_1 + 0x48) = 0x4a4;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(long *)(param_1 + 0x318) = lVar6;
  }
  else {
    uVar4 = 0x4a4;
    puVar3 = *(uint **)(param_1 + 0x318);
    puVar7 = (uint *)0x0;
    while (puVar5 = puVar3, *puVar5 < uVar4) {
      uVar4 = uVar4 - *puVar5;
      puVar3 = *(uint **)(puVar5 + 6);
      puVar7 = puVar5;
      if (*(uint **)(puVar5 + 6) == (uint *)0x0) {
        *(uint *)(param_1 + 0x48) = uVar4;
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(uint **)(param_1 + 0x68) = puVar5;
        *(long *)(puVar5 + 6) = lVar6;
        return;
      }
    }
    *(uint *)(param_1 + 0x48) = uVar4;
    *(uint **)(param_1 + 0x60) = puVar5;
    *(uint **)(param_1 + 0x68) = puVar7;
    if (puVar7 == (uint *)0x0) {
      *(long *)(param_1 + 0x318) = lVar6;
    }
    else {
      *(long *)(puVar7 + 6) = lVar6;
    }
    *(long *)(puVar5 + 8) = lVar6;
    *puVar5 = *puVar5 - uVar4;
  }
  return;
}


