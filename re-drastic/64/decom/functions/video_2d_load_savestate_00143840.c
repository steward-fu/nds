/*
 * Ghidra decompilation
 *
 * Function : video_2d_load_savestate
 * Address  : 00143840
 * Program  : drastic64
 */


void video_2d_load_savestate(long *param_1,long param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  
  *(undefined4 *)(param_1 + 0x12) = **(undefined4 **)(param_2 + 0x20);
  lVar4 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar4 + 4;
  *(undefined4 *)((long)param_1 + 0x9c) = *(undefined4 *)(lVar4 + 4);
  lVar4 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar4 + 4;
  *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(lVar4 + 4);
  lVar4 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar4 + 2;
  *(undefined2 *)((long)param_1 + 0xa4) = *(undefined2 *)(lVar4 + 2);
  lVar4 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar4 + 2;
  *(undefined2 *)((long)param_1 + 0xa2) = *(undefined2 *)(lVar4 + 2);
  lVar4 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar4 + 2;
  *(undefined2 *)((long)param_1 + 0xa6) = *(undefined2 *)(lVar4 + 2);
  lVar4 = *(long *)(param_2 + 0x20);
  puVar5 = (undefined4 *)(lVar4 + 2);
  *(undefined4 **)(param_2 + 0x20) = puVar5;
  if (9 < param_3) {
    *(undefined2 *)(param_1 + 0x15) = *(undefined2 *)(lVar4 + 2);
    puVar5 = (undefined4 *)(*(long *)(param_2 + 0x20) + 2);
    *(undefined4 **)(param_2 + 0x20) = puVar5;
  }
  *(undefined4 *)((long)param_1 + 0xaa) = *puVar5;
  lVar4 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar4 + 4;
  *(undefined4 *)((long)param_1 + 0xae) = *(undefined4 *)(lVar4 + 4);
  lVar4 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar4 + 4;
  *(undefined *)((long)param_1 + 0xb4) = *(undefined *)(lVar4 + 4);
  puVar6 = (undefined2 *)(*(long *)(param_2 + 0x20) + 1);
  *(undefined2 **)(param_2 + 0x20) = puVar6;
  plVar7 = param_1 + 0x20;
  do {
    *(undefined2 *)(plVar7 + 0xb) = *puVar6;
    plVar1 = plVar7 + 0x16;
    lVar4 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar4 + 2;
    *(undefined4 *)plVar7 = *(undefined4 *)(lVar4 + 2);
    lVar4 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar4 + 4;
    *(undefined4 *)((long)plVar7 + 4) = *(undefined4 *)(lVar4 + 4);
    lVar4 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar4 + 4;
    *(undefined4 *)(plVar7 + 1) = *(undefined4 *)(lVar4 + 4);
    lVar4 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar4 + 4;
    *(undefined4 *)(plVar7 + 9) = *(undefined4 *)(lVar4 + 4);
    lVar4 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar4 + 4;
    *(undefined4 *)((long)plVar7 + 0x4c) = *(undefined4 *)(lVar4 + 4);
    lVar4 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar4 + 4;
    *(undefined4 *)(plVar7 + 10) = *(undefined4 *)(lVar4 + 4);
    lVar4 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar4 + 4;
    *(undefined4 *)((long)plVar7 + 0x54) = *(undefined4 *)(lVar4 + 4);
    lVar4 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar4 + 4;
    *(undefined2 *)((long)plVar7 + 0x5a) = *(undefined2 *)(lVar4 + 4);
    lVar4 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar4 + 2;
    *(undefined2 *)((long)plVar7 + 0x5c) = *(undefined2 *)(lVar4 + 2);
    lVar4 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar4 + 2;
    *(undefined2 *)((long)plVar7 + 0x5e) = *(undefined2 *)(lVar4 + 2);
    lVar4 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar4 + 2;
    *(undefined2 *)(plVar7 + 0xc) = *(undefined2 *)(lVar4 + 2);
    lVar4 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar4 + 2;
    *(undefined2 *)((long)plVar7 + 0x62) = *(undefined2 *)(lVar4 + 2);
    lVar4 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar4 + 2;
    *(undefined2 *)((long)plVar7 + 100) = *(undefined2 *)(lVar4 + 2);
    lVar4 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar4 + 2;
    *(undefined2 *)((long)plVar7 + 0x66) = *(undefined2 *)(lVar4 + 2);
    lVar4 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar4 + 2;
    *(undefined2 *)(plVar7 + 0xd) = *(undefined2 *)(lVar4 + 2);
    lVar4 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar4 + 2;
    *(undefined *)((long)plVar7 + 0x6a) = *(undefined *)(lVar4 + 2);
    lVar4 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar4 + 1;
    *(undefined *)((long)plVar7 + 0x6b) = *(undefined *)(lVar4 + 1);
    lVar4 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar4 + 1;
    *(undefined *)((long)plVar7 + 0x6c) = *(undefined *)(lVar4 + 1);
    lVar4 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar4 + 1;
    *(undefined *)((long)plVar7 + 0x6d) = *(undefined *)(lVar4 + 1);
    puVar6 = (undefined2 *)(*(long *)(param_2 + 0x20) + 1);
    *(undefined2 **)(param_2 + 0x20) = puVar6;
    plVar7 = plVar1;
  } while (plVar1 != param_1 + 0x78);
  uVar2 = *(uint *)(param_1 + 0x12);
  *(undefined *)((long)param_1 + 0xb5) = 3;
  bVar3 = (byte)(uVar2 >> 0x1e) & 1;
  if (*(char *)((long)param_1 + 0xb7) == '\0') {
    iVar8 = (uVar2 >> 0x1b & 7) << 0x10;
    iVar9 = (uVar2 >> 0x18 & 7) << 0x10;
    param_1[2] = *(long *)(*param_1 + (((ulong)(uVar2 >> 0x12) & 3) + 0x414) * 8);
    *(int *)((long)param_1 + 0x94) = iVar8;
    *(int *)(param_1 + 0x13) = iVar9;
  }
  else {
    iVar8 = *(int *)((long)param_1 + 0x94);
    iVar9 = *(int *)(param_1 + 0x13);
  }
  *(byte *)((long)param_1 + 0x16d) = bVar3;
  *(undefined *)((long)param_1 + 0x16e) = 1;
  *(byte *)((long)param_1 + 0x21d) = bVar3;
  param_1[0x1f] =
       CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x104) >> 0x20) + iVar9,
                (int)*(undefined8 *)((long)param_1 + 0x104) + iVar8);
  *(undefined *)((long)param_1 + 0x21e) = 1;
  *(byte *)((long)param_1 + 0x2cd) = bVar3;
  param_1[0x35] =
       CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x1b4) >> 0x20) + iVar9,
                (int)*(undefined8 *)((long)param_1 + 0x1b4) + iVar8);
  *(undefined *)((long)param_1 + 0x2ce) = 1;
  *(byte *)((long)param_1 + 0x37d) = bVar3;
  param_1[0x4b] =
       CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x264) >> 0x20) + iVar9,
                (int)*(undefined8 *)((long)param_1 + 0x264) + iVar8);
  *(undefined *)((long)param_1 + 0x37e) = 1;
  param_1[0x61] =
       CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x314) >> 0x20) + iVar9,
                (int)*(undefined8 *)((long)param_1 + 0x314) + iVar8);
  video_2d_update_bg_mode(param_1);
  video_2d_reorder_layers(param_1);
  video_2d_reorder_obj(param_1);
  return;
}


