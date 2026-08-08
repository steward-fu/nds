/*
 * Ghidra decompilation
 *
 * Function : render_scanline_window_inhibit_masks_single
 * Address  : 0013b060
 * Program  : drastic64
 */


void render_scanline_window_inhibit_masks_single
               (long param_1,undefined8 *param_2,uint param_3,undefined8 *param_4,uint param_5,
               uint param_6)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar2 = param_5 & param_3;
  if ((param_5 >> 5 & 1) != 0) {
    if ((ulong)((long)param_2 + (0xf - (long)param_4)) < 0x1f) {
      *(uint *)param_2 = *(uint *)param_2 | *(uint *)param_4;
      *(uint *)((long)param_2 + 4) = *(uint *)((long)param_2 + 4) | *(uint *)((long)param_4 + 4);
      *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) | *(uint *)(param_4 + 1);
      *(uint *)((long)param_2 + 0xc) =
           *(uint *)((long)param_2 + 0xc) | *(uint *)((long)param_4 + 0xc);
      *(uint *)(param_2 + 2) = *(uint *)(param_2 + 2) | *(uint *)(param_4 + 2);
      *(uint *)((long)param_2 + 0x14) =
           *(uint *)((long)param_2 + 0x14) | *(uint *)((long)param_4 + 0x14);
      *(uint *)(param_2 + 3) = *(uint *)(param_2 + 3) | *(uint *)(param_4 + 3);
      *(uint *)((long)param_2 + 0x1c) =
           *(uint *)((long)param_2 + 0x1c) | *(uint *)((long)param_4 + 0x1c);
    }
    else {
      uVar8 = param_2[1];
      uVar7 = *param_2;
      uVar6 = param_2[3];
      uVar5 = param_2[2];
      uVar10 = param_4[1];
      uVar9 = *param_4;
      param_2[1] = CONCAT17((byte)((ulong)uVar8 >> 0x38) | (byte)((ulong)uVar10 >> 0x38),
                            CONCAT16((byte)((ulong)uVar8 >> 0x30) | (byte)((ulong)uVar10 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar8 >> 0x28) |
                                              (byte)((ulong)uVar10 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar8 >> 0x20) |
                                                       (byte)((ulong)uVar10 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar8 >> 0x18) |
                                                                (byte)((ulong)uVar10 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar8 >> 0x10
                                                                               ) | (byte)((ulong)
                                                  uVar10 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar8 >> 8) |
                                                           (byte)((ulong)uVar10 >> 8),
                                                           (byte)uVar8 | (byte)uVar10)))))));
      *param_2 = CONCAT17((byte)((ulong)uVar7 >> 0x38) | (byte)((ulong)uVar9 >> 0x38),
                          CONCAT16((byte)((ulong)uVar7 >> 0x30) | (byte)((ulong)uVar9 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar7 >> 0x28) |
                                            (byte)((ulong)uVar9 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar7 >> 0x20) |
                                                     (byte)((ulong)uVar9 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar7 >> 0x18) |
                                                              (byte)((ulong)uVar9 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar7 >> 0x10)
                                                                       | (byte)((ulong)uVar9 >> 0x10
                                                                               ),
                                                                       CONCAT11((byte)((ulong)uVar7
                                                                                      >> 8) |
                                                                                (byte)((ulong)uVar9
                                                                                      >> 8),
                                                                                (byte)uVar7 |
                                                                                (byte)uVar9)))))));
      uVar8 = param_4[3];
      uVar7 = param_4[2];
      param_2[3] = CONCAT17((byte)((ulong)uVar6 >> 0x38) | (byte)((ulong)uVar8 >> 0x38),
                            CONCAT16((byte)((ulong)uVar6 >> 0x30) | (byte)((ulong)uVar8 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar6 >> 0x28) |
                                              (byte)((ulong)uVar8 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar6 >> 0x20) |
                                                       (byte)((ulong)uVar8 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar6 >> 0x18) |
                                                                (byte)((ulong)uVar8 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar6 >> 0x10
                                                                               ) | (byte)((ulong)
                                                  uVar8 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar6 >> 8) |
                                                           (byte)((ulong)uVar8 >> 8),
                                                           (byte)uVar6 | (byte)uVar8)))))));
      param_2[2] = CONCAT17((byte)((ulong)uVar5 >> 0x38) | (byte)((ulong)uVar7 >> 0x38),
                            CONCAT16((byte)((ulong)uVar5 >> 0x30) | (byte)((ulong)uVar7 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar5 >> 0x28) |
                                              (byte)((ulong)uVar7 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar5 >> 0x20) |
                                                       (byte)((ulong)uVar7 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar5 >> 0x18) |
                                                                (byte)((ulong)uVar7 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar5 >> 0x10
                                                                               ) | (byte)((ulong)
                                                  uVar7 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar5 >> 8) |
                                                           (byte)((ulong)uVar7 >> 8),
                                                           (byte)uVar5 | (byte)uVar7)))))));
    }
  }
  uVar4 = 0;
  for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
    if ((uVar2 & 1) != 0) {
      lVar3 = uVar4 * 0x20;
      lVar1 = param_1 + lVar3;
      *(uint *)(param_1 + lVar3) = *(uint *)(param_1 + lVar3) | *(uint *)param_4;
      *(uint *)(lVar1 + 4) = *(uint *)(lVar1 + 4) | *(uint *)((long)param_4 + 4);
      *(uint *)(lVar1 + 8) = *(uint *)(lVar1 + 8) | *(uint *)(param_4 + 1);
      *(uint *)(lVar1 + 0xc) = *(uint *)(lVar1 + 0xc) | *(uint *)((long)param_4 + 0xc);
      *(uint *)(lVar1 + 0x10) = *(uint *)(lVar1 + 0x10) | *(uint *)(param_4 + 2);
      *(uint *)(lVar1 + 0x14) = *(uint *)(lVar1 + 0x14) | *(uint *)((long)param_4 + 0x14);
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) | *(uint *)(param_4 + 3);
      *(uint *)(lVar1 + 0x1c) = *(uint *)(lVar1 + 0x1c) | *(uint *)((long)param_4 + 0x1c);
    }
    uVar4 = (ulong)((int)uVar4 + 1);
  }
  param_3 = param_3 & param_6;
  if ((param_6 >> 5 & 1) != 0) {
    if ((ulong)((long)param_2 + (0xf - (long)param_4)) < 0x1f) {
      *(uint *)param_2 = *(uint *)param_2 | *(uint *)param_4 ^ 0xffffffff;
      *(uint *)((long)param_2 + 4) =
           *(uint *)((long)param_2 + 4) | *(uint *)((long)param_4 + 4) ^ 0xffffffff;
      *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) | *(uint *)(param_4 + 1) ^ 0xffffffff;
      *(uint *)((long)param_2 + 0xc) =
           *(uint *)((long)param_2 + 0xc) | *(uint *)((long)param_4 + 0xc) ^ 0xffffffff;
      *(uint *)(param_2 + 2) = *(uint *)(param_2 + 2) | *(uint *)(param_4 + 2) ^ 0xffffffff;
      *(uint *)((long)param_2 + 0x14) =
           *(uint *)((long)param_2 + 0x14) | *(uint *)((long)param_4 + 0x14) ^ 0xffffffff;
      *(uint *)(param_2 + 3) = *(uint *)(param_2 + 3) | *(uint *)(param_4 + 3) ^ 0xffffffff;
      *(uint *)((long)param_2 + 0x1c) =
           *(uint *)((long)param_2 + 0x1c) | *(uint *)((long)param_4 + 0x1c) ^ 0xffffffff;
    }
    else {
      uVar6 = param_2[1];
      uVar5 = *param_2;
      uVar10 = param_2[3];
      uVar9 = param_2[2];
      uVar8 = param_4[1];
      uVar7 = *param_4;
      param_2[1] = CONCAT17((byte)((ulong)uVar6 >> 0x38) | ~(byte)((ulong)uVar8 >> 0x38),
                            CONCAT16((byte)((ulong)uVar6 >> 0x30) | ~(byte)((ulong)uVar8 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar6 >> 0x28) |
                                              ~(byte)((ulong)uVar8 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar6 >> 0x20) |
                                                       ~(byte)((ulong)uVar8 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar6 >> 0x18) |
                                                                ~(byte)((ulong)uVar8 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar6 >> 0x10
                                                                               ) | ~(byte)((ulong)
                                                  uVar8 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar6 >> 8) |
                                                           ~(byte)((ulong)uVar8 >> 8),
                                                           (byte)uVar6 | ~(byte)uVar8)))))));
      *param_2 = CONCAT17((byte)((ulong)uVar5 >> 0x38) | ~(byte)((ulong)uVar7 >> 0x38),
                          CONCAT16((byte)((ulong)uVar5 >> 0x30) | ~(byte)((ulong)uVar7 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar5 >> 0x28) |
                                            ~(byte)((ulong)uVar7 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar5 >> 0x20) |
                                                     ~(byte)((ulong)uVar7 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar5 >> 0x18) |
                                                              ~(byte)((ulong)uVar7 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar5 >> 0x10)
                                                                       | ~(byte)((ulong)uVar7 >>
                                                                                0x10),
                                                                       CONCAT11((byte)((ulong)uVar5
                                                                                      >> 8) |
                                                                                ~(byte)((ulong)uVar7
                                                                                       >> 8),
                                                                                (byte)uVar5 |
                                                                                ~(byte)uVar7)))))));
      uVar6 = param_4[3];
      uVar5 = param_4[2];
      param_2[3] = CONCAT17((byte)((ulong)uVar10 >> 0x38) | ~(byte)((ulong)uVar6 >> 0x38),
                            CONCAT16((byte)((ulong)uVar10 >> 0x30) | ~(byte)((ulong)uVar6 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar10 >> 0x28) |
                                              ~(byte)((ulong)uVar6 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar10 >> 0x20) |
                                                       ~(byte)((ulong)uVar6 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar10 >> 0x18) |
                                                                ~(byte)((ulong)uVar6 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar10 >>
                                                                               0x10) |
                                                                         ~(byte)((ulong)uVar6 >>
                                                                                0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  uVar10 >> 8) | ~(byte)((ulong)uVar6 >> 8),
                                                  (byte)uVar10 | ~(byte)uVar6)))))));
      param_2[2] = CONCAT17((byte)((ulong)uVar9 >> 0x38) | ~(byte)((ulong)uVar5 >> 0x38),
                            CONCAT16((byte)((ulong)uVar9 >> 0x30) | ~(byte)((ulong)uVar5 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar9 >> 0x28) |
                                              ~(byte)((ulong)uVar5 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar9 >> 0x20) |
                                                       ~(byte)((ulong)uVar5 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar9 >> 0x18) |
                                                                ~(byte)((ulong)uVar5 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar9 >> 0x10
                                                                               ) | ~(byte)((ulong)
                                                  uVar5 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar9 >> 8) |
                                                           ~(byte)((ulong)uVar5 >> 8),
                                                           (byte)uVar9 | ~(byte)uVar5)))))));
    }
  }
  uVar4 = 0;
  for (; param_3 != 0; param_3 = param_3 >> 1) {
    if ((param_3 & 1) != 0) {
      lVar3 = uVar4 * 0x20;
      lVar1 = param_1 + lVar3;
      *(uint *)(param_1 + lVar3) = *(uint *)(param_1 + lVar3) | *(uint *)param_4 ^ 0xffffffff;
      *(uint *)(lVar1 + 4) = *(uint *)(lVar1 + 4) | *(uint *)((long)param_4 + 4) ^ 0xffffffff;
      *(uint *)(lVar1 + 8) = *(uint *)(lVar1 + 8) | *(uint *)(param_4 + 1) ^ 0xffffffff;
      *(uint *)(lVar1 + 0xc) = *(uint *)(lVar1 + 0xc) | *(uint *)((long)param_4 + 0xc) ^ 0xffffffff;
      *(uint *)(lVar1 + 0x10) = *(uint *)(lVar1 + 0x10) | *(uint *)(param_4 + 2) ^ 0xffffffff;
      *(uint *)(lVar1 + 0x14) =
           *(uint *)(lVar1 + 0x14) | *(uint *)((long)param_4 + 0x14) ^ 0xffffffff;
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) | *(uint *)(param_4 + 3) ^ 0xffffffff;
      *(uint *)(lVar1 + 0x1c) =
           *(uint *)(lVar1 + 0x1c) | *(uint *)((long)param_4 + 0x1c) ^ 0xffffffff;
    }
    uVar4 = (ulong)((int)uVar4 + 1);
  }
  return;
}


