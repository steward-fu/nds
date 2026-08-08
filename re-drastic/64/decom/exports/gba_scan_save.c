/*
 * Ghidra decompilation
 *
 * Function : gba_scan_save
 * Address  : 0016e5c0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gba_scan_save(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  undefined5 local_18;
  undefined2 uStack_13;
  undefined uStack_11;
  undefined uStack_10;
  undefined uStack_f;
  undefined uStack_e;
  undefined uStack_d;
  uint uStack_c;
  long local_8;
  
  local_18 = 0;
  uStack_13 = 0;
  uStack_11 = 0;
  uStack_10 = 0;
  uStack_f = 0;
  uStack_e = 0;
  uStack_d = 0;
  uStack_c = 0;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(param_1 + 0x434) = 0;
  *(undefined4 *)(param_1 + 0x43c) = 0;
  *(undefined2 *)(param_1 + 0x440) = 0;
  *(undefined *)(param_1 + 0x442) = 0;
  uVar8 = *(uint *)(param_1 + 0x430) >> 2;
  puVar4 = *(undefined8 **)(param_1 + 0x420);
  if (uVar8 != 1) {
    puVar1 = (undefined8 *)((long)puVar4 + (ulong)(uVar8 - 2) * 4 + 4);
    uVar8 = *(uint *)puVar4;
    do {
      uVar2 = *(uint *)((long)puVar4 + 4);
      if (uVar8 == 0x4d415253) {
        if ((uVar2 & 0xffff) == 0x5f56) {
          uVar5 = *puVar4;
          local_18 = (undefined5)uVar5;
          uStack_13 = (undefined2)((ulong)uVar5 >> 0x28);
          uStack_11 = (undefined)((ulong)uVar5 >> 0x38);
          uStack_10 = *(undefined *)(puVar4 + 1);
          __printf_chk(1," Detected GBA SRAM backup type: %s\n",&local_18);
          iVar7 = 0x8000;
          *(undefined4 *)(param_1 + 0x434) = 0x8000;
          *(undefined *)(param_1 + 0x440) = 1;
LAB_0016e6cc:
          __printf_chk(1," Allocated %d bytes of GBA backup.\n",iVar7);
          pvVar6 = malloc((ulong)*(uint *)(param_1 + 0x434));
          *(void **)(param_1 + 0x428) = pvVar6;
          break;
        }
      }
      else if (uVar8 == 0x52504545) {
        if (uVar2 == 0x565f4d4f) {
          local_18 = (undefined5)*puVar4;
          uStack_13 = (undefined2)((ulong)*puVar4 >> 0x28);
          uVar3 = *(undefined4 *)((long)puVar4 + 7);
          uStack_11 = (undefined)uVar3;
          uStack_10 = (undefined)((uint)uVar3 >> 8);
          uStack_f = (undefined)((uint)uVar3 >> 0x10);
          uStack_e = (undefined)((uint)uVar3 >> 0x18);
          __printf_chk(1," Detected GBA EEPROM backup type: %s (unsupported)\n",&local_18);
          iVar7 = *(int *)(param_1 + 0x434);
          *(undefined *)(param_1 + 0x440) = 2;
          if (iVar7 != 0) goto LAB_0016e6cc;
          break;
        }
      }
      else if (uVar8 == 0x53414c46) {
        if ((uVar2 & 0xffffff) == 0x565f48) {
          uVar5 = *puVar4;
          local_18 = (undefined5)uVar5;
          uStack_13 = (undefined2)((ulong)uVar5 >> 0x28);
          uStack_11 = (undefined)((ulong)uVar5 >> 0x38);
          uStack_10 = (undefined)*(undefined2 *)(puVar4 + 1);
          uStack_f = (undefined)((ushort)*(undefined2 *)(puVar4 + 1) >> 8);
        }
        else {
          if (uVar2 != 0x32313548) {
            if (uVar2 == 0x5f4d3148) {
              uVar5 = *puVar4;
              local_18 = (undefined5)uVar5;
              uStack_13 = (undefined2)((ulong)uVar5 >> 0x28);
              uStack_11 = (undefined)((ulong)uVar5 >> 0x38);
              uVar8 = *(uint *)(puVar4 + 1);
              uStack_10 = (undefined)uVar8;
              uStack_f = (undefined)(uVar8 >> 8);
              uStack_e = (undefined)(uVar8 >> 0x10);
              uStack_d = (undefined)(uVar8 >> 0x18);
              __printf_chk(1," Detected GBA FLASH backup type: %s\n",&local_18);
              iVar7 = 0x20000;
              *(undefined4 *)(param_1 + 0x434) = 0x20000;
              *(undefined *)(param_1 + 0x440) = 3;
              goto LAB_0016e6cc;
            }
            goto LAB_0016e670;
          }
          local_18 = (undefined5)*puVar4;
          uVar5 = *(undefined8 *)((long)puVar4 + 5);
          uStack_13 = (undefined2)uVar5;
          uStack_11 = (undefined)((ulong)uVar5 >> 0x10);
          uStack_10 = (undefined)((ulong)uVar5 >> 0x18);
          uStack_f = (undefined)((ulong)uVar5 >> 0x20);
          uStack_e = (undefined)((ulong)uVar5 >> 0x28);
          uStack_d = (undefined)((ulong)uVar5 >> 0x30);
          uStack_c = (uint)(byte)((ulong)uVar5 >> 0x38);
        }
        __printf_chk(1," Detected GBA FLASH backup type: %s\n",&local_18);
        iVar7 = 0x10000;
        *(undefined4 *)(param_1 + 0x434) = 0x10000;
        *(undefined *)(param_1 + 0x440) = 3;
        goto LAB_0016e6cc;
      }
LAB_0016e670:
      puVar4 = (undefined8 *)((long)puVar4 + 4);
      uVar8 = uVar2;
    } while (puVar4 != puVar1);
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
  }
  return;
}


