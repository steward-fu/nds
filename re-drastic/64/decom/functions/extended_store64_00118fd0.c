/*
 * Ghidra decompilation
 *
 * Function : extended_store64
 * Address  : 00118fd0
 * Program  : drastic64
 */


void extended_store64(long param_1,ulong param_2,ulong param_3)

{
  ushort uVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  undefined4 uVar11;
  
  uVar5 = (uint)param_2;
  if (uVar5 < 0x10000000) {
    lVar7 = *(long *)(param_1 + 0x1000000);
    lVar6 = (ulong)(uVar5 >> 0x17) * 0x60;
    lVar2 = lVar7 + lVar6;
    uVar10 = (uint)*(byte *)(lVar2 + 0x59);
    uVar11 = (undefined4)param_3;
    uVar1 = (ushort)(param_2 >> 0x10);
    if (*(byte *)(lVar2 + 0x59) == 1) {
      puVar4 = (undefined4 *)
               (**(code **)(lVar2 + 0x20))(*(undefined8 *)(nds_system + param_1 + 0xb04008));
      if (*(char *)(lVar2 + 0x58) == *(char *)(lVar2 + 0x59)) {
        lVar6 = param_1 + (ulong)(uVar5 >> 0x15) * 4;
        lVar2 = param_1 + (ulong)uVar1 * 4;
        *(uint *)(nds_system + lVar6 + 0xb08018) =
             1 << (ulong)(uVar5 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar6 + 0xb08018);
        *(uint *)(nds_system + lVar2 + 0xb04018) =
             uVar10 << (ulong)(uVar5 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar2 + 0xb04018);
        *(long *)(param_1 + (ulong)(uVar5 >> 0xb) * 8) =
             (long)((long)puVar4 + (-(param_2 & 0xfffff800) - (param_2 & 0x7ff))) >> 2;
        *puVar4 = uVar11;
      }
      else {
        *puVar4 = uVar11;
      }
    }
    else if (uVar10 == 2) {
      (**(code **)(lVar2 + 0x30))
                (*(undefined8 *)(nds_system + param_1 + 0xb04008),uVar5 & *(uint *)(lVar7 + lVar6));
    }
    else if (uVar10 == 0) {
      lVar8 = *(long *)(lVar2 + 0x20);
      uVar9 = (ulong)(uVar5 & *(uint *)(lVar7 + lVar6));
      if (*(char *)(lVar2 + 0x58) == '\0') {
        lVar6 = param_1 + (ulong)(uVar5 >> 0x15) * 4;
        lVar2 = param_1 + (ulong)uVar1 * 4;
        *(uint *)(nds_system + lVar6 + 0xb08018) =
             1 << (ulong)(uVar5 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar6 + 0xb08018);
        *(uint *)(nds_system + lVar2 + 0xb04018) =
             1 << (ulong)(uVar5 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar2 + 0xb04018);
        *(long *)(param_1 + (ulong)(uVar5 >> 0xb) * 8) =
             (long)((lVar8 + (uVar9 & 0xfffff800)) - (param_2 & 0xfffff800)) >> 2;
        *(undefined4 *)(lVar8 + uVar9) = uVar11;
      }
      else {
        *(undefined4 *)(lVar8 + uVar9) = uVar11;
      }
    }
  }
  uVar5 = uVar5 + 4;
  uVar9 = (ulong)uVar5;
  if (uVar5 < 0x10000000) {
    lVar6 = *(long *)(param_1 + 0x1000000);
    lVar7 = (ulong)(uVar5 >> 0x17) * 0x60;
    lVar2 = lVar6 + lVar7;
    uVar10 = (uint)*(byte *)(lVar2 + 0x59);
    uVar11 = (undefined4)(param_3 >> 0x20);
    uVar1 = (ushort)(uVar5 >> 0x10);
    if (*(byte *)(lVar2 + 0x59) == 1) {
      puVar4 = (undefined4 *)
               (**(code **)(lVar2 + 0x20))(*(undefined8 *)(nds_system + param_1 + 0xb04008),uVar5);
      if (*(char *)(lVar2 + 0x58) == *(char *)(lVar2 + 0x59)) {
        lVar6 = param_1 + (ulong)(uVar5 >> 0x15) * 4;
        lVar2 = param_1 + (ulong)uVar1 * 4;
        *(uint *)(nds_system + lVar6 + 0xb08018) =
             1 << (ulong)(uVar5 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar6 + 0xb08018);
        *(uint *)(nds_system + lVar2 + 0xb04018) =
             uVar10 << (ulong)(uVar5 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar2 + 0xb04018);
        *(long *)(param_1 + (ulong)(uVar5 >> 0xb) * 8) =
             (long)((long)puVar4 + (-(uVar9 & 0xfffff800) - (uVar9 & 0x7ff))) >> 2;
        *puVar4 = uVar11;
      }
      else {
        *puVar4 = uVar11;
      }
      return;
    }
    if (uVar10 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00119114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x30))
                (*(undefined8 *)(nds_system + param_1 + 0xb04008),uVar5 & *(uint *)(lVar6 + lVar7),
                 param_3 >> 0x20);
      return;
    }
    if (uVar10 == 0) {
      lVar8 = *(long *)(lVar2 + 0x20);
      uVar3 = (ulong)(uVar5 & *(uint *)(lVar6 + lVar7));
      if (*(char *)(lVar2 + 0x58) == '\0') {
        lVar6 = param_1 + (ulong)(uVar5 >> 0x15) * 4;
        lVar2 = param_1 + (ulong)uVar1 * 4;
        *(uint *)(nds_system + lVar6 + 0xb08018) =
             1 << (ulong)(uVar5 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar6 + 0xb08018);
        *(uint *)(nds_system + lVar2 + 0xb04018) =
             1 << (ulong)(uVar5 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar2 + 0xb04018);
        *(long *)(param_1 + (ulong)(uVar5 >> 0xb) * 8) =
             (long)((lVar8 + (uVar3 & 0xfffff800)) - (uVar9 & 0xfffff800)) >> 2;
        *(undefined4 *)(lVar8 + uVar3) = uVar11;
      }
      else {
        *(undefined4 *)(lVar8 + uVar3) = uVar11;
      }
      return;
    }
  }
  return;
}


