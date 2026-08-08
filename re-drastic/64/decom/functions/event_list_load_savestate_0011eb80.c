/*
 * Ghidra decompilation
 *
 * Function : event_list_load_savestate
 * Address  : 0011eb80
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void event_list_load_savestate(long param_1,long param_2,uint param_3)

{
  char *__src;
  size_t __n;
  size_t __n_00;
  char cVar1;
  long lVar2;
  char *__src_00;
  long lVar3;
  long lVar4;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  byte local_18;
  byte local_17;
  byte local_16;
  byte local_15;
  byte local_14;
  byte local_13;
  byte local_12;
  byte local_11;
  byte local_10;
  byte local_f;
  byte local_e;
  byte local_d;
  byte local_c;
  byte local_b;
  byte local_a;
  byte local_9;
  long local_8;
  
  __src_00 = *(char **)(param_2 + 0x20) + 1;
  cVar1 = **(char **)(param_2 + 0x20);
  __n = 0x40;
  if (param_3 < 4) {
    __n = 0x2c;
  }
  *(char **)(param_2 + 0x20) = __src_00;
  local_8 = ___stack_chk_guard;
  __n_00 = 0x10;
  if (param_3 < 4) {
    __n_00 = 0xb;
  }
  __src = __src_00 + __n_00;
  memcpy(&local_18,__src_00,__n_00);
  *(char **)(param_2 + 0x20) = __src;
  memcpy(&local_58,__src,__n);
  *(char **)(param_2 + 0x20) = __src + __n;
  if (cVar1 == '\0') {
    *(undefined8 *)(param_1 + 0x300) = 0;
    goto LAB_0011ec08;
  }
  lVar2 = param_1 + (ulong)local_18 * 0x30;
  lVar3 = (ulong)local_18 * 0x30;
  *(undefined8 *)(param_1 + lVar3 + 0x20) = 0;
  *(undefined4 *)(param_1 + lVar3) = local_58;
  *(long *)(param_1 + 0x300) = lVar2;
  if (cVar1 != '\x01') {
    lVar3 = param_1 + (ulong)local_17 * 0x30;
    lVar4 = (ulong)local_17 * 0x30;
    *(long *)(lVar2 + 0x18) = lVar3;
    *(long *)(param_1 + lVar4 + 0x20) = lVar2;
    *(undefined4 *)(param_1 + lVar4) = local_54;
    if (cVar1 == '\x02') {
LAB_0011eec8:
      *(undefined8 *)(lVar3 + 0x18) = 0;
      goto LAB_0011ec08;
    }
    lVar2 = param_1 + (ulong)local_16 * 0x30;
    lVar4 = (ulong)local_16 * 0x30;
    *(long *)(lVar3 + 0x18) = lVar2;
    *(long *)(param_1 + lVar4 + 0x20) = lVar3;
    *(undefined4 *)(param_1 + lVar4) = local_50;
    if (cVar1 != '\x03') {
      lVar3 = param_1 + (ulong)local_15 * 0x30;
      lVar4 = (ulong)local_15 * 0x30;
      *(long *)(lVar2 + 0x18) = lVar3;
      *(long *)(param_1 + lVar4 + 0x20) = lVar2;
      *(undefined4 *)(param_1 + lVar4) = local_4c;
      if (cVar1 == '\x04') goto LAB_0011eec8;
      lVar2 = param_1 + (ulong)local_14 * 0x30;
      lVar4 = (ulong)local_14 * 0x30;
      *(long *)(lVar3 + 0x18) = lVar2;
      *(long *)(param_1 + lVar4 + 0x20) = lVar3;
      *(undefined4 *)(param_1 + lVar4) = local_48;
      if (cVar1 != '\x05') {
        lVar3 = param_1 + (ulong)local_13 * 0x30;
        lVar4 = (ulong)local_13 * 0x30;
        *(long *)(lVar2 + 0x18) = lVar3;
        *(long *)(param_1 + lVar4 + 0x20) = lVar2;
        *(undefined4 *)(param_1 + lVar4) = local_44;
        if (cVar1 == '\x06') goto LAB_0011eec8;
        lVar2 = param_1 + (ulong)local_12 * 0x30;
        lVar4 = (ulong)local_12 * 0x30;
        *(long *)(lVar3 + 0x18) = lVar2;
        *(long *)(param_1 + lVar4 + 0x20) = lVar3;
        *(undefined4 *)(param_1 + lVar4) = local_40;
        if (cVar1 != '\a') {
          lVar3 = param_1 + (ulong)local_11 * 0x30;
          lVar4 = (ulong)local_11 * 0x30;
          *(long *)(lVar2 + 0x18) = lVar3;
          *(long *)(param_1 + lVar4 + 0x20) = lVar2;
          *(undefined4 *)(param_1 + lVar4) = local_3c;
          if (cVar1 == '\b') goto LAB_0011eec8;
          lVar4 = (ulong)local_10 * 0x30;
          lVar2 = param_1 + (ulong)local_10 * 0x30;
          *(long *)(lVar3 + 0x18) = lVar2;
          *(long *)(param_1 + lVar4 + 0x20) = lVar3;
          *(undefined4 *)(param_1 + lVar4) = local_38;
          if (cVar1 != '\t') {
            lVar3 = param_1 + (ulong)(uint)local_f * 0x30;
            *(long *)(lVar2 + 0x18) = lVar3;
            lVar4 = (long)(int)(uint)local_f * 0x30;
            *(long *)(param_1 + lVar4 + 0x20) = lVar2;
            *(undefined4 *)(param_1 + lVar4) = local_34;
            if (cVar1 == '\n') goto LAB_0011eec8;
            lVar2 = param_1 + (ulong)local_e * 0x30;
            lVar4 = (ulong)local_e * 0x30;
            *(long *)(lVar3 + 0x18) = lVar2;
            *(long *)(param_1 + lVar4 + 0x20) = lVar3;
            *(undefined4 *)(param_1 + lVar4) = local_30;
            if (cVar1 != '\v') {
              lVar3 = param_1 + (ulong)local_d * 0x30;
              lVar4 = (ulong)local_d * 0x30;
              *(long *)(lVar2 + 0x18) = lVar3;
              *(long *)(param_1 + lVar4 + 0x20) = lVar2;
              *(undefined4 *)(param_1 + lVar4) = local_2c;
              if (cVar1 == '\f') goto LAB_0011eec8;
              lVar2 = param_1 + (ulong)local_c * 0x30;
              lVar4 = (ulong)local_c * 0x30;
              *(long *)(lVar3 + 0x18) = lVar2;
              *(long *)(param_1 + lVar4 + 0x20) = lVar3;
              *(undefined4 *)(param_1 + lVar4) = local_28;
              if (cVar1 != '\r') {
                lVar3 = param_1 + (ulong)local_b * 0x30;
                lVar4 = (ulong)local_b * 0x30;
                *(long *)(lVar2 + 0x18) = lVar3;
                *(long *)(param_1 + lVar4 + 0x20) = lVar2;
                *(undefined4 *)(param_1 + lVar4) = local_24;
                if (cVar1 == '\x0e') goto LAB_0011eec8;
                lVar4 = param_1 + (ulong)local_a * 0x30;
                lVar2 = (ulong)local_a * 0x30;
                *(long *)(lVar3 + 0x18) = lVar4;
                *(long *)(param_1 + lVar2 + 0x20) = lVar3;
                *(undefined4 *)(param_1 + lVar2) = local_20;
                if (cVar1 == '\x0f') {
                  *(undefined8 *)(lVar4 + 0x18) = 0;
                  goto LAB_0011ec08;
                }
                lVar3 = (ulong)local_9 * 0x30;
                lVar2 = param_1 + (ulong)local_9 * 0x30;
                *(long *)(lVar4 + 0x18) = lVar2;
                *(long *)(param_1 + lVar3 + 0x20) = lVar4;
                *(undefined4 *)(param_1 + lVar3) = local_1c;
              }
            }
          }
        }
      }
    }
  }
  *(undefined8 *)(lVar2 + 0x18) = 0;
LAB_0011ec08:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
}


