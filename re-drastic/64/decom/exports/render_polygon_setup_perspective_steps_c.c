/*
 * Ghidra decompilation
 *
 * Function : render_polygon_setup_perspective_steps_c
 * Address  : 001440e0
 * Program  : drastic64
 */


void render_polygon_setup_perspective_steps_c
               (undefined8 *param_1,long param_2,long param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (param_4 != 0) {
    if (param_4 - 1 < 7) {
      uVar4 = 0;
      uVar6 = 0;
    }
    else {
      lVar5 = 0x10;
      puVar7 = param_1;
      do {
        uVar12 = ((undefined8 *)(param_3 + lVar5))[1];
        uVar11 = *(undefined8 *)(param_3 + lVar5);
        auVar8 = *(undefined (*) [16])(param_2 + -0x10 + lVar5);
        puVar3 = (undefined8 *)(param_3 + -0x10 + lVar5);
        uVar14 = puVar3[1];
        uVar13 = *puVar3;
        auVar10 = *(undefined (*) [16])(param_2 + lVar5);
        lVar5 = lVar5 + 0x20;
        auVar9._0_4_ = auVar8._0_4_ / (float)uVar13;
        auVar9._4_4_ = auVar8._4_4_ / (float)((ulong)uVar13 >> 0x20);
        auVar9._8_4_ = auVar8._8_4_ / (float)uVar14;
        auVar9._12_4_ = auVar8._12_4_ / (float)((ulong)uVar14 >> 0x20);
        auVar8._0_4_ = auVar10._0_4_ / (float)uVar11;
        auVar8._4_4_ = auVar10._4_4_ / (float)((ulong)uVar11 >> 0x20);
        auVar8._8_4_ = auVar10._8_4_ / (float)uVar12;
        auVar8._12_4_ = auVar10._12_4_ / (float)((ulong)uVar12 >> 0x20);
        auVar10 = NEON_fcvtzs(auVar9,0xf,4);
        auVar8 = NEON_fcvtzs(auVar8,0xf,4);
        puVar7[1] = CONCAT26(auVar8._12_2_,
                             CONCAT24(auVar8._8_2_,CONCAT22(auVar8._4_2_,auVar8._0_2_)));
        *puVar7 = CONCAT26(auVar10._12_2_,
                           CONCAT24(auVar10._8_2_,CONCAT22(auVar10._4_2_,auVar10._0_2_)));
        puVar7 = puVar7 + 2;
      } while (lVar5 != (ulong)((param_4 >> 3) - 1) * 0x20 + 0x30);
      uVar6 = (ulong)param_4 & 0xfffffff8;
      param_1 = (undefined8 *)((long)param_1 + uVar6 * 2);
      uVar4 = param_4 & 0xfffffff8;
      if ((param_4 & 7) == 0) {
        return;
      }
    }
    uVar1 = uVar4 + 1;
    *(short *)param_1 =
         (short)(int)((*(float *)(param_2 + uVar6 * 4) / *(float *)(param_3 + uVar6 * 4)) * 32768.0)
    ;
    if (uVar1 < param_4) {
      uVar2 = uVar4 + 2;
      *(short *)((long)param_1 + 2) =
           (short)(int)((*(float *)(param_2 + (ulong)uVar1 * 4) /
                        *(float *)(param_3 + (ulong)uVar1 * 4)) * 32768.0);
      if (uVar2 < param_4) {
        uVar1 = uVar4 + 3;
        *(short *)((long)param_1 + 4) =
             (short)(int)((*(float *)(param_2 + (ulong)uVar2 * 4) /
                          *(float *)(param_3 + (ulong)uVar2 * 4)) * 32768.0);
        if (uVar1 < param_4) {
          uVar2 = uVar4 + 4;
          *(short *)((long)param_1 + 6) =
               (short)(int)((*(float *)(param_2 + (ulong)uVar1 * 4) /
                            *(float *)(param_3 + (ulong)uVar1 * 4)) * 32768.0);
          if (uVar2 < param_4) {
            uVar1 = uVar4 + 5;
            *(short *)(param_1 + 1) =
                 (short)(int)((*(float *)(param_2 + (ulong)uVar2 * 4) /
                              *(float *)(param_3 + (ulong)uVar2 * 4)) * 32768.0);
            if (uVar1 < param_4) {
              uVar4 = uVar4 + 6;
              *(short *)((long)param_1 + 10) =
                   (short)(int)((*(float *)(param_2 + (ulong)uVar1 * 4) /
                                *(float *)(param_3 + (ulong)uVar1 * 4)) * 32768.0);
              if (uVar4 < param_4) {
                *(short *)((long)param_1 + 0xc) =
                     (short)(int)((*(float *)(param_2 + (ulong)uVar4 * 4) /
                                  *(float *)(param_3 + (ulong)uVar4 * 4)) * 32768.0);
              }
            }
          }
        }
      }
    }
  }
  return;
}


