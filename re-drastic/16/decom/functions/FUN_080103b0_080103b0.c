/*
 * Ghidra decompilation
 *
 * Function : FUN_080103b0
 * Address  : 080103b0
 * Program  : drastic16
 */


void FUN_080103b0(int param_1,uint param_2,undefined param_3)

{
  char cVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar3 = *(uint *)(param_1 + (param_2 >> 0xb) * 4);
  if ((uVar3 & 0x40000000) == 0) {
    *(undefined *)(param_2 + uVar3 * 4) = param_3;
  }
  else if (param_2 < 0x10000000) {
    iVar7 = *(int *)(param_1 + 0x800000);
    iVar6 = (param_2 >> 0x17) * 0x30;
    iVar5 = iVar7 + iVar6;
    cVar1 = *(char *)(iVar5 + 0x2d);
    if (cVar1 == '\x01') {
      puVar2 = (undefined *)(**(code **)(iVar5 + 0x10))(*(undefined4 *)(param_1 + 0x800004));
      if (*(char *)(iVar5 + 0x2c) == *(char *)(iVar5 + 0x2d)) {
        uVar3 = param_2 - (param_2 & 0x7ff);
        iVar5 = param_1 + (uVar3 >> 0x15) * 4;
        iVar6 = param_1 + (uVar3 >> 0x10) * 4;
        *(uint *)(iVar5 + 0x80400c) = *(uint *)(iVar5 + 0x80400c) | 1 << (uVar3 * 0x800 >> 0x1b);
        *(uint *)(iVar6 + 0x80000c) = *(uint *)(iVar6 + 0x80000c) | 1 << (uVar3 * 0x10000 >> 0x1b);
        *(uint *)(param_1 + (uVar3 >> 0xb) * 4) = (uint)(puVar2 + (-uVar3 - (param_2 & 0x7ff))) >> 2
        ;
      }
      *puVar2 = param_3;
    }
    else if (cVar1 == '\0') {
      iVar4 = *(int *)(iVar5 + 0x10);
      if (*(char *)(iVar5 + 0x2c) == '\0') {
        uVar3 = *(uint *)(iVar7 + iVar6);
        iVar6 = param_1 + (param_2 >> 0x15) * 4;
        iVar5 = param_1 + (param_2 >> 0x10) * 4;
        *(uint *)(iVar6 + 0x80400c) = *(uint *)(iVar6 + 0x80400c) | 1 << ((param_2 << 0xb) >> 0x1b);
        *(uint *)(iVar5 + 0x80000c) = *(uint *)(iVar5 + 0x80000c) | 1 << ((param_2 << 0x10) >> 0x1b)
        ;
        *(uint *)(param_1 + ((param_2 & 0xfffff80f) >> 9)) =
             (iVar4 + (uVar3 & 0xfffff800 & param_2)) - (param_2 & 0xfffff800) >> 2;
      }
      else {
        uVar3 = *(uint *)(iVar7 + iVar6);
      }
      *(undefined *)(iVar4 + (uVar3 & param_2)) = param_3;
    }
    else if (cVar1 == '\x02') {
      (**(code **)(iVar5 + 0x10))
                (*(undefined4 *)(param_1 + 0x800004),param_2 & *(uint *)(iVar7 + iVar6));
    }
  }
  return;
}


