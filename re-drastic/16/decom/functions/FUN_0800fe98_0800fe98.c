/*
 * Ghidra decompilation
 *
 * Function : FUN_0800fe98
 * Address  : 0800fe98
 * Program  : drastic16
 */


uint FUN_0800fe98(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar4 = *(int *)(param_1 + (param_2 >> 0xb) * 4);
  uVar3 = iVar4 << 2;
  if (uVar3 != 0) {
    return (uint)*(byte *)(param_2 + iVar4 * 4);
  }
  if (0xfffffff < param_2) {
    return 0xff;
  }
  iVar7 = *(int *)(param_1 + 0x800000);
  iVar4 = (param_2 >> 0x17) * 0x30;
  iVar5 = iVar7 + iVar4;
  cVar1 = *(char *)(iVar5 + 0x2c);
  if (cVar1 == '\x01') {
    pbVar2 = (byte *)(**(code **)(iVar5 + 4))(*(undefined4 *)(param_1 + 0x800004));
    uVar3 = param_2 - (param_2 & 0x7ff);
    iVar4 = param_1 + (uVar3 >> 0x15) * 4;
    iVar5 = param_1 + (uVar3 >> 0x10) * 4;
    *(uint *)(iVar4 + 0x80400c) = *(uint *)(iVar4 + 0x80400c) | 1 << (uVar3 * 0x800 >> 0x1b);
    *(uint *)(iVar5 + 0x80000c) = *(uint *)(iVar5 + 0x80000c) | 1 << (uVar3 * 0x10000 >> 0x1b);
    *(uint *)(param_1 + (uVar3 >> 0xb) * 4) = (int)pbVar2 - param_2 >> 2 | 0x40000000;
    return (uint)*pbVar2;
  }
  if (cVar1 != '\0') {
    if (cVar1 != '\x02') {
      return uVar3;
    }
    uVar3 = (**(code **)(iVar5 + 4))
                      (*(undefined4 *)(param_1 + 0x800004),param_2 & *(uint *)(iVar7 + iVar4),
                       0x800004,*(code **)(iVar5 + 4),param_4);
    return uVar3;
  }
  iVar6 = *(int *)(iVar5 + 4);
  uVar8 = param_2 & *(uint *)(iVar7 + iVar4);
  cVar1 = *(char *)(iVar5 + 0x2d);
  iVar5 = param_1 + (param_2 >> 0x15) * 4;
  iVar4 = param_1 + (param_2 >> 0x10) * 4;
  *(uint *)(iVar5 + 0x80400c) = *(uint *)(iVar5 + 0x80400c) | 1 << ((param_2 << 0xb) >> 0x1b);
  uVar3 = (iVar6 + (uVar8 & 0xfffff800)) - (param_2 & 0xfffff800) >> 2;
  if (cVar1 != '\0') {
    uVar3 = uVar3 | 0x40000000;
  }
  *(uint *)(iVar4 + 0x80000c) = *(uint *)(iVar4 + 0x80000c) | 1 << ((param_2 << 0x10) >> 0x1b);
  *(uint *)(param_1 + ((param_2 & 0xfffff80f) >> 9)) = uVar3;
  return (uint)*(byte *)(iVar6 + uVar8);
}


