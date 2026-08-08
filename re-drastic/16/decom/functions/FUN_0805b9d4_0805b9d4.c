/*
 * Ghidra decompilation
 *
 * Function : FUN_0805b9d4
 * Address  : 0805b9d4
 * Program  : drastic16
 */


void FUN_0805b9d4(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char cVar11;
  bool bVar12;
  
  iVar5 = *(int *)(param_1 + 0x888);
  iVar10 = *(int *)(param_1 + 0x8a0);
  uVar9 = param_2 | 0x80800000;
  bVar1 = *(byte *)(iVar5 + 0x1a8);
  if ((*(ushort *)(iVar5 + 0x204) & 0x800) == 0) {
    cVar11 = '\x05';
  }
  else {
    iVar10 = *(int *)(param_1 + 0x8a4);
    cVar11 = '\x02';
  }
  if (bVar1 == 0x94) {
    *(undefined4 *)(param_1 + 0xcd8) = 1;
    *(undefined4 *)(param_1 + 0x8b0) = 1;
    *(undefined *)(param_1 + 0xce4) = 7;
    goto LAB_0805ba7c;
  }
  if (bVar1 < 0x95) {
    if (bVar1 == 0x84) {
      uVar9 = param_2 & 0x7fffffff | 0x800000;
      *(undefined *)(param_1 + 0xce8) = 0;
      goto LAB_0805ba7c;
    }
    if (bVar1 < 0x85) {
      if (bVar1 == 0x81) {
        if (*(int *)(param_1 + 0xcb4) != 3) goto LAB_0805ba7c;
        iVar6 = ((uint)*(byte *)(iVar5 + 0x1aa) << 0x10 | (uint)*(byte *)(iVar5 + 0x1a9) << 0x18 |
                 (uint)*(byte *)(iVar5 + 0x1ac) | (uint)*(byte *)(iVar5 + 0x1ab) << 8) -
                *(int *)(param_1 + 0xcdc);
        if (*(int *)(param_1 + 0xce0) != iVar6) {
          *(int *)(param_1 + 0xce0) = iVar6;
          FUN_0805d7c4(param_1 + 0x8b4);
          iVar5 = *(int *)(param_1 + 0x888);
          *(undefined *)(param_1 + 0xce7) = 1;
        }
      }
      else if (bVar1 != 0x82) {
        if (bVar1 != 0) goto LAB_0805ba7c;
        goto LAB_0805bd70;
      }
      uVar9 = param_2 & 0x7fffffff | 0x800000;
      goto LAB_0805ba7c;
    }
    if (bVar1 == 0x8b) {
      uVar9 = param_2 & 0x7fffffff | 0x800000;
      *(undefined *)(param_1 + 0xce7) = 0;
      goto LAB_0805ba7c;
    }
    if (bVar1 != 0x90) {
      if (bVar1 == 0x85) {
        uVar9 = param_2 & 0x7fffffff | 0x800000;
        *(undefined *)(param_1 + 0xce8) = 1;
      }
      goto LAB_0805ba7c;
    }
  }
  else {
    if (bVar1 == 0xb7) {
LAB_0805bd70:
      uVar3 = (uint)*(byte *)(iVar5 + 0x1aa) << 0x10 | (uint)*(byte *)(iVar5 + 0x1a9) << 0x18 |
              (uint)*(byte *)(iVar5 + 0x1ac) | (uint)*(byte *)(iVar5 + 0x1ab) << 8;
      if (*(char *)(param_1 + 0xce7) == '\0') {
        *(undefined4 *)(param_1 + 0x8b0) = 0x80;
        uVar3 = uVar3 & *(uint *)(param_1 + 0x88c);
        bVar12 = uVar3 < 0x8000;
        *(undefined *)(param_1 + 0xce4) = 2;
        if (bVar12) {
          uVar3 = uVar3 & 0x1ff;
        }
        uVar7 = *(uint *)(*(int *)(param_1 + 0x884) + 0xc);
        if (bVar12) {
          uVar3 = uVar3 + 0x8000;
        }
        *(uint *)(param_1 + 0x8ac) = uVar3;
        if (uVar7 <= uVar3) {
          *(undefined *)(param_1 + 0xce4) = 3;
          *(undefined4 *)(param_1 + 0xcd8) = 0xff;
        }
      }
      else {
        *(undefined *)(param_1 + 0xce4) = 6;
        *(undefined4 *)(param_1 + 0x8b0) = 0x80;
        FUN_0805d7c4(param_1 + 0x8b4,uVar3 - *(int *)(param_1 + 0xcdc));
        iVar5 = *(int *)(param_1 + 0x888);
      }
      goto LAB_0805ba7c;
    }
    if (bVar1 < 0xb8) {
      if (bVar1 == 0xb0) {
        if (-1 < *(int *)(param_1 + 0x898)) {
          *(undefined4 *)(param_1 + 0x8b0) = 1;
          *(undefined4 *)(param_1 + 0xcd8) = 500;
          *(undefined *)(param_1 + 0xce4) = 1;
        }
      }
      else if (bVar1 == 0xb2) {
        if (*(int *)(param_1 + 0xcb4) == 3) {
          uVar9 = param_2 & 0x7fffffff | 0x800000;
          uVar3 = (uint)*(byte *)(iVar5 + 0x1aa) << 0x10 | (uint)*(byte *)(iVar5 + 0x1a9) << 0x18 |
                  (uint)*(byte *)(iVar5 + 0x1ac) | (uint)*(byte *)(iVar5 + 0x1ab) << 8;
          *(uint *)(param_1 + 0xce0) = uVar3;
          FUN_0805d7c4(param_1 + 0x8b4,uVar3 - *(int *)(param_1 + 0xcdc));
          iVar5 = *(int *)(param_1 + 0x888);
          *(undefined *)(param_1 + 0xce7) = 1;
        }
      }
      else if (bVar1 == 0x9f) {
        *(undefined4 *)(param_1 + 0x8b0) = 0x800;
        *(undefined *)(param_1 + 0xce4) = 0;
        *(undefined4 *)(param_1 + 0xcd8) = 0xffffffff;
      }
      goto LAB_0805ba7c;
    }
    if (0xbc < bVar1) {
      if ((bVar1 == 0xd6) && (*(int *)(param_1 + 0xcb4) == 3)) {
        uVar3 = 0x20202020;
        *(undefined4 *)(param_1 + 0xcd8) = 0x20202020;
        bVar12 = *(char *)(param_1 + 0xce7) == '\0';
        if (bVar12) {
          *(undefined4 *)(param_1 + 0xcd8) = 0x60606060;
        }
        else {
          uVar3 = 0x3030;
        }
        if (bVar12) {
          uVar3 = 0x70707070;
        }
        else {
          uVar3 = uVar3 & 0xffff | uVar3 << 0x10;
        }
        if (*(char *)(param_1 + 0xce8) != '\0') {
          *(uint *)(param_1 + 0xcd8) = uVar3;
        }
        *(undefined *)(param_1 + 0xce4) = 7;
        *(undefined4 *)(param_1 + 0x8b0) = 1;
      }
      goto LAB_0805ba7c;
    }
    if (0xb8 < bVar1) {
      if (-1 < *(int *)(param_1 + 0x898)) {
        lseek(*(int *)(param_1 + 0x898),
              (uint)*(byte *)(iVar5 + 0x1aa) << 0x10 | (uint)*(byte *)(iVar5 + 0x1a9) << 0x18 |
              (uint)*(byte *)(iVar5 + 0x1ac) | (uint)*(byte *)(iVar5 + 0x1ab) << 8,0);
        if (*(char *)(iVar5 + 0x1a8) == -0x46) {
          *(undefined *)(param_1 + 0xce4) = 4;
          *(undefined4 *)(param_1 + 0x8b0) = 0x80;
          iVar5 = *(int *)(param_1 + 0x888);
        }
        else {
          *(undefined4 *)(param_1 + 0xcd8) = 0;
          *(undefined *)(param_1 + 0xce4) = 5;
          *(undefined4 *)(param_1 + 0x8b0) = 1;
          if (*(char *)(iVar5 + 0x1a8) == -0x45) {
            iVar5 = *(int *)(param_1 + 0x888);
            *(undefined4 *)(param_1 + 0x89c) = 0x80;
          }
          else {
            iVar5 = *(int *)(param_1 + 0x888);
          }
        }
      }
      goto LAB_0805ba7c;
    }
  }
  *(undefined4 *)(param_1 + 0x8b0) = 1;
  *(undefined *)(param_1 + 0xce4) = 1;
  if (*(int *)(param_1 + 0x898) < 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x8a8);
  }
  else {
    uVar4 = 0xfc2;
  }
  *(undefined4 *)(param_1 + 0xcd8) = uVar4;
LAB_0805ba7c:
  *(uint *)(iVar5 + 0x1a4) = uVar9;
  iVar5 = *(int *)(param_1 + 0x880);
  if (*(byte *)(iVar5 + 0x2916464) == 0) {
    iVar6 = 0;
    iVar5 = 0;
  }
  else {
    uVar7 = *(uint *)(iVar5 + 8) + *(uint *)(iVar5 + 0x10);
    uVar3 = *(uint *)(iVar5 + 0x15a0f64);
    uVar8 = uVar7 - uVar3;
    uVar9 = (uint)*(byte *)(iVar5 + 0x2916464) * *(int *)(param_1 + 0x8b0) * 0x28;
    iVar6 = uVar8 + uVar9;
    iVar5 = ((*(int *)(iVar5 + 0xc) + (uint)CARRY4(*(uint *)(iVar5 + 8),*(uint *)(iVar5 + 0x10))) -
            (((int)uVar3 >> 0x1f) + (uint)(uVar7 < uVar3))) + (uint)CARRY4(uVar8,uVar9);
  }
  iVar2 = *(int *)(iVar10 + 0x20);
  *(int *)(param_1 + 0x878) = iVar6;
  *(int *)(param_1 + 0x87c) = iVar5;
  if ((iVar2 < 0) && (*(char *)(iVar10 + 0x24) == cVar11)) {
    FUN_0801615c(iVar10,iVar10 + 8,param_1);
  }
  if ((*(int *)(iVar10 + 0x40) < 0) && (*(char *)(iVar10 + 0x44) == cVar11)) {
    FUN_0801615c(iVar10,iVar10 + 0x28,param_1);
  }
  if ((*(int *)(iVar10 + 0x60) < 0) && (*(char *)(iVar10 + 100) == cVar11)) {
    FUN_0801615c(iVar10,iVar10 + 0x48,param_1);
  }
  if (-1 < *(int *)(iVar10 + 0x80)) {
    return;
  }
  if (*(char *)(iVar10 + 0x84) != cVar11) {
    return;
  }
  FUN_0801615c(iVar10,iVar10 + 0x68,param_1,param_4);
  return;
}


