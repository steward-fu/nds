/*
 * Ghidra decompilation
 *
 * Function : FUN_08061e3c
 * Address  : 08061e3c
 * Program  : drastic16
 */


void FUN_08061e3c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  
  puVar3 = (undefined8 *)param_1[1];
  if (param_1 + 0xe < (undefined8 *)((int)puVar3 + 0x2c) &&
      puVar3 < (undefined8 *)((int)param_1 + 0x43U)) {
    *(uint *)puVar3 = (uint)*(byte *)(param_1 + 0xe);
    *(uint *)((int)puVar3 + 4) = (uint)*(byte *)((int)param_1 + 0x39);
    *(uint *)(puVar3 + 1) = (uint)*(byte *)((int)param_1 + 0x3a);
    *(uint *)((int)puVar3 + 0xc) = (uint)*(byte *)((int)param_1 + 0x3b);
    *(uint *)(puVar3 + 2) = (uint)*(byte *)(param_1 + 0xf);
    *(uint *)((int)puVar3 + 0x14) = (uint)*(byte *)((int)param_1 + 0x3d);
    *(uint *)(puVar3 + 3) = (uint)*(byte *)((int)param_1 + 0x3e);
    *(uint *)((int)puVar3 + 0x1c) = (uint)*(byte *)((int)param_1 + 0x3f);
  }
  else {
    auVar4 = VectorCopyLong(*(undefined8 *)(param_1 + 0xe),1,1);
    auVar5 = VectorCopyLong(auVar4._0_8_,2,1);
    auVar4 = VectorCopyLong(auVar4._8_8_,2,1);
    *puVar3 = auVar5._0_8_;
    puVar3[1] = auVar5._8_8_;
    puVar3[2] = auVar4._0_8_;
    puVar3[3] = auVar4._8_8_;
  }
  iVar1 = *param_1;
  *(uint *)(puVar3 + 4) = (uint)*(byte *)(param_1 + 0x10);
  *(uint *)((int)puVar3 + 0x24) = (uint)*(byte *)((int)param_1 + 0x41);
  *(uint *)(puVar3 + 5) = (uint)*(byte *)((int)param_1 + 0x42);
  uVar2 = param_1[0xc];
  if (1 < uVar2) {
    uVar2 = *(uint *)((int)puVar3 + 0x44c) | 2;
  }
  *(uint *)((int)puVar3 + 0x44c) = uVar2;
  FUN_08067584(iVar1,"drastic.cfg",uVar2,puVar3,param_4);
  iVar1 = param_1[2];
  if (*(code **)(iVar1 + 4) != (code *)0x0) {
    (**(code **)(iVar1 + 4))(param_1,iVar1,1);
  }
  iVar1 = *(int *)(iVar1 + 0x1c);
  if (iVar1 == 0) {
    if (*(char *)(*param_1 + 0x82830) != '\0') {
      param_1[10] = 1;
    }
    return;
  }
  if (*(code **)(iVar1 + 4) != (code *)0x0) {
    (**(code **)(iVar1 + 4))(param_1,iVar1,0);
  }
  param_1[2] = iVar1;
  return;
}


