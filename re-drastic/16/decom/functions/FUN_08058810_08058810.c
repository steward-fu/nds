/*
 * Ghidra decompilation
 *
 * Function : FUN_08058810
 * Address  : 08058810
 * Program  : drastic16
 */


uint FUN_08058810(int param_1)

{
  void *__ptr;
  int iVar1;
  int iVar2;
  int iVar3;
  void *__ptr_00;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = *(uint *)(param_1 + 0x4010) ^ *(uint *)(param_1 + 0x4014) | *(uint *)(param_1 + 0x4008);
  *(uint *)(param_1 + 0x4014) = *(uint *)(param_1 + 0x4010);
  uVar7 = *(uint *)(param_1 + 0x4018) ^ *(uint *)(param_1 + 0x401c) | *(uint *)(param_1 + 0x400c);
  *(uint *)(param_1 + 0x401c) = *(uint *)(param_1 + 0x4018);
  uVar6 = uVar7 | uVar5;
  if (uVar6 != 0) {
    if (*(void **)(param_1 + 0x4004) == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      __ptr_00 = *(void **)(param_1 + 0x4004);
      do {
        pvVar4 = *(void **)((int)__ptr_00 + 0x1c);
        if (((uVar5 & *(uint *)((int)__ptr_00 + 4)) != 0) ||
           ((uVar7 & *(uint *)((int)__ptr_00 + 8)) != 0)) {
          if (*(char *)((int)__ptr_00 + 0x2c) == '\0') {
            *(undefined *)((int)__ptr_00 + 0x2c) = 1;
          }
          else {
            iVar1 = *(int *)((int)__ptr_00 + 0x18);
            iVar3 = *(int *)((int)__ptr_00 + 0x14);
            iVar2 = *(int *)((int)__ptr_00 + 0x20);
            if (iVar1 == 0) {
              *(int *)(param_1 + (uint)*(ushort *)((int)__ptr_00 + 0x28) * 4 + 4) = iVar3;
            }
            else {
              *(int *)(iVar1 + 0x14) = iVar3;
            }
            __ptr = *(void **)((int)__ptr_00 + 0xc);
            if (iVar3 != 0) {
              *(int *)(iVar3 + 0x18) = iVar1;
            }
            if (iVar2 == 0) {
              *(void **)(param_1 + 0x4004) = pvVar4;
            }
            else {
              *(void **)(iVar2 + 0x1c) = pvVar4;
            }
            if (pvVar4 != (void *)0x0) {
              *(int *)((int)pvVar4 + 0x20) = iVar2;
            }
            free(__ptr);
            if (*(void **)((int)__ptr_00 + 0x10) != (void *)0x0) {
              free(*(void **)((int)__ptr_00 + 0x10));
            }
            uVar6 = uVar6 + 1;
            free(__ptr_00);
          }
        }
        __ptr_00 = pvVar4;
      } while (pvVar4 != (void *)0x0);
    }
    *(undefined4 *)(param_1 + 0x4008) = 0;
    *(undefined4 *)(param_1 + 0x400c) = 0;
  }
  return uVar6;
}


