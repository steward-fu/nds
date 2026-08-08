/*
 * Ghidra decompilation
 *
 * Function : FUN_0808ef40
 * Address  : 0808ef40
 * Program  : drastic16
 */


/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0808ef40(int param_1,undefined (*param_2) [16],undefined8 *param_3)

{
  undefined8 uVar1;
  undefined uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  
  SIMDExpandImmediate(0,0,0xff);
  iVar6 = 0x10;
  SIMDExpandImmediate(0,0,0xff);
  iVar5 = (*(ushort *)(param_1 + 0x86) & 0x1f) * -2 + 0x20;
  if (iVar5 < 0) {
    do {
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      param_3[6] = 0;
      param_3[7] = 0;
      param_3 = param_3 + 8;
      iVar6 = iVar6 + -2;
    } while (iVar6 != 0);
    return;
  }
  uVar2 = (undefined)iVar5;
  uVar3 = CONCAT11(uVar2,uVar2);
  uVar4 = CONCAT22(uVar3,uVar3);
  uVar1 = CONCAT44(uVar4,uVar4);
  auVar10 = VectorMultiply(SUB168(param_2[0x20],0),uVar1,1,1);
  auVar11 = VectorMultiply(SUB168(param_2[0x10],0),uVar1,1,1);
  auVar12 = VectorMultiply(SUB168(*param_2,0),uVar1,1,1);
  auVar7 = VectorMultiply(SUB168(param_2[0x20],8),uVar1,1,1);
  auVar8 = VectorMultiply(SUB168(param_2[0x10],8),uVar1,1,1);
  auVar9 = VectorMultiply(SUB168(*param_2,8),uVar1,1,1);
  VectorRoundShiftRightNarrow(auVar10,3);
  VectorRoundShiftRightNarrow(auVar11,3);
  VectorRoundShiftRightNarrow(auVar12,3);
  VectorRoundShiftRightNarrow(auVar7,3);
  VectorRoundShiftRightNarrow(auVar8,3);
  VectorRoundShiftRightNarrow(auVar9,3);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


