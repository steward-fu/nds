/*
 * Ghidra decompilation
 *
 * Function : dma_transfer_gxfifo
 * Address  : 0011f2b0
 * Program  : drastic64
 */


void dma_transfer_gxfifo(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  
  lVar15 = *param_1;
  lVar14 = *(long *)(lVar15 + 0xfba78);
  uVar13 = *(uint *)(param_2 + 4);
  uVar11 = *(uint *)(param_2 + 3);
  uVar2 = uVar13 & 0x1fffff;
  iVar8 = *(int *)(nds_system + *(long *)(lVar14 + 0x9a30) + 0x362e994);
  if ((uVar13 & 0x1fffff) == 0) {
    uVar16 = 0;
  }
  else {
    uVar12 = uVar11;
    uVar16 = uVar2;
    if (iVar8 == 0) {
      do {
        lVar9 = (ulong)(uVar12 >> 0x17) * 0x60;
        lVar7 = param_1[1] + lVar9;
        uVar1 = *(uint *)(param_1[1] + lVar9);
        uVar10 = uVar1 + 1;
        if (uVar16 < uVar10) {
          uVar10 = uVar16;
        }
        uVar16 = uVar16 - uVar10;
        uVar11 = uVar12 + uVar10;
        if (*(char *)(lVar7 + 0x58) == '\0') {
          lVar7 = *(long *)(lVar7 + 8) + (ulong)(uVar1 & uVar12);
LAB_0011f49c:
          if (lVar7 != 0) {
            queue_geometry_command_packed_multi(lVar14,lVar7,uVar10);
          }
        }
        else if (*(char *)(lVar7 + 0x58) == '\x01') {
          lVar7 = (**(code **)(lVar7 + 8))(lVar15);
          goto LAB_0011f49c;
        }
        uVar12 = uVar11;
      } while (uVar16 != 0);
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      uVar10 = uVar11;
      uVar12 = uVar2;
      do {
        lVar9 = (ulong)(uVar10 >> 0x17) * 0x60;
        lVar7 = param_1[1] + lVar9;
        uVar3 = *(uint *)(param_1[1] + lVar9);
        uVar1 = uVar3 + 1;
        if (uVar12 < uVar1) {
          uVar1 = uVar12;
        }
        uVar12 = uVar12 - uVar1;
        uVar11 = uVar10 + uVar1;
        if (*(char *)(lVar7 + 0x58) == '\0') {
          lVar7 = *(long *)(lVar7 + 8) + (ulong)(uVar3 & uVar10);
LAB_0011f374:
          if (lVar7 != 0) {
            iVar6 = queue_geometry_command_packed_multi_cycles(lVar14,lVar7,uVar1);
            uVar16 = uVar16 + iVar6 * iVar8;
          }
        }
        else if (*(char *)(lVar7 + 0x58) == '\x01') {
          lVar7 = (**(code **)(lVar7 + 8))(lVar15);
          goto LAB_0011f374;
        }
        uVar10 = uVar11;
      } while (uVar12 != 0);
    }
  }
  lVar7 = param_2[1];
  lVar15 = *(long *)(lVar15 + 0xfba68);
  lVar14 = ((ulong)*(uint *)(lVar15 + 0x10) + *(long *)(lVar15 + 8)) -
           (long)*(int *)(lVar7 + 0x2290);
  uVar12 = ((int)lVar14 - (int)*(long *)(lVar15 + 8)) + uVar16;
  if ((uVar13 >> 0x15 & 3) != 3) {
    *(uint *)((long)param_2 + 0x1c) = uVar2 + uVar11;
  }
  if (iVar8 == 0) {
    if ((uVar13 >> 0x19 & 1) == 0) {
      uVar13 = uVar13 & 0x7fffffff;
      *(uint *)(param_2 + 4) = uVar13;
      *(uint *)(param_2[2] + 8) = uVar13;
    }
    if ((uVar13 >> 0x1e & 1) != 0) {
      lVar14 = *(long *)(lVar7 + 0x2080);
      uVar11 = 0x100 << (ulong)(*(byte *)((long)param_2 + 0x25) & 0x1f) | *(uint *)(lVar14 + 0x214);
      *(uint *)(lVar14 + 0x214) = uVar11;
      lVar9 = param_2[1];
      if ((*(uint *)(lVar9 + 0x2110) & 6) == 0) {
        uVar11 = -*(int *)(lVar14 + 0x208) & *(uint *)(lVar14 + 0x210) & uVar11;
        *(uint *)(lVar9 + 0x2108) = uVar11;
      }
      else {
        uVar11 = *(uint *)(lVar9 + 0x2108);
      }
      if (uVar11 != 0) {
        *(uint *)(lVar9 + 0x22a8) = *(uint *)(lVar9 + 0x22a8) | 2;
      }
    }
    if (*(uint *)(lVar15 + 0x10) <= uVar12) {
      return;
    }
  }
  else {
    if ((uVar2 < 0x104) && ((uVar13 >> 0x19 & 1) == 0)) {
      *(uint *)(param_2 + 4) = uVar13 & 0x7fffffff;
      *(uint *)(param_2[2] + 8) = uVar13 & 0x7fffffff;
      cVar4 = *(char *)((long)param_2 + 0x26);
      bVar5 = *(byte *)((long)param_2 + 0x25);
    }
    else {
      cVar4 = *(char *)((long)param_2 + 0x26);
      bVar5 = *(byte *)((long)param_2 + 0x25);
    }
    iVar8 = bVar5 + 0xc;
    if (cVar4 != '\0') {
      remove_event(lVar15 + 0x18,iVar8);
      iVar8 = *(byte *)((long)param_2 + 0x25) + 0xc;
    }
    *param_2 = lVar14 + (ulong)uVar16;
    *(undefined *)((long)param_2 + 0x26) = 1;
    schedule_event(lVar15 + 0x18,uVar12,iVar8);
    if (*(uint *)(lVar15 + 0x10) <= uVar12) {
      return;
    }
  }
  *(uint *)(lVar7 + 0x22a8) = *(uint *)(lVar7 + 0x22a8) | 4;
  return;
}


