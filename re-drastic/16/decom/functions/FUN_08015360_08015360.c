/*
 * Ghidra decompilation
 *
 * Function : FUN_08015360
 * Address  : 08015360
 * Program  : drastic16
 */


void FUN_08015360(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = *(uint **)(param_1 + 0x180);
  param_3 = param_3 * 0x18;
  uVar2 = param_1 + param_3;
  if ((puVar3 == (uint *)0x0) || (uVar1 = *puVar3, param_2 <= uVar1)) {
    *(uint *)(param_1 + param_3) = param_2;
    *(uint **)(uVar2 + 0xc) = puVar3;
    *(undefined4 *)(uVar2 + 0x10) = 0;
    *(uint *)(param_1 + 0x180) = uVar2;
  }
  else {
    do {
      puVar4 = puVar3;
      puVar3 = (uint *)puVar4[3];
      param_2 = param_2 - uVar1;
      if (puVar3 == (uint *)0x0) break;
      uVar1 = *puVar3;
    } while (uVar1 < param_2);
    *(uint *)(param_1 + param_3) = param_2;
    *(uint **)(uVar2 + 0xc) = puVar3;
    *(uint **)(uVar2 + 0x10) = puVar4;
    puVar4[3] = uVar2;
  }
  if (puVar3 != (uint *)0x0) {
    puVar3[4] = uVar2;
    *puVar3 = *puVar3 - param_2;
  }
  return;
}


