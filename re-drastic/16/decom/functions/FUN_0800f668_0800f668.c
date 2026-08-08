/*
 * Ghidra decompilation
 *
 * Function : FUN_0800f668
 * Address  : 0800f668
 * Program  : drastic16
 */


void FUN_0800f668(int param_1,uint param_2,undefined param_3)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if (param_2 < 0x10000000) {
    iVar7 = *(int *)(param_1 + 0x800000);
    iVar6 = (param_2 >> 0x17) * 0x30;
    iVar4 = iVar7 + iVar6;
    cVar1 = *(char *)(iVar4 + 0x2d);
    if (cVar1 == '\x01') {
      puVar2 = (undefined *)(**(code **)(iVar4 + 0x10))(*(undefined4 *)(param_1 + 0x800004));
      if (*(char *)(iVar4 + 0x2c) == *(char *)(iVar4 + 0x2d)) {
        uVar5 = param_2 - (param_2 & 0x7ff);
        iVar4 = param_1 + (uVar5 >> 0x15) * 4;
        iVar6 = param_1 + (uVar5 >> 0x10) * 4;
        *(uint *)(iVar4 + 0x80400c) = *(uint *)(iVar4 + 0x80400c) | 1 << (uVar5 * 0x800 >> 0x1b);
        *(uint *)(iVar6 + 0x80000c) = *(uint *)(iVar6 + 0x80000c) | 1 << (uVar5 * 0x10000 >> 0x1b);
        *(uint *)(param_1 + (uVar5 >> 0xb) * 4) = (uint)(puVar2 + (-uVar5 - (param_2 & 0x7ff))) >> 2
        ;
      }
      *puVar2 = param_3;
      return;
    }
    if (cVar1 == '\0') {
      iVar3 = *(int *)(iVar4 + 0x10);
      if (*(char *)(iVar4 + 0x2c) == '\0') {
        uVar5 = *(uint *)(iVar7 + iVar6);
        iVar6 = param_1 + (param_2 >> 0x15) * 4;
        iVar4 = param_1 + (param_2 >> 0x10) * 4;
        *(uint *)(iVar6 + 0x80400c) = *(uint *)(iVar6 + 0x80400c) | 1 << ((param_2 << 0xb) >> 0x1b);
        *(uint *)(iVar4 + 0x80000c) = *(uint *)(iVar4 + 0x80000c) | 1 << ((param_2 << 0x10) >> 0x1b)
        ;
        *(uint *)(param_1 + ((param_2 & 0xfffff80f) >> 9)) =
             (iVar3 + (uVar5 & 0xfffff800 & param_2)) - (param_2 & 0xfffff800) >> 2;
      }
      else {
        uVar5 = *(uint *)(iVar7 + iVar6);
      }
      *(undefined *)(iVar3 + (uVar5 & param_2)) = param_3;
      return;
    }
    if (cVar1 == '\x02') {
      (**(code **)(iVar4 + 0x10))
                (*(undefined4 *)(param_1 + 0x800004),param_2 & *(uint *)(iVar7 + iVar6));
    }
  }
  return;
}


