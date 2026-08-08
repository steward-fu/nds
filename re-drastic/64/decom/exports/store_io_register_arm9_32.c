/*
 * Ghidra decompilation
 *
 * Function : store_io_register_arm9_32
 * Address  : 00116060
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void store_io_register_arm9_32(long param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint local_18;
  uint uStack_14;
  undefined local_f;
  long local_8;
  ulong uVar6;
  
  uVar4 = (uint)param_2;
  local_8 = ___stack_chk_guard;
  uVar6 = param_3 & 0xffffffff;
  uVar5 = (uint)param_3;
  if (uVar4 < 0x5c5) {
    if (0xcf < uVar4) {
      if (uVar4 - 0xd0 < 0x4f5) {
                    /* WARNING: Could not recover jumptable at 0x001160c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)*(short *)(&DAT_0021c818 + (ulong)(uVar4 - 0xd0) * 2) * 4 + 0x1160c4))();
        return;
      }
      goto LAB_00116108;
    }
    if (uVar4 == 0xb8) {
      *(uint *)(param_1 + 0x1b128) = uVar5;
      if (((int)uVar5 < 0) && (-1 < *(int *)(param_1 + 0xfd2c8))) {
        uVar6 = uVar6 >> 0x1b & 7;
        iVar2 = (int)uVar6;
        *(char *)(param_1 + 0xfd2cc) = (char)uVar6;
        *(undefined4 *)(param_1 + 0xfd2c0) = **(undefined4 **)(param_1 + 0xfd2b8);
        *(undefined4 *)(param_1 + 0xfd2c4) = (*(undefined4 **)(param_1 + 0xfd2b8))[1];
        *(uint *)(param_1 + 0xfd2c8) = uVar5;
        if (iVar2 == 0 || iVar2 == 7) {
          dma_transfer(param_1 + 0xfd298,param_1 + 0xfd2a8);
        }
      }
      else {
        *(uint *)(param_1 + 0xfd2c8) = uVar5;
      }
      goto LAB_00116128;
    }
    if (0xb8 < uVar4) {
      if (uVar4 == 0xc4) {
        *(uint *)(param_1 + 0x1b134) = uVar5;
        if (((int)uVar5 < 0) && (-1 < *(int *)(param_1 + 0xfd2f0))) {
          uVar6 = uVar6 >> 0x1b & 7;
          iVar2 = (int)uVar6;
          *(char *)(param_1 + 0xfd2f4) = (char)uVar6;
          *(undefined4 *)(param_1 + 0xfd2e8) = **(undefined4 **)(param_1 + 0xfd2e0);
          *(undefined4 *)(param_1 + 0xfd2ec) = (*(undefined4 **)(param_1 + 0xfd2e0))[1];
          *(uint *)(param_1 + 0xfd2f0) = uVar5;
          if (iVar2 == 0 || iVar2 == 7) {
            dma_transfer(param_1 + 0xfd298,param_1 + 0xfd2d0);
          }
        }
        else {
          *(uint *)(param_1 + 0xfd2f0) = uVar5;
        }
        goto LAB_00116128;
      }
      goto LAB_00116108;
    }
    if (uVar4 != 0x60) {
      if (uVar4 < 0x61) {
        if ((uVar4 < 4) || (uVar4 - 8 < 0x4e)) goto LAB_00116168;
        goto LAB_00116108;
      }
      if (3 < uVar4 - 0x6c) goto LAB_00116108;
LAB_00116168:
      lVar3 = *(long *)(param_1 + 0xfba70) + 0x2e78;
      if (0xbf < *(ushort *)(*(long *)(param_1 + 0xfba68) + 0x14)) goto LAB_001161e0;
      goto LAB_00116188;
    }
    uVar5 = uVar5 & 0xffffcfff;
    *(uint *)(*(long *)(param_1 + 0xfba78) + 0x9a88) = uVar5;
  }
  else {
    if (uVar4 == 0x100010) {
      gamecard_write(*(undefined8 *)(param_1 + 0xfd4b8),param_3 & 0xffffffff);
      goto LAB_00116128;
    }
    if (0x100010 < uVar4) goto LAB_00116108;
    if (uVar4 < 0x1056) {
      if (uVar4 < 0x1008) {
        uVar1 = uVar4 - 0x1000;
        goto joined_r0x0011621c;
      }
    }
    else {
      uVar1 = uVar4 - 0x106c;
joined_r0x0011621c:
      if (3 < uVar1) {
LAB_00116108:
        store_io_register_arm9_16(param_1,param_2 & 0xffffffff,uVar6);
        store_io_register_arm9_16(param_1,uVar4 + 2,uVar5 >> 0x10);
        goto LAB_00116128;
      }
    }
    lVar3 = *(long *)(param_1 + 0xfba70) + 0x84298;
    if (*(ushort *)(*(long *)(param_1 + 0xfba68) + 0x14) < 0xc0) {
LAB_00116188:
      video_2d_queue_event(lVar3,param_2 & 0xffffffff,uVar6,4);
    }
    else {
LAB_001161e0:
      local_f = 4;
      local_18 = uVar4;
      uStack_14 = uVar5;
      video_2d_process_event(lVar3,&local_18);
    }
  }
  *(uint *)(param_1 + (param_2 & 0x7fff) + 0x1b070) = uVar5;
LAB_00116128:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
}


