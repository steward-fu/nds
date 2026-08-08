/*
 * Ghidra decompilation
 *
 * Function : extended_store16
 * Address  : 00118c20
 * Program  : drastic64
 */


void extended_store16(long param_1,ulong param_2,undefined2 param_3)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined2 *puVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  uVar6 = (uint)param_2;
  if (0xfffffff < uVar6) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x1000000);
  lVar7 = (ulong)(uVar6 >> 0x17) * 0x60;
  lVar2 = lVar3 + lVar7;
  uVar9 = (uint)*(byte *)(lVar2 + 0x59);
  uVar1 = (ushort)(param_2 >> 0x10);
  if (*(byte *)(lVar2 + 0x59) == 1) {
    puVar5 = (undefined2 *)
             (**(code **)(lVar2 + 0x20))(*(undefined8 *)(nds_system + param_1 + 0xb04008));
    if (*(char *)(lVar2 + 0x58) == *(char *)(lVar2 + 0x59)) {
      lVar3 = param_1 + (ulong)(uVar6 >> 0x15) * 4;
      lVar2 = param_1 + (ulong)uVar1 * 4;
      *(uint *)(nds_system + lVar3 + 0xb08018) =
           1 << (ulong)(uVar6 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar3 + 0xb08018);
      *(uint *)(nds_system + lVar2 + 0xb04018) =
           uVar9 << (ulong)(uVar6 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar2 + 0xb04018);
      *(long *)(param_1 + (ulong)(uVar6 >> 0xb) * 8) =
           (long)((long)puVar5 + (-(param_2 & 0xfffff800) - (param_2 & 0x7ff))) >> 2;
      *puVar5 = param_3;
    }
    else {
      *puVar5 = param_3;
    }
    return;
  }
  if (uVar9 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00118cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x28))
              (*(undefined8 *)(nds_system + param_1 + 0xb04008),uVar6 & *(uint *)(lVar3 + lVar7),
               param_3);
    return;
  }
  if (uVar9 != 0) {
    return;
  }
  lVar8 = *(long *)(lVar2 + 0x20);
  uVar4 = (ulong)(uVar6 & *(uint *)(lVar3 + lVar7));
  if (*(char *)(lVar2 + 0x58) == '\0') {
    lVar3 = param_1 + (ulong)(uVar6 >> 0x15) * 4;
    lVar2 = param_1 + (ulong)uVar1 * 4;
    *(uint *)(nds_system + lVar3 + 0xb08018) =
         1 << (ulong)(uVar6 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar3 + 0xb08018);
    *(uint *)(nds_system + lVar2 + 0xb04018) =
         1 << (ulong)(uVar6 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar2 + 0xb04018);
    *(long *)(param_1 + (ulong)(uVar6 >> 0xb) * 8) =
         (long)((lVar8 + (uVar4 & 0xfffff800)) - (param_2 & 0xfffff800)) >> 2;
    *(undefined2 *)(lVar8 + uVar4) = param_3;
  }
  else {
    *(undefined2 *)(lVar8 + uVar4) = param_3;
  }
  return;
}


