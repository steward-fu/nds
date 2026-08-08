/*
 * Ghidra decompilation
 *
 * Function : store_memory64
 * Address  : 00119fe0
 * Program  : drastic64
 */


void store_memory64(long param_1,ulong param_2,ulong param_3)

{
  ushort uVar1;
  long lVar2;
  undefined4 *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined4 uVar10;
  uint uVar11;
  
  uVar8 = param_2 >> 0xb & 0x1fffff;
  uVar6 = *(ulong *)(param_1 + uVar8 * 8);
  if ((uVar6 >> 0x3e & 1) == 0) {
    *(ulong *)(uVar6 * 4 + (param_2 & 0xffffffff)) = param_3;
  }
  else {
    uVar4 = (uint)param_2;
    if (uVar4 < 0x10000000) {
      lVar9 = *(long *)(param_1 + 0x1000000);
      lVar7 = (param_2 >> 0x17 & 0x1ff) * 0x60;
      lVar2 = lVar9 + lVar7;
      uVar11 = (uint)*(byte *)(lVar2 + 0x59);
      uVar10 = (undefined4)param_3;
      uVar1 = (ushort)(param_2 >> 0x10);
      if (*(byte *)(lVar2 + 0x59) == 1) {
        puVar3 = (undefined4 *)
                 (**(code **)(lVar2 + 0x20))(*(undefined8 *)(nds_system + param_1 + 0xb04008));
        if (*(char *)(lVar2 + 0x58) == *(char *)(lVar2 + 0x59)) {
          lVar7 = param_1 + (ulong)(uVar4 >> 0x15) * 4;
          lVar2 = param_1 + (ulong)uVar1 * 4;
          *(uint *)(nds_system + lVar7 + 0xb08018) =
               1 << (ulong)(uVar4 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar7 + 0xb08018);
          *(uint *)(nds_system + lVar2 + 0xb04018) =
               uVar11 << (ulong)(uVar4 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar2 + 0xb04018);
          *(long *)(param_1 + (ulong)(uVar4 >> 0xb) * 8) =
               (long)((long)puVar3 + (-(param_2 & 0xfffff800) - (param_2 & 0x7ff))) >> 2;
          *puVar3 = uVar10;
        }
        else {
          *puVar3 = uVar10;
        }
      }
      else if (uVar11 == 2) {
        (**(code **)(lVar2 + 0x30))
                  (*(undefined8 *)(nds_system + param_1 + 0xb04008),uVar4 & *(uint *)(lVar9 + lVar7)
                  );
      }
      else if (uVar11 == 0) {
        lVar5 = *(long *)(lVar2 + 0x20);
        uVar6 = (ulong)(uVar4 & *(uint *)(lVar9 + lVar7));
        if (*(char *)(lVar2 + 0x58) == '\0') {
          lVar7 = param_1 + (ulong)(uVar4 >> 0x15) * 4;
          lVar2 = param_1 + (ulong)uVar1 * 4;
          *(uint *)(nds_system + lVar7 + 0xb08018) =
               1 << (ulong)(uVar4 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar7 + 0xb08018);
          *(uint *)(nds_system + lVar2 + 0xb04018) =
               1 << (ulong)((uint)uVar8 & 0x1f) | *(uint *)(nds_system + lVar2 + 0xb04018);
          *(long *)(param_1 + uVar8 * 8) =
               (long)((lVar5 + (uVar6 & 0xfffff800)) - (param_2 & 0xfffff800)) >> 2;
          *(undefined4 *)(lVar5 + uVar6) = uVar10;
        }
        else {
          *(undefined4 *)(lVar5 + uVar6) = uVar10;
        }
      }
    }
    uVar4 = uVar4 + 4;
    uVar6 = (ulong)uVar4;
    if (0xfffffff < uVar4) {
      return;
    }
    lVar9 = *(long *)(param_1 + 0x1000000);
    lVar7 = (ulong)(uVar4 >> 0x17) * 0x60;
    lVar2 = lVar9 + lVar7;
    uVar11 = (uint)*(byte *)(lVar2 + 0x59);
    uVar10 = (undefined4)(param_3 >> 0x20);
    uVar1 = (ushort)(uVar4 >> 0x10);
    if (*(byte *)(lVar2 + 0x59) == 1) {
      puVar3 = (undefined4 *)
               (**(code **)(lVar2 + 0x20))(*(undefined8 *)(nds_system + param_1 + 0xb04008),uVar4);
      if (*(char *)(lVar2 + 0x58) == *(char *)(lVar2 + 0x59)) {
        lVar7 = param_1 + (ulong)(uVar4 >> 0x15) * 4;
        lVar2 = param_1 + (ulong)uVar1 * 4;
        *(uint *)(nds_system + lVar7 + 0xb08018) =
             1 << (ulong)(uVar4 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar7 + 0xb08018);
        *(uint *)(nds_system + lVar2 + 0xb04018) =
             uVar11 << (ulong)(uVar4 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar2 + 0xb04018);
        *(long *)(param_1 + (ulong)(uVar4 >> 0xb) * 8) =
             (long)((long)puVar3 + (-(uVar6 & 0xfffff800) - (uVar6 & 0x7ff))) >> 2;
      }
      *puVar3 = uVar10;
    }
    else {
      if (uVar11 == 2) {
                    /* WARNING: Could not recover jumptable at 0x0011a108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar2 + 0x30))
                  (*(undefined8 *)(nds_system + param_1 + 0xb04008),uVar4 & *(uint *)(lVar9 + lVar7)
                   ,param_3 >> 0x20);
        return;
      }
      if (uVar11 != 0) {
        return;
      }
      lVar5 = *(long *)(lVar2 + 0x20);
      uVar8 = (ulong)(uVar4 & *(uint *)(lVar9 + lVar7));
      if (*(char *)(lVar2 + 0x58) == '\0') {
        lVar7 = param_1 + (ulong)(uVar4 >> 0x15) * 4;
        lVar2 = param_1 + (ulong)uVar1 * 4;
        *(uint *)(nds_system + lVar7 + 0xb08018) =
             1 << (ulong)(uVar4 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar7 + 0xb08018);
        *(uint *)(nds_system + lVar2 + 0xb04018) =
             1 << (ulong)(uVar4 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar2 + 0xb04018);
        *(long *)(param_1 + (ulong)(uVar4 >> 0xb) * 8) =
             (long)((lVar5 + (uVar8 & 0xfffff800)) - (uVar6 & 0xfffff800)) >> 2;
      }
      *(undefined4 *)(lVar5 + uVar8) = uVar10;
    }
  }
  return;
}


