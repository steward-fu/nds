/*
 * Ghidra decompilation
 *
 * Function : FUN_080101a4
 * Address  : 080101a4
 * Program  : drastic16
 */


int FUN_080101a4(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar6 = *(int *)(param_1 + (param_2 >> 0xb) * 4);
  iVar2 = iVar6 << 2;
  if (iVar2 != 0) {
    return *(int *)(param_2 + iVar6 * 4);
  }
  if (0xfffffff < param_2) {
    return -1;
  }
  iVar7 = *(int *)(param_1 + 0x800000);
  iVar6 = (param_2 >> 0x17) * 0x30;
  iVar5 = iVar7 + iVar6;
  cVar1 = *(char *)(iVar5 + 0x2c);
  if (cVar1 == '\x01') {
    piVar4 = (int *)(**(code **)(iVar5 + 4))(*(undefined4 *)(param_1 + 0x800004));
    uVar3 = param_2 - (param_2 & 0x7ff);
    iVar2 = param_1 + (uVar3 >> 0x15) * 4;
    iVar6 = param_1 + (uVar3 >> 0x10) * 4;
    *(uint *)(iVar2 + 0x80400c) = *(uint *)(iVar2 + 0x80400c) | 1 << (uVar3 * 0x800 >> 0x1b);
    *(uint *)(iVar6 + 0x80000c) = *(uint *)(iVar6 + 0x80000c) | 1 << (uVar3 * 0x10000 >> 0x1b);
    *(uint *)(param_1 + (uVar3 >> 0xb) * 4) = (int)piVar4 - param_2 >> 2 | 0x40000000;
    return *piVar4;
  }
  if (cVar1 != '\0') {
    if (cVar1 == '\x02') {
      iVar2 = (**(code **)(iVar5 + 0xc))
                        (*(undefined4 *)(param_1 + 0x800004),param_2 & *(uint *)(iVar7 + iVar6),
                         *(code **)(iVar5 + 0xc),0x800004,param_4);
      return iVar2;
    }
    return iVar2;
  }
  iVar2 = *(int *)(iVar5 + 4);
  uVar8 = param_2 & *(uint *)(iVar7 + iVar6);
  cVar1 = *(char *)(iVar5 + 0x2d);
  iVar5 = param_1 + (param_2 >> 0x15) * 4;
  iVar6 = param_1 + (param_2 >> 0x10) * 4;
  *(uint *)(iVar5 + 0x80400c) = *(uint *)(iVar5 + 0x80400c) | 1 << ((param_2 << 0xb) >> 0x1b);
  uVar3 = (iVar2 + (uVar8 & 0xfffff800)) - (param_2 & 0xfffff800) >> 2;
  if (cVar1 != '\0') {
    uVar3 = uVar3 | 0x40000000;
  }
  *(uint *)(iVar6 + 0x80000c) = *(uint *)(iVar6 + 0x80000c) | 1 << ((param_2 << 0x10) >> 0x1b);
  *(uint *)(param_1 + ((param_2 & 0xfffff80f) >> 9)) = uVar3;
  return *(int *)(iVar2 + uVar8);
}


