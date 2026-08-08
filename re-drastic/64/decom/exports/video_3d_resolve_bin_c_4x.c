/*
 * Ghidra decompilation
 *
 * Function : video_3d_resolve_bin_c_4x
 * Address  : 00155c80
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void video_3d_resolve_bin_c_4x(uint param_1,uint param_2,ulong *param_3,ulong *param_4)

{
  bool bVar1;
  long lVar2;
  ulong *puVar3;
  uint *puVar4;
  ulong *puVar6;
  uint *puVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  uint *puVar13;
  ulong *puVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar5;
  
  lVar2 = ___stack_chk_guard;
  puVar14 = param_3 + 0x80;
  puVar12 = param_4 + 0xfc;
  puVar13 = (uint *)((long)param_4 + 0x7e4);
  puVar10 = param_3;
  do {
    puVar6 = param_4;
    puVar9 = puVar10;
    if (puVar10 < (ulong *)((long)param_4 + 0x7fcU) && param_4 < puVar14) {
      lVar8 = 0;
      do {
        *(uint *)((long)puVar10 + lVar8) = *(uint *)((long)param_4 + lVar8 * 2) & 0x3fffffff;
        lVar8 = lVar8 + 4;
      } while (lVar8 != 0x400);
    }
    else {
      do {
        uVar15 = *(uint *)puVar6;
        param_2 = *(uint *)((long)puVar6 + 4);
        uVar16 = *(uint *)(puVar6 + 1);
        puVar11 = puVar6 + 2;
        puVar3 = puVar6 + 3;
        puVar6 = puVar6 + 4;
        param_1 = uVar15 & 0x3fffffff;
        puVar9[1] = CONCAT44(*(uint *)puVar3,*(uint *)puVar11) & 0x3fffffff3fffffff;
        *puVar9 = CONCAT44(uVar16,uVar15) & 0x3fffffff3fffffff;
        puVar9 = puVar9 + 2;
      } while (puVar12 != puVar6);
      *(uint *)(puVar10 + 0x7e) = *(uint *)puVar12 & 0x3fffffff;
      *(uint *)((long)puVar10 + 0x3f4) = *(uint *)(puVar12 + 1) & 0x3fffffff;
      *(uint *)(puVar10 + 0x7f) = *(uint *)(puVar12 + 2) & 0x3fffffff;
      *(uint *)((long)puVar10 + 0x3fc) = *(uint *)(puVar12 + 3) & 0x3fffffff;
    }
    puVar6 = puVar10 + 0x100;
    puVar9 = param_4 + 0x100;
    bVar1 = puVar6 <= (ulong *)((long)param_4 + 4U);
    if ((!bVar1 && puVar14 <= puVar9) && (bVar1 || puVar9 != puVar14)) {
      puVar7 = (uint *)((long)param_4 + 4);
      puVar10 = puVar14;
      do {
        puVar11 = (ulong *)((long)puVar10 + 4);
        *(uint *)puVar10 = *puVar7 & 0x3fffffff;
        puVar7 = puVar7 + 2;
        puVar10 = puVar11;
      } while (puVar6 != puVar11);
    }
    else {
      puVar7 = (uint *)((long)param_4 + 4);
      puVar11 = puVar14;
      do {
        uVar15 = *puVar7;
        param_2 = puVar7[1];
        uVar16 = puVar7[2];
        puVar4 = puVar7 + 4;
        puVar5 = puVar7 + 6;
        puVar7 = puVar7 + 8;
        param_1 = uVar15 & 0x3fffffff;
        puVar11[1] = CONCAT44(*puVar5,*puVar4) & 0x3fffffff3fffffff;
        *puVar11 = CONCAT44(uVar16,uVar15) & 0x3fffffff3fffffff;
        puVar11 = puVar11 + 2;
      } while (puVar7 != puVar13);
      *(uint *)(puVar10 + 0xfe) = *(uint *)((long)puVar12 + 4) & 0x3fffffff;
      *(uint *)((long)puVar10 + 0x7f4) = *(uint *)((long)puVar12 + 0xc) & 0x3fffffff;
      *(uint *)(puVar10 + 0xff) = *(uint *)((long)puVar12 + 0x14) & 0x3fffffff;
      *(uint *)((long)puVar10 + 0x7fc) = *(uint *)((long)puVar12 + 0x1c) & 0x3fffffff;
    }
    puVar14 = puVar14 + 0x100;
    puVar12 = puVar12 + 0x100;
    puVar13 = puVar13 + 0x200;
    puVar10 = puVar6;
    param_4 = puVar9;
  } while (puVar6 != param_3 + 0x2000);
  if (lVar2 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1,param_2,lVar2 - ___stack_chk_guard,0);
}


