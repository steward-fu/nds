/*
 * Ghidra decompilation
 *
 * Function : event_scanline_start_function
 * Address  : 0011d960
 * Program  : drastic64
 */


void event_scanline_start_function(long *param_1)

{
  long *plVar1;
  undefined uVar2;
  byte bVar3;
  uint *puVar4;
  byte bVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  long lVar10;
  undefined2 uVar11;
  uint uVar12;
  
  uVar12 = *(ushort *)((long)param_1 + 0x14) + 1;
  uVar11 = (undefined2)uVar12;
  if (*(ushort *)((long)param_1 + 0x14) == 0x105) {
    uVar8 = *(byte *)((long)param_1 + 0x35ef9a4) & 0xfe;
    *(char *)((long)param_1 + 0x35ef9a4) = (char)uVar8;
    *(byte *)((long)param_1 + 0x35f79a4) = *(byte *)((long)param_1 + 0x35f79a4) & 0xfe;
  }
  else if (uVar12 == 0x107) {
    plVar1 = param_1 + 0x6da379;
    if ((*(int *)(param_1 + 0x6da37f) < 0) && (*(char *)((long)param_1 + 0x36d1bfc) == '\x03')) {
      dma_transfer(plVar1,param_1 + 0x6da37b);
    }
    if ((*(int *)(param_1 + 0x6da384) < 0) && (*(char *)((long)param_1 + 0x36d1c24) == '\x03')) {
      dma_transfer(plVar1);
    }
    if ((*(int *)(param_1 + 0x6da389) < 0) && (*(char *)((long)param_1 + 0x36d1c4c) == '\x03')) {
      dma_transfer(plVar1,param_1 + 0x6da385);
    }
    if ((*(int *)(param_1 + 0x6da38e) < 0) && (*(char *)((long)param_1 + 0x36d1c74) == '\x03')) {
      dma_transfer(plVar1,param_1 + 0x6da38a);
    }
    start_frame(param_1 + 0x6da3d8);
    uVar11 = 0;
    uVar12 = 0;
    uVar8 = (uint)*(byte *)((long)param_1 + 0x35ef9a4);
  }
  else if (uVar12 == 0xc0) {
    uVar6 = rumble_pack_update(param_1 + 0x184);
    bVar5 = *(byte *)((long)param_1 + 0x35ef9a4);
    *(byte *)((long)param_1 + 0x35ef9a4) = bVar5 | 1;
    if ((bVar5 >> 3 & 1) != 0) {
      lVar10 = param_1[0x2b93ba];
      uVar8 = *(uint *)(lVar10 + 0x214) | 1;
      *(uint *)(lVar10 + 0x214) = uVar8;
      if ((*(uint *)(param_1 + 0x2b93cc) & 6) == 0) {
        *(uint *)(param_1 + 0x2b93cb) =
             -*(int *)(lVar10 + 0x208) & uVar8 & *(uint *)(lVar10 + 0x210);
      }
    }
    bVar5 = *(byte *)((long)param_1 + 0x35f79a4);
    *(byte *)((long)param_1 + 0x35f79a4) = bVar5 | 1;
    if ((bVar5 >> 3 & 1) != 0) {
      lVar10 = param_1[0x4ba078];
      uVar8 = *(uint *)(lVar10 + 0x214) | 1;
      *(uint *)(lVar10 + 0x214) = uVar8;
      if ((*(uint *)(param_1 + 0x4ba08a) & 6) == 0) {
        *(uint *)(param_1 + 0x4ba089) =
             -*(int *)(lVar10 + 0x208) & uVar8 & *(uint *)(lVar10 + 0x210);
      }
    }
    update_frame(param_1 + 0x6da3d8);
    update_input(param_1 + 0xaaa);
    benchmark_step(param_1 + 0x11463);
    backup_auto_save_step(param_1 + 0x191);
    gba_backup_auto_save_step(param_1 + 0xf8);
    if (((*(int *)(param_1 + 0x10b44) != 0) && ((*(uint *)(param_1 + 0x4ba089) & 1) != 0)) &&
       ((*(uint *)(param_1 + 0x4ba0e0) >> 7 & 1) == 0)) {
      process_cheats(param_1,param_1 + 0x69,*(undefined4 *)param_1);
    }
    platform_set_rumble_state(uVar6);
    param_1[0x2b8fa1] = param_1[1];
    if ((((*(uint *)((long)param_1 + 0x8a374) >> 6 & 1) == 0) &&
        (update_spu(param_1), *(int *)((long)param_1 + 0x85a04) == 0)) &&
       (*(int *)((long)param_1 + 0x85a34) == 0)) {
      audio_sync(param_1 + 0x2b0e00);
    }
    plVar1 = param_1 + 0x6da379;
    if ((*(int *)(param_1 + 0x6da37f) < 0) && (*(char *)((long)param_1 + 0x36d1bfc) == '\x01')) {
      dma_transfer(plVar1,param_1 + 0x6da37b);
    }
    if ((*(int *)(param_1 + 0x6da384) < 0) && (*(char *)((long)param_1 + 0x36d1c24) == '\x01')) {
      dma_transfer(plVar1);
    }
    if ((*(int *)(param_1 + 0x6da389) < 0) && (*(char *)((long)param_1 + 0x36d1c4c) == '\x01')) {
      dma_transfer(plVar1,param_1 + 0x6da385);
    }
    if ((*(int *)(param_1 + 0x6da38e) < 0) && (*(char *)((long)param_1 + 0x36d1c74) == '\x01')) {
      dma_transfer(plVar1,param_1 + 0x6da38a);
    }
    plVar1 = param_1 + 0x6da38f;
    if ((*(int *)(param_1 + 0x6da395) < 0) && (*(char *)((long)param_1 + 0x36d1cac) == '\x01')) {
      dma_transfer(plVar1,param_1 + 0x6da391);
    }
    if ((*(int *)(param_1 + 0x6da39a) < 0) && (*(char *)((long)param_1 + 0x36d1cd4) == '\x01')) {
      dma_transfer(plVar1,param_1 + 0x6da396);
    }
    if ((*(int *)(param_1 + 0x6da39f) < 0) && (*(char *)((long)param_1 + 0x36d1cfc) == '\x01')) {
      dma_transfer(plVar1,param_1 + 0x6da39b);
    }
    if ((*(int *)(param_1 + 0x6da3a4) < 0) && (*(char *)((long)param_1 + 0x36d1d24) == '\x01')) {
      dma_transfer(plVar1,param_1 + 0x6da3a0);
    }
    *param_1 = *param_1 + 1;
    uVar11 = 0xc0;
    uVar8 = (uint)*(byte *)((long)param_1 + 0x35ef9a4);
  }
  else if (uVar12 == 0xd7) {
    system_frame_sync();
    uVar2 = *(undefined *)(param_1 + 0x6da9be);
    if ((*(uint *)((long)param_1 + 0x8a374) & 8) != 0) {
      uVar2 = 1;
    }
    if (*(int *)(param_1 + 0x10b42) == 0) {
      update_frame_3d(param_1 + 0x6da3d8,uVar2);
    }
    else {
      video_3d_start_rendering();
    }
    uVar8 = (uint)*(byte *)((long)param_1 + 0x35ef9a4);
  }
  else {
    uVar8 = (uint)*(byte *)((long)param_1 + 0x35ef9a4);
  }
  if (((uint)*(ushort *)((long)param_1 + 0x35ef9a4) * 2 & 0x100 |
      (uint)(*(ushort *)((long)param_1 + 0x35ef9a4) >> 8)) == uVar12) {
    *(byte *)((long)param_1 + 0x35ef9a4) = (byte)uVar8 | 4;
    if ((uVar8 >> 5 & 1) != 0) {
      lVar10 = param_1[0x2b93ba];
      uVar8 = *(uint *)(lVar10 + 0x214) | 4;
      *(uint *)(lVar10 + 0x214) = uVar8;
      if ((*(uint *)(param_1 + 0x2b93cc) & 6) == 0) {
        *(uint *)(param_1 + 0x2b93cb) =
             -*(int *)(lVar10 + 0x208) & uVar8 & *(uint *)(lVar10 + 0x210);
      }
    }
  }
  else {
    *(byte *)((long)param_1 + 0x35ef9a4) = (byte)uVar8 & 0xfb;
  }
  bVar3 = *(byte *)((long)param_1 + 0x35f79a4);
  bVar5 = bVar3 & 0xfb;
  if (((uint)*(ushort *)((long)param_1 + 0x35f79a4) * 2 & 0x100 |
      (uint)(*(ushort *)((long)param_1 + 0x35f79a4) >> 8)) == uVar12) {
    bVar5 = bVar3 | 4;
    *(byte *)((long)param_1 + 0x35f79a4) = bVar5;
    if ((bVar3 >> 5 & 1) != 0) {
      lVar10 = param_1[0x4ba078];
      uVar12 = *(uint *)(lVar10 + 0x214) | 4;
      *(uint *)(lVar10 + 0x214) = uVar12;
      if ((*(uint *)(param_1 + 0x4ba08a) & 6) == 0) {
        *(uint *)(param_1 + 0x4ba089) =
             -*(int *)(lVar10 + 0x208) & uVar12 & *(uint *)(lVar10 + 0x210);
      }
      bVar5 = *(byte *)((long)param_1 + 0x35f79a4);
    }
  }
  *(undefined2 *)((long)param_1 + 0x35ef9a6) = uVar11;
  *(undefined2 *)((long)param_1 + 0x35f79a6) = uVar11;
  plVar1 = param_1 + 3;
  *(byte *)((long)param_1 + 0x35ef9a4) = *(byte *)((long)param_1 + 0x35ef9a4) & 0xfd;
  *(byte *)((long)param_1 + 0x35f79a4) = bVar5 & 0xfd;
  *(undefined2 *)((long)param_1 + 0x14) = uVar11;
  if ((uint *)param_1[99] == (uint *)0x0) {
    *(undefined4 *)(param_1 + 3) = 0xc00;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[99] = (long)plVar1;
  }
  else {
    uVar12 = 0xc00;
    puVar4 = (uint *)param_1[99];
    puVar9 = (uint *)0x0;
    while (puVar7 = puVar4, *puVar7 < uVar12) {
      uVar12 = uVar12 - *puVar7;
      puVar4 = *(uint **)(puVar7 + 6);
      puVar9 = puVar7;
      if (*(uint **)(puVar7 + 6) == (uint *)0x0) {
        *(uint *)(param_1 + 3) = uVar12;
        param_1[6] = 0;
        param_1[7] = (long)puVar7;
        *(long **)(puVar7 + 6) = plVar1;
        return;
      }
    }
    *(uint *)(param_1 + 3) = uVar12;
    param_1[6] = (long)puVar7;
    param_1[7] = (long)puVar9;
    if (puVar9 == (uint *)0x0) {
      param_1[99] = (long)plVar1;
    }
    else {
      *(long **)(puVar9 + 6) = plVar1;
    }
    *(long **)(puVar7 + 8) = plVar1;
    *puVar7 = *puVar7 - uVar12;
  }
  return;
}


