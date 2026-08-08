/*
 * Ghidra decompilation
 *
 * Function : FUN_080c55ac
 * Address  : 080c55ac
 * Program  : drastic16
 */


uint FUN_080c55ac(int param_1)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  
  if ((*(uint *)(param_1 + 0x644) <= *(uint *)(param_1 + 0x4bdc)) ||
     (*(uint *)(param_1 + 0x4be4) < *(uint *)(param_1 + 0x644))) {
    return 0xffffffff;
  }
  if (**(short **)(param_1 + 0x644) == 1) {
    FUN_080d3efc(*(undefined4 *)(param_1 + 0x644),param_1);
  }
  else {
    if (*(uint *)(*(int *)(param_1 + 0x644) + 4) <= *(uint *)(param_1 + 0x4bdc)) {
      return 0xffffffff;
    }
    if (*(uint *)(param_1 + 0x4be4) < *(uint *)(*(int *)(param_1 + 0x644) + 4)) {
      return 0xffffffff;
    }
    cVar3 = FUN_080d4280(*(undefined4 *)(param_1 + 0x644),param_1);
    if (cVar3 != '\x01') {
      return 0xffffffff;
    }
  }
  FUN_080d29c4(param_1 + 0x4a70);
LAB_080c5878:
  if (*(int *)(param_1 + 0x650) == 0) {
    do {
      if ((*(uint *)(param_1 + 0x4a70) ^ *(int *)(param_1 + 0x4a70) + *(int *)(param_1 + 0x4a78)) <
          0x1000000) {
LAB_080c5794:
        bVar2 = true;
      }
      else {
        if (*(uint *)(param_1 + 0x4a78) < 0x8000) {
          *(uint *)(param_1 + 0x4a78) = -*(int *)(param_1 + 0x4a70) & 0x7fff;
          goto LAB_080c5794;
        }
        bVar2 = false;
      }
      if (!bVar2) goto LAB_080c57a8;
      iVar5 = *(int *)(param_1 + 0x4a74);
      uVar4 = FUN_080d2860(*(undefined4 *)(param_1 + 0x4a88));
      *(uint *)(param_1 + 0x4a74) = iVar5 << 8 | uVar4;
      *(int *)(param_1 + 0x4a78) = *(int *)(param_1 + 0x4a78) << 8;
      *(int *)(param_1 + 0x4a70) = *(int *)(param_1 + 0x4a70) << 8;
    } while( true );
  }
  bVar1 = **(byte **)(param_1 + 0x650);
  if ((*(int *)(param_1 + 0x65c) == 0) &&
     (*(uint *)(param_1 + 0x4bdc) < *(uint *)(*(int *)(param_1 + 0x650) + 2))) {
    *(undefined4 *)(param_1 + 0x64c) = *(undefined4 *)(*(int *)(param_1 + 0x650) + 2);
    *(undefined4 *)(param_1 + 0x644) = *(undefined4 *)(param_1 + 0x64c);
  }
  else {
    FUN_080d3740(param_1);
    if (*(char *)(param_1 + 0xa6c) == '\0') {
      FUN_080d4b44(param_1);
    }
  }
  do {
    if ((*(uint *)(param_1 + 0x4a70) ^ *(int *)(param_1 + 0x4a70) + *(int *)(param_1 + 0x4a78)) <
        0x1000000) {
LAB_080c59ec:
      bVar2 = true;
    }
    else {
      if (*(uint *)(param_1 + 0x4a78) < 0x8000) {
        *(uint *)(param_1 + 0x4a78) = -*(int *)(param_1 + 0x4a70) & 0x7fff;
        goto LAB_080c59ec;
      }
      bVar2 = false;
    }
    if (!bVar2) {
      return (uint)bVar1;
    }
    iVar5 = *(int *)(param_1 + 0x4a74);
    uVar4 = FUN_080d2860(*(undefined4 *)(param_1 + 0x4a88));
    *(uint *)(param_1 + 0x4a74) = iVar5 << 8 | uVar4;
    *(int *)(param_1 + 0x4a78) = *(int *)(param_1 + 0x4a78) << 8;
    *(int *)(param_1 + 0x4a70) = *(int *)(param_1 + 0x4a70) << 8;
  } while( true );
LAB_080c57a8:
  do {
    *(int *)(param_1 + 0x65c) = *(int *)(param_1 + 0x65c) + 1;
    *(undefined4 *)(param_1 + 0x644) = *(undefined4 *)(*(int *)(param_1 + 0x644) + 8);
    if ((*(uint *)(param_1 + 0x644) <= *(uint *)(param_1 + 0x4bdc)) ||
       (*(uint *)(param_1 + 0x4be4) < *(uint *)(param_1 + 0x644))) {
      return 0xffffffff;
    }
  } while ((uint)**(ushort **)(param_1 + 0x644) == *(uint *)(param_1 + 0x654));
  cVar3 = FUN_080d4810(*(undefined4 *)(param_1 + 0x644),param_1);
  if (cVar3 != '\x01') {
    return 0xffffffff;
  }
  FUN_080d29c4(param_1 + 0x4a70);
  goto LAB_080c5878;
}


