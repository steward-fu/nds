/*
 * Ghidra decompilation
 *
 * Function : hash_final
 * Address  : 001c81b0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hash_final(hash_context*, unsigned int*, bool) */

void hash_final(hash_context *param_1,uint *param_2,bool param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  uchar local_19;
  undefined4 local_18;
  undefined auStack_14 [4];
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = (*(ulong *)(param_1 + 0x14) & 0xff00ff00ff00ff00) >> 8 |
          (*(ulong *)(param_1 + 0x14) & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  local_10 = uVar1 >> 0x20 | uVar1 << 0x20;
  local_19 = 0x80;
  local_18 = 8;
  while (hash_process(param_1,&local_19,1,param_3), (*(uint *)(param_1 + 0x14) & 0x1f8) != 0x1c0) {
    local_19 = '\0';
  }
  hash_process(param_1,(uchar *)&local_10,8,param_3);
  if (param_1 + (0xf - (long)param_2) < (hash_context *)0x1f) {
    *param_2 = *(uint *)param_1;
    param_2[1] = *(uint *)(param_1 + 4);
    param_2[2] = *(uint *)(param_1 + 8);
    param_2[3] = *(uint *)(param_1 + 0xc);
    param_2[4] = *(uint *)(param_1 + 0x10);
  }
  else {
    uVar2 = *(undefined8 *)param_1;
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)param_2 = uVar2;
    param_2[4] = *(uint *)(param_1 + 0x10);
  }
  local_18 = 5;
  cleandata(&local_18,4);
  cleandata(auStack_14,4);
  cleandata(param_1 + 0x1c,0x40);
  cleandata(param_1,0x14);
  cleandata(param_1 + 0x14,8);
  cleandata(&local_10,8);
  if (param_3) {
    *(undefined8 *)(param_1 + 0x5c) = 0;
    *(undefined8 *)(param_1 + 100) = 0;
    *(undefined8 *)(param_1 + 0x6c) = 0;
    *(undefined8 *)(param_1 + 0x74) = 0;
    *(undefined8 *)(param_1 + 0x7c) = 0;
    *(undefined8 *)(param_1 + 0x84) = 0;
    *(undefined8 *)(param_1 + 0x8c) = 0;
    *(undefined8 *)(param_1 + 0x94) = 0;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


