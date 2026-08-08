/*
 * Ghidra decompilation
 *
 * Function : FUN_08010714
 * Address  : 08010714
 * Program  : drastic16
 */


void FUN_08010714(int param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = *(uint *)(param_1 + (param_2 >> 0xb) * 4);
  if ((uVar7 & 0x40000000) == 0) {
    *(undefined4 *)(param_2 + uVar7 * 4) = param_3;
    return;
  }
  if (0xfffffff < param_2) {
    return;
  }
  iVar6 = *(int *)(param_1 + 0x800000);
  iVar5 = (param_2 >> 0x17) * 0x30;
  iVar4 = iVar6 + iVar5;
  cVar1 = *(char *)(iVar4 + 0x2d);
  if (cVar1 == '\x01') {
    puVar2 = (undefined4 *)(**(code **)(iVar4 + 0x10))(*(undefined4 *)(param_1 + 0x800004));
    if (*(char *)(iVar4 + 0x2c) == *(char *)(iVar4 + 0x2d)) {
      uVar7 = param_2 - (param_2 & 0x7ff);
      iVar4 = param_1 + (uVar7 >> 0x15) * 4;
      iVar5 = param_1 + (uVar7 >> 0x10) * 4;
      *(uint *)(iVar4 + 0x80400c) = *(uint *)(iVar4 + 0x80400c) | 1 << (uVar7 * 0x800 >> 0x1b);
      *(uint *)(iVar5 + 0x80000c) = *(uint *)(iVar5 + 0x80000c) | 1 << (uVar7 * 0x10000 >> 0x1b);
      *(uint *)(param_1 + (uVar7 >> 0xb) * 4) = (int)puVar2 + (-uVar7 - (param_2 & 0x7ff)) >> 2;
    }
    *puVar2 = param_3;
    return;
  }
  if (cVar1 != '\0') {
    if (cVar1 == '\x02') {
      (**(code **)(iVar4 + 0x18))
                (*(undefined4 *)(param_1 + 0x800004),param_2 & *(uint *)(iVar6 + iVar5));
    }
    return;
  }
  iVar3 = *(int *)(iVar4 + 0x10);
  if (*(char *)(iVar4 + 0x2c) == '\0') {
    uVar7 = *(uint *)(iVar6 + iVar5);
    iVar5 = param_1 + (param_2 >> 0x15) * 4;
    iVar4 = param_1 + (param_2 >> 0x10) * 4;
    *(uint *)(iVar5 + 0x80400c) = *(uint *)(iVar5 + 0x80400c) | 1 << ((param_2 << 0xb) >> 0x1b);
    *(uint *)(iVar4 + 0x80000c) = *(uint *)(iVar4 + 0x80000c) | 1 << ((param_2 << 0x10) >> 0x1b);
    *(uint *)(param_1 + ((param_2 & 0xfffff80f) >> 9)) =
         (iVar3 + (uVar7 & 0xfffff800 & param_2)) - (param_2 & 0xfffff800) >> 2;
  }
  else {
    uVar7 = *(uint *)(iVar6 + iVar5);
  }
  *(undefined4 *)(iVar3 + (uVar7 & param_2)) = param_3;
  return;
}


