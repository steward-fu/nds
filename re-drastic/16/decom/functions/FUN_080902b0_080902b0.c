/*
 * Ghidra decompilation
 *
 * Function : FUN_080902b0
 * Address  : 080902b0
 * Program  : drastic16
 */


void FUN_080902b0(uint *param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int iVar8;
  
  do {
    uVar2 = *(undefined2 *)(param_2 + (param_1[1] & 0xffff));
    uVar3 = *(undefined2 *)(param_2 + (param_1[1] >> 0x10));
    uVar4 = *(undefined2 *)(param_2 + (param_1[2] & 0xffff));
    iVar8 = param_3 + -8;
    uVar5 = *(undefined2 *)(param_2 + (param_1[2] >> 0x10));
    uVar6 = *(undefined2 *)(param_2 + (param_1[3] & 0xffff));
    uVar7 = *(undefined2 *)(param_2 + (param_1[3] >> 0x10));
    *param_1 = CONCAT22(*(undefined2 *)(param_2 + (*param_1 >> 0x10)),
                        *(undefined2 *)(param_2 + (*param_1 & 0xffff)));
    param_1[1] = CONCAT22(uVar3,uVar2);
    param_1[2] = CONCAT22(uVar5,uVar4);
    param_1[3] = CONCAT22(uVar7,uVar6);
    param_1 = param_1 + 4;
    bVar1 = 7 < param_3;
    param_3 = iVar8;
  } while (iVar8 != 0 && bVar1);
  return;
}


