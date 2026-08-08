/*
 * Ghidra decompilation
 *
 * Function : select_save_config_local
 * Address  : 0017a910
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void select_save_config_local(long *param_1)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  undefined auStack_428 [1056];
  long local_8;
  
  lVar3 = *param_1;
  local_8 = ___stack_chk_guard;
  if (*(char *)(lVar3 + 0x8b380) != '\0') {
    puVar1 = (uint *)param_1[1];
    uVar2 = *(uint *)(param_1 + 10);
    *puVar1 = (uint)*(byte *)(param_1 + 0xb);
    puVar1[1] = (uint)*(byte *)((long)param_1 + 0x59);
    puVar1[2] = (uint)*(byte *)((long)param_1 + 0x5a);
    puVar1[3] = (uint)*(byte *)((long)param_1 + 0x5b);
    puVar1[4] = (uint)*(byte *)((long)param_1 + 0x5c);
    puVar1[5] = (uint)*(byte *)((long)param_1 + 0x5d);
    puVar1[6] = (uint)*(byte *)((long)param_1 + 0x5e);
    puVar1[7] = (uint)*(byte *)((long)param_1 + 0x5f);
    puVar1[8] = (uint)*(byte *)(param_1 + 0xc);
    puVar1[9] = (uint)*(byte *)((long)param_1 + 0x61);
    puVar1[10] = (uint)*(byte *)((long)param_1 + 0x62);
    if (1 < uVar2) {
      uVar2 = puVar1[0x113] | 2;
    }
    puVar1[0x113] = uVar2;
    __sprintf_chk(auStack_428,1,0x420,"%s.cfg",lVar3 + 0x8b380);
    save_config_file(*param_1,auStack_428,1);
  }
  lVar3 = param_1[2];
  if (*(code **)(lVar3 + 8) != (code *)0x0) {
    (**(code **)(lVar3 + 8))(param_1,lVar3,1);
  }
  lVar3 = *(long *)(lVar3 + 0x28);
  if (lVar3 == 0) {
    if (*(char *)(*param_1 + 0x8b380) != '\0') {
      *(undefined4 *)(param_1 + 9) = 1;
    }
  }
  else {
    if (*(code **)(lVar3 + 8) != (code *)0x0) {
      (**(code **)(lVar3 + 8))(param_1,lVar3,0);
    }
    param_1[2] = lVar3;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


