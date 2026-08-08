/*
 * Ghidra decompilation
 *
 * Function : convert_thumb_instruction_to_arm
 * Address  : 00128fd0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void convert_thumb_instruction_to_arm(ulong param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  long local_8;
  
  lVar3 = ___stack_chk_guard;
  local_8 = ___stack_chk_guard;
  uVar5 = 0;
  *param_2 = 0;
  uVar7 = (uint)(param_1 >> 0xd) & 7;
  uVar4 = (uint)param_1;
  if (uVar7 == 4) {
    uVar7 = (uVar4 >> 0xb & 1) << 0x14;
    if ((uVar4 >> 0xc & 1) == 0) {
      uVar5 = param_1 >> 6 & 0x1f;
      uVar7 = (uVar4 & 7) << 0xc | ((uint)(param_1 >> 9) & 3) << 8 |
              (uVar4 >> 3 & 7) << 0x10 | uVar7 | ((uint)uVar5 & 7) << 1 | 0xe1c000b0;
    }
    else {
      uVar1 = (uVar4 & 0xff) << 2;
      uVar5 = (ulong)uVar1;
      uVar7 = (uVar4 >> 8 & 7) << 0xc | uVar7 | uVar1 | 0xe58d0000;
    }
    goto LAB_00129050;
  }
  if (uVar7 < 5) {
    uVar1 = (uint)(param_1 >> 8);
    if (uVar7 == 2) {
      uVar7 = uVar4 >> 10;
      if ((uVar4 >> 0xc & 1) != 0) {
        uVar6 = (uVar4 >> 3 & 7) << 0x10;
        uVar1 = (uint)(param_1 >> 6) & 7 | (uVar4 & 7) << 0xc;
        uVar5 = (ulong)uVar1;
        if ((uVar4 >> 9 & 1) == 0) {
          uVar7 = (uVar4 >> 0xb & 1) << 0x14 | uVar1 | (uVar7 & 1) << 0x16 | uVar6 | 0xe7800000;
        }
        else {
          uVar5 = (ulong)uVar7 & 3;
          uStack_48 = 0x300000001;
          local_50 = 0x200000001;
          uVar7 = (uint)((uVar7 & 3) != 0) << 0x14 | *(int *)((long)&local_50 + uVar5 * 4) << 5 |
                  uVar6 | uVar1 | 0xe1800090;
        }
        goto LAB_00129050;
      }
      if ((uVar7 & 6) != 0) {
        uVar5 = 0xe59f0000;
        *param_2 = 1;
        uVar7 = (uVar4 >> 8 & 7) << 0xc | (uVar4 & 0xff) << 2 | 0xe59f0000;
        goto LAB_00129050;
      }
      if ((uVar7 & 7) == 1) {
        uVar1 = uVar1 & 3;
        uVar6 = (uint)(param_1 >> 3) & 0xf;
        uVar7 = uVar4 >> 7;
        uVar5 = (ulong)(uVar6 | 0xe0800000);
        if (uVar1 == 2) {
          uVar7 = uVar6 | ((uVar7 & 1) << 3 | uVar4 & 7) << 0xc | 0xe1a00000;
        }
        else if (uVar1 == 3) {
          uVar7 = (uVar7 & 1) << 5 | uVar6 | 0xe12fff10;
        }
        else {
          uVar7 = (uVar7 & 1) << 3 | uVar4 & 7;
          if (uVar1 == 1) {
            uVar7 = uVar6 | uVar7 << 0x10 | 0xe1500000;
          }
          else {
            uVar7 = uVar7 << 0x10 | uVar7 << 0xc | uVar6 | 0xe0800000;
          }
        }
        goto LAB_00129050;
      }
      uVar7 = uVar4 >> 6 & 0xf;
      uVar1 = uVar4 & 7;
      uVar5 = (ulong)uVar1;
      uVar6 = (uint)(param_1 >> 3) & 7;
      if (uVar7 == 9) {
        uVar7 = uVar6 << 0x10 | uVar1 << 0xc | 0xe2700000;
        goto LAB_00129050;
      }
      if (uVar7 < 10) {
        if (uVar7 == 7) {
          uVar4 = 5;
LAB_001294c8:
          local_50 = 0x100000000;
          uStack_48 = 2;
          local_40 = 0x300000000;
          uVar7 = uVar1 | *(int *)((long)&local_50 + (ulong)uVar4 * 4) << 5;
          uVar5 = (ulong)uVar7;
          uVar7 = uVar6 << 8 | uVar1 << 0xc | uVar7 | 0xe1b00010;
          goto LAB_00129050;
        }
        if ((uVar4 >> 9 & 1) == 0) {
          uVar4 = uVar7 - 2;
          if (uVar4 < 3) goto LAB_001294c8;
        }
        else if (uVar7 == 8) goto LAB_00129434;
      }
      else {
        if (uVar7 == 0xd) {
          uVar7 = uVar1 << 0x10 | 0xe0100090;
          uVar5 = (ulong)uVar7;
          uVar7 = uVar7 | uVar1 | uVar6 << 8;
          goto LAB_00129050;
        }
        if (uVar7 < 0xe) {
          if (uVar7 - 10 < 2) {
LAB_00129434:
            uStack_48 = 0xb0000000a;
            local_50 = 8;
            uVar7 = *(int *)((long)&local_50 + (ulong)(uVar7 - 8) * 4) << 0x15 | 0xe0100000U |
                    uVar6 | uVar1 << 0x10;
            goto LAB_00129050;
          }
        }
        else if (uVar7 == 0xf) {
          uVar7 = uVar6 | uVar1 << 0xc | 0xe1f00000;
          goto LAB_00129050;
        }
      }
      local_40 = 0x500000000;
      uStack_38 = 6;
      local_50 = 0x100000000;
      uStack_48 = 0;
      uVar6 = uVar6 | uVar1 << 0xc;
      uVar5 = (ulong)uVar6;
      local_30 = 0;
      uStack_28 = 0;
      local_20 = 0xc;
      uStack_18 = 0xe;
      uVar7 = uVar1 << 0x10 | *(int *)((long)&local_50 + (ulong)uVar7 * 4) << 0x15 | uVar6 |
              0xe0100000;
      goto LAB_00129050;
    }
    if (uVar7 == 3) {
      uVar1 = (uint)(param_1 >> 6) & 0x1f;
      uVar7 = uVar1 << 2;
      if ((param_1 >> 0xc & 1) != 0) {
        uVar7 = uVar1;
      }
      uVar7 = (uVar4 & 7) << 0xc | uVar7;
      uVar5 = (ulong)uVar7;
      uVar7 = ((uint)(param_1 >> 3) & 7) << 0x10 | ((uint)(param_1 >> 0xb) & 1) << 0x14 | uVar7 |
              ((uint)(param_1 >> 0xc) & 1) << 0x16 | 0xe5800000;
      goto LAB_00129050;
    }
    if (uVar7 == 1) {
      uVar1 = uVar1 & 7;
      uStack_48 = 0x200000004;
      local_50 = 0xa0000000d;
      iVar2 = *(int *)((long)&local_50 + (param_1 >> 0xb & 3) * 4);
      uVar7 = uVar1 << 0xc;
      uVar5 = (ulong)uVar7;
      if (iVar2 == 0xd) {
        uVar7 = uVar7 | uVar4 & 0xff | 0xe3b00000;
      }
      else {
        uVar7 = uVar4 & 0xff | iVar2 << 0x15 | uVar7 | uVar1 << 0x10 | 0xe2100000;
      }
      goto LAB_00129050;
    }
  }
  else {
    if (uVar7 == 6) {
      if ((uVar4 >> 0xc & 1) == 0) {
        uVar5 = (ulong)(uVar4 & 0xff);
        uVar7 = (uVar4 >> 0xb & 1) << 0x14 | (uVar4 >> 8 & 7) << 0x10 | uVar4 & 0xff | 0xe8a00000;
      }
      else {
        uVar7 = uVar4 >> 8 & 0xf;
        if (uVar7 == 0xf) {
          uVar7 = (uVar4 & 0xff) << 0x10 | 0xef000000;
        }
        else {
          uVar7 = (int)(char)param_1 & 0xffffffU | uVar7 << 0x1c | 0xa000000;
        }
      }
      goto LAB_00129050;
    }
    if (uVar7 == 7) {
      if (((uint)(param_1 >> 0xb) & 3) - 1 < 3) {
        uVar7 = uVar4 << 5 | 0xe6000010;
      }
      else {
        uVar7 = (uint)((long)(param_1 << 0x35) >> 0x35) & 0xffffff | 0xea000000;
      }
      goto LAB_00129050;
    }
    if (uVar7 == 5) {
      if ((uVar4 >> 0xc & 1) == 0) {
        uVar5 = (ulong)(uVar4 & 0xff);
        uVar7 = (uVar4 >> 8 & 7) << 0xc | uVar4 & 0xff;
        if ((uVar4 >> 0xb & 1) == 0) {
          uVar5 = 1;
          *param_2 = 1;
          uVar7 = uVar7 | 0xe28f0f00;
        }
        else {
          uVar7 = uVar7 | 0xe28d0f00;
        }
      }
      else if ((uVar4 >> 8 & 0xf) == 0) {
        uVar5 = 0xe28ddf00;
        uVar7 = uVar4 & 0x7f | 0xe28ddf00;
        if ((param_1 & 0x80) != 0) {
          uVar7 = uVar4 & 0x7f | 0xe24ddf00;
        }
      }
      else {
        uVar7 = uVar4 & 0xff;
        if ((uVar4 >> 0xb & 1) == 0) {
          uVar4 = uVar7 | 0x4000;
          if ((param_1 & 0x100) == 0) {
            uVar4 = uVar7;
          }
          uVar7 = uVar4 | 0xe92d0000;
        }
        else {
          uVar4 = uVar7 | 0x8000;
          if ((param_1 & 0x100) == 0) {
            uVar4 = uVar7;
          }
          uVar7 = uVar4 | 0xe8bd0000;
        }
      }
      goto LAB_00129050;
    }
  }
  uVar7 = (uint)(param_1 >> 0xb) & 3;
  uVar5 = param_1 >> 3 & 7;
  if (uVar7 == 3) {
    uVar7 = 0x800000;
    if ((param_1 & 0x200) != 0) {
      uVar7 = 0x400000;
    }
    uVar4 = (uVar4 & 7) << 0xc | uVar4 >> 6 & 7 | uVar7 | (uint)uVar5 << 0x10;
    uVar5 = 0xe0100000;
    uVar7 = uVar4 | 0xe0100000;
    if ((param_1 & 0x400) != 0) {
      uVar7 = uVar4 | 0xe2100000;
    }
  }
  else {
    uVar7 = (uVar4 >> 6 & 0x1f) << 7 | uVar7 << 5 | (uVar4 & 7) << 0xc | (uint)uVar5 | 0xe1b00000;
  }
LAB_00129050:
  if (lVar3 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7,lVar3 - ___stack_chk_guard,0,&__stack_chk_guard,uVar5);
  }
  return;
}


