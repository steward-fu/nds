/*
 * Ghidra decompilation
 *
 * Function : FUN_080cdef0
 * Address  : 080cdef0
 * Program  : drastic16
 */


void FUN_080cdef0(int param_1,undefined param_2)

{
  char cVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined auStack_50 [24];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  char local_9;
  
  *(undefined *)(param_1 + 0x4c58) = 1;
  if (*(char *)(param_1 + 0x4c48) != '\x01') {
    FUN_080d1b7c(param_1,param_2);
    cVar1 = FUN_080ceb2c(param_1);
    if (cVar1 != '\x01') {
      return;
    }
    cVar1 = FUN_080d04e8(param_1,param_1 + 4,param_1 + 0x80);
    if ((cVar1 == '\x01') &&
       (cVar1 = FUN_080d0760(param_1,param_1 + 4,param_1 + 0x80,param_1 + 0x94), cVar1 == '\x01')) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      return;
    }
  }
LAB_080cdfe4:
  do {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & *(uint *)(param_1 + 0xe6f8);
    if (*(int *)(param_1 + 0x7c) <= *(int *)(param_1 + 4)) {
      local_9 = '\0';
      while( true ) {
        if ((*(int *)(param_1 + 4) <= *(int *)(param_1 + 0x88) + *(int *)(param_1 + 0x80) + -1) &&
           ((*(int *)(param_1 + 4) != *(int *)(param_1 + 0x88) + *(int *)(param_1 + 0x80) + -1 ||
            (*(int *)(param_1 + 8) < *(int *)(param_1 + 0x84))))) goto LAB_080ce12c;
        if (*(char *)(param_1 + 0x90) != '\0') break;
        cVar1 = FUN_080d04e8(param_1,param_1 + 4,param_1 + 0x80);
        if ((cVar1 == '\x01') &&
           (cVar1 = FUN_080d0760(param_1,param_1 + 4,param_1 + 0x80,param_1 + 0x94), cVar1 == '\x01'
           )) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          return;
        }
      }
      local_9 = '\x01';
LAB_080ce12c:
      if ((local_9 == '\0') && (cVar1 = FUN_080ceb2c(param_1), cVar1 == '\x01')) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) goto LAB_080ce7c8;
    }
    if (((*(int *)(param_1 + 0x4b30) - *(int *)(param_1 + 0x70) & *(uint *)(param_1 + 0xe6f8)) <
         0x1004) && (*(int *)(param_1 + 0x4b30) != *(int *)(param_1 + 0x70))) {
      FUN_080cece4(param_1);
      iVar5 = *(int *)(param_1 + 0x4c54);
      iVar4 = *(int *)(param_1 + 0x4c44);
      bVar6 = *(uint *)(param_1 + 0x4c40) < *(uint *)(param_1 + 0x4c50);
      if ((int)(iVar4 - (iVar5 + (uint)bVar6)) < 0 !=
          (SBORROW4(iVar4,iVar5) != SBORROW4(iVar4 - iVar5,(uint)bVar6))) {
        return;
      }
      if (*(char *)(param_1 + 0x4c48) != '\0') {
        *(undefined *)(param_1 + 0x4c58) = 0;
        return;
      }
    }
    local_20 = FUN_080d4ef0(param_1,param_1 + 4,param_1 + 0x94);
    if (local_20 < 0x100) {
      if (*(char *)(param_1 + 0x4c38) == '\0') {
        iVar4 = *(int *)(param_1 + 0x70);
        *(int *)(param_1 + 0x70) = iVar4 + 1;
        *(char *)(*(int *)(param_1 + 0x4b34) + iVar4) = (char)local_20;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x70);
        *(int *)(param_1 + 0x70) = iVar4 + 1;
        puVar2 = (undefined *)FUN_080d0f84(param_1 + 0x4b38,iVar4);
        *puVar2 = (char)local_20;
      }
      goto LAB_080cdfe4;
    }
    if (local_20 < 0x106) {
      if (local_20 == 0x100) {
        cVar1 = FUN_080ce88c(param_1,param_1 + 4,auStack_50);
        if ((cVar1 == '\x01') && (cVar1 = FUN_080cea1c(param_1,auStack_50), cVar1 == '\x01')) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
LAB_080ce7c8:
          FUN_080cece4(param_1);
          return;
        }
      }
      else if (local_20 == 0x101) {
        if (*(int *)(param_1 + 0x68) != 0) {
          if (*(char *)(param_1 + 0x4c38) == '\0') {
            FUN_080d4be0(param_1,*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x54));
          }
          else {
            FUN_080d104c(param_1 + 0x4b38,*(undefined4 *)(param_1 + 0x68),
                         *(undefined4 *)(param_1 + 0x54),param_1 + 0x70,
                         *(undefined4 *)(param_1 + 0xe6f8));
          }
        }
      }
      else if (local_20 < 0x106) {
        local_30 = *(undefined4 *)(param_1 + (local_20 - 0xee) * 4 + 4);
        local_2c = local_20 - 0x102;
        for (local_1c = local_2c; local_1c != 0; local_1c = local_1c + -1) {
          *(undefined4 *)(param_1 + (local_1c + 0x14) * 4 + 4) =
               *(undefined4 *)(param_1 + (local_1c + 0x13) * 4 + 4);
        }
        *(undefined4 *)(param_1 + 0x54) = local_30;
        local_34 = FUN_080d4ef0(param_1,param_1 + 4,param_1 + 0x2d58);
        local_38 = FUN_080d50c8(param_1,param_1 + 4,local_34);
        *(undefined4 *)(param_1 + 0x68) = local_38;
        if (*(char *)(param_1 + 0x4c38) == '\0') {
          FUN_080d4be0(param_1,local_38,local_30);
        }
        else {
          FUN_080d104c(param_1 + 0x4b38,local_38,local_30,param_1 + 0x70,
                       *(undefined4 *)(param_1 + 0xe6f8));
        }
      }
    }
    else {
      local_10 = FUN_080d50c8(param_1,param_1 + 4,local_20 - 0x106);
      local_18 = 1;
      local_24 = FUN_080d4ef0(param_1,param_1 + 4,param_1 + 0xf80);
      if (local_24 < 4) {
        local_14 = 0;
        uVar3 = local_24;
      }
      else {
        local_14 = (local_24 >> 1) - 1;
        uVar3 = (local_24 & 1 | 2) << (local_14 & 0xff);
      }
      local_18 = local_18 + uVar3;
      if (local_14 != 0) {
        if (local_14 < 4) {
          uVar3 = FUN_080d2350(param_1 + 4);
          local_18 = local_18 + (uVar3 >> (0x20 - local_14 & 0xff));
          FUN_080d2234(param_1 + 4,local_14);
        }
        else {
          if (4 < local_14) {
            uVar3 = FUN_080d2350(param_1 + 4);
            local_18 = local_18 + (uVar3 >> (0x24 - local_14 & 0xff)) * 0x10;
            FUN_080d2234(param_1 + 4,local_14 - 4);
          }
          local_28 = FUN_080d4ef0(param_1,param_1 + 4,param_1 + 0x1e6c);
          local_18 = local_18 + local_28;
        }
      }
      iVar4 = local_10;
      if (((0x100 < local_18) && (iVar4 = local_10 + 1, 0x2000 < local_18)) &&
         (iVar4 = local_10 + 2, 0x40000 < local_18)) {
        iVar4 = local_10 + 3;
      }
      local_10 = iVar4;
      FUN_080d4b84(param_1,local_18);
      *(int *)(param_1 + 0x68) = local_10;
      if (*(char *)(param_1 + 0x4c38) == '\0') {
        FUN_080d4be0(param_1,local_10,local_18);
      }
      else {
        FUN_080d104c(param_1 + 0x4b38,local_10,local_18,param_1 + 0x70,
                     *(undefined4 *)(param_1 + 0xe6f8));
      }
    }
  } while( true );
}


