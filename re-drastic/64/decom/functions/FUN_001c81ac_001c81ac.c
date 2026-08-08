/*
 * Ghidra decompilation
 *
 * Function : FUN_001c81ac
 * Address  : 001c81ac
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c81ac(undefined8 *param_1,undefined8 *param_2,bool param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  uchar uStack_19;
  undefined4 uStack_18;
  undefined auStack_14 [4];
  ulong uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uVar1 = (*(ulong *)((long)param_1 + 0x14) & 0xff00ff00ff00ff00) >> 8 |
          (*(ulong *)((long)param_1 + 0x14) & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  uStack_10 = uVar1 >> 0x20 | uVar1 << 0x20;
  uStack_19 = 0x80;
  uStack_18 = 8;
  while( true ) {
    hash_process((hash_context *)param_1,&uStack_19,1,param_3);
    if ((*(uint *)((long)param_1 + 0x14) & 0x1f8) == 0x1c0) break;
    uStack_19 = '\0';
  }
  hash_process((hash_context *)param_1,(uchar *)&uStack_10,8,param_3);
  if ((ulong)((long)param_1 + (0xf - (long)param_2)) < 0x1f) {
    *(undefined4 *)param_2 = *(undefined4 *)param_1;
    *(undefined4 *)((long)param_2 + 4) = *(undefined4 *)((long)param_1 + 4);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
    *(undefined4 *)((long)param_2 + 0xc) = *(undefined4 *)((long)param_1 + 0xc);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  }
  else {
    uVar2 = *param_1;
    param_2[1] = param_1[1];
    *param_2 = uVar2;
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  }
  uStack_18 = 5;
  cleandata(&uStack_18,4);
  cleandata(auStack_14,4);
  cleandata((undefined4 *)((long)param_1 + 0x1c),0x40);
  cleandata(param_1,0x14);
  cleandata((undefined4 *)((long)param_1 + 0x14),8);
  cleandata(&uStack_10,8);
  if (param_3 != false) {
    *(undefined8 *)((long)param_1 + 0x5c) = 0;
    *(undefined8 *)((long)param_1 + 100) = 0;
    *(undefined8 *)((long)param_1 + 0x6c) = 0;
    *(undefined8 *)((long)param_1 + 0x74) = 0;
    *(undefined8 *)((long)param_1 + 0x7c) = 0;
    *(undefined8 *)((long)param_1 + 0x84) = 0;
    *(undefined8 *)((long)param_1 + 0x8c) = 0;
    *(undefined8 *)((long)param_1 + 0x94) = 0;
  }
  if (lStack_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lStack_8 - ___stack_chk_guard,0);
}


