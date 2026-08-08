/*
 * Ghidra decompilation
 *
 * Function : hash_process
 * Address  : 001c7fe0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hash_process(hash_context*, unsigned char*, unsigned long, bool) */

void hash_process(hash_context *param_1,uchar *param_2,ulong param_3,bool param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  hash_context *__dest;
  uchar *__src;
  ulong __n;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = *(uint *)(param_1 + 0x14);
  uVar2 = (int)param_3 * 8;
  uVar4 = (ulong)(uVar5 >> 3) & 0x3f;
  *(uint *)(param_1 + 0x14) = uVar5 + uVar2;
  *(uint *)(param_1 + 0x18) =
       (int)(param_3 >> 0x1d) + *(int *)(param_1 + 0x18) + (uint)CARRY4(uVar5,uVar2);
  __n = 0;
  if (0x3f < uVar4 + param_3) {
    iVar3 = (int)uVar4;
    __n = (ulong)(0x40 - iVar3);
    memcpy(param_1 + uVar4 + 0x1c,param_2,__n);
    SHA1Transform((uint *)param_1,(uchar *)(param_1 + 0x5c),(uchar *)(param_1 + 0x1c),param_4);
    uVar5 = 0x40 - iVar3;
    if (0x7f - iVar3 < param_3) {
      while( true ) {
        puVar1 = (undefined8 *)(param_2 + __n);
        local_48 = *puVar1;
        uStack_40 = puVar1[1];
        local_38 = puVar1[2];
        uStack_30 = puVar1[3];
        local_28 = puVar1[4];
        uStack_20 = puVar1[5];
        local_18 = puVar1[6];
        uStack_10 = puVar1[7];
        SHA1Transform((uint *)param_1,(uchar *)(param_1 + 0x5c),(uchar *)&local_48,param_4);
        uVar2 = uVar5 + 0x7f;
        *puVar1 = local_48;
        puVar1[1] = uStack_40;
        uVar5 = uVar5 + 0x40;
        puVar1[2] = local_38;
        puVar1[3] = uStack_30;
        puVar1[4] = local_28;
        puVar1[5] = uStack_20;
        puVar1[6] = local_18;
        puVar1[7] = uStack_10;
        if (param_3 <= uVar2) break;
        __n = (ulong)uVar5;
      }
      __n = (ulong)uVar5;
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
    }
  }
  if (__n < param_3) {
    __dest = param_1 + uVar4 + 0x1c;
    __src = param_2 + __n;
    if (local_8 == ___stack_chk_guard) {
      memcpy(__dest,__src,param_3 - __n);
      return;
    }
  }
  else {
    __dest = (hash_context *)(local_8 - ___stack_chk_guard);
    __src = (uchar *)0x0;
    if (__dest == (hash_context *)0x0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__dest,__src);
}


