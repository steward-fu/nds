/*
 * Ghidra decompilation
 *
 * Function : FUN_0808fe50
 * Address  : 0808fe50
 * Program  : drastic16
 */


void FUN_0808fe50(int param_1,undefined8 *param_2,short param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_3 = param_3 - *(short *)(param_1 + 0x40);
  if ((*(uint *)(param_1 + 0x4c) & 0x100) != 0) {
    param_3 = -param_3;
  }
  uVar2 = (*(uint *)(param_1 + 0x4c) << 9) >> 0x1c;
  puVar1 = (undefined8 *)((int)param_3 * (int)*(short *)(param_1 + 0x3c) + *(int *)(param_1 + 0x34))
  ;
  do {
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    puVar1 = puVar1 + 2;
    uVar2 = uVar2 - 1;
    *param_2 = uVar3;
    param_2[1] = uVar4;
    param_2 = param_2 + 2;
  } while (uVar2 != 0);
  return;
}


