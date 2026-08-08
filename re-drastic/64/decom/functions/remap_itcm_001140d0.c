/*
 * Ghidra decompilation
 *
 * Function : remap_itcm
 * Address  : 001140d0
 * Program  : drastic64
 */


void remap_itcm(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong extraout_x8;
  int extraout_w9;
  long lVar9;
  uint uVar10;
  
  lVar9 = *(long *)(param_1 + 0xfba88);
  __printf_chk(1,"Remapping ITCM limit from %x to %x\n",*(undefined4 *)(param_1 + 0xfd4d8),param_2);
  if (*(uint *)(param_1 + 0xfd4d8) != param_2) {
    if (*(uint *)(param_1 + 0xfd4d8) != 0) {
      uVar8 = 0;
      do {
        map_memory_page_from_memory_map((int)uVar8 + 0x800,lVar9,uVar8 & 0xffffffff);
        uVar8 = extraout_x8;
      } while (extraout_w9 != (int)extraout_x8);
    }
    *(uint *)(param_1 + 0xfd4d8) = param_2;
    if (param_2 < 0x8001) {
      if (param_2 != 0) {
        lVar7 = *(long *)(param_1 + 8);
        iVar6 = (int)lVar7;
        uVar8 = 0;
        do {
          lVar5 = lVar9 + (uVar8 >> 0x15) * 4;
          lVar4 = lVar9 + (uVar8 >> 0x10) * 4;
          *(uint *)(nds_system + lVar5 + 0xb08018) =
               1 << (ulong)((uint)(uVar8 >> 0x10) & 0x1f) | *(uint *)(nds_system + lVar5 + 0xb08018)
          ;
          *(uint *)(nds_system + lVar4 + 0xb04018) =
               1 << (ulong)((uint)(uVar8 >> 0xb) & 0x1f) | *(uint *)(nds_system + lVar4 + 0xb04018);
          *(long *)(lVar9 + (uVar8 >> 0xb) * 8) = (long)(lVar7 - uVar8) >> 2;
          lVar7 = lVar7 + 0x800;
          uVar8 = (ulong)((int)uVar8 + 0x800);
        } while (param_2 + iVar6 != (int)lVar7);
        remap_address_region_low_memory(param_1,0,param_2,0x400000);
        return;
      }
    }
    else {
      uVar8 = 0;
      do {
        lVar4 = lVar9 + (uVar8 >> 0x15 & 0x7ff) * 4;
        lVar7 = lVar9 + (uVar8 >> 0x10 & 0xffff) * 4;
        uVar10 = (uint)uVar8;
        uVar1 = uVar10 + 0x800;
        lVar5 = *(long *)(param_1 + 8);
        *(uint *)(nds_system + lVar4 + 0xb08018) =
             1 << (ulong)((uint)(uVar8 >> 0x10) & 0x1f) | *(uint *)(nds_system + lVar4 + 0xb08018);
        lVar4 = lVar9 + (ulong)(uVar1 >> 0x15) * 4;
        *(uint *)(nds_system + lVar7 + 0xb04018) =
             1 << (ulong)(uVar10 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar7 + 0xb04018);
        *(long *)(lVar9 + (ulong)(uVar10 >> 0xb) * 8) = (long)(lVar5 - (uVar8 & 0xffffffff)) >> 2;
        lVar7 = lVar9 + (ulong)(ushort)(uVar1 >> 0x10) * 4;
        uVar2 = uVar10 + 0x1000;
        *(uint *)(nds_system + lVar4 + 0xb08018) =
             1 << (ulong)(uVar1 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar4 + 0xb08018);
        lVar4 = lVar9 + (ulong)(uVar2 >> 0x15) * 4;
        *(uint *)(nds_system + lVar7 + 0xb04018) =
             1 << (ulong)(uVar1 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar7 + 0xb04018);
        *(long *)(lVar9 + (ulong)(uVar1 >> 0xb) * 8) = (long)((lVar5 + 0x800) - (ulong)uVar1) >> 2;
        lVar7 = lVar9 + (ulong)(ushort)(uVar2 >> 0x10) * 4;
        uVar3 = uVar10 + 0x1800;
        *(uint *)(nds_system + lVar4 + 0xb08018) =
             1 << (ulong)(uVar2 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar4 + 0xb08018);
        lVar4 = lVar9 + (ulong)(uVar3 >> 0x15) * 4;
        *(uint *)(nds_system + lVar7 + 0xb04018) =
             1 << (ulong)(uVar2 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar7 + 0xb04018);
        *(long *)(lVar9 + (ulong)(uVar2 >> 0xb) * 8) = (long)((lVar5 + 0x1000) - (ulong)uVar2) >> 2;
        lVar7 = lVar9 + (ulong)(uVar3 >> 0x10) * 4;
        uVar1 = uVar10 + 0x2000;
        *(uint *)(nds_system + lVar4 + 0xb08018) =
             1 << (ulong)(uVar3 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar4 + 0xb08018);
        lVar4 = lVar9 + (ulong)(uVar1 >> 0x15) * 4;
        *(uint *)(nds_system + lVar7 + 0xb04018) =
             1 << (ulong)(uVar3 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar7 + 0xb04018);
        *(long *)(lVar9 + (ulong)(uVar3 >> 0xb) * 8) = (long)((lVar5 + 0x1800) - (ulong)uVar3) >> 2;
        lVar7 = lVar9 + (ulong)(uVar1 >> 0x10) * 4;
        uVar2 = uVar10 + 0x2800;
        *(uint *)(nds_system + lVar4 + 0xb08018) =
             1 << (ulong)(uVar1 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar4 + 0xb08018);
        lVar4 = lVar9 + (ulong)(uVar2 >> 0x15) * 4;
        *(uint *)(nds_system + lVar7 + 0xb04018) =
             1 << (ulong)(uVar1 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar7 + 0xb04018);
        *(long *)(lVar9 + (ulong)(uVar1 >> 0xb) * 8) = (long)((lVar5 + 0x2000) - (ulong)uVar1) >> 2;
        lVar7 = lVar9 + (ulong)(ushort)(uVar2 >> 0x10) * 4;
        uVar1 = uVar10 + 0x3000;
        *(uint *)(nds_system + lVar4 + 0xb08018) =
             1 << (ulong)(uVar2 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar4 + 0xb08018);
        lVar4 = lVar9 + (ulong)(uVar1 >> 0x15) * 4;
        *(uint *)(nds_system + lVar7 + 0xb04018) =
             1 << (ulong)(uVar2 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar7 + 0xb04018);
        lVar7 = lVar9 + (ulong)(ushort)(uVar1 >> 0x10) * 4;
        *(long *)(lVar9 + (ulong)(uVar2 >> 0xb) * 8) = (long)((lVar5 + 0x2800) - (ulong)uVar2) >> 2;
        uVar2 = uVar10 + 0x3800;
        *(uint *)(nds_system + lVar4 + 0xb08018) =
             1 << (ulong)(uVar1 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar4 + 0xb08018);
        lVar4 = lVar9 + (ulong)(uVar2 >> 0x15) * 4;
        *(uint *)(nds_system + lVar7 + 0xb04018) =
             1 << (ulong)(uVar1 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar7 + 0xb04018);
        *(long *)(lVar9 + (ulong)(uVar1 >> 0xb) * 8) = (long)((lVar5 + 0x3000) - (ulong)uVar1) >> 2;
        lVar7 = lVar9 + (ulong)(ushort)(uVar2 >> 0x10) * 4;
        uVar1 = uVar10 + 0x4000;
        *(uint *)(nds_system + lVar4 + 0xb08018) =
             1 << (ulong)(uVar2 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar4 + 0xb08018);
        lVar4 = lVar9 + (ulong)(uVar1 >> 0x15) * 4;
        *(uint *)(nds_system + lVar7 + 0xb04018) =
             1 << (ulong)(uVar2 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar7 + 0xb04018);
        *(long *)(lVar9 + (ulong)(uVar2 >> 0xb) * 8) = (long)((lVar5 + 0x3800) - (ulong)uVar2) >> 2;
        lVar7 = lVar9 + (ulong)(ushort)(uVar1 >> 0x10) * 4;
        uVar2 = uVar10 + 0x4800;
        *(uint *)(nds_system + lVar4 + 0xb08018) =
             1 << (ulong)(uVar1 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar4 + 0xb08018);
        lVar4 = lVar9 + (ulong)(uVar2 >> 0x15) * 4;
        *(uint *)(nds_system + lVar7 + 0xb04018) =
             1 << (ulong)(uVar1 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar7 + 0xb04018);
        *(long *)(lVar9 + (ulong)(uVar1 >> 0xb) * 8) = (long)((lVar5 + 0x4000) - (ulong)uVar1) >> 2;
        lVar7 = lVar9 + (ulong)(ushort)(uVar2 >> 0x10) * 4;
        uVar1 = uVar10 + 0x5000;
        *(uint *)(nds_system + lVar4 + 0xb08018) =
             1 << (ulong)(uVar2 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar4 + 0xb08018);
        lVar4 = lVar9 + (ulong)(uVar1 >> 0x15) * 4;
        *(uint *)(nds_system + lVar7 + 0xb04018) =
             1 << (ulong)(uVar2 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar7 + 0xb04018);
        *(long *)(lVar9 + (ulong)(uVar2 >> 0xb) * 8) = (long)((lVar5 + 0x4800) - (ulong)uVar2) >> 2;
        lVar7 = lVar9 + (ulong)(ushort)(uVar1 >> 0x10) * 4;
        uVar2 = uVar10 + 0x5800;
        *(uint *)(nds_system + lVar4 + 0xb08018) =
             1 << (ulong)(uVar1 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar4 + 0xb08018);
        lVar4 = lVar9 + (ulong)(uVar2 >> 0x15) * 4;
        *(uint *)(nds_system + lVar7 + 0xb04018) =
             1 << (ulong)(uVar1 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar7 + 0xb04018);
        *(long *)(lVar9 + (ulong)(uVar1 >> 0xb) * 8) = (long)((lVar5 + 0x5000) - (ulong)uVar1) >> 2;
        lVar7 = lVar9 + (ulong)(ushort)(uVar2 >> 0x10) * 4;
        uVar1 = uVar10 + 0x6000;
        *(uint *)(nds_system + lVar4 + 0xb08018) =
             1 << (ulong)(uVar2 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar4 + 0xb08018);
        lVar4 = lVar9 + (ulong)(uVar1 >> 0x15) * 4;
        *(uint *)(nds_system + lVar7 + 0xb04018) =
             1 << (ulong)(uVar2 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar7 + 0xb04018);
        *(long *)(lVar9 + (ulong)(uVar2 >> 0xb) * 8) = (long)((lVar5 + 0x5800) - (ulong)uVar2) >> 2;
        uVar2 = uVar10 + 0x6800;
        lVar7 = lVar9 + (ulong)(ushort)(uVar1 >> 0x10) * 4;
        *(uint *)(nds_system + lVar4 + 0xb08018) =
             1 << (ulong)(uVar1 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar4 + 0xb08018);
        lVar4 = lVar9 + (ulong)(uVar2 >> 0x15) * 4;
        *(uint *)(nds_system + lVar7 + 0xb04018) =
             1 << (ulong)(uVar1 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar7 + 0xb04018);
        lVar7 = lVar9 + (ulong)(ushort)(uVar2 >> 0x10) * 4;
        *(long *)(lVar9 + (ulong)(uVar1 >> 0xb) * 8) = (long)((lVar5 + 0x6000) - (ulong)uVar1) >> 2;
        uVar1 = uVar10 + 0x7000;
        *(uint *)(nds_system + lVar4 + 0xb08018) =
             1 << (ulong)(uVar2 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar4 + 0xb08018);
        lVar4 = lVar9 + (ulong)(uVar1 >> 0x15) * 4;
        *(uint *)(nds_system + lVar7 + 0xb04018) =
             1 << (ulong)(uVar2 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar7 + 0xb04018);
        *(long *)(lVar9 + (ulong)(uVar2 >> 0xb) * 8) = (long)((lVar5 + 0x6800) - (ulong)uVar2) >> 2;
        lVar7 = lVar9 + (ulong)(ushort)(uVar1 >> 0x10) * 4;
        uVar2 = uVar10 + 0x7800;
        *(uint *)(nds_system + lVar4 + 0xb08018) =
             1 << (ulong)(uVar1 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar4 + 0xb08018);
        lVar4 = lVar9 + (ulong)(uVar2 >> 0x15) * 4;
        *(uint *)(nds_system + lVar7 + 0xb04018) =
             1 << (ulong)(uVar1 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar7 + 0xb04018);
        *(long *)(lVar9 + (ulong)(uVar1 >> 0xb) * 8) = (long)((lVar5 + 0x7000) - (ulong)uVar1) >> 2;
        lVar7 = lVar9 + (ulong)(ushort)(uVar2 >> 0x10) * 4;
        *(uint *)(nds_system + lVar4 + 0xb08018) =
             1 << (ulong)(uVar2 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar4 + 0xb08018);
        *(uint *)(nds_system + lVar7 + 0xb04018) =
             1 << (ulong)(uVar2 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar7 + 0xb04018);
        *(long *)(lVar9 + (ulong)(uVar2 >> 0xb) * 8) = (long)((lVar5 + 0x7800) - (ulong)uVar2) >> 2;
        if ((long)uVar8 < 0x4000000) {
          iVar6 = 0x4000000 - uVar10;
          if ((long)uVar8 < 0x3ff8001) {
            iVar6 = 0x8000;
          }
          remap_address_region_low_memory(param_1,uVar8,iVar6,0x400000);
        }
        uVar8 = uVar8 + 0x8000;
      } while (param_2 != (uint)uVar8);
    }
  }
  return;
}


