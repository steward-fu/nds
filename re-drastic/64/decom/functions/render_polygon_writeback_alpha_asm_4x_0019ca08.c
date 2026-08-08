/*
 * Ghidra decompilation
 *
 * Function : render_polygon_writeback_alpha_asm_4x
 * Address  : 0019ca08
 * Program  : drastic64
 */


void render_polygon_writeback_alpha_asm_4x
               (long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
               undefined4 *param_6,undefined4 *param_7,undefined *param_8)

{
  bool bVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined uVar25;
  undefined uVar26;
  undefined uVar27;
  undefined uVar28;
  undefined uVar29;
  undefined uVar30;
  undefined uVar31;
  undefined uVar32;
  
  uVar2 = *(ushort *)(param_1 + 0x630);
  uVar6 = (uint)*(ushort *)(param_1 + 0x580);
  puVar5 = (undefined4 *)(param_3 + (ulong)uVar6 * 4);
  puVar4 = (undefined4 *)(param_2 + (ulong)uVar6 * 4);
  puVar3 = (undefined *)(param_4 + (ulong)uVar6);
  iVar8 = uVar2 - 8;
  iVar7 = iVar8;
  if (7 < uVar2) {
    do {
      uVar9 = *param_7;
      uVar10 = param_7[1];
      uVar11 = param_7[2];
      uVar12 = param_7[3];
      uVar13 = param_7[4];
      uVar14 = param_7[5];
      uVar15 = param_7[6];
      uVar16 = param_7[7];
      param_7 = param_7 + 8;
      uVar17 = *param_6;
      uVar18 = param_6[1];
      uVar19 = param_6[2];
      uVar20 = param_6[3];
      uVar21 = param_6[4];
      uVar22 = param_6[5];
      uVar23 = param_6[6];
      uVar24 = param_6[7];
      param_6 = param_6 + 8;
      uVar25 = *param_8;
      uVar26 = param_8[1];
      uVar27 = param_8[2];
      uVar28 = param_8[3];
      uVar29 = param_8[4];
      uVar30 = param_8[5];
      uVar31 = param_8[6];
      uVar32 = param_8[7];
      param_8 = param_8 + 8;
      iVar8 = iVar7 + -8;
      *puVar5 = uVar9;
      puVar5[1] = uVar10;
      puVar5[2] = uVar11;
      puVar5[3] = uVar12;
      puVar5[4] = uVar13;
      puVar5[5] = uVar14;
      puVar5[6] = uVar15;
      puVar5[7] = uVar16;
      puVar5 = puVar5 + 8;
      *puVar4 = uVar17;
      puVar4[1] = uVar18;
      puVar4[2] = uVar19;
      puVar4[3] = uVar20;
      puVar4[4] = uVar21;
      puVar4[5] = uVar22;
      puVar4[6] = uVar23;
      puVar4[7] = uVar24;
      puVar4 = puVar4 + 8;
      *puVar3 = uVar25;
      puVar3[1] = uVar26;
      puVar3[2] = uVar27;
      puVar3[3] = uVar28;
      puVar3[4] = uVar29;
      puVar3[5] = uVar30;
      puVar3[6] = uVar31;
      puVar3[7] = uVar32;
      puVar3 = puVar3 + 8;
      bVar1 = 7 < iVar7;
      iVar7 = iVar8;
    } while (iVar8 != 0 && bVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0019ca90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_0019cb70 + (long)(iVar8 + 8) * 4))
            ((0x200 - (uint)uVar2) - uVar6,*param_7,param_7[4],*param_6,param_6[4],*param_8,
             param_1 + 0x584);
  return;
}


