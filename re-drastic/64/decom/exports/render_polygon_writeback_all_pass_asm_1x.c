/*
 * Ghidra decompilation
 *
 * Function : render_polygon_writeback_all_pass_asm_1x
 * Address  : 0019b4c8
 * Program  : drastic64
 */


void render_polygon_writeback_all_pass_asm_1x
               (long param_1,long param_2,long param_3,int param_4,byte param_5,undefined4 *param_6,
               undefined4 *param_7)

{
  bool bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
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
  
  uVar2 = *(ushort *)(param_1 + 0x630);
  uVar5 = (uint)*(ushort *)(param_1 + 0x580);
  puVar4 = (undefined4 *)(param_3 + (ulong)uVar5 * 4);
  puVar3 = (undefined4 *)(param_2 + (ulong)uVar5 * 4);
  iVar7 = uVar2 - 8;
  iVar6 = iVar7;
  if (7 < uVar2) {
    do {
      uVar8 = *param_7;
      uVar9 = param_7[1];
      uVar10 = param_7[2];
      uVar11 = param_7[3];
      uVar12 = param_7[4];
      uVar13 = param_7[5];
      uVar14 = param_7[6];
      uVar15 = param_7[7];
      param_7 = param_7 + 8;
      uVar16 = *param_6;
      uVar17 = param_6[1];
      uVar18 = param_6[2];
      uVar19 = param_6[3];
      uVar20 = param_6[4];
      uVar21 = param_6[5];
      uVar22 = param_6[6];
      uVar23 = param_6[7];
      param_6 = param_6 + 8;
      iVar7 = iVar6 + -8;
      *puVar4 = CONCAT13((byte)((uint)uVar8 >> 0x18) | param_5,(int3)uVar8);
      puVar4[1] = CONCAT13((byte)((uint)uVar9 >> 0x18) | param_5,(int3)uVar9);
      puVar4[2] = CONCAT13((byte)((uint)uVar10 >> 0x18) | param_5,(int3)uVar10);
      puVar4[3] = CONCAT13((byte)((uint)uVar11 >> 0x18) | param_5,(int3)uVar11);
      puVar4[4] = CONCAT13((byte)((uint)uVar12 >> 0x18) | param_5,(int3)uVar12);
      puVar4[5] = CONCAT13((byte)((uint)uVar13 >> 0x18) | param_5,(int3)uVar13);
      puVar4[6] = CONCAT13((byte)((uint)uVar14 >> 0x18) | param_5,(int3)uVar14);
      puVar4[7] = CONCAT13((byte)((uint)uVar15 >> 0x18) | param_5,(int3)uVar15);
      puVar4 = puVar4 + 8;
      *puVar3 = uVar16;
      puVar3[1] = uVar17;
      puVar3[2] = uVar18;
      puVar3[3] = uVar19;
      puVar3[4] = uVar20;
      puVar3[5] = uVar21;
      puVar3[6] = uVar22;
      puVar3[7] = uVar23;
      puVar3 = puVar3 + 8;
      bVar1 = 7 < iVar6;
      iVar6 = iVar7;
    } while (iVar7 != 0 && bVar1);
  }
  iVar7 = iVar7 + 8;
                    /* WARNING: Could not recover jumptable at 0x0019b550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_0019b5fc + (long)iVar7 * 4))
            (CONCAT13((byte)((uint)*param_7 >> 0x18) | param_5,(int3)*param_7),
             CONCAT13((byte)((uint)param_7[4] >> 0x18) | param_5,(int3)param_7[4]),*param_6,
             param_6[4],param_1 + 0x584,puVar3,puVar4,param_4 + -1,(uint)param_5 << 0x18,
             param_6 + iVar7,param_7 + iVar7,(0x100 - (uint)uVar2) - uVar5);
  return;
}


