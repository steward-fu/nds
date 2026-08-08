/*
 * Ghidra decompilation
 *
 * Function : spu_clamp_block
 * Address  : 0016c600
 * Program  : drastic64
 */


void spu_clamp_block(undefined8 *param_1,undefined (*param_2) [16],uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined (*pauVar4) [16];
  undefined8 *puVar5;
  uint uVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  
  if (param_3 != 0) {
    if (param_3 - 1 < 7) {
      uVar6 = 0;
    }
    else {
      pauVar4 = param_2;
      puVar5 = param_1;
      do {
        auVar11 = *pauVar4;
        auVar9 = pauVar4[1];
        pauVar4 = pauVar4 + 2;
        auVar10._0_4_ = auVar11._0_4_ >> 0xc;
        auVar10._4_4_ = auVar11._4_4_ >> 0xc;
        auVar10._8_4_ = auVar11._8_4_ >> 0xc;
        auVar10._12_4_ = auVar11._12_4_ >> 0xc;
        auVar7._0_4_ = auVar9._0_4_ >> 0xc;
        auVar7._4_4_ = auVar9._4_4_ >> 0xc;
        auVar7._8_4_ = auVar9._8_4_ >> 0xc;
        auVar7._12_4_ = auVar9._12_4_ >> 0xc;
        auVar8._8_4_ = 0xffff8000;
        auVar8._0_8_ = 0xffff8000ffff8000;
        auVar8._12_4_ = 0xffff8000;
        auVar11 = NEON_smax(auVar10,auVar8,4);
        auVar12._8_4_ = 0xffff8000;
        auVar12._0_8_ = 0xffff8000ffff8000;
        auVar12._12_4_ = 0xffff8000;
        auVar8 = NEON_smax(auVar7,auVar12,4);
        auVar9._8_4_ = 0x7fff;
        auVar9._0_8_ = 0x7fff00007fff;
        auVar9._12_4_ = 0x7fff;
        auVar12 = NEON_smin(auVar11,auVar9,4);
        auVar11._8_4_ = 0x7fff;
        auVar11._0_8_ = 0x7fff00007fff;
        auVar11._12_4_ = 0x7fff;
        auVar9 = NEON_smin(auVar8,auVar11,4);
        puVar5[1] = CONCAT26(auVar9._12_2_,
                             CONCAT24(auVar9._8_2_,CONCAT22(auVar9._4_2_,auVar9._0_2_)));
        *puVar5 = CONCAT26(auVar12._12_2_,
                           CONCAT24(auVar12._8_2_,CONCAT22(auVar12._4_2_,auVar12._0_2_)));
        puVar5 = puVar5 + 2;
      } while (pauVar4 != param_2 + (ulong)((param_3 >> 3) - 1) * 2 + 2);
      uVar6 = param_3 & 0xfffffff8;
      if ((param_3 & 7) == 0) {
        return;
      }
    }
    uVar1 = uVar6 + 1;
    iVar3 = *(int *)(*param_2 + (ulong)uVar6 * 4) >> 0xc;
    if (iVar3 < -0x8000) {
      iVar3 = -0x8000;
    }
    if (0x7fff < iVar3) {
      iVar3 = 0x7fff;
    }
    *(short *)((long)param_1 + (ulong)uVar6 * 2) = (short)iVar3;
    if (uVar1 < param_3) {
      uVar2 = uVar6 + 2;
      iVar3 = *(int *)(*param_2 + (ulong)uVar1 * 4) >> 0xc;
      if (iVar3 < -0x8000) {
        iVar3 = -0x8000;
      }
      if (0x7fff < iVar3) {
        iVar3 = 0x7fff;
      }
      *(short *)((long)param_1 + (ulong)uVar1 * 2) = (short)iVar3;
      if (uVar2 < param_3) {
        uVar1 = uVar6 + 3;
        iVar3 = *(int *)(*param_2 + (ulong)uVar2 * 4) >> 0xc;
        if (iVar3 < -0x8000) {
          iVar3 = -0x8000;
        }
        if (0x7fff < iVar3) {
          iVar3 = 0x7fff;
        }
        *(short *)((long)param_1 + (ulong)uVar2 * 2) = (short)iVar3;
        if (uVar1 < param_3) {
          uVar2 = uVar6 + 4;
          iVar3 = *(int *)(*param_2 + (ulong)uVar1 * 4) >> 0xc;
          if (iVar3 < -0x8000) {
            iVar3 = -0x8000;
          }
          if (0x7fff < iVar3) {
            iVar3 = 0x7fff;
          }
          *(short *)((long)param_1 + (ulong)uVar1 * 2) = (short)iVar3;
          if (uVar2 < param_3) {
            uVar1 = uVar6 + 5;
            iVar3 = *(int *)(*param_2 + (ulong)uVar2 * 4) >> 0xc;
            if (iVar3 < -0x8000) {
              iVar3 = -0x8000;
            }
            if (0x7fff < iVar3) {
              iVar3 = 0x7fff;
            }
            *(short *)((long)param_1 + (ulong)uVar2 * 2) = (short)iVar3;
            if (uVar1 < param_3) {
              uVar6 = uVar6 + 6;
              iVar3 = *(int *)(*param_2 + (ulong)uVar1 * 4) >> 0xc;
              if (iVar3 < -0x8000) {
                iVar3 = -0x8000;
              }
              if (0x7fff < iVar3) {
                iVar3 = 0x7fff;
              }
              *(short *)((long)param_1 + (ulong)uVar1 * 2) = (short)iVar3;
              if (uVar6 < param_3) {
                iVar3 = *(int *)(*param_2 + (ulong)uVar6 * 4) >> 0xc;
                if (iVar3 < -0x8000) {
                  iVar3 = -0x8000;
                }
                if (0x7fff < iVar3) {
                  iVar3 = 0x7fff;
                }
                *(short *)((long)param_1 + (ulong)uVar6 * 2) = (short)iVar3;
              }
            }
          }
        }
      }
    }
  }
  return;
}


