/*
 * Ghidra decompilation
 *
 * Function : FUN_080b5f2c
 * Address  : 080b5f2c
 * Program  : drastic16
 */


uint FUN_080b5f2c(char *param_1,void *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint local_34;
  void *local_14;
  uint local_10;
  uint local_c;
  
  local_34 = param_3;
  if (param_1[0x42c5] != '\0') {
    local_34 = param_3 & 0xfffffff0;
  }
  local_c = 0;
  local_10 = 0;
  local_14 = param_2;
  while (local_34 != 0) {
    iVar4 = *(int *)(param_1 + 0x2c);
    if (*param_1 == '\0') {
      uVar2 = local_34;
      if ((int)(*(int *)(param_1 + 0x24) - (uint)(*(uint *)(param_1 + 0x20) < local_34)) < 0 !=
          (SBORROW4(*(int *)(param_1 + 0x24),(uint)(*(uint *)(param_1 + 0x20) < local_34)) != false)
         ) {
        uVar2 = *(uint *)(param_1 + 0x20);
      }
      if (uVar2 == 0) {
        return 0;
      }
      cVar1 = FUN_0809ee08(*(undefined4 *)(param_1 + 0x2c));
      if (cVar1 != '\x01') {
        return 0xffffffff;
      }
      local_c = (**(code **)(**(int **)(param_1 + 0x2c) + 8))
                          (*(undefined4 *)(param_1 + 0x2c),local_14,uVar2);
      if (*(int *)(param_1 + 0x38) == 0) {
        iVar3 = iVar4 + 0x8430;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x38);
      }
      if (*(char *)(iVar3 + 0x2089) != '\0') {
        FUN_080bdc38(param_1 + 0x2098,local_14,local_c);
      }
    }
    else {
      memcpy(param_2,*(void **)(param_1 + 8),*(size_t *)(param_1 + 4));
      local_c = *(uint *)(param_1 + 4);
      *(undefined4 *)(param_1 + 4) = 0;
    }
    uVar2 = *(uint *)(param_1 + 0x2078);
    *(uint *)(param_1 + 0x2078) = local_c + uVar2;
    *(uint *)(param_1 + 0x207c) =
         ((int)local_c >> 0x1f) + *(int *)(param_1 + 0x207c) + (uint)CARRY4(local_c,uVar2);
    local_10 = local_10 + local_c;
    local_14 = (void *)((int)local_14 + local_c);
    local_34 = local_34 - local_c;
    uVar2 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x20) = uVar2 - local_c;
    *(uint *)(param_1 + 0x24) =
         *(int *)(param_1 + 0x24) - (((int)local_c >> 0x1f) + (uint)(uVar2 < local_c));
    if (((*(uint *)(param_1 + 0x20) | *(uint *)(param_1 + 0x24)) != 0) || (param_1[0x2059] == '\0'))
    break;
    cVar1 = FUN_080c2c20(iVar4,param_1,1,*(undefined4 *)(param_1 + 0x2054));
    if (cVar1 != '\x01') {
      param_1[0x205a] = '\x01';
      return 0xffffffff;
    }
  }
  iVar4 = *(int *)(param_1 + 0x2c);
  if (iVar4 != 0) {
    FUN_080b64e4(param_1,*(undefined4 *)(param_1 + 0x2064),
                 *(uint *)(param_1 + 0x2078) + *(uint *)(iVar4 + 0x10e88),
                 *(int *)(param_1 + 0x207c) + *(int *)(iVar4 + 0x10e8c) +
                 (uint)CARRY4(*(uint *)(param_1 + 0x2078),*(uint *)(iVar4 + 0x10e88)),
                 *(undefined4 *)(param_1 + 0x2060),*(undefined4 *)(param_1 + 0x2064));
  }
  if ((local_c != 0xffffffff) && (local_c = local_10, param_1[0x42c5] != '\0')) {
    FUN_080b37fc(param_1 + 0x1048,param_2,local_10);
  }
  FUN_080b0edc();
  return local_c;
}


