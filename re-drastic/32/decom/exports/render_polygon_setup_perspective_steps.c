/*
 * Ghidra decompilation
 *
 * Function : render_polygon_setup_perspective_steps
 * Address  : 080c1cd4
 * Program  : drastic
 */


void render_polygon_setup_perspective_steps
               (undefined8 *param_1,undefined (*param_2) [16],undefined (*param_3) [16],int param_4)

{
  bool bVar1;
  undefined (*pauVar2) [16];
  undefined (*pauVar3) [16];
  int iVar4;
  undefined (*pauVar5) [16];
  undefined (*pauVar6) [16];
  undefined (*pauVar7) [16];
  undefined (*pauVar8) [16];
  undefined8 uVar9;
  undefined auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  
  do {
    auVar10 = *param_2;
    pauVar5 = param_2 + 1;
    pauVar2 = param_2 + 2;
    auVar19 = *param_3;
    auVar18 = *param_3;
    auVar14 = *param_3;
    pauVar6 = param_3 + 1;
    pauVar3 = param_3 + 2;
    pauVar7 = param_2 + 3;
    param_2 = param_2 + 4;
    pauVar8 = param_3 + 3;
    param_3 = param_3 + 4;
    auVar14 = VectorReciprocalEstimate(auVar14,1);
    auVar15 = VectorReciprocalEstimate(*pauVar6,1);
    auVar16 = VectorReciprocalEstimate(*pauVar3,1);
    auVar17 = VectorReciprocalEstimate(*pauVar8,1);
    auVar18 = VectorReciprocalStep(auVar14,auVar18);
    auVar20 = VectorReciprocalStep(auVar15,*pauVar6);
    auVar21 = VectorReciprocalStep(auVar16,*pauVar3);
    auVar22 = VectorReciprocalStep(auVar17,*pauVar8);
    auVar14 = FloatVectorMult(auVar14,auVar18,2,0x20);
    auVar18 = FloatVectorMult(auVar15,auVar20,2,0x20);
    auVar15 = FloatVectorMult(auVar16,auVar21,2,0x20);
    auVar16 = FloatVectorMult(auVar17,auVar22,2,0x20);
    auVar19 = VectorReciprocalStep(auVar14,auVar19);
    auVar17 = VectorReciprocalStep(auVar18,*pauVar6);
    auVar20 = VectorReciprocalStep(auVar15,*pauVar3);
    auVar21 = VectorReciprocalStep(auVar16,*pauVar8);
    auVar14 = FloatVectorMult(auVar14,auVar19,2,0x20);
    auVar18 = FloatVectorMult(auVar18,auVar17,2,0x20);
    auVar19 = FloatVectorMult(auVar15,auVar20,2,0x20);
    auVar15 = FloatVectorMult(auVar16,auVar21,2,0x20);
    auVar10 = FloatVectorMult(auVar10,auVar14,2,0x20);
    auVar14 = FloatVectorMult(*pauVar5,auVar18,2,0x20);
    auVar18 = FloatVectorMult(*pauVar2,auVar19,2,0x20);
    auVar19 = FloatVectorMult(*pauVar7,auVar15,2,0x20);
    auVar10 = FPToFixed(auVar10,0x20,0x20,0xf,0,3);
    auVar14 = FPToFixed(auVar14,0x20,0x20,0xf,0,3);
    auVar18 = FPToFixed(auVar18,0x20,0x20,0xf,0,3);
    auVar19 = FPToFixed(auVar19,0x20,0x20,0xf,0,3);
    uVar9 = VectorCopyNarrow(auVar10,4);
    uVar11 = VectorCopyNarrow(auVar14,4);
    uVar12 = VectorCopyNarrow(auVar18,4);
    uVar13 = VectorCopyNarrow(auVar19,4);
    *param_1 = uVar9;
    param_1[1] = uVar11;
    param_1[2] = uVar12;
    param_1[3] = uVar13;
    param_1 = param_1 + 4;
    iVar4 = param_4 + -0x10;
    bVar1 = 0xf < param_4;
    param_4 = iVar4;
  } while (iVar4 != 0 && bVar1);
  return;
}


