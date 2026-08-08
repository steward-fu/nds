/*
 * Ghidra decompilation
 *
 * Function : select_save_config_global
 * Address  : 0017a800
 * Program  : drastic64
 */


void select_save_config_global(long *param_1)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = (uint *)param_1[1];
  uVar3 = *(uint *)(param_1 + 10);
  *puVar2 = (uint)*(byte *)(param_1 + 0xb);
  puVar2[1] = (uint)*(byte *)((long)param_1 + 0x59);
  puVar2[2] = (uint)*(byte *)((long)param_1 + 0x5a);
  puVar2[3] = (uint)*(byte *)((long)param_1 + 0x5b);
  puVar2[4] = (uint)*(byte *)((long)param_1 + 0x5c);
  puVar2[5] = (uint)*(byte *)((long)param_1 + 0x5d);
  puVar2[6] = (uint)*(byte *)((long)param_1 + 0x5e);
  puVar2[7] = (uint)*(byte *)((long)param_1 + 0x5f);
  puVar2[8] = (uint)*(byte *)(param_1 + 0xc);
  puVar2[9] = (uint)*(byte *)((long)param_1 + 0x61);
  puVar2[10] = (uint)*(byte *)((long)param_1 + 0x62);
  if (1 < uVar3) {
    uVar3 = puVar2[0x113] | 2;
  }
  lVar1 = *param_1;
  puVar2[0x113] = uVar3;
  save_config_file(lVar1,"drastic.cfg",0);
  lVar1 = param_1[2];
  if (*(code **)(lVar1 + 8) != (code *)0x0) {
    (**(code **)(lVar1 + 8))(param_1,lVar1,1);
  }
  lVar1 = *(long *)(lVar1 + 0x28);
  if (lVar1 == 0) {
    if (*(char *)(*param_1 + 0x8b380) != '\0') {
      *(undefined4 *)(param_1 + 9) = 1;
      return;
    }
  }
  else {
    if (*(code **)(lVar1 + 8) != (code *)0x0) {
      (**(code **)(lVar1 + 8))(param_1,lVar1,0);
    }
    param_1[2] = lVar1;
  }
  return;
}


