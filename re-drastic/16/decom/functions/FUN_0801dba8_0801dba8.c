/*
 * Ghidra decompilation
 *
 * Function : FUN_0801dba8
 * Address  : 0801dba8
 * Program  : drastic16
 */


void FUN_0801dba8(int *param_1,uint param_2,int param_3,uint param_4)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  
  iVar5 = param_2 * 0x4000;
  iVar4 = *(int *)(*param_1 + 0x15034);
  FUN_0800a1fc(*(undefined4 *)(*param_1 + 0xfba2c),iVar5 + 0x6000000,param_3 << 0xe);
  iVar4 = iVar4 + param_2 * -0x4000;
  piVar6 = param_1 + param_2 + 0x2d;
  puVar3 = (ushort *)((int)param_1 + param_2 * 2 + 0x1158);
  do {
    while( true ) {
      bVar7 = param_2 < 0x200;
      uVar1 = *puVar3 & ~(ushort)(1 << (param_4 & 0xff));
      *puVar3 = uVar1;
      piVar6 = piVar6 + 1;
      *piVar6 = iVar4;
      iVar4 = iVar4 + -0x4000;
      *(undefined *)((int)param_1 + param_2 + 0x1958) = 0;
      param_2 = param_2 + 1;
      *(ushort *)(param_1 + 0x765) = uVar1 | *(ushort *)(param_1 + 0x765);
      if (bVar7) break;
      param_3 = param_3 + -1;
      iVar5 = iVar5 + 0x4000;
      puVar3 = puVar3 + 1;
      if (param_3 == 0) {
        return;
      }
    }
    iVar2 = *(int *)(*param_1 + 0xfc814) + iVar5;
    iVar5 = iVar5 + 0x4000;
    FUN_08009808(*param_1,iVar2,0x4000,0xa4000);
    param_3 = param_3 + -1;
    puVar3 = puVar3 + 1;
  } while (param_3 != 0);
  return;
}


