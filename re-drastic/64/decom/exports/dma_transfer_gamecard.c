/*
 * Ghidra decompilation
 *
 * Function : dma_transfer_gamecard
 * Address  : 0011ef70
 * Program  : drastic64
 */


int dma_transfer_gamecard(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  iVar2 = *(int *)(param_3 + 0x960);
  lVar8 = *(long *)(param_2 + 8);
  uVar3 = *(uint *)(param_2 + 0x1c);
  lVar9 = *(long *)(param_3 + 0x918);
  uVar6 = *(uint *)(param_2 + 0x20);
  if (0xfffffff < uVar3) {
    uVar3 = 0;
  }
  iVar4 = iVar2 * 4;
  lVar1 = ((ulong)*(uint *)(lVar9 + 0x10) - (long)*(int *)(lVar8 + 0x2290)) + *(long *)(lVar9 + 8);
  iVar5 = memory_region_block_memory_load
                    (param_1[1],*param_1,uVar3,
                     *(long *)(*(long *)(param_3 + 0x920) + 8) + (ulong)*(uint *)(param_3 + 0x95c),
                     iVar4);
  *(int *)(param_3 + 0x95c) = *(int *)(param_3 + 0x95c) + iVar4;
  if ((uVar6 >> 0x19 & 1) == 0) {
    uVar6 = uVar6 & 0x7fffffff;
    *(uint *)(param_2 + 0x20) = uVar6;
    *(uint *)(*(long *)(param_2 + 0x10) + 8) = uVar6;
  }
  if ((uVar6 >> 0x15 & 3) != 3) {
    *(uint *)(param_2 + 0x1c) = uVar3 + iVar4;
  }
  uVar6 = iVar2 * 0x28;
  uVar7 = *(undefined8 *)(lVar9 + 8);
  *(undefined4 *)(param_3 + 0x960) = 0;
  *(ulong *)(param_3 + 0x910) = lVar1 + (ulong)uVar6;
  *(uint *)(*(long *)(param_3 + 0x928) + 0x1a4) =
       *(uint *)(*(long *)(param_3 + 0x928) + 0x1a4) & 0x7f7fffff;
  if ((*(uint *)(*(long *)(param_3 + 0x928) + 0x1a0) >> 0xe & 1) != 0) {
    if (nds_system[lVar9 + 0x362e99c] == '\0') {
      lVar9 = *(long *)(*(long *)(param_2 + 8) + 0x2080);
      uVar6 = *(uint *)(lVar9 + 0x214) | 0x80000;
      *(uint *)(lVar9 + 0x214) = uVar6;
      lVar8 = *(long *)(param_2 + 8);
      if ((*(uint *)(lVar8 + 0x2110) & 6) == 0) {
        uVar6 = -*(int *)(lVar9 + 0x208) & uVar6 & *(uint *)(lVar9 + 0x210);
        *(uint *)(lVar8 + 0x2108) = uVar6;
      }
      else {
        uVar6 = *(uint *)(lVar8 + 0x2108);
      }
      if (uVar6 != 0) {
        *(uint *)(lVar8 + 0x22a8) = *(uint *)(lVar8 + 0x22a8) | 2;
      }
    }
    else {
      if (*(char *)(param_3 + 0x2da5) != '\0') {
        remove_event(lVar9 + 0x18,0xb);
      }
      *(undefined *)(param_3 + 0x2da5) = 1;
      uVar6 = (uVar6 - (int)uVar7) + (int)lVar1;
      schedule_event(lVar9 + 0x18,uVar6,0xb);
      if (uVar6 < *(uint *)(lVar9 + 0x10)) {
        *(uint *)(lVar8 + 0x22a8) = *(uint *)(lVar8 + 0x22a8) | 4;
      }
    }
  }
  if (iVar5 != 0) {
    *(uint *)(*(long *)(param_2 + 8) + 0x22a8) = *(uint *)(*(long *)(param_2 + 8) + 0x22a8) | 1;
    puts("DMA from gamecard modified code.");
    return iVar5;
  }
  return 0;
}


