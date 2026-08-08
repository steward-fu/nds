/*
 * Ghidra decompilation
 *
 * Function : video_2d_set_display_control
 * Address  : 00141ef0
 * Program  : drastic64
 */


void video_2d_set_display_control(long *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  bVar2 = (byte)(param_2 >> 0x1e) & 1;
  *(byte *)((long)param_1 + 0x16d) = bVar2;
  *(byte *)((long)param_1 + 0x21d) = bVar2;
  *(byte *)((long)param_1 + 0x2cd) = bVar2;
  *(byte *)((long)param_1 + 0x37d) = bVar2;
  uVar3 = *(uint *)(param_1 + 0x12);
  if (*(char *)((long)param_1 + 0xb7) == '\0') {
    iVar5 = (param_2 >> 0x1b & 7) * 0x10000;
    iVar4 = (param_2 >> 0x18 & 7) * 0x10000;
    param_1[2] = *(long *)(*param_1 + (((ulong)(param_2 >> 0x12) & 3) + 0x414) * 8);
    *(int *)((long)param_1 + 0x94) = iVar5;
    *(int *)(param_1 + 0x13) = iVar4;
    param_1[0x1f] =
         CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x104) >> 0x20) + iVar4,
                  (int)*(undefined8 *)((long)param_1 + 0x104) + iVar5);
    uVar1 = param_2 ^ uVar3;
    param_1[0x35] =
         CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x1b4) >> 0x20) + iVar4,
                  (int)*(undefined8 *)((long)param_1 + 0x1b4) + iVar5);
    *(uint *)(param_1 + 0x12) = param_2;
    *(int *)(param_1 + 0x61) = *(int *)((long)param_1 + 0x314) + iVar5;
    *(int *)((long)param_1 + 0x30c) = *(int *)(param_1 + 99) + iVar4;
    param_1[0x4b] =
         CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x264) >> 0x20) + iVar4,
                  (int)*(undefined8 *)((long)param_1 + 0x264) + iVar5);
  }
  else {
    param_2 = param_2 & 0xc0b1fff7;
    uVar1 = param_2 ^ uVar3;
    *(uint *)(param_1 + 0x12) = param_2;
  }
  if (((uVar1 & 7) != 0) &&
     ((video_2d_update_bg_mode(param_1), (param_2 & 7) == 6 || ((uVar3 & 7) == 6)))) {
    video_2d_set_bg_control(param_1,2,*(undefined2 *)(param_1 + 0x57));
  }
  if ((uVar1 & 0x1f08) != 0) {
    video_2d_reorder_layers(param_1);
    return;
  }
  return;
}


