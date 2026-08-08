/*
 * Ghidra decompilation
 *
 * Function : luaX_setinput
 * Address  : 0021a6d0
 * Program  : drastic64
 */


void luaX_setinput(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  *param_2 = param_5;
  *(undefined8 *)(param_2 + 1) = 0x100000001;
  param_2[4] = 0;
  param_2[8] = 0x121;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0xe) = param_1;
  *(undefined8 *)(param_2 + 0x10) = param_3;
  *(undefined8 *)(param_2 + 0x18) = param_4;
  *(undefined *)(param_2 + 0x1c) = 0x2e;
  uVar1 = luaS_new(param_1,&DAT_00229790);
  puVar5 = *(undefined8 **)(param_2 + 0x12);
  uVar2 = *puVar5;
  uVar4 = puVar5[2];
  *(undefined8 *)(param_2 + 0x1a) = uVar1;
  uVar1 = luaM_realloc_(*(undefined8 *)(param_2 + 0xe),uVar2,uVar4,0x20);
  lVar3 = *(long *)(param_2 + 0x12);
  *puVar5 = uVar1;
  *(undefined8 *)(lVar3 + 0x10) = 0x20;
  return;
}


