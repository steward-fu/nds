/*
 * Ghidra decompilation
 *
 * Function : gamecard_command
 * Address  : 00170110
 * Program  : drastic64
 */


void gamecard_command(long param_1,uint param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  char cVar8;
  uint uVar9;
  long lVar10;
  
  lVar10 = *(long *)(param_1 + 0x928);
  lVar7 = *(long *)(param_1 + 0x948);
  cVar8 = '\x05';
  if ((*(ushort *)(lVar10 + 0x204) >> 0xb & 1) != 0) {
    lVar7 = *(long *)(param_1 + 0x950);
    cVar8 = '\x02';
  }
  bVar4 = *(byte *)(lVar10 + 0x1a8);
  uVar9 = param_2 | 0x80800000;
  if (bVar4 == 0x94) {
    *(undefined4 *)(param_1 + 0x2d98) = 1;
    *(undefined *)(param_1 + 0x2da4) = 7;
    *(undefined4 *)(param_1 + 0x960) = 1;
    goto LAB_001701a0;
  }
  if (bVar4 < 0x95) {
    if (bVar4 == 0x84) {
      uVar9 = param_2 & 0x7fffffff | 0x800000;
      *(undefined *)(param_1 + 0x2da8) = 0;
      goto LAB_001701a0;
    }
    if (bVar4 < 0x85) {
      if (bVar4 == 0x81) {
        if (*(int *)(param_1 + 0x2d68) != 3) goto LAB_001701a0;
        uVar9 = (*(uint *)(lVar10 + 0x1a9) & 0xff00ff00) >> 8 |
                (*(uint *)(lVar10 + 0x1a9) & 0xff00ff) << 8;
        iVar3 = (uVar9 >> 0x10 | uVar9 << 0x10) - *(int *)(param_1 + 0x2d9c);
        if (*(int *)(param_1 + 0x2da0) != iVar3) {
          *(int *)(param_1 + 0x2da0) = iVar3;
          backup_nand_set_position(param_1 + 0x968);
          *(undefined *)(param_1 + 0x2da7) = 1;
          lVar10 = *(long *)(param_1 + 0x928);
        }
      }
      else if (bVar4 != 0x82) {
        if (bVar4 != 0) goto LAB_001701a0;
        goto LAB_00170328;
      }
      uVar9 = param_2 & 0x7fffffff | 0x800000;
      goto LAB_001701a0;
    }
    if (bVar4 == 0x8b) {
      uVar9 = param_2 & 0x7fffffff | 0x800000;
      *(undefined *)(param_1 + 0x2da7) = 0;
      goto LAB_001701a0;
    }
    if (bVar4 != 0x90) {
      if (bVar4 == 0x85) {
        uVar9 = param_2 & 0x7fffffff | 0x800000;
        *(undefined *)(param_1 + 0x2da8) = 1;
      }
      goto LAB_001701a0;
    }
  }
  else {
    if (bVar4 == 0xb7) {
LAB_00170328:
      uVar5 = (*(uint *)(lVar10 + 0x1a9) & 0xff00ff00) >> 8 |
              (*(uint *)(lVar10 + 0x1a9) & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      if (*(char *)(param_1 + 0x2da7) == '\0') {
        uVar5 = uVar5 & *(uint *)(param_1 + 0x930);
        uVar2 = (uVar5 & 0x1ff) + 0x8000;
        if (0x7fff < uVar5) {
          uVar2 = uVar5;
        }
        *(uint *)(param_1 + 0x95c) = uVar2;
        *(undefined4 *)(param_1 + 0x960) = 0x80;
        *(undefined *)(param_1 + 0x2da4) = 2;
        if (*(uint *)(*(long *)(param_1 + 0x920) + 0x14) <= uVar2) {
          *(undefined *)(param_1 + 0x2da4) = 3;
          *(undefined4 *)(param_1 + 0x2d98) = 0xff;
        }
      }
      else {
        *(undefined *)(param_1 + 0x2da4) = 6;
        *(undefined4 *)(param_1 + 0x960) = 0x80;
        backup_nand_set_position(param_1 + 0x968,uVar5 - *(int *)(param_1 + 0x2d9c));
        lVar10 = *(long *)(param_1 + 0x928);
      }
      goto LAB_001701a0;
    }
    if (bVar4 < 0xb8) {
      if (bVar4 == 0xb0) {
        if (-1 < *(int *)(param_1 + 0x93c)) {
          *(undefined4 *)(param_1 + 0x960) = 1;
          *(undefined4 *)(param_1 + 0x2d98) = 500;
          *(undefined *)(param_1 + 0x2da4) = 1;
        }
      }
      else if (bVar4 == 0xb2) {
        if (*(int *)(param_1 + 0x2d68) == 3) {
          uVar9 = (*(uint *)(lVar10 + 0x1a9) & 0xff00ff00) >> 8 |
                  (*(uint *)(lVar10 + 0x1a9) & 0xff00ff) << 8;
          uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
          *(uint *)(param_1 + 0x2da0) = uVar9;
          backup_nand_set_position(param_1 + 0x968,uVar9 - *(int *)(param_1 + 0x2d9c));
          uVar9 = param_2 & 0x7fffffff | 0x800000;
          *(undefined *)(param_1 + 0x2da7) = 1;
          lVar10 = *(long *)(param_1 + 0x928);
        }
      }
      else if (bVar4 == 0x9f) {
        *(undefined4 *)(param_1 + 0x960) = 0x800;
        *(undefined *)(param_1 + 0x2da4) = 0;
        *(undefined4 *)(param_1 + 0x2d98) = 0xffffffff;
      }
      goto LAB_001701a0;
    }
    if (0xbc < bVar4) {
      if ((bVar4 == 0xd6) && (*(int *)(param_1 + 0x2d68) == 3)) {
        *(undefined4 *)(param_1 + 0x2d98) = 0x20202020;
        uVar6 = 0x30303030;
        if (*(char *)(param_1 + 0x2da7) == '\0') {
          uVar6 = 0x70707070;
          *(undefined4 *)(param_1 + 0x2d98) = 0x60606060;
        }
        if (*(char *)(param_1 + 0x2da8) != '\0') {
          *(undefined4 *)(param_1 + 0x2d98) = uVar6;
        }
        *(undefined *)(param_1 + 0x2da4) = 7;
        *(undefined4 *)(param_1 + 0x960) = 1;
      }
      goto LAB_001701a0;
    }
    if (bVar4 != 0xb8) {
      if (-1 < *(int *)(param_1 + 0x93c)) {
        uVar5 = (*(uint *)(lVar10 + 0x1a9) & 0xff00ff00) >> 8 |
                (*(uint *)(lVar10 + 0x1a9) & 0xff00ff) << 8;
        lseek(*(int *)(param_1 + 0x93c),(ulong)(uVar5 >> 0x10 | uVar5 << 0x10),0);
        if (*(char *)(lVar10 + 0x1a8) == -0x46) {
          *(undefined *)(param_1 + 0x2da4) = 4;
          *(undefined4 *)(param_1 + 0x960) = 0x80;
          lVar10 = *(long *)(param_1 + 0x928);
        }
        else {
          *(undefined4 *)(param_1 + 0x2d98) = 0;
          *(undefined *)(param_1 + 0x2da4) = 5;
          *(undefined4 *)(param_1 + 0x960) = 1;
          pcVar1 = (char *)(lVar10 + 0x1a8);
          lVar10 = *(long *)(param_1 + 0x928);
          if (*pcVar1 == -0x45) {
            *(undefined4 *)(param_1 + 0x940) = 0x80;
          }
        }
      }
      goto LAB_001701a0;
    }
  }
  *(undefined4 *)(param_1 + 0x960) = 1;
  *(undefined *)(param_1 + 0x2da4) = 1;
  if (*(int *)(param_1 + 0x93c) < 0) {
    *(undefined4 *)(param_1 + 0x2d98) = *(undefined4 *)(param_1 + 0x958);
  }
  else {
    *(undefined4 *)(param_1 + 0x2d98) = 0xfc2;
  }
LAB_001701a0:
  *(uint *)(lVar10 + 0x1a4) = uVar9;
  lVar10 = *(long *)(param_1 + 0x918);
  if ((byte)nds_system[lVar10 + 0x362e99c] == 0) {
    iVar3 = *(int *)(lVar7 + 0x30);
    *(undefined8 *)(param_1 + 0x910) = 0;
  }
  else {
    iVar3 = *(int *)(lVar7 + 0x30);
    *(ulong *)(param_1 + 0x910) =
         ((ulong)((uint)(byte)nds_system[lVar10 + 0x362e99c] * *(int *)(param_1 + 0x960) * 0x28) -
         (long)*(int *)(nds_system + lVar10 + 0x10cdfe0)) +
         (ulong)*(uint *)(lVar10 + 0x10) + *(long *)(lVar10 + 8);
  }
  if ((iVar3 < 0) && (*(char *)(lVar7 + 0x34) == cVar8)) {
    dma_transfer_gamecard(lVar7,lVar7 + 0x10,param_1);
  }
  if ((*(int *)(lVar7 + 0x58) < 0) && (*(char *)(lVar7 + 0x5c) == cVar8)) {
    dma_transfer_gamecard(lVar7,lVar7 + 0x38,param_1);
  }
  if ((*(int *)(lVar7 + 0x80) < 0) && (*(char *)(lVar7 + 0x84) == cVar8)) {
    dma_transfer_gamecard(lVar7,lVar7 + 0x60,param_1);
  }
  if ((*(int *)(lVar7 + 0xa8) < 0) && (*(char *)(lVar7 + 0xac) == cVar8)) {
    dma_transfer_gamecard(lVar7,lVar7 + 0x88,param_1);
    return;
  }
  return;
}


