/*
 * Ghidra decompilation
 *
 * Function : cpu_block_lookup_base
 * Address  : 0012db10
 * Program  : drastic64
 */


long cpu_block_lookup_base(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  uint *local_20;
  
  uVar16 = (uint)(param_2 >> 2);
  uVar15 = uVar16 & 0x3fffffff;
  uVar16 = uVar16 & 0x3ff;
  uVar12 = (ulong)uVar16;
  uVar8 = (uint)param_2;
  lVar1 = param_1 + 0x80;
  lVar17 = *(long *)(param_1 + 0x2088);
  if (uVar8 < 0x2000000) {
    if (*(int *)(param_1 + 0x210c) == 1) {
      if ((param_2 & 1) == 0) {
        uVar9 = *(uint *)(*(long *)(param_1 + 0x2270) + (param_2 >> 2 & 0x1fff) * 4);
      }
      else {
        uVar9 = *(uint *)(*(long *)(param_1 + 0x2278) + ((param_2 & 0xffffffff) >> 1 & 0x3fff) * 4);
      }
      uVar5 = (ulong)(uVar16 + 0x400);
      lVar3 = uVar12 << 2;
      puVar13 = (uint *)0x0;
      if (uVar9 != 0) goto LAB_0012e14c;
      goto LAB_0012dbb0;
    }
LAB_0012db54:
    lVar6 = lVar17 + 0x1380000;
    uVar9 = 0x1fff;
  }
  else {
    if (uVar8 >> 0x18 != 2) goto LAB_0012db54;
    uVar9 = 0x7fff;
    lVar6 = lVar17 + 0x1300000;
  }
  uVar10 = (ulong)(uVar15 & uVar9);
  uVar5 = (ulong)(uVar16 + 0x400);
  puVar13 = (uint *)(lVar6 + uVar10 * 0x10);
  lVar3 = uVar12 * 4;
  if (*(uint *)(lVar6 + uVar10 * 0x10) == uVar8) {
    uVar16 = puVar13[1];
    *(uint *)(lVar1 + uVar12 * 4) = uVar8;
    *(uint *)(lVar1 + uVar5 * 4) = uVar16;
    return lVar17 + (ulong)uVar16;
  }
  uVar9 = puVar13[3];
  if (puVar13[2] == uVar8) {
LAB_0012e14c:
    *(uint *)(lVar1 + uVar12 * 4) = uVar8;
    *(uint *)(lVar1 + uVar5 * 4) = uVar9;
    return lVar17 + (ulong)uVar9;
  }
  if (uVar9 != 0) {
    for (uVar16 = *(uint *)((ulong)*(uint *)(lVar17 + (ulong)uVar9 + -4) + lVar17); uVar16 != 0;
        uVar16 = *(uint *)(lVar17 + (ulong)uVar16)) {
      if (*(uint *)(lVar17 + (ulong)uVar16 + 4) == uVar8) {
        uVar16 = *(uint *)(lVar17 + (ulong)uVar16 + 8);
        *(uint *)(lVar1 + uVar12 * 4) = uVar8;
        *(uint *)(lVar1 + uVar5 * 4) = uVar16;
        return lVar17 + (ulong)uVar16;
      }
    }
  }
LAB_0012dbb0:
  local_20 = (uint *)(lVar1 + uVar5 * 4);
  uVar12 = *(ulong *)(nds_system + lVar17 + 0xf24000);
  uVar18 = *(ulong *)(nds_system + lVar17 + 0xf24008);
  uVar10 = *(ulong *)(nds_system + lVar17 + 0xf24010);
  uVar19 = *(ulong *)(nds_system + lVar17 + 0xf24018);
  uVar5 = *(ulong *)(nds_system + lVar17 + 0xf24020);
  uVar20 = *(ulong *)(nds_system + lVar17 + 0xf24028);
  *(long *)(nds_system + lVar17 + 0xffe140) = lVar17 + 0x13a0000;
  *(undefined4 *)(nds_system + lVar17 + 0xfa4030) = 0;
  *(undefined4 *)(nds_system + lVar17 + 0xfc4034) = 0;
  lVar6 = cpu_block_create(param_1,uVar8 & 0xfffffffe);
  uVar16 = (int)lVar6 - (int)lVar17;
  if (lVar6 != 0) {
    if (puVar13 == (uint *)0x0) {
      if ((param_2 & 1) == 0) {
        uVar11 = (ulong)uVar15 & 0x1fff;
        lVar2 = lVar17 + uVar11;
        *(uint *)(*(long *)(param_1 + 0x2270) + uVar11 * 4) = uVar16;
        if (8 < (byte)nds_system[lVar2 + 0xfdc038]) {
          nds_system[lVar2 + 0xfdc038] = nds_system[lVar2 + 0xfdc038] | 0x80;
        }
      }
      else {
        *(uint *)(*(long *)(param_1 + 0x2278) + ((param_2 & 0xffffffff) >> 1 & 0x3fff) * 4) = uVar16
        ;
      }
    }
    else if (puVar13[1] == 0) {
      *puVar13 = uVar8;
      puVar13[1] = uVar16;
    }
    else if (puVar13[3] == 0) {
      puVar13[2] = uVar8;
      puVar13[3] = uVar16;
    }
    else {
      uVar11 = (ulong)*(uint *)(lVar17 + (ulong)puVar13[3] + -4);
      for (uVar15 = *(uint *)(lVar17 + uVar11); uVar15 != 0;
          uVar15 = *(uint *)(lVar17 + (ulong)uVar15)) {
        uVar11 = (ulong)uVar15;
      }
      *(undefined4 *)(lVar17 + uVar11) = *(undefined4 *)(lVar6 + -4);
    }
  }
  cpu_translate_link_delayed_targets(param_1);
  uVar11 = *(ulong *)(nds_system + lVar17 + 0xf24000);
  if (uVar11 != uVar12) {
    uVar4 = ctr_el0;
    uVar14 = (ulong)(4 << (ulong)((uint)uVar4 & 0xf));
    uVar7 = (ulong)(4 << (ulong)((uint)uVar4 >> 0x10 & 0xf));
    if (uVar14 < icache_line_size_11647) {
      icache_line_size_11647 = uVar14;
    }
    if (uVar7 < dcache_line_size_11648) {
      dcache_line_size_11648 = uVar7;
    }
    for (uVar7 = uVar12 & -dcache_line_size_11648; uVar7 < uVar11;
        uVar7 = uVar7 + dcache_line_size_11648) {
      DC_CIVAC(uVar7);
    }
    UnkSytemRegWrite(0,3,3,0xb,4,0);
    for (uVar12 = uVar12 & -icache_line_size_11647; uVar12 < uVar11;
        uVar12 = uVar12 + icache_line_size_11647) {
      IC_IVAU(uVar12);
    }
    UnkSytemRegWrite(0,3,3,0xb,4,0);
    InstructionSynchronizationBarrier();
  }
  uVar12 = *(ulong *)(nds_system + lVar17 + 0xf24008);
  if (uVar12 != uVar18) {
    uVar4 = ctr_el0;
    uVar7 = (ulong)(4 << (ulong)((uint)uVar4 & 0xf));
    uVar11 = (ulong)(4 << (ulong)((uint)uVar4 >> 0x10 & 0xf));
    if (uVar7 < icache_line_size_11647) {
      icache_line_size_11647 = uVar7;
    }
    if (uVar11 < dcache_line_size_11648) {
      dcache_line_size_11648 = uVar11;
    }
    for (uVar11 = uVar12 & -dcache_line_size_11648; uVar11 < uVar18;
        uVar11 = uVar11 + dcache_line_size_11648) {
      DC_CIVAC(uVar11);
    }
    UnkSytemRegWrite(0,3,3,0xb,4,0);
    for (uVar12 = uVar12 & -icache_line_size_11647; uVar12 < uVar18;
        uVar12 = uVar12 + icache_line_size_11647) {
      IC_IVAU(uVar12);
    }
    UnkSytemRegWrite(0,3,3,0xb,4,0);
    InstructionSynchronizationBarrier();
  }
  uVar12 = *(ulong *)(nds_system + lVar17 + 0xf24020);
  if (uVar12 != uVar5) {
    uVar4 = ctr_el0;
    uVar11 = (ulong)(4 << (ulong)((uint)uVar4 & 0xf));
    uVar18 = (ulong)(4 << (ulong)((uint)uVar4 >> 0x10 & 0xf));
    if (uVar11 < icache_line_size_11647) {
      icache_line_size_11647 = uVar11;
    }
    if (uVar18 < dcache_line_size_11648) {
      dcache_line_size_11648 = uVar18;
    }
    for (uVar18 = uVar5 & -dcache_line_size_11648; uVar18 < uVar12;
        uVar18 = uVar18 + dcache_line_size_11648) {
      DC_CIVAC(uVar18);
    }
    UnkSytemRegWrite(0,3,3,0xb,4,0);
    for (uVar5 = uVar5 & -icache_line_size_11647; uVar5 < uVar12;
        uVar5 = uVar5 + icache_line_size_11647) {
      IC_IVAU(uVar5);
    }
    UnkSytemRegWrite(0,3,3,0xb,4,0);
    InstructionSynchronizationBarrier();
  }
  uVar12 = *(ulong *)(nds_system + lVar17 + 0xf24028);
  if (uVar12 != uVar20) {
    uVar4 = ctr_el0;
    uVar18 = (ulong)(4 << (ulong)((uint)uVar4 & 0xf));
    uVar5 = (ulong)(4 << (ulong)((uint)uVar4 >> 0x10 & 0xf));
    if (uVar18 < icache_line_size_11647) {
      icache_line_size_11647 = uVar18;
    }
    if (uVar5 < dcache_line_size_11648) {
      dcache_line_size_11648 = uVar5;
    }
    for (uVar5 = uVar12 & -dcache_line_size_11648; uVar5 < uVar20;
        uVar5 = uVar5 + dcache_line_size_11648) {
      DC_CIVAC(uVar5);
    }
    UnkSytemRegWrite(0,3,3,0xb,4,0);
    for (uVar12 = uVar12 & -icache_line_size_11647; uVar12 < uVar20;
        uVar12 = uVar12 + icache_line_size_11647) {
      IC_IVAU(uVar12);
    }
    UnkSytemRegWrite(0,3,3,0xb,4,0);
    InstructionSynchronizationBarrier();
  }
  uVar12 = *(ulong *)(nds_system + lVar17 + 0xf24010);
  if (uVar12 != uVar10) {
    uVar4 = ctr_el0;
    uVar18 = (ulong)(4 << (ulong)((uint)uVar4 & 0xf));
    uVar5 = (ulong)(4 << (ulong)((uint)uVar4 >> 0x10 & 0xf));
    if (uVar18 < icache_line_size_11647) {
      icache_line_size_11647 = uVar18;
    }
    if (uVar5 < dcache_line_size_11648) {
      dcache_line_size_11648 = uVar5;
    }
    for (uVar5 = uVar10 & -dcache_line_size_11648; uVar5 < uVar12;
        uVar5 = uVar5 + dcache_line_size_11648) {
      DC_CIVAC(uVar5);
    }
    UnkSytemRegWrite(0,3,3,0xb,4,0);
    for (uVar10 = uVar10 & -icache_line_size_11647; uVar10 < uVar12;
        uVar10 = uVar10 + icache_line_size_11647) {
      IC_IVAU(uVar10);
    }
    UnkSytemRegWrite(0,3,3,0xb,4,0);
    InstructionSynchronizationBarrier();
  }
  uVar12 = *(ulong *)(nds_system + lVar17 + 0xf24018);
  if (uVar12 != uVar19) {
    uVar4 = ctr_el0;
    uVar10 = (ulong)(4 << (ulong)((uint)uVar4 & 0xf));
    uVar5 = (ulong)(4 << (ulong)((uint)uVar4 >> 0x10 & 0xf));
    if (uVar10 < icache_line_size_11647) {
      icache_line_size_11647 = uVar10;
    }
    if (uVar5 < dcache_line_size_11648) {
      dcache_line_size_11648 = uVar5;
    }
    for (uVar5 = uVar12 & -dcache_line_size_11648; uVar5 < uVar19;
        uVar5 = uVar5 + dcache_line_size_11648) {
      DC_CIVAC(uVar5);
    }
    UnkSytemRegWrite(0,3,3,0xb,4,0);
    for (uVar12 = uVar12 & -icache_line_size_11647; uVar12 < uVar19;
        uVar12 = uVar12 + icache_line_size_11647) {
      IC_IVAU(uVar12);
    }
    UnkSytemRegWrite(0,3,3,0xb,4,0);
    InstructionSynchronizationBarrier();
  }
  *(uint *)(lVar1 + lVar3) = uVar8;
  *local_20 = uVar16;
  return lVar6;
}


