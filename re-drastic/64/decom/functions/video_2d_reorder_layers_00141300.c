/*
 * Ghidra decompilation
 *
 * Function : video_2d_reorder_layers
 * Address  : 00141300
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void video_2d_reorder_layers(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  char *pcVar13;
  char local_20 [15];
  byte bStack_11;
  undefined4 local_10;
  long local_8;
  
  local_10 = 0;
  uVar3 = *(uint *)(param_1 + 0x90);
  local_8 = ___stack_chk_guard;
  lVar1 = param_1 + 0x84;
  lVar2 = param_1 + 0x8c;
  if ((uVar3 >> 8 & 1) != 0) {
    uVar6 = *(ushort *)(param_1 + 0x158);
    uVar11 = uVar6 & 3;
    bVar5 = *(byte *)((long)&local_10 + (ulong)uVar11);
    *(byte *)((long)&local_10 + (ulong)uVar11) = bVar5 + 1;
    local_20[(ulong)bVar5 + ((ulong)uVar6 & 3) * 4] = '\0';
  }
  if ((uVar3 >> 9 & 1) != 0) {
    uVar6 = *(ushort *)(param_1 + 0x208);
    uVar11 = uVar6 & 3;
    bVar5 = *(byte *)((long)&local_10 + (ulong)uVar11);
    *(byte *)((long)&local_10 + (ulong)uVar11) = bVar5 + 1;
    local_20[(ulong)bVar5 + ((ulong)uVar6 & 3) * 4] = '\x01';
  }
  if ((uVar3 >> 10 & 1) != 0) {
    uVar6 = *(ushort *)(param_1 + 0x2b8);
    uVar11 = uVar6 & 3;
    bVar5 = *(byte *)((long)&local_10 + (ulong)uVar11);
    *(byte *)((long)&local_10 + (ulong)uVar11) = bVar5 + 1;
    local_20[(ulong)bVar5 + ((ulong)uVar6 & 3) * 4] = '\x02';
  }
  if ((uVar3 >> 0xb & 1) != 0) {
    uVar6 = *(ushort *)(param_1 + 0x368);
    uVar11 = uVar6 & 3;
    bVar5 = *(byte *)((long)&local_10 + (ulong)uVar11);
    *(byte *)((long)&local_10 + (ulong)uVar11) = bVar5 + 1;
    local_20[(ulong)bVar5 + ((ulong)uVar6 & 3) * 4] = '\x03';
  }
  pcVar13 = local_20;
  lVar12 = 1;
  uVar8 = 0;
  uVar10 = 0;
  do {
    if ((uVar3 & 0x1000) != 0) {
      *(byte *)(lVar1 + uVar8) = (char)lVar12 - 1U | 4;
      uVar8 = (ulong)((int)uVar8 + 1);
    }
    bVar5 = (&bStack_11)[lVar12];
    if (bVar5 != 0) {
      cVar4 = *pcVar13;
      *(char *)(lVar1 + uVar8) = cVar4;
      uVar11 = (uint)bVar5;
      iVar7 = (int)uVar8;
      iVar9 = (int)uVar10;
      if ((uVar3 & 8) == 0) {
        *(char *)(lVar2 + uVar10) = cVar4;
        if (bVar5 != 1) {
          cVar4 = pcVar13[1];
          *(char *)(lVar1 + (ulong)(iVar7 + 1)) = cVar4;
          *(char *)(lVar2 + (ulong)(iVar9 + 1)) = cVar4;
          if (bVar5 != 2) {
            cVar4 = pcVar13[2];
            *(char *)(lVar1 + (ulong)(iVar7 + 2)) = cVar4;
            *(char *)(lVar2 + (ulong)(iVar9 + 2)) = cVar4;
            if (bVar5 != 3) {
              cVar4 = pcVar13[3];
              *(char *)(lVar1 + (ulong)(iVar7 + 3)) = cVar4;
              *(char *)(lVar2 + (ulong)(iVar9 + 3)) = cVar4;
            }
          }
        }
        uVar10 = (ulong)(iVar9 + uVar11);
      }
      else {
        if (cVar4 != '\0') {
          *(char *)(lVar2 + uVar10) = cVar4;
          uVar10 = (ulong)(iVar9 + 1);
        }
        if (uVar11 != 1) {
          cVar4 = pcVar13[1];
          *(char *)(lVar1 + (ulong)(iVar7 + 1)) = cVar4;
          if (cVar4 != '\0') {
            *(char *)(lVar2 + uVar10) = cVar4;
            uVar10 = (ulong)((int)uVar10 + 1);
          }
          if (bVar5 != 2) {
            cVar4 = pcVar13[2];
            *(char *)(lVar1 + (ulong)(iVar7 + 2)) = cVar4;
            if (cVar4 != '\0') {
              *(char *)(lVar2 + uVar10) = cVar4;
              uVar10 = (ulong)((int)uVar10 + 1);
            }
            if (bVar5 != 3) {
              cVar4 = pcVar13[3];
              *(char *)(lVar1 + (ulong)(iVar7 + 3)) = cVar4;
              if (cVar4 != '\0') {
                *(char *)(lVar2 + uVar10) = cVar4;
                uVar10 = (ulong)((int)uVar10 + 1);
              }
            }
          }
        }
      }
      uVar8 = (ulong)(iVar7 + uVar11);
    }
    lVar12 = lVar12 + 1;
    pcVar13 = pcVar13 + 4;
  } while (lVar12 != 5);
  *(char *)(param_1 + 0xb2) = (char)uVar10;
  *(char *)(param_1 + 0xb3) = (char)uVar8;
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


