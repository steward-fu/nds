/*
 * Ghidra decompilation
 *
 * Function : FUN_0805c830
 * Address  : 0805c830
 * Program  : drastic16
 */


uint FUN_0805c830(int param_1,byte param_2)

{
  char cVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = *(ushort *)(param_1 + 0x440);
  if ((uVar2 & 0x8000) == 0) {
    return uVar2 & 0x8000;
  }
  uVar5 = ((uint)uVar2 << 0x16) >> 0x1e;
  if (uVar5 == 1) {
    uVar5 = FUN_0805d3d0();
    if ((uVar2 & 0x800) != 0) {
      return uVar5;
    }
    FUN_0805d7b8(param_1);
    return uVar5;
  }
  if (uVar5 == 0) {
    if (*(char *)(param_1 + 0x432) == '\0') {
      *(byte *)(param_1 + 0x433) = param_2;
      *(undefined *)(param_1 + 0x432) = 1;
      uVar5 = 0;
    }
    else {
      uVar5 = *(byte *)(param_1 + 0x433) & 0x7f;
      iVar4 = param_1 + uVar5;
      bVar3 = *(byte *)(param_1 + 0x433) >> 7 ^ 1;
      if (uVar5 == 1) {
        bVar3 = 0;
      }
      uVar5 = (uint)*(byte *)(iVar4 + 0x434);
      if (bVar3 != 0) {
        *(byte *)(iVar4 + 0x434) = param_2;
      }
      *(undefined *)(param_1 + 0x432) = 0;
    }
    if ((uVar2 & 0x800) == 0) {
      *(undefined *)(param_1 + 0x432) = 0;
    }
    return uVar5;
  }
  if (uVar5 != 2) {
    return 0;
  }
  bVar3 = *(byte *)(param_1 + 0x430);
  iVar4 = *(int *)(param_1 + 0x43c);
  uVar6 = ((uint)bVar3 << 0x19) >> 0x1d;
  cVar1 = *(char *)(param_1 + 0x431);
  uVar5 = (uint)*(ushort *)(param_1 + uVar6 * 2 + 0x420);
  if (uVar6 == 6) {
    if (*(char *)(iVar4 + 0x159e015) == '\0') {
      *(undefined2 *)(param_1 + 0x42c) = 0;
      uVar5 = 0;
    }
    else if (*(char *)(iVar4 + 0x2916467) == '\x01') {
      uVar5 = 0;
    }
    else if (*(char *)(iVar4 + 0x2916467) == '\x02') {
      iVar4 = FUN_08058c20(iVar4 + 0x155e000,2,*(undefined4 *)(iVar4 + 8));
      uVar5 = iVar4 + 0x8000 >> 4;
    }
    else {
      uVar5 = 0;
      *(undefined *)(iVar4 + 0x2916467) = 1;
    }
  }
  if (cVar1 == '\x01') {
    if ((bVar3 & 8) != 0) {
      uVar5 = uVar5 & 0xfffffff0;
    }
    *(undefined *)(param_1 + 0x431) = 2;
    uVar5 = uVar5 << 3;
  }
  else {
    if (cVar1 == '\0') {
      uVar5 = (uVar5 << 0x13) >> 0x18;
      *(undefined *)(param_1 + 0x431) = 1;
      goto LAB_0805c8a8;
    }
    if (cVar1 == '\x02') {
      uVar5 = 0;
      goto LAB_0805c8a8;
    }
  }
  uVar5 = uVar5 & 0xff;
LAB_0805c8a8:
  if ((param_2 & 0x80) != 0) {
    *(byte *)(param_1 + 0x430) = param_2;
    *(undefined *)(param_1 + 0x431) = 0;
  }
  if ((uVar2 & 0x800) == 0) {
    *(undefined *)(param_1 + 0x431) = 0;
  }
  return uVar5;
}


