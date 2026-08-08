/*
 * Ghidra decompilation
 *
 * Function : SzArEx_GetFileNameUtf16
 * Address  : 001ad4a0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SzArEx_GetFileNameUtf16(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  
  lVar5 = ___stack_chk_guard;
  lVar9 = *(long *)(*(long *)(param_1 + 0x68) + param_2 * 8);
  uVar8 = *(long *)(*(long *)(param_1 + 0x68) + (param_2 + 1) * 8) - lVar9;
  if (param_3 != (undefined8 *)0x0) {
    lVar9 = lVar9 * 2;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x70) + lVar9);
    if (uVar8 != 0) {
      bVar6 = param_3 < (undefined8 *)(*(long *)(param_1 + 0x70) + lVar9 + 0x20);
      if ((bVar6 && puVar1 < param_3 + 4 || uVar8 - 1 < 0xe) ||
          (!bVar6 || puVar1 >= param_3 + 4) && uVar8 - 1 == 0xe) {
        lVar9 = 0;
        do {
          *(ushort *)((long)param_3 + lVar9) =
               CONCAT11(*(undefined *)((long)puVar1 + lVar9 + 1),
                        *(undefined *)((long)puVar1 + lVar9));
          lVar9 = lVar9 + 2;
        } while (lVar9 != uVar8 * 2);
      }
      else {
        puVar10 = param_3;
        puVar12 = puVar1;
        do {
          uVar4 = *puVar12;
          puVar7 = puVar12 + 1;
          uVar3 = puVar12[2];
          uVar2 = puVar12[3];
          puVar12 = puVar12 + 4;
          puVar10[1] = *puVar7;
          *puVar10 = uVar4;
          puVar10[3] = uVar2;
          puVar10[2] = uVar3;
          puVar10 = puVar10 + 4;
        } while (puVar12 != puVar1 + (uVar8 >> 4) * 4);
        uVar11 = uVar8 & 0xfffffffffffffff0;
        if ((uVar8 & 0xf) != 0) {
          lVar9 = uVar11 * 2;
          *(ushort *)((long)param_3 + lVar9) =
               CONCAT11(*(undefined *)((long)puVar1 + lVar9 + 1),
                        *(undefined *)((long)puVar1 + lVar9));
          if (uVar11 + 1 < uVar8) {
            lVar9 = (uVar11 + 1) * 2;
            *(ushort *)((long)param_3 + lVar9) =
                 CONCAT11(*(undefined *)((long)puVar1 + lVar9 + 1),
                          *(undefined *)((long)puVar1 + lVar9));
            if (uVar11 + 2 < uVar8) {
              lVar9 = (uVar11 + 2) * 2;
              *(ushort *)((long)param_3 + lVar9) =
                   CONCAT11(*(undefined *)((long)puVar1 + lVar9 + 1),
                            *(undefined *)((long)puVar1 + lVar9));
              if (uVar11 + 3 < uVar8) {
                lVar9 = (uVar11 + 3) * 2;
                *(ushort *)((long)param_3 + lVar9) =
                     CONCAT11(*(undefined *)((long)puVar1 + lVar9 + 1),
                              *(undefined *)((long)puVar1 + lVar9));
                if (uVar11 + 4 < uVar8) {
                  lVar9 = (uVar11 + 4) * 2;
                  *(ushort *)((long)param_3 + lVar9) =
                       CONCAT11(*(undefined *)((long)puVar1 + lVar9 + 1),
                                *(undefined *)((long)puVar1 + lVar9));
                  if (uVar11 + 5 < uVar8) {
                    lVar9 = (uVar11 + 5) * 2;
                    *(ushort *)((long)param_3 + lVar9) =
                         CONCAT11(*(undefined *)((long)puVar1 + lVar9 + 1),
                                  *(undefined *)((long)puVar1 + lVar9));
                    if (uVar11 + 6 < uVar8) {
                      lVar9 = (uVar11 + 6) * 2;
                      *(ushort *)((long)param_3 + lVar9) =
                           CONCAT11(*(undefined *)((long)puVar1 + lVar9 + 1),
                                    *(undefined *)((long)puVar1 + lVar9));
                      if (uVar11 + 7 < uVar8) {
                        lVar9 = (uVar11 + 7) * 2;
                        *(ushort *)((long)param_3 + lVar9) =
                             CONCAT11(*(undefined *)((long)puVar1 + lVar9 + 1),
                                      *(undefined *)((long)puVar1 + lVar9));
                        if (uVar11 + 8 < uVar8) {
                          lVar9 = (uVar11 + 8) * 2;
                          *(ushort *)((long)param_3 + lVar9) =
                               CONCAT11(*(undefined *)((long)puVar1 + lVar9 + 1),
                                        *(undefined *)((long)puVar1 + lVar9));
                          if (uVar11 + 9 < uVar8) {
                            lVar9 = (uVar11 + 9) * 2;
                            *(ushort *)((long)param_3 + lVar9) =
                                 CONCAT11(*(undefined *)((long)puVar1 + lVar9 + 1),
                                          *(undefined *)((long)puVar1 + lVar9));
                            if (uVar11 + 10 < uVar8) {
                              lVar9 = (uVar11 + 10) * 2;
                              *(ushort *)((long)param_3 + lVar9) =
                                   CONCAT11(*(undefined *)((long)puVar1 + lVar9 + 1),
                                            *(undefined *)((long)puVar1 + lVar9));
                              if (uVar11 + 0xb < uVar8) {
                                lVar9 = (uVar11 + 0xb) * 2;
                                *(ushort *)((long)param_3 + lVar9) =
                                     CONCAT11(*(undefined *)((long)puVar1 + lVar9 + 1),
                                              *(undefined *)((long)puVar1 + lVar9));
                                if (uVar11 + 0xc < uVar8) {
                                  lVar9 = (uVar11 + 0xc) * 2;
                                  *(ushort *)((long)param_3 + lVar9) =
                                       CONCAT11(*(undefined *)((long)puVar1 + lVar9 + 1),
                                                *(undefined *)((long)puVar1 + lVar9));
                                  if (uVar11 + 0xd < uVar8) {
                                    lVar9 = (uVar11 + 0xd) * 2;
                                    *(ushort *)((long)param_3 + lVar9) =
                                         CONCAT11(*(undefined *)((long)puVar1 + lVar9 + 1),
                                                  *(undefined *)((long)puVar1 + lVar9));
                                    if (uVar11 + 0xe < uVar8) {
                                      lVar9 = (uVar11 + 0xe) * 2;
                                      *(ushort *)((long)param_3 + lVar9) =
                                           CONCAT11(*(undefined *)((long)puVar1 + lVar9 + 1),
                                                    *(undefined *)((long)puVar1 + lVar9));
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (lVar5 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8,lVar5 - ___stack_chk_guard,0);
}


