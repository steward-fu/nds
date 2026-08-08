/*
 * Ghidra decompilation
 *
 * Function : luaT_callTM
 * Address  : 002018e0
 * Program  : drastic64
 */


void luaT_callTM(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5,int param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  uVar4 = param_2[1];
  lVar5 = *(long *)(param_1 + 0x38);
  *puVar3 = *param_2;
  puVar3[1] = uVar4;
  uVar4 = param_3[1];
  puVar3[2] = *param_3;
  puVar3[3] = uVar4;
  uVar4 = *param_4;
  uVar1 = param_4[1];
  *(undefined8 **)(param_1 + 0x10) = puVar3 + 6;
  puVar3[4] = uVar4;
  puVar3[5] = uVar1;
  lVar2 = *(long *)(param_1 + 0x20);
  if (param_6 == 0) {
    uVar4 = *param_5;
    uVar1 = param_5[1];
    *(undefined8 **)(param_1 + 0x10) = puVar3 + 8;
    puVar3[6] = uVar4;
    puVar3[7] = uVar1;
    luaD_call(param_1,puVar3,0,*(byte *)(lVar2 + 0x42) & 2);
    return;
  }
  luaD_call(param_1,puVar3 + 6 + (long)(4 - param_6) * -2,param_6,*(byte *)(lVar2 + 0x42) & 2);
  lVar2 = *(long *)(param_1 + 0x10);
  param_5 = (undefined8 *)((long)param_5 + (*(long *)(param_1 + 0x38) - lVar5));
  *(long *)(param_1 + 0x10) = lVar2 + -0x10;
  uVar4 = *(undefined8 *)(lVar2 + -8);
  *param_5 = *(undefined8 *)(lVar2 + -0x10);
  param_5[1] = uVar4;
  return;
}


