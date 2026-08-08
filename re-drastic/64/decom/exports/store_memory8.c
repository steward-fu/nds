/*
 * Ghidra decompilation
 *
 * Function : store_memory8
 * Address  : 00119a80
 * Program  : drastic64
 */


void store_memory8(long param_1,ulong param_2,undefined param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  
  uVar7 = param_2 >> 0xb & 0x1fffff;
  uVar6 = *(ulong *)(param_1 + uVar7 * 8);
  uVar9 = param_2 & 0xffffffff;
  uVar4 = (uint)param_2;
  if ((uVar6 >> 0x3e & 1) == 0) {
    *(undefined *)(uVar6 * 4 + (param_2 & 0xffffffff)) = param_3;
    return;
  }
  if (uVar4 < 0x10000000) {
    lVar5 = *(long *)(param_1 + 0x1000000);
    lVar2 = (ulong)(uVar4 >> 0x17) * 0x60;
    lVar1 = lVar5 + lVar2;
    uVar10 = (uint)*(byte *)(lVar1 + 0x59);
    if (*(byte *)(lVar1 + 0x59) == 1) {
      puVar3 = (undefined *)
               (**(code **)(lVar1 + 0x20))(*(undefined8 *)(nds_system + param_1 + 0xb04008));
      if (*(char *)(lVar1 + 0x58) == *(char *)(lVar1 + 0x59)) {
        lVar2 = param_1 + (uVar9 >> 0x15) * 4;
        lVar1 = param_1 + (uVar9 >> 0x10) * 4;
        *(uint *)(nds_system + lVar2 + 0xb08018) =
             1 << (ulong)((uint)(uVar9 >> 0x10) & 0x1f) | *(uint *)(nds_system + lVar2 + 0xb08018);
        *(uint *)(nds_system + lVar1 + 0xb04018) =
             uVar10 << (ulong)((uint)(uVar9 >> 0xb) & 0x1f) |
             *(uint *)(nds_system + lVar1 + 0xb04018);
        *(long *)(param_1 + (uVar9 >> 0xb) * 8) =
             (long)(puVar3 + (-(param_2 & 0xfffff800) - (param_2 & 0x7ff))) >> 2;
      }
      *puVar3 = param_3;
    }
    else {
      if (uVar10 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00119c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar1 + 0x20))
                  (*(undefined8 *)(nds_system + param_1 + 0xb04008),uVar4 & *(uint *)(lVar5 + lVar2)
                   ,param_3);
        return;
      }
      if (uVar10 == 0) {
        lVar8 = *(long *)(lVar1 + 0x20);
        uVar6 = (ulong)(uVar4 & *(uint *)(lVar5 + lVar2));
        if (*(char *)(lVar1 + 0x58) == '\0') {
          lVar2 = param_1 + (ulong)(uVar4 >> 0x15) * 4;
          lVar1 = param_1 + (param_2 >> 0x10 & 0xffff) * 4;
          *(uint *)(nds_system + lVar2 + 0xb08018) =
               1 << (ulong)(uVar4 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar2 + 0xb08018);
          *(uint *)(nds_system + lVar1 + 0xb04018) =
               1 << (ulong)((uint)uVar7 & 0x1f) | *(uint *)(nds_system + lVar1 + 0xb04018);
          *(long *)(param_1 + uVar7 * 8) =
               (long)((lVar8 + (uVar6 & 0xfffff800)) - (param_2 & 0xfffff800)) >> 2;
        }
        *(undefined *)(lVar8 + uVar6) = param_3;
      }
    }
  }
  return;
}


