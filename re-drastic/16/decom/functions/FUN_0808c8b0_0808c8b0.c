/*
 * Ghidra decompilation
 *
 * Function : FUN_0808c8b0
 * Address  : 0808c8b0
 * Program  : drastic16
 */


void FUN_0808c8b0(undefined4 *param_1,uint *param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  uint uVar7;
  
  do {
    param_4 = param_4 + -8;
    uVar7 = param_2[3];
    uVar1 = *(undefined2 *)(param_3 + (param_2[1] & 0xfff) * 2);
    uVar2 = *(undefined2 *)(param_3 + (param_2[1] >> 0xf & 0x1ffe));
    uVar3 = *(undefined2 *)(param_3 + (param_2[2] & 0xfff) * 2);
    uVar4 = *(undefined2 *)(param_3 + (param_2[2] >> 0xf & 0x1ffe));
    uVar5 = *(undefined2 *)(param_3 + (uVar7 & 0xfff) * 2);
    *param_1 = CONCAT22(*(undefined2 *)(param_3 + (*param_2 >> 0xf & 0x1ffe)),
                        *(undefined2 *)(param_3 + (*param_2 & 0xfff) * 2));
    uVar6 = *(undefined2 *)(param_3 + (uVar7 >> 0xf & 0x1ffe));
    param_1[1] = CONCAT22(uVar2,uVar1);
    param_1[2] = CONCAT22(uVar4,uVar3);
    param_2 = param_2 + 4;
    param_1[3] = CONCAT22(uVar6,uVar5);
    param_1 = param_1 + 4;
  } while (-1 < param_4);
  return;
}


