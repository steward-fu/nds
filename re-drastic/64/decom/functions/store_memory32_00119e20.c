/*
 * Ghidra decompilation
 *
 * Function : store_memory32
 * Address  : 00119e20
 * Program  : drastic64
 */


void store_memory32(long param_1,ulong param_2,undefined4 param_3)

{
  ushort uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  
  uVar3 = (param_2 & 0xffffffff) >> 0xb;
  uVar6 = *(ulong *)(param_1 + uVar3 * 8);
  if ((uVar6 >> 0x3e & 1) == 0) {
    *(undefined4 *)((param_2 & 0xffffffff) + uVar6 * 4) = param_3;
    return;
  }
  uVar9 = (uint)param_2;
  if (uVar9 < 0x10000000) {
    lVar7 = *(long *)(param_1 + 0x1000000);
    lVar4 = (ulong)(uVar9 >> 0x17) * 0x60;
    lVar2 = lVar7 + lVar4;
    uVar10 = (uint)*(byte *)(lVar2 + 0x59);
    uVar1 = (ushort)(param_2 >> 0x10);
    if (*(byte *)(lVar2 + 0x59) == 1) {
      puVar5 = (undefined4 *)
               (**(code **)(lVar2 + 0x20))(*(undefined8 *)(nds_system + param_1 + 0xb04008));
      if (*(char *)(lVar2 + 0x58) == *(char *)(lVar2 + 0x59)) {
        lVar4 = param_1 + (ulong)(uVar9 >> 0x15) * 4;
        lVar2 = param_1 + (ulong)uVar1 * 4;
        *(uint *)(nds_system + lVar4 + 0xb08018) =
             1 << (ulong)(uVar9 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar4 + 0xb08018);
        *(uint *)(nds_system + lVar2 + 0xb04018) =
             uVar10 << (ulong)(uVar9 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar2 + 0xb04018);
        *(long *)(param_1 + (ulong)(uVar9 >> 0xb) * 8) =
             (long)((long)puVar5 + (-(param_2 & 0xfffff800) - (param_2 & 0x7ff))) >> 2;
      }
      *puVar5 = param_3;
    }
    else {
      if (uVar10 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00119fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar2 + 0x30))
                  (*(undefined8 *)(nds_system + param_1 + 0xb04008),uVar9 & *(uint *)(lVar7 + lVar4)
                  );
        return;
      }
      if (uVar10 == 0) {
        lVar8 = *(long *)(lVar2 + 0x20);
        uVar6 = (ulong)(uVar9 & *(uint *)(lVar7 + lVar4));
        if (*(char *)(lVar2 + 0x58) == '\0') {
          lVar4 = param_1 + (ulong)(uVar9 >> 0x15) * 4;
          lVar2 = param_1 + (ulong)uVar1 * 4;
          *(uint *)(nds_system + lVar4 + 0xb08018) =
               1 << (ulong)(uVar9 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar4 + 0xb08018);
          *(uint *)(nds_system + lVar2 + 0xb04018) =
               1 << (ulong)((uint)uVar3 & 0x1f) | *(uint *)(nds_system + lVar2 + 0xb04018);
          *(long *)(param_1 + uVar3 * 8) =
               (long)((lVar8 + (uVar6 & 0xfffff800)) - (param_2 & 0xfffff800)) >> 2;
        }
        *(undefined4 *)(lVar8 + uVar6) = param_3;
      }
    }
  }
  return;
}


