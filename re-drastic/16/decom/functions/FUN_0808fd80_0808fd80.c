/*
 * Ghidra decompilation
 *
 * Function : FUN_0808fd80
 * Address  : 0808fd80
 * Program  : drastic16
 */


void FUN_0808fd80(int param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  
  uVar4 = param_3 - *(short *)(param_1 + 0x40);
  iVar3 = *(int *)(param_1 + 0x30);
  if ((*(uint *)(param_1 + 0x4c) & 0x100) != 0) {
    uVar4 = -uVar4;
  }
  uVar7 = (*(uint *)(param_1 + 0x4c) << 9) >> 0x1c;
  puVar6 = (undefined8 *)
           ((int)(short)(uVar4 >> 3) * (int)*(short *)(param_1 + 0x3c) +
           *(int *)(param_1 + 0x34) + (uVar4 & 7) * 8);
  uVar1 = SIMDExpandImmediate(0,0xe,0xff);
  do {
    uVar4 = *(uint *)((int)puVar6 + 4);
    uVar5 = *(uint *)puVar6;
    uVar8 = vrev(*puVar6,1);
    puVar6 = puVar6 + -8;
    uVar8 = VectorTest(uVar8,uVar1);
    uVar7 = uVar7 - 1;
    auVar9._2_2_ = *(undefined2 *)(iVar3 + (uVar4 >> 0xf & 0x1fe));
    auVar9._0_2_ = *(undefined2 *)(iVar3 + (uVar4 >> 0x17 & 0x1fe));
    auVar9._6_2_ = *(undefined2 *)(iVar3 + (uVar4 & 0xff) * 2);
    auVar9._4_2_ = *(undefined2 *)(iVar3 + (uVar4 >> 7 & 0x1fe));
    auVar9._10_2_ = *(undefined2 *)(iVar3 + (uVar5 >> 0xf & 0x1fe));
    auVar9._8_2_ = *(undefined2 *)(iVar3 + (uVar5 >> 0x17 & 0x1fe));
    auVar9._14_2_ = *(undefined2 *)(iVar3 + (uVar5 & 0xff) * 2);
    auVar9._12_2_ = *(undefined2 *)(iVar3 + (uVar5 >> 7 & 0x1fe));
    uVar8 = VectorShiftLeft(uVar8,7,8,0);
    auVar2 = SIMDExpandImmediate(1,0xb,0x80);
    auVar10 = VectorShiftLongLeft(uVar8,1);
    auVar10 = auVar9 & ~auVar2 | auVar10;
    *param_2 = auVar10._0_8_;
    param_2[1] = auVar10._8_8_;
    param_2 = param_2 + 2;
  } while (uVar7 != 0);
  return;
}


