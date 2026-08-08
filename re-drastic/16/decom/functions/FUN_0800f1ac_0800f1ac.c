/*
 * Ghidra decompilation
 *
 * Function : FUN_0800f1ac
 * Address  : 0800f1ac
 * Program  : drastic16
 */


uint FUN_0800f1ac(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  if (0xfffffff < param_2) {
    return 0xffff;
  }
  iVar2 = *(int *)(param_1 + 0x800000);
  iVar7 = (param_2 >> 0x17) * 0x30;
  iVar5 = iVar2 + iVar7;
  cVar1 = *(char *)(iVar5 + 0x2c);
  if (cVar1 == '\x01') {
    puVar4 = (ushort *)(**(code **)(iVar5 + 4))(*(undefined4 *)(param_1 + 0x800004));
    uVar3 = param_2 - (param_2 & 0x7ff);
    iVar7 = param_1 + (uVar3 >> 0x15) * 4;
    iVar2 = param_1 + (uVar3 >> 0x10) * 4;
    *(uint *)(iVar7 + 0x80400c) = *(uint *)(iVar7 + 0x80400c) | 1 << (uVar3 * 0x800 >> 0x1b);
    *(uint *)(iVar2 + 0x80000c) = *(uint *)(iVar2 + 0x80000c) | 1 << (uVar3 * 0x10000 >> 0x1b);
    *(uint *)(param_1 + (uVar3 >> 0xb) * 4) = (int)puVar4 - param_2 >> 2 | 0x40000000;
    return (uint)*puVar4;
  }
  if (cVar1 == '\0') {
    iVar6 = *(int *)(iVar5 + 4);
    uVar8 = param_2 & *(uint *)(iVar2 + iVar7);
    cVar1 = *(char *)(iVar5 + 0x2d);
    iVar2 = param_1 + (param_2 >> 0x15) * 4;
    iVar7 = param_1 + (param_2 >> 0x10) * 4;
    *(uint *)(iVar2 + 0x80400c) = *(uint *)(iVar2 + 0x80400c) | 1 << ((param_2 << 0xb) >> 0x1b);
    uVar3 = (iVar6 + (uVar8 & 0xfffff800)) - (param_2 & 0xfffff800) >> 2;
    if (cVar1 != '\0') {
      uVar3 = uVar3 | 0x40000000;
    }
    *(uint *)(iVar7 + 0x80000c) = *(uint *)(iVar7 + 0x80000c) | 1 << ((param_2 << 0x10) >> 0x1b);
    *(uint *)(param_1 + ((param_2 & 0xfffff80f) >> 9)) = uVar3;
    return (uint)*(ushort *)(iVar6 + uVar8);
  }
  if (cVar1 == '\x02') {
    uVar3 = (**(code **)(iVar5 + 8))
                      (*(undefined4 *)(param_1 + 0x800004),param_2 & *(uint *)(iVar2 + iVar7),
                       *(code **)(iVar5 + 8),0x800004,param_4);
    return uVar3;
  }
  return 0;
}


