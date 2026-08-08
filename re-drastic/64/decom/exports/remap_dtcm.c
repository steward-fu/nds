/*
 * Ghidra decompilation
 *
 * Function : remap_dtcm
 * Address  : 00116770
 * Program  : drastic64
 */


void remap_dtcm(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong extraout_x8;
  int extraout_w9;
  long lVar10;
  
  iVar6 = *(int *)(param_1 + 0xfd4d4) - *(int *)(param_1 + 0xfd4d0);
  lVar10 = *(long *)(param_1 + 0xfba88);
  __printf_chk(1,"Remapping DTCM from %x, %x to %x, %x\n",*(int *)(param_1 + 0xfd4d0),iVar6,param_2,
               param_3);
  if (iVar6 != 0) {
    uVar9 = (ulong)*(uint *)(param_1 + 0xfd4d0);
    do {
      map_memory_page_from_memory_map((int)uVar9 + 0x800,lVar10,uVar9 & 0xffffffff);
      uVar9 = extraout_x8;
    } while ((int)extraout_x8 != extraout_w9);
    uVar5 = *(uint *)(param_1 + 0xfd4d0);
    if (uVar5 < 0x4000000) {
      iVar4 = 0x4000000 - uVar5;
      if (uVar5 + iVar6 < 0x4000001) {
        iVar4 = iVar6;
      }
      if (uVar5 + 0xfe000000 < 0x1000000) {
        puts("DTCM moved off of main RAM, remapping main RAM to it.");
        remap_address_region_low_memory
                  (param_1,*(uint *)(param_1 + 0xfd4d0),iVar4,
                   *(uint *)(param_1 + 0xfd4d0) & 0x3fffff);
      }
      else if (uVar5 < 0x2000000) {
        remap_itcm(param_1,*(undefined4 *)(param_1 + 0xfd4d8));
      }
      else {
        remap_wram(param_1);
      }
    }
  }
  *(uint *)(param_1 + 0xfd4d0) = param_2;
  *(uint *)(param_1 + 0xfd4d4) = param_2 + param_3;
  if (param_3 < 0x4001) {
    if (param_3 != 0) {
      lVar8 = *(long *)(param_1 + 0x18);
      iVar6 = (int)lVar8;
      do {
        uVar5 = (param_2 - iVar6) + (int)lVar8;
        lVar7 = lVar10 + (ulong)(uVar5 >> 0x15) * 4;
        lVar3 = lVar10 + (ulong)(ushort)(uVar5 >> 0x10) * 4;
        *(uint *)(nds_system + lVar7 + 0xb08018) =
             1 << (ulong)(uVar5 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar7 + 0xb08018);
        *(uint *)(nds_system + lVar3 + 0xb04018) =
             1 << (ulong)(uVar5 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar3 + 0xb04018);
        *(long *)(lVar10 + (ulong)(uVar5 >> 0xb) * 8) = (long)(lVar8 - (ulong)uVar5) >> 2;
        lVar8 = lVar8 + 0x800;
      } while (param_3 + iVar6 != (int)lVar8);
      if (param_2 < 0x4000000) {
        remap_address_region_low_memory(param_1,param_2,param_3,0x410000);
        return;
      }
    }
  }
  else {
    do {
      while( true ) {
        lVar3 = lVar10 + (ulong)(param_2 >> 0x15) * 4;
        lVar8 = lVar10 + (ulong)(ushort)(param_2 >> 0x10) * 4;
        uVar5 = param_2 + 0x800;
        lVar7 = *(long *)(param_1 + 0x18);
        *(uint *)(nds_system + lVar3 + 0xb08018) =
             1 << (ulong)(param_2 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar3 + 0xb08018);
        lVar3 = lVar10 + (ulong)(uVar5 >> 0x15) * 4;
        *(uint *)(nds_system + lVar8 + 0xb04018) =
             1 << (ulong)(param_2 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar8 + 0xb04018);
        *(long *)(lVar10 + (ulong)(param_2 >> 0xb) * 8) = (long)(lVar7 - (ulong)param_2) >> 2;
        lVar8 = lVar10 + (ulong)(uVar5 >> 0x10) * 4;
        uVar1 = param_2 + 0x1000;
        *(uint *)(nds_system + lVar3 + 0xb08018) =
             1 << (ulong)(uVar5 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar3 + 0xb08018);
        lVar3 = lVar10 + (ulong)(uVar1 >> 0x15) * 4;
        *(uint *)(nds_system + lVar8 + 0xb04018) =
             1 << (ulong)(uVar5 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar8 + 0xb04018);
        *(long *)(lVar10 + (ulong)(uVar5 >> 0xb) * 8) = (long)((lVar7 + 0x800) - (ulong)uVar5) >> 2;
        lVar8 = lVar10 + (ulong)(ushort)(uVar1 >> 0x10) * 4;
        uVar2 = param_2 + 0x1800;
        *(uint *)(nds_system + lVar3 + 0xb08018) =
             1 << (ulong)(uVar1 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar3 + 0xb08018);
        lVar3 = lVar10 + (ulong)(uVar2 >> 0x15) * 4;
        *(uint *)(nds_system + lVar8 + 0xb04018) =
             1 << (ulong)(uVar1 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar8 + 0xb04018);
        *(long *)(lVar10 + (ulong)(uVar1 >> 0xb) * 8) = (long)((lVar7 + 0x1000) - (ulong)uVar1) >> 2
        ;
        lVar8 = lVar10 + (ulong)(ushort)(uVar2 >> 0x10) * 4;
        uVar5 = param_2 + 0x2000;
        *(uint *)(nds_system + lVar3 + 0xb08018) =
             1 << (ulong)(uVar2 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar3 + 0xb08018);
        lVar3 = lVar10 + (ulong)(uVar5 >> 0x15) * 4;
        *(uint *)(nds_system + lVar8 + 0xb04018) =
             1 << (ulong)(uVar2 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar8 + 0xb04018);
        *(long *)(lVar10 + (ulong)(uVar2 >> 0xb) * 8) = (long)((lVar7 + 0x1800) - (ulong)uVar2) >> 2
        ;
        lVar8 = lVar10 + (ulong)(ushort)(uVar5 >> 0x10) * 4;
        uVar1 = param_2 + 0x2800;
        *(uint *)(nds_system + lVar3 + 0xb08018) =
             1 << (ulong)(uVar5 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar3 + 0xb08018);
        lVar3 = lVar10 + (ulong)(uVar1 >> 0x15) * 4;
        *(uint *)(nds_system + lVar8 + 0xb04018) =
             1 << (ulong)(uVar5 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar8 + 0xb04018);
        *(long *)(lVar10 + (ulong)(uVar5 >> 0xb) * 8) = (long)((lVar7 + 0x2000) - (ulong)uVar5) >> 2
        ;
        lVar8 = lVar10 + (ulong)(ushort)(uVar1 >> 0x10) * 4;
        uVar5 = param_2 + 0x3000;
        *(uint *)(nds_system + lVar3 + 0xb08018) =
             1 << (ulong)(uVar1 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar3 + 0xb08018);
        lVar3 = lVar10 + (ulong)(uVar5 >> 0x15) * 4;
        *(uint *)(nds_system + lVar8 + 0xb04018) =
             1 << (ulong)(uVar1 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar8 + 0xb04018);
        lVar8 = lVar10 + (ulong)(ushort)(uVar5 >> 0x10) * 4;
        *(long *)(lVar10 + (ulong)(uVar1 >> 0xb) * 8) = (long)((lVar7 + 0x2800) - (ulong)uVar1) >> 2
        ;
        uVar1 = param_2 + 0x3800;
        *(uint *)(nds_system + lVar3 + 0xb08018) =
             1 << (ulong)(uVar5 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar3 + 0xb08018);
        lVar3 = lVar10 + (ulong)(uVar1 >> 0x15) * 4;
        *(uint *)(nds_system + lVar8 + 0xb04018) =
             1 << (ulong)(uVar5 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar8 + 0xb04018);
        *(long *)(lVar10 + (ulong)(uVar5 >> 0xb) * 8) = (long)((lVar7 + 0x3000) - (ulong)uVar5) >> 2
        ;
        lVar8 = lVar10 + (ulong)(ushort)(uVar1 >> 0x10) * 4;
        *(uint *)(nds_system + lVar3 + 0xb08018) =
             1 << (ulong)(uVar1 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar3 + 0xb08018);
        *(uint *)(nds_system + lVar8 + 0xb04018) =
             1 << (ulong)(uVar1 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar8 + 0xb04018);
        *(long *)(lVar10 + (ulong)(uVar1 >> 0xb) * 8) = (long)((lVar7 + 0x3800) - (ulong)uVar1) >> 2
        ;
        if (0x3ffffff < param_2) break;
        remap_address_region_low_memory(param_1,(ulong)param_2,param_3,0x410000);
        param_2 = param_2 + 0x4000;
        param_3 = param_3 - 0x4000;
        if (param_3 == 0) {
          return;
        }
      }
      param_2 = param_2 + 0x4000;
      param_3 = param_3 - 0x4000;
    } while (param_3 != 0);
  }
  return;
}


