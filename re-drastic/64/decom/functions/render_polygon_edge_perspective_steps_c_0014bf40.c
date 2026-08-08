/*
 * Ghidra decompilation
 *
 * Function : render_polygon_edge_perspective_steps_c
 * Address  : 0014bf40
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_polygon_edge_perspective_steps_c(undefined8 *param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  float *pfVar6;
  uint uVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  lVar2 = ___stack_chk_guard;
  puVar5 = &__stack_chk_guard;
  uVar7 = 0;
  uVar3 = param_3;
  if (param_3 != 0) {
    if (param_3 - 1 < 7) {
      uVar7 = 0;
    }
    else {
      pfVar6 = param_2;
      puVar8 = param_1;
      do {
        pfVar1 = pfVar6 + 0x10;
        fVar9 = *pfVar6;
        fVar13 = pfVar6[1];
        fVar10 = pfVar6[2];
        fVar14 = pfVar6[3];
        fVar11 = pfVar6[4];
        fVar15 = pfVar6[5];
        fVar12 = pfVar6[6];
        fVar16 = pfVar6[7];
        puVar8[1] = CONCAT26((short)(long)((pfVar6[0xe] * 32768.0) / pfVar6[0xf]),
                             CONCAT24((short)(long)((pfVar6[0xc] * 32768.0) / pfVar6[0xd]),
                                      CONCAT22((short)(long)((pfVar6[10] * 32768.0) / pfVar6[0xb]),
                                               (short)(long)((pfVar6[8] * 32768.0) / pfVar6[9]))));
        *puVar8 = CONCAT26((short)(long)((fVar12 * 32768.0) / fVar16),
                           CONCAT24((short)(long)((fVar11 * 32768.0) / fVar15),
                                    CONCAT22((short)(long)((fVar10 * 32768.0) / fVar14),
                                             (short)(long)((fVar9 * 32768.0) / fVar13))));
        pfVar6 = pfVar1;
        puVar8 = puVar8 + 2;
      } while (pfVar1 != param_2 + (ulong)((param_3 >> 3) - 1) * 0x10 + 0x10);
      puVar5 = (undefined *)((ulong)param_3 & 0xfffffff8);
      param_1 = (undefined8 *)((long)param_1 + (long)puVar5 * 2);
      param_2 = param_2 + (long)puVar5 * 2;
      uVar7 = param_3 & 0xfffffff8;
      if ((param_3 & 7) == 0) goto LAB_0014c140;
    }
    uVar4 = (uint)((*param_2 * 32768.0) / param_2[1]);
    puVar5 = (undefined *)(ulong)uVar4;
    *(short *)param_1 = (short)uVar4;
    if (uVar7 + 1 < param_3) {
      uVar4 = (uint)((param_2[2] * 32768.0) / param_2[3]);
      puVar5 = (undefined *)(ulong)uVar4;
      *(short *)((long)param_1 + 2) = (short)uVar4;
      if (uVar7 + 2 < param_3) {
        uVar4 = (uint)((param_2[4] * 32768.0) / param_2[5]);
        puVar5 = (undefined *)(ulong)uVar4;
        *(short *)((long)param_1 + 4) = (short)uVar4;
        if (uVar7 + 3 < param_3) {
          uVar4 = (uint)((param_2[6] * 32768.0) / param_2[7]);
          puVar5 = (undefined *)(ulong)uVar4;
          *(short *)((long)param_1 + 6) = (short)uVar4;
          if (uVar7 + 4 < param_3) {
            uVar4 = (uint)((param_2[8] * 32768.0) / param_2[9]);
            puVar5 = (undefined *)(ulong)uVar4;
            *(short *)(param_1 + 1) = (short)uVar4;
            if (uVar7 + 5 < param_3) {
              uVar7 = uVar7 + 6;
              uVar3 = (uint)((param_2[10] * 32768.0) / param_2[0xb]);
              *(short *)((long)param_1 + 10) = (short)uVar3;
              if (uVar7 < param_3) {
                *(short *)((long)param_1 + 0xc) =
                     (short)(int)((param_2[0xc] * 32768.0) / param_2[0xd]);
              }
            }
          }
        }
      }
    }
  }
LAB_0014c140:
  if (lVar2 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2 - ___stack_chk_guard,0,uVar3,puVar5,uVar7);
}


