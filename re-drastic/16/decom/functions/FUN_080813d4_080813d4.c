/*
 * Ghidra decompilation
 *
 * Function : FUN_080813d4
 * Address  : 080813d4
 * Program  : drastic16
 */


void FUN_080813d4(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int local_20 [3];
  
  if (param_2 == 0xf) {
    uVar4 = *(uint *)(*(int *)(param_1 + 0x4d8) + 4);
    iVar1 = FUN_080800fc(param_1,0xfe,param_3,local_20);
    puVar3 = *(uint **)(param_1 + 0x4ac);
    *(uint *)(param_1 + (iVar1 + 0x80) * 8) = uVar4;
    *puVar3 = uVar4 & 0xfff | 0xe3000000 | ((uVar4 << 0x10) >> 0x1c) << 0x10 | iVar1 << 0xc;
    *(uint **)(param_1 + 0x4ac) = puVar3 + 1;
    if (uVar4 >> 0x10 != 0) {
      puVar3[1] = uVar4 >> 0x10 & 0xfff | (uVar4 >> 0x1c) << 0x10 | 0xe3400000 | iVar1 << 0xc;
      *(uint **)(param_1 + 0x4ac) = puVar3 + 2;
      return;
    }
  }
  else {
    iVar1 = FUN_080800fc();
    if (local_20[0] != 0) {
      puVar3 = *(uint **)(param_1 + 0x4ac);
      uVar4 = (param_2 + 0x3fffffeb) * 4;
      if ((int)uVar4 < 0) {
        uVar4 = (param_2 + 0x3fffffeb) * -4;
        uVar2 = 0;
      }
      else {
        uVar2 = 0x800000;
      }
      *puVar3 = iVar1 << 0xc | 0xe51b0000U | uVar2 | uVar4;
      *(uint **)(param_1 + 0x4ac) = puVar3 + 1;
    }
  }
  return;
}


