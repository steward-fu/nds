/*
 * Ghidra decompilation
 *
 * Function : FUN_0801001c
 * Address  : 0801001c
 * Program  : drastic16
 */


uint FUN_0801001c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar6 = *(int *)(param_1 + (param_2 >> 0xb) * 4) * 4;
  if (iVar6 != 0) {
    return (uint)*(ushort *)(iVar6 + param_2);
  }
  if (0xfffffff < param_2) {
    return 0xffff;
  }
  iVar7 = *(int *)(param_1 + 0x800000);
  iVar6 = (param_2 >> 0x17) * 0x30;
  iVar4 = iVar7 + iVar6;
  cVar1 = *(char *)(iVar4 + 0x2c);
  if (cVar1 == '\x01') {
    puVar3 = (ushort *)(**(code **)(iVar4 + 4))(*(undefined4 *)(param_1 + 0x800004));
    uVar2 = param_2 - (param_2 & 0x7ff);
    iVar6 = param_1 + (uVar2 >> 0x15) * 4;
    iVar4 = param_1 + (uVar2 >> 0x10) * 4;
    *(uint *)(iVar6 + 0x80400c) = *(uint *)(iVar6 + 0x80400c) | 1 << (uVar2 * 0x800 >> 0x1b);
    *(uint *)(iVar4 + 0x80000c) = *(uint *)(iVar4 + 0x80000c) | 1 << (uVar2 * 0x10000 >> 0x1b);
    *(uint *)(param_1 + (uVar2 >> 0xb) * 4) = (int)puVar3 - param_2 >> 2 | 0x40000000;
    return (uint)*puVar3;
  }
  if (cVar1 != '\0') {
    if (cVar1 == '\x02') {
      uVar2 = (**(code **)(iVar4 + 8))
                        (*(undefined4 *)(param_1 + 0x800004),param_2 & *(uint *)(iVar7 + iVar6),
                         *(code **)(iVar4 + 8),0x800004,param_4);
      return uVar2;
    }
    return 0;
  }
  iVar5 = *(int *)(iVar4 + 4);
  uVar8 = param_2 & *(uint *)(iVar7 + iVar6);
  cVar1 = *(char *)(iVar4 + 0x2d);
  iVar4 = param_1 + (param_2 >> 0x15) * 4;
  iVar6 = param_1 + (param_2 >> 0x10) * 4;
  *(uint *)(iVar4 + 0x80400c) = *(uint *)(iVar4 + 0x80400c) | 1 << ((param_2 << 0xb) >> 0x1b);
  uVar2 = (iVar5 + (uVar8 & 0xfffff800)) - (param_2 & 0xfffff800) >> 2;
  if (cVar1 != '\0') {
    uVar2 = uVar2 | 0x40000000;
  }
  *(uint *)(iVar6 + 0x80000c) = *(uint *)(iVar6 + 0x80000c) | 1 << ((param_2 << 0x10) >> 0x1b);
  *(uint *)(param_1 + ((param_2 & 0xfffff80f) >> 9)) = uVar2;
  return (uint)*(ushort *)(iVar5 + uVar8);
}


