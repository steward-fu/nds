/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_msr_op
 * Address  : 0018fb00
 * Program  : drastic64
 */


void cpu_translate_msr_op(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined8 *puVar9;
  
  uVar1 = (uint)(param_2 >> 0x10);
  if (((uint)param_2 >> 0x16 & 1) == 0) {
    if (((uVar1 & 0xffff) >> 3 & 1) != 0) {
      puVar7 = *(undefined4 **)(param_1 + 0x408);
      *puVar7 = 0xd51b4200;
      *(undefined4 **)(param_1 + 0x408) = puVar7 + 1;
    }
    if ((param_2 >> 0x10 & 1) != 0) {
      puVar8 = *(uint **)(param_1 + 0x408);
      lVar5 = (long)arm64_msr_cpsr_low + -(long)puVar8;
      lVar2 = -(long)puVar8 + 0x18f43f;
      if (-1 < lVar5) {
        lVar2 = lVar5;
      }
      *puVar8 = (uint)lVar2 >> 2 & 0x3ffffff | 0x94000000;
      *(uint **)(param_1 + 0x408) = puVar8 + 1;
      cpu_translate_store_pc_metadata(param_1,*(undefined4 *)(param_1 + 0x448));
      return;
    }
  }
  else {
    uVar1 = uVar1 & 0xf;
    puVar6 = *(undefined8 **)(param_1 + 0x408);
    if ((param_2 >> 0x10 & 0xf) == 0) {
      puVar9 = puVar6 + 1;
      *puVar6 = 0x2a3f03e12a1f03e0;
    }
    else if (uVar1 == 0xf) {
      puVar9 = (undefined8 *)((long)puVar6 + 4);
      *(undefined4 *)puVar6 = 0x2a1f03e1;
    }
    else {
      bVar4 = (&psr_mask_immr_12090)[uVar1 ^ 0xf];
      bVar3 = psr_mask_imms_12091[uVar1 ^ 0xf];
      puVar9 = puVar6 + 1;
      *(uint *)puVar6 =
           (uint)(byte)psr_mask_imms_12091[uVar1] << 10 |
           (uint)(byte)(&psr_mask_immr_12090)[uVar1] << 0x10 | 0x12000000;
      *(uint *)((long)puVar6 + 4) = (uint)bVar3 << 10 | (uint)bVar4 << 0x10 | 0x320003e1;
    }
    lVar5 = (long)arm64_msr_spsr + -(long)puVar9;
    lVar2 = -(long)puVar9 + 0x18f523;
    if (-1 < lVar5) {
      lVar2 = lVar5;
    }
    *(uint *)puVar9 = (uint)lVar2 >> 2 & 0x3ffffff | 0x94000000;
    *(undefined4 **)(param_1 + 0x408) = (undefined4 *)((long)puVar9 + 4);
  }
  return;
}


