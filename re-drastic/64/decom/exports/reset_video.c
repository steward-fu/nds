/*
 * Ghidra decompilation
 *
 * Function : reset_video
 * Address  : 00131370
 * Program  : drastic64
 */


void reset_video(long *param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  plVar5 = param_1 + 2;
  lVar2 = *param_1;
  uVar9 = 0;
  do {
    pbVar3 = (byte *)param_1[uVar9 + 0x41d];
    *(undefined4 *)plVar5 = 0xb;
    bVar1 = *pbVar3;
    if ((uint)bVar1 != *(uint *)((long)plVar5 + 4)) {
      lVar4 = (param_1 + 0x414)[uVar9];
      *(undefined2 *)(param_1 + 0x5ce) = 0;
      remap_vram_body(param_1,lVar4,uVar9 & 0xffffffff,bVar1,1);
      uVar7 = (uint)*(ushort *)(param_1 + 0x5ce);
      if (*(ushort *)(param_1 + 0x5ce) != 0) {
        uVar8 = 0;
        do {
          if ((uVar7 & 1) != 0) {
            uVar6 = (ulong)uVar8;
            *(undefined4 *)((long)param_1 + uVar6 * 0x10 + 0x14) = 0xffffffff;
            remap_vram_body(param_1,param_1[uVar6 + 0x414],uVar8,
                            *(undefined *)param_1[uVar6 + 0x41d],0);
          }
          uVar7 = uVar7 >> 1;
          uVar8 = uVar8 + 1;
        } while (uVar7 != 0);
      }
    }
    uVar9 = uVar9 + 1;
    plVar5 = plVar5 + 2;
  } while (uVar9 != 9);
  plVar5 = param_1 + 0x14;
  lVar4 = *(long *)(lVar2 + 0x15068);
  iVar10 = 0;
  iVar11 = 1;
  iVar12 = 2;
  iVar13 = 3;
  do {
    plVar5[1] = lVar4 - (ulong)(uint)(iVar11 << 0xe);
    *plVar5 = lVar4 - (ulong)(uint)(iVar10 << 0xe);
    plVar5[3] = lVar4 - (ulong)(uint)(iVar13 << 0xe);
    plVar5[2] = lVar4 - (ulong)(uint)(iVar12 << 0xe);
    plVar5 = plVar5 + 4;
    iVar10 = iVar10 + 4;
    iVar11 = iVar11 + 4;
    iVar12 = iVar12 + 4;
    iVar13 = iVar13 + 4;
  } while (plVar5 != param_1 + 0x414);
  memset((void *)((long)param_1 + 0x2224),0,0x800);
  lVar2 = lVar2 + 0x6b070;
  param_1[0x43c] = 0;
  param_1[0x43d] = 0;
  param_1[0x43e] = 0;
  param_1[0x43f] = 0;
  param_1[0x440] = 0;
  param_1[0x441] = 0;
  param_1[0x442] = 0;
  param_1[0x443] = 0;
  param_1[0x427] = 0;
  param_1[0x426] = 0;
  param_1[0x429] = 0;
  param_1[0x428] = 0;
  param_1[0x42b] = 0;
  param_1[0x42a] = 0;
  param_1[0x42d] = 0;
  param_1[0x42c] = 0;
  param_1[0x42f] = 0;
  param_1[0x42e] = 0;
  lVar4 = 0;
  param_1[0x431] = 0;
  param_1[0x430] = 0;
  param_1[0x433] = 0;
  param_1[0x432] = 0;
  *(undefined4 *)(param_1 + 0x444) = 0;
  *(undefined8 *)((long)param_1 + 0x2e24) = 0;
  *(undefined8 *)((long)param_1 + 0x2e2c) = 0;
  param_1[0x43b] = lVar2;
  param_1[0x43a] = lVar2;
  *(undefined4 *)((long)param_1 + 0x2e34) = 0;
  param_1[0x5c7] = 0;
  *(undefined4 *)((long)param_1 + 0x2e4c) = 0;
  param_1[0x434] = 0;
  param_1[0x435] = 0;
  param_1[0x436] = 0;
  param_1[0x437] = 0;
  param_1[0x438] = 0;
  param_1[0x439] = 0;
  param_1[0x5c8] = 0;
  *(undefined4 *)(param_1 + 0x5c9) = 0;
  *(undefined2 *)((long)param_1 + 0x458894) = 0;
  do {
    while ((void *)param_1[lVar4 + 0x8b104] == (void *)0x0) {
      *(undefined *)((long)param_1 + lVar4 + 0x458840) = 0;
      lVar4 = lVar4 + 1;
      if (lVar4 == 4) goto LAB_0013153c;
    }
    free((void *)param_1[lVar4 + 0x8b104]);
    param_1[lVar4 + 0x8b104] = 0;
    *(undefined *)((long)param_1 + lVar4 + 0x458840) = 0;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 4);
LAB_0013153c:
  reset_video_2d(param_1 + 0x5cf);
  reset_video_2d(param_1 + 0x10853);
  reset_texture_cache(param_1 + 0x69d98);
  reset_geometry(param_1 + 0x6ad9e);
  reset_video_3d(param_1 + 0x20ad8);
  return;
}


