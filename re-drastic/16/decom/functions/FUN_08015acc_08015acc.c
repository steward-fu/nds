/*
 * Ghidra decompilation
 *
 * Function : FUN_08015acc
 * Address  : 08015acc
 * Program  : drastic16
 */


void FUN_08015acc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  
  puVar2 = *(uint **)(param_1 + 0x198);
  uVar3 = *(uint *)(param_1 + 8);
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar5 = *puVar2;
  *(uint *)(param_1 + 8) = uVar3 + uVar1;
  *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)CARRY4(uVar3,uVar1);
  if (uVar1 < uVar5) {
    *puVar2 = uVar5 - uVar1;
    return;
  }
  do {
    uVar3 = puVar2[3];
    pcVar4 = (code *)puVar2[1];
    uVar1 = puVar2[2];
    *(uint *)(param_1 + 0x198) = uVar3;
    (*pcVar4)(param_1,uVar1,uVar3,pcVar4,param_4);
    puVar2 = *(uint **)(param_1 + 0x198);
    if (puVar2 == (uint *)0x0) {
      return;
    }
    puVar2[4] = 0;
  } while (*puVar2 == 0);
  return;
}


