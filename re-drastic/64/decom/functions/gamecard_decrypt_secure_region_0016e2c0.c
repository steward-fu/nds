/*
 * Ghidra decompilation
 *
 * Function : gamecard_decrypt_secure_region
 * Address  : 0016e2c0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gamecard_decrypt_secure_region(long *param_1,uint param_2,void *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  uint *puVar6;
  uint local_1070;
  uint local_106c;
  uint local_1068;
  uint local_1060 [17];
  uint auStack_101c [769];
  int aiStack_418 [256];
  long local_18;
  undefined local_10;
  long local_8;
  uint *puVar7;
  
  local_1068 = param_2 * 2;
  local_106c = param_2 >> 1;
  local_8 = ___stack_chk_guard;
  local_1070 = param_2;
  memcpy(local_1060,param_3,0x1048);
  gamecard_apply_keycode(local_1060,&local_1070);
  gamecard_apply_keycode(local_1060,&local_1070);
  gamecard_decrypt_pair(local_1060,param_1);
  local_106c = local_106c * 2;
  local_1068 = local_1068 >> 1;
  gamecard_apply_keycode(local_1060,&local_1070);
  gamecard_decrypt_pair(local_1060,param_1);
  local_18 = *param_1;
  local_10 = 0;
  if (*param_1 == 0x6a624f7972636e65) {
    plVar5 = param_1 + 1;
    do {
      uVar3 = *(uint *)((long)plVar5 + 4);
      puVar6 = auStack_101c;
      uVar4 = *(uint *)plVar5;
      do {
        puVar7 = puVar6 + -1;
        uVar1 = uVar3 ^ *puVar6;
        uVar3 = (local_1060[(uVar1 >> 0x18) + 0x12] +
                 local_1060[((ulong)(uVar1 >> 0x10) & 0xff) + 0x112] ^
                local_1060[((ulong)(uVar1 >> 8) & 0xff) + 0x212]) + aiStack_418[(byte)uVar1] ^ uVar4
        ;
        puVar6 = puVar7;
        uVar4 = uVar1;
      } while (puVar7 != local_1060 + 1);
      *(uint *)plVar5 = uVar3 ^ local_1060[1];
      *(uint *)((long)plVar5 + 4) = uVar1 ^ local_1060[0];
      plVar5 = plVar5 + 1;
    } while (plVar5 != param_1 + 0x100);
    uVar2 = 0;
    *param_1 = -0x1800210018002101;
  }
  else {
    __printf_chk(1,"ERROR: Secure area ID should contain \'encryObj\', instead contains \'%s\'\n",
                 &local_18);
    uVar2 = 0xffffffff;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2,local_8 - ___stack_chk_guard,0);
}


