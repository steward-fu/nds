/*
 * Ghidra decompilation
 *
 * Function : FUN_0801464c
 * Address  : 0801464c
 * Program  : drastic16
 */


void FUN_0801464c(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar4 = *(uint **)(param_1 + 0x198);
  uVar2 = 0x80 - (*(uint *)(param_1 + 8) & 0x7f);
  uVar3 = param_1 + 0x48;
  if ((puVar4 == (uint *)0x0) || (uVar1 = *puVar4, uVar2 <= uVar1)) {
    *(uint *)(param_1 + 0x48) = uVar2;
    *(uint **)(param_1 + 0x54) = puVar4;
    *(uint *)(param_1 + 0x198) = uVar3;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  else {
    do {
      puVar5 = puVar4;
      puVar4 = (uint *)puVar5[3];
      uVar2 = uVar2 - uVar1;
      if (puVar4 == (uint *)0x0) break;
      uVar1 = *puVar4;
    } while (uVar1 < uVar2);
    *(uint *)(param_1 + 0x48) = uVar2;
    *(uint **)(param_1 + 0x54) = puVar4;
    *(uint **)(param_1 + 0x58) = puVar5;
    puVar5[3] = uVar3;
  }
  if (puVar4 != (uint *)0x0) {
    puVar4[4] = uVar3;
    *puVar4 = *puVar4 - uVar2;
  }
  return;
}


