/*
 * Ghidra decompilation
 *
 * Function : FUN_080352b8
 * Address  : 080352b8
 * Program  : drastic16
 */


void FUN_080352b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar1 = *(undefined2 *)(*(int *)(param_1 + 0xc) + 0x24);
  uVar2 = *(undefined2 *)(*(int *)(param_1 + 0xc) + 0x26);
  switch(*(ushort *)(param_1 + 2) & 0xf) {
  case 1:
  case 9:
    FUN_08091a90(param_2,param_3,param_4,uVar1,uVar2,param_5);
    return;
  case 2:
  case 6:
    FUN_08091b78(param_2,param_3,param_4,uVar1,uVar2,param_5);
    return;
  case 3:
    FUN_08091be4(param_2,param_3,param_4,uVar1,uVar2,param_5);
    return;
  default:
    FUN_08091a1c(param_2,param_3,param_4,uVar1,uVar2,param_5);
    return;
  case 5:
  case 0xd:
    FUN_08091afc(param_2,param_3,param_4,uVar1,uVar2,param_5);
    return;
  case 7:
    FUN_08091c48(param_2,param_3,param_4,uVar1,uVar2,param_5);
    return;
  case 10:
  case 0xe:
    FUN_08091cbc(param_2,param_3,param_4,uVar1,uVar2,param_5);
    return;
  case 0xb:
    FUN_08091d38(param_2,param_3,param_4,uVar1,uVar2,param_5);
    return;
  case 0xf:
    FUN_08091dac(param_2,param_3,param_4,uVar1,uVar2,param_5);
    return;
  }
}


