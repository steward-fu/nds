/*
 * Ghidra decompilation
 *
 * Function : queue_geometry_command_packed
 * Address  : 00162b10
 * Program  : drastic64
 */


void queue_geometry_command_packed(long param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  cVar3 = *(char *)(param_1 + 0x9ac1);
  if (cVar3 != '\0') {
    puVar7 = *(uint **)(param_1 + 0x9a80) + 1;
    **(uint **)(param_1 + 0x9a80) = (uint)param_2;
    *(uint **)(param_1 + 0x9a80) = puVar7;
    if (cVar3 == '\x01') {
      *(long *)(param_1 + 0x9a68) = *(long *)(param_1 + 0x9a78);
      *(uint **)(param_1 + 0x9a70) = puVar7;
      if (0x400 < *(long *)(param_1 + 0x9a78) - (param_1 + 0x79b00)) {
        process_geometry();
      }
    }
    *(char *)(param_1 + 0x9ac1) = cVar3 + -1;
    return;
  }
  uVar8 = param_2 >> 0x18 & 0x7f;
  uVar2 = (uint)param_2 & 0x7f;
  uVar9 = param_2 >> 8 & 0x7f;
  uVar6 = param_2 >> 0x10 & 0x7f;
  iVar1 = (uint)(byte)geometry_command_parameters[uVar9] +
          (uint)(byte)geometry_command_parameters[uVar6] +
          (uint)(byte)geometry_command_parameters[uVar8] +
          (uint)(byte)geometry_command_parameters[uVar2];
  puVar4 = *(undefined **)(param_1 + 0x9a68);
  puVar5 = puVar4;
  if ((param_2 & 0x7f) != 0) {
    puVar5 = puVar4 + 1;
    *puVar4 = (char)uVar2;
  }
  puVar4 = puVar5;
  if ((int)uVar9 != 0) {
    puVar4 = puVar5 + 1;
    *puVar5 = (char)uVar9;
  }
  puVar5 = puVar4;
  if ((int)uVar6 != 0) {
    puVar5 = puVar4 + 1;
    *puVar4 = (char)uVar6;
  }
  puVar4 = puVar5;
  if ((int)uVar8 != 0) {
    puVar4 = puVar5 + 1;
    *puVar5 = (char)uVar8;
  }
  *(undefined **)(param_1 + 0x9a78) = puVar4;
  if (iVar1 == 0) {
    *(undefined **)(param_1 + 0x9a68) = puVar4;
    if (0x400 < (long)puVar4 - (param_1 + 0x79b00)) {
      process_geometry(param_1);
      return;
    }
  }
  else {
    *(char *)(param_1 + 0x9ac1) = (char)iVar1;
  }
  return;
}


