/*
 * Ghidra decompilation
 *
 * Function : FUN_080c8f14
 * Address  : 080c8f14
 * Program  : drastic16
 */


void FUN_080c8f14(int param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = FUN_080e2c58(param_1 + 4);
  iVar4 = FUN_080c9578(param_1,uVar3,5,&DAT_08101ef0,&DAT_08101f10);
  while( true ) {
    uVar2 = *(ushort *)(param_1 + (iVar4 + 0x292c) * 2 + 2);
    *(uint *)(param_1 + 0x575c) = (uint)(uVar2 >> 8);
    uVar5 = uVar2 + 1;
    uVar6 = uVar2 & 0xff;
    bVar1 = *(byte *)(param_1 + uVar6 + 0x565a);
    *(byte *)(param_1 + uVar6 + 0x565a) = bVar1 + 1;
    if ((uVar5 & 0xff) != 0) break;
    FUN_080c9388(param_1,param_1 + 0x525a,param_1 + 0x565a);
  }
  *(undefined2 *)(param_1 + (iVar4 + 0x292c) * 2 + 2) =
       *(undefined2 *)(param_1 + (bVar1 + 0x292c) * 2 + 2);
  *(short *)(param_1 + (bVar1 + 0x292c) * 2 + 2) = (short)uVar5;
  return;
}


