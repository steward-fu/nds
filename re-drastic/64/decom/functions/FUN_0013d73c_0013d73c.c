/*
 * Ghidra decompilation
 *
 * Function : FUN_0013d73c
 * Address  : 0013d73c
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013d73c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint3 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  short sVar7;
  short sVar9;
  short sVar10;
  undefined8 uVar8;
  short sVar11;
  short sVar12;
  short sVar14;
  short sVar15;
  undefined8 uVar13;
  short sVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  short sVar19;
  short sVar21;
  short sVar22;
  undefined8 uVar20;
  short sVar23;
  short sVar24;
  short sVar26;
  short sVar27;
  undefined8 uVar25;
  short sVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  short sVar44;
  short sVar45;
  short sVar46;
  short sVar47;
  short sVar48;
  
  lVar2 = ___stack_chk_guard;
  puVar3 = param_3 + 0x80;
  if (param_3 < param_1 + 0x60 && param_1 < puVar3 || param_3 < param_2 + 0x60 && param_2 < puVar3)
  {
    do {
      puVar4 = (undefined8 *)((long)param_3 + 4);
      *(ushort *)param_3 =
           (ushort)*(byte *)(param_1 + 0x20) << 5 | (ushort)(*(byte *)(param_1 + 0x40) >> 1) |
           (ushort)((*(byte *)param_1 >> 1 & 0x1f) << 0xb);
      *(ushort *)((long)param_3 + 2) =
           (ushort)*(byte *)(param_2 + 0x20) << 5 | (ushort)(*(byte *)(param_2 + 0x40) >> 1) |
           (ushort)((*(byte *)param_2 >> 1 & 0x1f) << 0xb);
      param_3 = puVar4;
      param_1 = (undefined8 *)((long)param_1 + 1);
      param_2 = (undefined8 *)((long)param_2 + 1);
    } while (puVar3 != puVar4);
  }
  else {
    puVar3 = param_1;
    do {
      uVar25 = puVar3[0x21];
      uVar20 = puVar3[0x20];
      uVar32 = puVar3[0x41];
      uVar31 = puVar3[0x40];
      puVar4 = puVar3 + 2;
      uVar18 = puVar3[1];
      uVar17 = *puVar3;
      uVar1 = CONCAT12((char)((ulong)uVar25 >> 8),(short)uVar25) & 0xff00ff;
      uVar13 = param_2[0x21];
      uVar8 = param_2[0x20];
      uVar30 = param_2[0x41];
      uVar29 = param_2[0x40];
      uVar6 = param_2[1];
      uVar5 = *param_2;
      sVar41 = (ushort)(byte)uVar20 << 5;
      sVar42 = (ushort)(byte)((ulong)uVar20 >> 8) << 5;
      sVar43 = (ushort)(byte)((ulong)uVar20 >> 0x10) << 5;
      sVar44 = (ushort)(byte)((ulong)uVar20 >> 0x18) << 5;
      sVar45 = (ushort)(byte)((ulong)uVar20 >> 0x20) << 5;
      sVar46 = (ushort)(byte)((ulong)uVar20 >> 0x28) << 5;
      sVar47 = (ushort)(byte)((ulong)uVar20 >> 0x30) << 5;
      sVar48 = (ushort)(byte)((ulong)uVar20 >> 0x38) << 5;
      sVar19 = (short)uVar1 << 5;
      sVar21 = (ushort)(byte)(uVar1 >> 0x10) << 5;
      sVar22 = (ushort)(byte)((ulong)uVar25 >> 0x10) << 5;
      sVar23 = (ushort)(byte)((ulong)uVar25 >> 0x18) << 5;
      sVar24 = (ushort)(byte)((ulong)uVar25 >> 0x20) << 5;
      sVar26 = (ushort)(byte)((ulong)uVar25 >> 0x28) << 5;
      sVar27 = (ushort)(byte)((ulong)uVar25 >> 0x30) << 5;
      sVar28 = (ushort)(byte)((ulong)uVar25 >> 0x38) << 5;
      uVar1 = CONCAT12((char)((ulong)uVar13 >> 8),(short)uVar13) & 0xff00ff;
      sVar33 = (ushort)(byte)uVar8 << 5;
      sVar34 = (ushort)(byte)((ulong)uVar8 >> 8) << 5;
      sVar35 = (ushort)(byte)((ulong)uVar8 >> 0x10) << 5;
      sVar36 = (ushort)(byte)((ulong)uVar8 >> 0x18) << 5;
      sVar37 = (ushort)(byte)((ulong)uVar8 >> 0x20) << 5;
      sVar38 = (ushort)(byte)((ulong)uVar8 >> 0x28) << 5;
      sVar39 = (ushort)(byte)((ulong)uVar8 >> 0x30) << 5;
      sVar40 = (ushort)(byte)((ulong)uVar8 >> 0x38) << 5;
      sVar7 = (short)uVar1 << 5;
      sVar9 = (ushort)(byte)(uVar1 >> 0x10) << 5;
      sVar10 = (ushort)(byte)((ulong)uVar13 >> 0x10) << 5;
      sVar11 = (ushort)(byte)((ulong)uVar13 >> 0x18) << 5;
      sVar12 = (ushort)(byte)((ulong)uVar13 >> 0x20) << 5;
      sVar14 = (ushort)(byte)((ulong)uVar13 >> 0x28) << 5;
      sVar15 = (ushort)(byte)((ulong)uVar13 >> 0x30) << 5;
      sVar16 = (ushort)(byte)((ulong)uVar13 >> 0x38) << 5;
      *(ushort *)param_3 =
           CONCAT11((byte)((ushort)sVar41 >> 8) |
                    (byte)((ushort)((ushort)(byte)((byte)uVar17 >> 1) << 0xb) >> 8),
                    (byte)sVar41 | (byte)uVar31 >> 1);
      *(ushort *)((long)param_3 + 2) =
           CONCAT11((byte)((ushort)sVar33 >> 8) |
                    (byte)((ushort)((ushort)(byte)((byte)uVar5 >> 1) << 0xb) >> 8),
                    (byte)sVar33 | (byte)uVar29 >> 1);
      *(ushort *)((long)param_3 + 4) =
           CONCAT11((byte)((ushort)sVar42 >> 8) |
                    (byte)((ushort)((ushort)(byte)((byte)((ulong)uVar17 >> 8) >> 1) << 0xb) >> 8),
                    (byte)sVar42 | (byte)((ulong)uVar31 >> 8) >> 1);
      *(ushort *)((long)param_3 + 6) =
           CONCAT11((byte)((ushort)sVar34 >> 8) |
                    (byte)((ushort)((ushort)(byte)((byte)((ulong)uVar5 >> 8) >> 1) << 0xb) >> 8),
                    (byte)sVar34 | (byte)((ulong)uVar29 >> 8) >> 1);
      *(ushort *)(param_3 + 1) =
           CONCAT11((byte)((ushort)sVar43 >> 8) |
                    (byte)((ushort)((ushort)(byte)((byte)((ulong)uVar17 >> 0x10) >> 1) << 0xb) >> 8)
                    ,(byte)sVar43 | (byte)((ulong)uVar31 >> 0x10) >> 1);
      *(ushort *)((long)param_3 + 10) =
           CONCAT11((byte)((ushort)sVar35 >> 8) |
                    (byte)((ushort)((ushort)(byte)((byte)((ulong)uVar5 >> 0x10) >> 1) << 0xb) >> 8),
                    (byte)sVar35 | (byte)((ulong)uVar29 >> 0x10) >> 1);
      *(ushort *)((long)param_3 + 0xc) =
           CONCAT11((byte)((ushort)sVar44 >> 8) |
                    (byte)((ushort)((ushort)(byte)((byte)((ulong)uVar17 >> 0x18) >> 1) << 0xb) >> 8)
                    ,(byte)sVar44 | (byte)((ulong)uVar31 >> 0x18) >> 1);
      *(ushort *)((long)param_3 + 0xe) =
           CONCAT11((byte)((ushort)sVar36 >> 8) |
                    (byte)((ushort)((ushort)(byte)((byte)((ulong)uVar5 >> 0x18) >> 1) << 0xb) >> 8),
                    (byte)sVar36 | (byte)((ulong)uVar29 >> 0x18) >> 1);
      *(ushort *)(param_3 + 2) =
           CONCAT11((byte)((ushort)sVar45 >> 8) |
                    (byte)((ushort)((ushort)(byte)((byte)((ulong)uVar17 >> 0x20) >> 1) << 0xb) >> 8)
                    ,(byte)sVar45 | (byte)((ulong)uVar31 >> 0x20) >> 1);
      *(ushort *)((long)param_3 + 0x12) =
           CONCAT11((byte)((ushort)sVar37 >> 8) |
                    (byte)((ushort)((ushort)(byte)((byte)((ulong)uVar5 >> 0x20) >> 1) << 0xb) >> 8),
                    (byte)sVar37 | (byte)((ulong)uVar29 >> 0x20) >> 1);
      *(ushort *)((long)param_3 + 0x14) =
           CONCAT11((byte)((ushort)sVar46 >> 8) |
                    (byte)((ushort)((ushort)(byte)((byte)((ulong)uVar17 >> 0x28) >> 1) << 0xb) >> 8)
                    ,(byte)sVar46 | (byte)((ulong)uVar31 >> 0x28) >> 1);
      *(ushort *)((long)param_3 + 0x16) =
           CONCAT11((byte)((ushort)sVar38 >> 8) |
                    (byte)((ushort)((ushort)(byte)((byte)((ulong)uVar5 >> 0x28) >> 1) << 0xb) >> 8),
                    (byte)sVar38 | (byte)((ulong)uVar29 >> 0x28) >> 1);
      *(ushort *)(param_3 + 3) =
           CONCAT11((byte)((ushort)sVar47 >> 8) |
                    (byte)((ushort)((ushort)(byte)((byte)((ulong)uVar17 >> 0x30) >> 1) << 0xb) >> 8)
                    ,(byte)sVar47 | (byte)((ulong)uVar31 >> 0x30) >> 1);
      *(ushort *)((long)param_3 + 0x1a) =
           CONCAT11((byte)((ushort)sVar39 >> 8) |
                    (byte)((ushort)((ushort)(byte)((byte)((ulong)uVar5 >> 0x30) >> 1) << 0xb) >> 8),
                    (byte)sVar39 | (byte)((ulong)uVar29 >> 0x30) >> 1);
      *(ushort *)((long)param_3 + 0x1c) =
           CONCAT11((byte)((ushort)sVar48 >> 8) |
                    (byte)((ushort)((ushort)(byte)((ulong)uVar17 >> 0x39) << 0xb) >> 8),
                    (byte)sVar48 | (byte)((ulong)uVar31 >> 0x39));
      *(ushort *)((long)param_3 + 0x1e) =
           CONCAT11((byte)((ushort)sVar40 >> 8) |
                    (byte)((ushort)((ushort)(byte)((ulong)uVar5 >> 0x39) << 0xb) >> 8),
                    (byte)sVar40 | (byte)((ulong)uVar29 >> 0x39));
      *(ushort *)(param_3 + 4) =
           CONCAT11((byte)((ushort)sVar19 >> 8) |
                    (byte)((ushort)((ushort)(byte)((byte)uVar18 >> 1) << 0xb) >> 8),
                    (byte)sVar19 | (byte)uVar32 >> 1);
      *(ushort *)((long)param_3 + 0x22) =
           CONCAT11((byte)((ushort)sVar7 >> 8) |
                    (byte)((ushort)((ushort)(byte)((byte)uVar6 >> 1) << 0xb) >> 8),
                    (byte)sVar7 | (byte)uVar30 >> 1);
      *(ushort *)((long)param_3 + 0x24) =
           CONCAT11((byte)((ushort)sVar21 >> 8) |
                    (byte)((ushort)((ushort)(byte)((byte)((ulong)uVar18 >> 8) >> 1) << 0xb) >> 8),
                    (byte)sVar21 | (byte)((ulong)uVar32 >> 8) >> 1);
      *(ushort *)((long)param_3 + 0x26) =
           CONCAT11((byte)((ushort)sVar9 >> 8) |
                    (byte)((ushort)((ushort)(byte)((byte)((ulong)uVar6 >> 8) >> 1) << 0xb) >> 8),
                    (byte)sVar9 | (byte)((ulong)uVar30 >> 8) >> 1);
      *(ushort *)(param_3 + 5) =
           CONCAT11((byte)((ushort)sVar22 >> 8) |
                    (byte)((ushort)((ushort)(byte)((byte)((ulong)uVar18 >> 0x10) >> 1) << 0xb) >> 8)
                    ,(byte)sVar22 | (byte)((ulong)uVar32 >> 0x10) >> 1);
      *(ushort *)((long)param_3 + 0x2a) =
           CONCAT11((byte)((ushort)sVar10 >> 8) |
                    (byte)((ushort)((ushort)(byte)((byte)((ulong)uVar6 >> 0x10) >> 1) << 0xb) >> 8),
                    (byte)sVar10 | (byte)((ulong)uVar30 >> 0x10) >> 1);
      *(ushort *)((long)param_3 + 0x2c) =
           CONCAT11((byte)((ushort)sVar23 >> 8) |
                    (byte)((ushort)((ushort)(byte)((byte)((ulong)uVar18 >> 0x18) >> 1) << 0xb) >> 8)
                    ,(byte)sVar23 | (byte)((ulong)uVar32 >> 0x18) >> 1);
      *(ushort *)((long)param_3 + 0x2e) =
           CONCAT11((byte)((ushort)sVar11 >> 8) |
                    (byte)((ushort)((ushort)(byte)((byte)((ulong)uVar6 >> 0x18) >> 1) << 0xb) >> 8),
                    (byte)sVar11 | (byte)((ulong)uVar30 >> 0x18) >> 1);
      *(ushort *)(param_3 + 6) =
           CONCAT11((byte)((ushort)sVar24 >> 8) |
                    (byte)((ushort)((ushort)(byte)((byte)((ulong)uVar18 >> 0x20) >> 1) << 0xb) >> 8)
                    ,(byte)sVar24 | (byte)((ulong)uVar32 >> 0x20) >> 1);
      *(ushort *)((long)param_3 + 0x32) =
           CONCAT11((byte)((ushort)sVar12 >> 8) |
                    (byte)((ushort)((ushort)(byte)((byte)((ulong)uVar6 >> 0x20) >> 1) << 0xb) >> 8),
                    (byte)sVar12 | (byte)((ulong)uVar30 >> 0x20) >> 1);
      *(ushort *)((long)param_3 + 0x34) =
           CONCAT11((byte)((ushort)sVar26 >> 8) |
                    (byte)((ushort)((ushort)(byte)((byte)((ulong)uVar18 >> 0x28) >> 1) << 0xb) >> 8)
                    ,(byte)sVar26 | (byte)((ulong)uVar32 >> 0x28) >> 1);
      *(ushort *)((long)param_3 + 0x36) =
           CONCAT11((byte)((ushort)sVar14 >> 8) |
                    (byte)((ushort)((ushort)(byte)((byte)((ulong)uVar6 >> 0x28) >> 1) << 0xb) >> 8),
                    (byte)sVar14 | (byte)((ulong)uVar30 >> 0x28) >> 1);
      *(ushort *)(param_3 + 7) =
           CONCAT11((byte)((ushort)sVar27 >> 8) |
                    (byte)((ushort)((ushort)(byte)((byte)((ulong)uVar18 >> 0x30) >> 1) << 0xb) >> 8)
                    ,(byte)sVar27 | (byte)((ulong)uVar32 >> 0x30) >> 1);
      *(ushort *)((long)param_3 + 0x3a) =
           CONCAT11((byte)((ushort)sVar15 >> 8) |
                    (byte)((ushort)((ushort)(byte)((byte)((ulong)uVar6 >> 0x30) >> 1) << 0xb) >> 8),
                    (byte)sVar15 | (byte)((ulong)uVar30 >> 0x30) >> 1);
      *(ushort *)((long)param_3 + 0x3c) =
           CONCAT11((byte)((ushort)sVar28 >> 8) |
                    (byte)((ushort)((ushort)(byte)((ulong)uVar18 >> 0x39) << 0xb) >> 8),
                    (byte)sVar28 | (byte)((ulong)uVar32 >> 0x39));
      *(ushort *)((long)param_3 + 0x3e) =
           CONCAT11((byte)((ushort)sVar16 >> 8) |
                    (byte)((ushort)((ushort)(byte)((ulong)uVar6 >> 0x39) << 0xb) >> 8),
                    (byte)sVar16 | (byte)((ulong)uVar30 >> 0x39));
      param_3 = param_3 + 8;
      puVar3 = puVar4;
      param_2 = param_2 + 2;
    } while (puVar4 != param_1 + 0x20);
  }
  if (lVar2 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0,lVar2 - ___stack_chk_guard,0);
}


