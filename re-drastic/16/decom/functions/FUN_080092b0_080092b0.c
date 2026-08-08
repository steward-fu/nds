/*
 * Ghidra decompilation
 *
 * Function : FUN_080092b0
 * Address  : 080092b0
 * Program  : drastic16
 */


void FUN_080092b0(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  
  if (param_2 == 0x188) {
    if ((*(byte *)(param_1 + 0x231c5) & 0x80) == 0) {
      return;
    }
    if ((*(byte *)(param_1 + 0xfc796) & 2) != 0) {
      *(byte *)(param_1 + 0x231c5) = *(byte *)(param_1 + 0x231c5) | 0x40;
      return;
    }
    FUN_0801d860(param_1 + 0xfc748,param_3);
    bVar1 = *(byte *)(param_1 + 0x1b1c5) & 0xfe;
    *(byte *)(param_1 + 0x1b1c5) = bVar1;
    *(byte *)(param_1 + 0x231c4) = *(byte *)(param_1 + 0x231c4) & 0xfe;
    bVar5 = *(byte *)(param_1 + 0xfc796);
    if ((bVar5 & 2) != 0) {
      printf("CPU %s made its send FIFO full.\n",&DAT_080e56cc);
      *(byte *)(param_1 + 0x231c4) = *(byte *)(param_1 + 0x231c4) | 2;
      bVar1 = *(byte *)(param_1 + 0x1b1c5) | 2;
      *(byte *)(param_1 + 0x1b1c5) = bVar1;
      bVar5 = *(byte *)(param_1 + 0xfc796);
    }
    if ((bVar5 & 1) != 0) {
      return;
    }
    if ((bVar1 & 4) == 0) {
      return;
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0xfba30) + 0x800008);
    if (*(char *)(iVar2 + 0x2104) == '\x01') {
      *(uint *)(iVar2 + 0x237c) = *(uint *)(iVar2 + 0x237c) | 4;
    }
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0xfba2c) + 0x800008) + 0x2080);
    uVar3 = *(uint *)(iVar2 + 0x214) | 0x40000;
    *(uint *)(iVar2 + 0x214) = uVar3;
    iVar6 = *(int *)(*(int *)(param_1 + 0xfba2c) + 0x800008);
    if ((*(byte *)(iVar6 + 0x2105) & 6) == 0) {
      *(uint *)(iVar6 + 0x2100) = uVar3 & -*(int *)(iVar2 + 0x208) & *(uint *)(iVar2 + 0x210);
      return;
    }
    return;
  }
  if (param_2 < 0x189) {
    if (param_2 == 0xc4) {
      *(uint *)(param_1 + 0x23104) = param_3;
      iVar2 = param_1 + 0xfc6e8;
      if (((int)param_3 < 0) && (-1 < *(int *)(param_1 + 0xfc700))) {
        *(byte *)(param_1 + 0xfc704) = (byte)((param_3 << 2) >> 0x1e);
        *(undefined4 *)(param_1 + 0xfc6f8) = **(undefined4 **)(param_1 + 0xfc6f4);
        uVar4 = (*(undefined4 **)(param_1 + 0xfc6f4))[1];
        *(uint *)(param_1 + 0xfc700) = param_3;
        *(undefined4 *)(param_1 + 0xfc6fc) = uVar4;
        if ((param_3 << 2) >> 0x1e == 0) {
          FUN_080167d8(param_1 + 0xfc6c0,param_1 + 0xfc6e8,uVar4,param_4);
          return;
        }
        return;
      }
    }
    else if (param_2 < 0xc5) {
      if (param_2 != 0xb8) goto LAB_080096f4;
      *(uint *)(param_1 + 0x230f8) = param_3;
      iVar2 = param_1 + 0xfc6c8;
      if (((int)param_3 < 0) && (-1 < *(int *)(param_1 + 0xfc6e0))) {
        *(byte *)(param_1 + 0xfc6e4) = (byte)((param_3 << 2) >> 0x1e);
        *(undefined4 *)(param_1 + 0xfc6d8) = **(undefined4 **)(param_1 + 0xfc6d4);
        uVar4 = (*(undefined4 **)(param_1 + 0xfc6d4))[1];
        *(uint *)(param_1 + 0xfc6e0) = param_3;
        *(undefined4 *)(param_1 + 0xfc6dc) = uVar4;
        if ((param_3 << 2) >> 0x1e == 0) {
          FUN_080167d8(param_1 + 0xfc6c0,param_1 + 0xfc6c8,uVar4,param_4);
          return;
        }
        return;
      }
    }
    else if (param_2 == 0xd0) {
      *(uint *)(param_1 + 0x23110) = param_3;
      iVar2 = param_1 + 0xfc708;
      if (((int)param_3 < 0) && (-1 < *(int *)(param_1 + 0xfc720))) {
        *(byte *)(param_1 + 0xfc724) = (byte)((param_3 << 2) >> 0x1e);
        *(undefined4 *)(param_1 + 0xfc718) = **(undefined4 **)(param_1 + 0xfc714);
        uVar4 = (*(undefined4 **)(param_1 + 0xfc714))[1];
        *(uint *)(param_1 + 0xfc720) = param_3;
        *(undefined4 *)(param_1 + 0xfc71c) = uVar4;
        if ((param_3 << 2) >> 0x1e == 0) {
          FUN_080167d8(param_1 + 0xfc6c0,param_1 + 0xfc708,uVar4,param_4);
          return;
        }
        return;
      }
    }
    else {
      if (param_2 != 0xdc) goto LAB_080096f4;
      *(uint *)(param_1 + 0x2311c) = param_3;
      iVar2 = param_1 + 0xfc728;
      if (((int)param_3 < 0) && (-1 < *(int *)(param_1 + 0xfc740))) {
        *(byte *)(param_1 + 0xfc744) = (byte)((param_3 << 2) >> 0x1e);
        *(undefined4 *)(param_1 + 0xfc738) = **(undefined4 **)(param_1 + 0xfc734);
        uVar4 = (*(undefined4 **)(param_1 + 0xfc734))[1];
        *(uint *)(param_1 + 0xfc740) = param_3;
        *(undefined4 *)(param_1 + 0xfc73c) = uVar4;
        if ((param_3 << 2) >> 0x1e == 0) {
          FUN_080167d8(param_1 + 0xfc6c0,param_1 + 0xfc728,uVar4,param_4);
          return;
        }
        return;
      }
    }
    *(uint *)(iVar2 + 0x18) = param_3;
    return;
  }
  if (param_2 == 0x208) {
    param_3 = param_3 & 1;
    iVar2 = *(int *)(*(int *)(param_1 + 0xfba30) + 0x800008);
    if ((param_3 == 0) || (*(int *)(param_1 + 0x23248) != 0)) {
      *(undefined4 *)(iVar2 + 0x2100) = 0;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x23250) & *(uint *)(param_1 + 0x23254);
      *(uint *)(iVar2 + 0x2100) = uVar3;
      if (uVar3 == 0) {
        param_3 = 1;
      }
      else {
        param_3 = 1;
        *(uint *)(iVar2 + 0x237c) = *(uint *)(iVar2 + 0x237c) | 2;
      }
    }
LAB_080094d0:
    *(uint *)(param_1 + (param_2 & 0x7fff) + 0x23040) = param_3;
    return;
  }
  if (param_2 < 0x209) {
    if (param_2 == 0x1a4) {
      if ((int)param_3 < 0) {
        FUN_0805b9d4(*(undefined4 *)(param_1 + 0xfc7e8),param_3,param_3,param_4);
        return;
      }
      goto LAB_080094d0;
    }
  }
  else {
    if (param_2 == 0x210) {
      uVar3 = *(uint *)(param_1 + 0x23250);
      *(uint *)(param_1 + 0x23250) = param_3;
      if ((param_3 & ~uVar3) != 0) {
        uVar3 = param_3 & *(uint *)(param_1 + 0x23254) & -*(int *)(param_1 + 0x23248);
        iVar2 = *(int *)(*(int *)(param_1 + 0xfba30) + 0x800008);
        *(uint *)(iVar2 + 0x2100) = uVar3;
        if (uVar3 != 0) {
          *(uint *)(iVar2 + 0x237c) = *(uint *)(iVar2 + 0x237c) | 2;
        }
        return;
      }
      return;
    }
    if (param_2 == 0x214) {
      *(uint *)(param_1 + 0x23254) = ~(param_3 & 0xffdfffff) & *(uint *)(param_1 + 0x23254);
      iVar2 = *(int *)(*(int *)(param_1 + 0xfba30) + 0x800008);
      *(uint *)(iVar2 + 0x2100) = ~(param_3 & 0xffdfffff) & *(uint *)(iVar2 + 0x2100);
      return;
    }
  }
LAB_080096f4:
  if (param_2 < 0x800000) {
    FUN_080087f8(param_1,param_2,param_3 & 0xffff);
    FUN_080087f8(param_1,param_2 + 2,param_3 >> 0x10,param_4);
    return;
  }
  return;
}


