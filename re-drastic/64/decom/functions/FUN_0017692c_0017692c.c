/*
 * Ghidra decompilation
 *
 * Function : FUN_0017692c
 * Address  : 0017692c
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017692c(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *__s;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  lVar3 = ___stack_chk_guard;
  puVar4 = (undefined8 *)((long)param_1 + 0xd1e);
  puts("Setting default configuration.");
  *(undefined8 *)(param_1 + 0xd) = 0x100000001;
  *(undefined8 *)(param_1 + 0xb) = 1;
  *(undefined8 *)(param_1 + 0x112) = 0x100000001;
  *(undefined8 *)(param_1 + 0x110) = 0x400000002;
  *(undefined8 *)(param_1 + 0x114) = 0;
  *(undefined8 *)(param_1 + 0x119) = 0;
  *(undefined8 *)(param_1 + 0x117) = 0x100000000;
  *(undefined8 *)(param_1 + 0x11d) = 0x100000001;
  *(undefined8 *)(param_1 + 0x11b) = 0x100000000;
  *(undefined8 *)(param_1 + 0x121) = 1;
  *(undefined8 *)(param_1 + 0x11f) = 0;
  *(undefined8 *)(param_1 + 0x125) = 0;
  *(undefined8 *)(param_1 + 0x123) = 0x300000000;
  *(undefined8 *)(param_1 + 0x129) = 0x100000000;
  *(undefined8 *)(param_1 + 0x127) = 0;
  *(undefined8 *)(param_1 + 0x12d) = 0x300000000;
  *(undefined8 *)(param_1 + 299) = 0;
  *(undefined8 *)(param_1 + 0x12f) = 0;
  *(undefined8 *)(param_1 + 0x131) = 0;
  *param_1 = 0x44;
  param_1[1] = 0x72;
  param_1[2] = 0x20;
  param_1[3] = 0x44;
  param_1[4] = 0x72;
  param_1[5] = 0x61;
  param_1[6] = 0x53;
  param_1[7] = 0x74;
  param_1[8] = 0x69;
  param_1[9] = 99;
  param_1[10] = 0;
  *(undefined8 *)(param_1 + 0x333) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x335) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x337) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x339) = 0xffffffffffffffff;
  __s = param_1 + 0x35c;
  *(undefined8 *)(param_1 + 0x33b) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x33d) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x33f) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x341) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x343) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x345) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x347) = 0xffff;
  *puVar4 = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xd26) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xd2e) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xd36) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xd3e) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xd46) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xd4e) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xd56) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xd5e) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xd66) = 0xffffffffffffffff;
  *(undefined2 *)((long)param_1 + 0xd6e) = 0xffff;
  platform_set_default_controls(param_1 + 0x333,puVar4);
  set_screen_orientation(param_1[0x113]);
  set_screen_swap(param_1[0x115]);
  memset(__s,0,0x4000);
  uVar5 = 0;
  do {
    uVar2 = *(ushort *)((long)puVar4 + -0x52);
    if (uVar2 != 0xffff) {
      *(ulong *)(__s + (ulong)uVar2 * 2) = *(ulong *)(__s + (ulong)uVar2 * 2) | 1L << (uVar5 & 0x3f)
      ;
    }
    uVar2 = *(ushort *)puVar4;
    if (uVar2 != 0xffff) {
      *(ulong *)(__s + (ulong)uVar2 * 2) = *(ulong *)(__s + (ulong)uVar2 * 2) | 1L << (uVar5 & 0x3f)
      ;
    }
    uVar1 = (int)uVar5 + 1;
    uVar5 = (ulong)uVar1;
    puVar4 = (undefined8 *)((long)puVar4 + 2);
  } while (uVar1 != 0x29);
  if (lVar3 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3 - ___stack_chk_guard,0);
}


