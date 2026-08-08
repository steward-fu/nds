/*
 * Ghidra decompilation
 *
 * Function : video_3d_prepare_fog
 * Address  : 0014d7a0
 * Program  : drastic64
 */


void video_3d_prepare_fog(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar1 = *(uint *)(param_1 + 0x9974);
  *(undefined4 *)((long)&DWORD_00249490 + param_2) = 0xffffffff;
  uVar9 = *(ulong *)(param_1 + 0x9978);
  uVar10 = *(ulong *)(param_1 + 0x9980);
  uVar3 = *(ulong *)(param_1 + 0x9988);
  uVar2 = *(uint *)(param_1 + 0x9990);
  uVar6 = uVar3 & uVar9 & uVar10;
  if (((uVar1 & uVar2 & (uint)uVar6 & (uint)(uVar6 >> 0x20)) ==
       (uVar1 | uVar2 |
       CONCAT13((byte)(uVar3 >> 0x18) | (byte)(uVar9 >> 0x18) | (byte)(uVar10 >> 0x18) |
                (byte)(uVar3 >> 0x38) | (byte)(uVar9 >> 0x38) | (byte)(uVar10 >> 0x38),
                CONCAT12((byte)(uVar3 >> 0x10) | (byte)(uVar9 >> 0x10) | (byte)(uVar10 >> 0x10) |
                         (byte)(uVar3 >> 0x30) | (byte)(uVar9 >> 0x30) | (byte)(uVar10 >> 0x30),
                         CONCAT11((byte)(uVar3 >> 8) | (byte)(uVar9 >> 8) | (byte)(uVar10 >> 8) |
                                  (byte)(uVar3 >> 0x28) |
                                  (byte)(uVar9 >> 0x28) | (byte)(uVar10 >> 0x28),
                                  (byte)uVar3 | (byte)uVar9 | (byte)uVar10 |
                                  (byte)(uVar3 >> 0x20) |
                                  (byte)(uVar9 >> 0x20) | (byte)(uVar10 >> 0x20)))))) &&
     (uVar1 = uVar2 >> 8 & uVar2 >> 0x10 & uVar2 & 0xff, (uVar2 >> 8 & (uVar1 ^ 0xffffffff)) == 0))
  {
    *(uint *)((long)&DWORD_00249490 + param_2) = uVar1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x997c);
  uVar7 = *(undefined8 *)(param_1 + 0x9974);
  uVar5 = *(undefined8 *)(param_1 + 0x997d);
  uVar4 = *(undefined8 *)(param_1 + 0x9975);
  *(ulong *)(param_1 + 0x999c) =
       CONCAT17((char)((ulong)uVar5 >> 0x38) - (char)((ulong)uVar8 >> 0x38),
                CONCAT16((char)((ulong)uVar5 >> 0x30) - (char)((ulong)uVar8 >> 0x30),
                         CONCAT15((char)((ulong)uVar5 >> 0x28) - (char)((ulong)uVar8 >> 0x28),
                                  CONCAT14((char)((ulong)uVar5 >> 0x20) -
                                           (char)((ulong)uVar8 >> 0x20),
                                           CONCAT13((char)((ulong)uVar5 >> 0x18) -
                                                    (char)((ulong)uVar8 >> 0x18),
                                                    CONCAT12((char)((ulong)uVar5 >> 0x10) -
                                                             (char)((ulong)uVar8 >> 0x10),
                                                             CONCAT11((char)((ulong)uVar5 >> 8) -
                                                                      (char)((ulong)uVar8 >> 8),
                                                                      (char)uVar5 - (char)uVar8)))))
                        ));
  *(ulong *)(param_1 + 0x9994) =
       CONCAT17((char)((ulong)uVar4 >> 0x38) - (char)((ulong)uVar7 >> 0x38),
                CONCAT16((char)((ulong)uVar4 >> 0x30) - (char)((ulong)uVar7 >> 0x30),
                         CONCAT15((char)((ulong)uVar4 >> 0x28) - (char)((ulong)uVar7 >> 0x28),
                                  CONCAT14((char)((ulong)uVar4 >> 0x20) -
                                           (char)((ulong)uVar7 >> 0x20),
                                           CONCAT13((char)((ulong)uVar4 >> 0x18) -
                                                    (char)((ulong)uVar7 >> 0x18),
                                                    CONCAT12((char)((ulong)uVar4 >> 0x10) -
                                                             (char)((ulong)uVar7 >> 0x10),
                                                             CONCAT11((char)((ulong)uVar4 >> 8) -
                                                                      (char)((ulong)uVar7 >> 8),
                                                                      (char)uVar4 - (char)uVar7)))))
                        ));
  *(char *)(param_1 + 0x99a4) = *(char *)(param_1 + 0x9985) - *(char *)(param_1 + 0x9984);
  *(char *)(param_1 + 0x99a5) = *(char *)(param_1 + 0x9986) - *(char *)(param_1 + 0x9985);
  *(char *)(param_1 + 0x99a6) = *(char *)(param_1 + 0x9987) - *(char *)(param_1 + 0x9986);
  *(char *)(param_1 + 0x99a7) = *(char *)(param_1 + 0x9988) - *(char *)(param_1 + 0x9987);
  *(char *)(param_1 + 0x99a8) = *(char *)(param_1 + 0x9989) - *(char *)(param_1 + 0x9988);
  *(char *)(param_1 + 0x99a9) = *(char *)(param_1 + 0x998a) - *(char *)(param_1 + 0x9989);
  *(char *)(param_1 + 0x99aa) = *(char *)(param_1 + 0x998b) - *(char *)(param_1 + 0x998a);
  *(char *)(param_1 + 0x99ab) = *(char *)(param_1 + 0x998c) - *(char *)(param_1 + 0x998b);
  *(char *)(param_1 + 0x99ac) = *(char *)(param_1 + 0x998d) - *(char *)(param_1 + 0x998c);
  *(char *)(param_1 + 0x99ad) = *(char *)(param_1 + 0x998e) - *(char *)(param_1 + 0x998d);
  *(char *)(param_1 + 0x99ae) = *(char *)(param_1 + 0x998f) - *(char *)(param_1 + 0x998e);
  *(char *)(param_1 + 0x99af) = *(char *)(param_1 + 0x9990) - *(char *)(param_1 + 0x998f);
  *(char *)(param_1 + 0x99b0) = *(char *)(param_1 + 0x9991) - *(char *)(param_1 + 0x9990);
  *(char *)(param_1 + 0x99b1) = *(char *)(param_1 + 0x9992) - *(char *)(param_1 + 0x9991);
  *(char *)(param_1 + 0x99b2) = *(char *)(param_1 + 0x9993) - *(char *)(param_1 + 0x9992);
  return;
}


