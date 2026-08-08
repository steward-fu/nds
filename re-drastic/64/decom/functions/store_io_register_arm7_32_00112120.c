/*
 * Ghidra decompilation
 *
 * Function : store_io_register_arm7_32
 * Address  : 00112120
 * Program  : drastic64
 */


void store_io_register_arm7_32(long param_1,ulong param_2,ulong param_3)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar4 = (uint)param_2;
  uVar5 = param_3 & 0xffffffff;
  uVar2 = (uint)param_3;
  if (uVar4 == 0x188) {
    if (*(char *)(param_1 + 0x231f5) < '\0') {
      if ((*(byte *)(param_1 + 0xfd452) >> 1 & 1) == 0) {
        ipc_fifo_queue(param_1 + 0xfd3f8,param_3 & 0xffffffff);
        uVar2 = *(byte *)(param_1 + 0x1b1f5) & 0xfe;
        *(char *)(param_1 + 0x1b1f5) = (char)uVar2;
        *(byte *)(param_1 + 0x231f4) = *(byte *)(param_1 + 0x231f4) & 0xfe;
        bVar1 = *(byte *)(param_1 + 0xfd452);
        if ((bVar1 >> 1 & 1) != 0) {
          __printf_chk(1,"CPU %s made its send FIFO full.\n",&DAT_0021aa98);
          *(byte *)(param_1 + 0x231f4) = *(byte *)(param_1 + 0x231f4) | 2;
          uVar2 = *(byte *)(param_1 + 0x1b1f5) | 2;
          *(char *)(param_1 + 0x1b1f5) = (char)uVar2;
          bVar1 = *(byte *)(param_1 + 0xfd452);
        }
        if (((bVar1 & 1) == 0) && ((uVar2 >> 2 & 1) != 0)) {
          lVar3 = *(long *)(nds_system + *(long *)(param_1 + 0xfba90) + 0xb04010);
          if (*(int *)(lVar3 + 0x210c) == 1) {
            *(uint *)(lVar3 + 0x22a8) = *(uint *)(lVar3 + 0x22a8) | 4;
          }
          lVar3 = *(long *)(*(long *)(nds_system + *(long *)(param_1 + 0xfba88) + 0xb04010) + 0x2080
                           );
          uVar2 = *(uint *)(lVar3 + 0x214) | 0x40000;
          *(uint *)(lVar3 + 0x214) = uVar2;
          if ((*(uint *)(*(long *)(nds_system + *(long *)(param_1 + 0xfba88) + 0xb04010) + 0x2110) &
              6) == 0) {
            *(uint *)(*(long *)(nds_system + *(long *)(param_1 + 0xfba88) + 0xb04010) + 0x2108) =
                 -*(int *)(lVar3 + 0x208) & uVar2 & *(uint *)(lVar3 + 0x210);
          }
        }
      }
      else {
        *(byte *)(param_1 + 0x231f5) = *(byte *)(param_1 + 0x231f5) | 0x40;
      }
    }
  }
  else if (uVar4 < 0x189) {
    if (uVar4 == 0xd0) {
      *(uint *)(param_1 + 0x23140) = uVar2;
      if (((int)uVar2 < 0) && (-1 < *(int *)(param_1 + 0xfd3c8))) {
        *(byte *)(param_1 + 0xfd3cc) = (byte)(uVar5 >> 0x1c) & 3;
        *(undefined4 *)(param_1 + 0xfd3c0) = **(undefined4 **)(param_1 + 0xfd3b8);
        *(undefined4 *)(param_1 + 0xfd3c4) = (*(undefined4 **)(param_1 + 0xfd3b8))[1];
        *(uint *)(param_1 + 0xfd3c8) = uVar2;
        if ((uVar5 >> 0x1c & 3) == 0) {
          dma_transfer(param_1 + 0xfd348,param_1 + 0xfd3a8);
          return;
        }
      }
      else {
        *(uint *)(param_1 + 0xfd3c8) = uVar2;
      }
    }
    else if (uVar4 < 0xd1) {
      if (uVar4 == 0xb8) {
        *(uint *)(param_1 + 0x23128) = uVar2;
        if (((int)uVar2 < 0) && (-1 < *(int *)(param_1 + 0xfd378))) {
          *(byte *)(param_1 + 0xfd37c) = (byte)(uVar5 >> 0x1c) & 3;
          *(undefined4 *)(param_1 + 0xfd370) = **(undefined4 **)(param_1 + 0xfd368);
          *(undefined4 *)(param_1 + 0xfd374) = (*(undefined4 **)(param_1 + 0xfd368))[1];
          *(uint *)(param_1 + 0xfd378) = uVar2;
          if ((uVar5 >> 0x1c & 3) == 0) {
            dma_transfer(param_1 + 0xfd348,param_1 + 0xfd358);
            return;
          }
        }
        else {
          *(uint *)(param_1 + 0xfd378) = uVar2;
        }
      }
      else {
        if (uVar4 != 0xc4) goto LAB_00112350;
        *(uint *)(param_1 + 0x23134) = uVar2;
        if (((int)uVar2 < 0) && (-1 < *(int *)(param_1 + 0xfd3a0))) {
          *(byte *)(param_1 + 0xfd3a4) = (byte)(uVar5 >> 0x1c) & 3;
          *(undefined4 *)(param_1 + 0xfd398) = **(undefined4 **)(param_1 + 0xfd390);
          *(undefined4 *)(param_1 + 0xfd39c) = (*(undefined4 **)(param_1 + 0xfd390))[1];
          *(uint *)(param_1 + 0xfd3a0) = uVar2;
          if ((uVar5 >> 0x1c & 3) == 0) {
            dma_transfer(param_1 + 0xfd348,param_1 + 0xfd380);
            return;
          }
        }
        else {
          *(uint *)(param_1 + 0xfd3a0) = uVar2;
        }
      }
    }
    else {
      if (uVar4 != 0xdc) {
LAB_00112350:
        store_io_register_arm7_16(param_1,param_2,uVar5);
        store_io_register_arm7_16(param_1,uVar4 + 2,uVar2 >> 0x10);
        return;
      }
      *(uint *)(param_1 + 0x2314c) = uVar2;
      if (((int)uVar2 < 0) && (-1 < *(int *)(param_1 + 0xfd3f0))) {
        *(byte *)(param_1 + 0xfd3f4) = (byte)(uVar5 >> 0x1c) & 3;
        *(undefined4 *)(param_1 + 0xfd3e8) = **(undefined4 **)(param_1 + 0xfd3e0);
        *(undefined4 *)(param_1 + 0xfd3ec) = (*(undefined4 **)(param_1 + 0xfd3e0))[1];
        *(uint *)(param_1 + 0xfd3f0) = uVar2;
        if ((uVar5 >> 0x1c & 3) == 0) {
          dma_transfer(param_1 + 0xfd348,param_1 + 0xfd3d0);
          return;
        }
      }
      else {
        *(uint *)(param_1 + 0xfd3f0) = uVar2;
      }
    }
  }
  else if (uVar4 == 0x210) {
    uVar4 = *(uint *)(param_1 + 0x23280);
    *(uint *)(param_1 + 0x23280) = uVar2;
    if ((uVar2 & (uVar4 ^ 0xffffffff)) != 0) {
      uVar2 = uVar2 & *(uint *)(param_1 + 0x23284) & -*(int *)(param_1 + 0x23278);
      lVar3 = *(long *)(nds_system + *(long *)(param_1 + 0xfba90) + 0xb04010);
      *(uint *)(lVar3 + 0x2108) = uVar2;
      if (uVar2 != 0) {
        *(uint *)(lVar3 + 0x22a8) = *(uint *)(lVar3 + 0x22a8) | 2;
      }
    }
  }
  else {
    if (uVar4 < 0x211) {
      if (uVar4 == 0x1a4) {
        if ((int)uVar2 < 0) {
          gamecard_command(*(undefined8 *)(param_1 + 0xfd4b8),param_3 & 0xffffffff);
          return;
        }
      }
      else {
        if (uVar4 != 0x208) goto LAB_00112350;
        uVar2 = uVar2 & 1;
        lVar3 = *(long *)(nds_system + *(long *)(param_1 + 0xfba90) + 0xb04010);
        if (((param_3 & 1) == 0) || (*(int *)(param_1 + 0x23278) != 0)) {
          *(undefined4 *)(lVar3 + 0x2108) = 0;
        }
        else {
          uVar4 = *(uint *)(param_1 + 0x23284) & *(uint *)(param_1 + 0x23280);
          *(uint *)(lVar3 + 0x2108) = uVar4;
          if (uVar4 != 0) {
            *(uint *)(lVar3 + 0x22a8) = *(uint *)(lVar3 + 0x22a8) | 2;
          }
        }
      }
      *(uint *)(param_1 + (param_2 & 0xffffffff) + 0x23070) = uVar2;
      return;
    }
    if (uVar4 == 0x214) {
      *(uint *)(param_1 + 0x23284) =
           *(uint *)(param_1 + 0x23284) & (uVar2 & 0xffdfffff ^ 0xffffffff);
      *(uint *)(*(long *)(nds_system + *(long *)(param_1 + 0xfba90) + 0xb04010) + 0x2108) =
           *(uint *)(*(long *)(nds_system + *(long *)(param_1 + 0xfba90) + 0xb04010) + 0x2108) &
           (uVar2 & 0xffdfffff ^ 0xffffffff);
    }
    else if (uVar4 < 0x800000) goto LAB_00112350;
  }
  return;
}


