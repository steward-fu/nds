/*
 * Ghidra decompilation
 *
 * Function : FUN_00141cac
 * Address  : 00141cac
 * Program  : drastic64
 */


void FUN_00141cac(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  
  uVar11 = NEON_ushl(CONCAT44(param_3,param_3),0xfffffffefffffff8,4);
  uVar9 = (ulong)param_2;
  lVar7 = uVar9 * 0xb0;
  iVar10 = (int)(uVar11 & 0xf0000001f) * 0x800;
  iVar12 = (int)((uVar11 & 0xf0000001f) >> 0x20) * 0x4000;
  uVar2 = *(ushort *)(param_1 + lVar7 + 0x158);
  *(ulong *)(param_1 + lVar7 + 0x104) = CONCAT44(iVar12,iVar10);
  lVar6 = param_1 + lVar7 + 0xf0;
  *(ulong *)(lVar6 + 8) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x94) >> 0x20) + iVar12,
                (int)*(undefined8 *)(param_1 + 0x94) + iVar10);
  *(short *)(param_1 + lVar7 + 0x158) = (short)param_3;
  if (*(char *)(param_1 + 0xb7) == '\x01') {
    *(ulong *)(lVar6 + 8) = *(ulong *)(lVar6 + 8) & 0xffe1ffffffe1ffff;
  }
  uVar1 = uVar2 ^ param_3;
  if ((uVar1 & 3) != 0) {
    video_2d_reorder_layers(param_1);
  }
  if (param_2 < 2) {
    *(undefined8 *)(param_1 + uVar9 * 0xb0 + 0xd8) =
         *(undefined8 *)
          (*(long *)(param_1 + 0x20) + (ulong)(param_2 + (param_3 >> 0xd & 1) * 2) * 8);
    return;
  }
  if ((*(uint *)(param_1 + 0x90) & 7) == 6) {
    param_1 = param_1 + uVar9 * 0xb0;
    *(undefined4 *)(param_1 + 0x100) = 0;
    if ((*(ushort *)(param_1 + 0x158) >> 0xe & 1) != 0) {
      *(undefined4 *)(param_1 + 0x166) = 0x1ff03ff;
      *(undefined *)(param_1 + 0x16a) = 10;
      return;
    }
    *(undefined4 *)(param_1 + 0x166) = 0x3ff01ff;
    *(undefined *)(param_1 + 0x16a) = 9;
    return;
  }
  uVar5 = param_3 >> 0xe & 3;
  lVar6 = param_1 + uVar9 * 0xb0;
  uVar8 = 1 << (ulong)(uVar5 + 7);
  iVar12 = (param_3 >> 8 & 0x1f) * 0x4000;
  cVar4 = (char)uVar5;
  *(int *)(lVar6 + 0x100) = iVar12;
  *(char *)(lVar6 + 0x16b) = (char)(uVar8 >> 3) + -1;
  *(char *)(lVar6 + 0x16c) = cVar4 + '\x04';
  iVar10 = iVar12 + 0x200000;
  if (*(char *)(param_1 + 0xb7) != '\x01') {
    iVar10 = iVar12;
  }
  *(int *)(lVar6 + 0x100) = iVar10;
  if ((uVar1 & 0x84) != 0) {
    video_2d_update_bg_mode(param_1);
  }
  if ((int)uVar8 < 0x101) {
    param_1 = param_1 + uVar9 * 0xb0;
    sVar3 = (short)uVar8 + -1;
    *(short *)(param_1 + 0x166) = sVar3;
    *(short *)(param_1 + 0x168) = sVar3;
    *(char *)(param_1 + 0x16a) = cVar4 + '\a';
    return;
  }
  param_1 = param_1 + uVar9 * 0xb0;
  *(undefined2 *)(param_1 + 0x166) = 0x1ff;
  *(short *)(param_1 + 0x168) = (short)(uVar8 >> 1) + -1;
  *(undefined *)(param_1 + 0x16a) = 9;
  return;
}


