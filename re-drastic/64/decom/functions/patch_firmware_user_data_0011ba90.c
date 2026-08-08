/*
 * Ghidra decompilation
 *
 * Function : patch_firmware_user_data
 * Address  : 0011ba90
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void patch_firmware_user_data(undefined8 *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  ushort uVar10;
  uint uVar11;
  size_t sVar12;
  uint uVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined2 local_7c;
  ulong local_70;
  ulong uStack_68;
  ulong local_60;
  ulong uStack_58;
  ulong local_50;
  ulong local_48;
  uint local_40;
  undefined2 local_3c;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined2 local_18;
  long local_8;
  undefined2 *puVar16;
  
  local_8 = ___stack_chk_guard;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_7c = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_30._0_1_ = 'd';
  local_30._1_1_ = 'e';
  local_30._2_1_ = 's';
  local_30._3_1_ = 'p';
  local_30._4_1_ = 'e';
  local_30._5_1_ = 'r';
  local_30._6_1_ = 'a';
  local_30._7_1_ = 't';
  uStack_28._0_1_ = 'e';
  uStack_28._1_1_ = ' ';
  uStack_28._2_1_ = 'd';
  uStack_28._3_1_ = 'r';
  uStack_28._4_1_ = 'a';
  uStack_28._5_1_ = 's';
  uStack_28._6_1_ = 't';
  uStack_28._7_1_ = 'i';
  local_20._0_1_ = 'c';
  local_20._1_1_ = ' ';
  local_20._2_1_ = 'm';
  local_20._3_1_ = 'e';
  local_20._4_1_ = 'a';
  local_20._5_1_ = 's';
  local_20._6_1_ = 'u';
  local_20._7_1_ = 'r';
  local_18._0_1_ = 'e';
  local_18._1_1_ = '\0';
  sVar12 = wcslen((wchar_t *)param_1);
  uVar11 = (uint)sVar12;
  if (uVar11 != 0) {
    if (uVar11 - 1 < 7) {
      uVar13 = 0;
    }
    else {
      uVar13 = uVar11 & 0xfffffff8;
      local_90 = CONCAT26((short)((ulong)param_1[1] >> 0x20),
                          CONCAT24((short)param_1[1],
                                   CONCAT22((short)((ulong)*param_1 >> 0x20),(short)*param_1)));
      uStack_88 = CONCAT26((short)((ulong)param_1[3] >> 0x20),
                           CONCAT24((short)param_1[3],
                                    CONCAT22((short)((ulong)param_1[2] >> 0x20),(short)param_1[2])))
      ;
      if ((sVar12 & 7) == 0) goto LAB_0011bbbc;
    }
    uVar1 = uVar13 + 1;
    *(short *)((long)&local_90 + (ulong)uVar13 * 2) =
         (short)*(wchar_t *)((long)param_1 + (ulong)uVar13 * 4);
    if (uVar1 < uVar11) {
      *(short *)((long)&local_90 + (ulong)uVar1 * 2) =
           (short)*(wchar_t *)((long)param_1 + (ulong)uVar1 * 4);
      uVar1 = uVar13 + 2;
      if (uVar1 < uVar11) {
        *(short *)((long)&local_90 + (ulong)uVar1 * 2) =
             (short)*(wchar_t *)((long)param_1 + (ulong)uVar1 * 4);
        uVar1 = uVar13 + 3;
        if (uVar1 < uVar11) {
          *(short *)((long)&local_90 + (ulong)uVar1 * 2) =
               (short)*(wchar_t *)((long)param_1 + (ulong)uVar1 * 4);
          uVar1 = uVar13 + 4;
          if (uVar1 < uVar11) {
            *(short *)((long)&local_90 + (ulong)uVar1 * 2) =
                 (short)*(wchar_t *)((long)param_1 + (ulong)uVar1 * 4);
            uVar1 = uVar13 + 5;
            if (uVar1 < uVar11) {
              *(short *)((long)&local_90 + (ulong)uVar1 * 2) =
                   (short)*(wchar_t *)((long)param_1 + (ulong)uVar1 * 4);
              uVar13 = uVar13 + 6;
              if (uVar13 < uVar11) {
                *(short *)((long)&local_90 + (ulong)uVar13 * 2) =
                     (short)*(wchar_t *)((long)param_1 + (ulong)uVar13 * 4);
              }
            }
          }
        }
      }
    }
  }
LAB_0011bbbc:
  uVar10 = local_18;
  bVar2 = (byte)local_20;
  cVar4 = local_20._2_1_;
  cVar5 = local_20._3_1_;
  bVar6 = local_20._4_1_;
  cVar7 = local_20._5_1_;
  cVar8 = local_20._6_1_;
  cVar9 = local_20._7_1_;
  uVar19 = (ulong)CONCAT16(SUB81(local_30,3),
                           (uint6)CONCAT14(SUB81(local_30,2),
                                           (uint)(CONCAT12(SUB81(local_30,1),(short)local_30) &
                                                 0xff00ff)));
  uVar20 = (ulong)CONCAT16(SUB81(local_30,7),
                           (uint6)CONCAT14(SUB81(local_30,6),
                                           (uint)CONCAT12(SUB81(local_30,5),
                                                          (ushort)SUB81(local_30,4))));
  uVar17 = (ulong)CONCAT16(SUB81(uStack_28,3),
                           (uint6)CONCAT14(SUB81(uStack_28,2),
                                           (uint)(CONCAT12(SUB81(uStack_28,1),(short)uStack_28) &
                                                 0xff00ff)));
  uVar18 = (ulong)CONCAT16(SUB81(uStack_28,7),
                           (uint6)CONCAT14(SUB81(uStack_28,6),
                                           (uint)CONCAT12(SUB81(uStack_28,5),
                                                          (ushort)SUB81(uStack_28,4))));
  cVar3 = local_20._1_1_;
  *(undefined2 *)((long)&local_90 + (sVar12 & 0xffffffff) * 2) = 0;
  local_50._0_4_ = (uint)CONCAT12(cVar3,(ushort)bVar2);
  local_50._0_6_ = (uint6)CONCAT14(cVar4,(uint)local_50);
  local_50 = (ulong)CONCAT16(cVar5,(uint6)local_50);
  local_48._0_4_ = (uint)CONCAT12(cVar7,(ushort)bVar6);
  local_48._0_6_ = (uint6)CONCAT14(cVar8,(uint)local_48);
  local_48 = (ulong)CONCAT16(cVar9,(uint6)local_48);
  local_40 = (uint)(uVar10 & 0xff);
  puVar14 = (undefined2 *)(param_2 + 0x3fe70);
  do {
    puVar14[-0x38] = 5;
    *(char *)(puVar14 + -0x37) = (char)*(wchar_t *)(param_1 + 6);
    *(char *)((long)puVar14 + -0x6d) = (char)*(wchar_t *)((long)param_1 + 0x34) + '\x01';
    *(char *)(puVar14 + -0x36) = (char)*(wchar_t *)(param_1 + 7);
    *(undefined *)((long)puVar14 + -0x6b) = 0;
    *(undefined8 *)(puVar14 + -0x35) = local_90;
    *(undefined8 *)(puVar14 + -0x31) = uStack_88;
    *(undefined4 *)(puVar14 + -0x2d) = local_80;
    puVar14[-0x2b] = (short)sVar12;
    *(ulong *)(puVar14 + -0x2a) = uVar19;
    *(ulong *)(puVar14 + -0x26) = uVar20;
    *(ulong *)(puVar14 + -0x22) = uVar17;
    *(ulong *)(puVar14 + -0x1e) = uVar18;
    *(ulong *)(puVar14 + -0x1a) = local_50;
    *(ulong *)(puVar14 + -0x16) = local_48;
    puVar14[-0xf] = 0;
    *(undefined2 *)((long)puVar14 + -0x1d) = 0;
    *(uint *)(puVar14 + -0x12) = local_40;
    puVar14[-0x10] = 0x19;
    puVar14[-0xe] = 0;
    puVar14[-0xd] = 0;
    puVar14[-0xc] = 0x200;
    puVar14[-0xb] = 0x200;
    *(undefined *)(puVar14 + -10) = 0x20;
    *(undefined *)((long)puVar14 + -0x13) = 0x20;
    puVar14[-9] = 0xe00;
    puVar14[-8] = 0x800;
    *(undefined *)(puVar14 + -7) = 0xe0;
    *(undefined *)((long)puVar14 + -0xd) = 0x80;
    uVar11 = 0xffff;
    puVar14[-6] = (short)*(wchar_t *)((long)param_1 + 0x2c);
    *puVar14 = 0;
    *(undefined8 *)(puVar14 + -4) = 0xff00000000;
    puVar16 = puVar14 + -0x38;
    do {
      puVar15 = (undefined2 *)((long)puVar16 + 1);
      uVar1 = (*(byte *)puVar16 ^ uVar11) >> 1;
      uVar13 = uVar1 ^ 0x606080;
      if (((*(byte *)puVar16 ^ uVar11) & 1) == 0) {
        uVar13 = uVar1;
      }
      uVar11 = uVar13 >> 1 ^ 0x306040;
      if ((uVar13 & 1) == 0) {
        uVar11 = uVar13 >> 1;
      }
      uVar13 = uVar11 >> 1 ^ 0x186020;
      if ((uVar11 & 1) == 0) {
        uVar13 = uVar11 >> 1;
      }
      uVar11 = uVar13 >> 1 ^ 0xc6010;
      if ((uVar13 & 1) == 0) {
        uVar11 = uVar13 >> 1;
      }
      uVar13 = uVar11 >> 1 ^ 0x66008;
      if ((uVar11 & 1) == 0) {
        uVar13 = uVar11 >> 1;
      }
      uVar11 = uVar13 >> 1 ^ 0x36004;
      if ((uVar13 & 1) == 0) {
        uVar11 = uVar13 >> 1;
      }
      uVar13 = uVar11 >> 1 ^ 0x1e002;
      if ((uVar11 & 1) == 0) {
        uVar13 = uVar11 >> 1;
      }
      uVar11 = uVar13 >> 1 ^ 0xa001;
      if ((uVar13 & 1) == 0) {
        uVar11 = uVar13 >> 1;
      }
      puVar16 = puVar15;
    } while (puVar14 != puVar15);
    puVar14[1] = (short)uVar11;
    *(undefined8 *)(puVar14 + 4) = 0;
    *(undefined8 *)(puVar14 + 8) = 0;
    puVar16 = puVar14 + 0x80;
    *(undefined8 *)(puVar14 + 0xc) = 0;
    *(undefined8 *)(puVar14 + 0x10) = 0;
    *(undefined8 *)(puVar14 + 0x14) = 0;
    *(undefined8 *)(puVar14 + 0x18) = 0;
    *(undefined8 *)(puVar14 + 0x1c) = 0;
    *(undefined8 *)(puVar14 + 0x20) = 0;
    *(undefined8 *)(puVar14 + 0x24) = 0;
    *(undefined8 *)(puVar14 + 0x28) = 0;
    *(undefined8 *)(puVar14 + 0x2c) = 0;
    *(undefined8 *)(puVar14 + 0x30) = 0;
    *(undefined8 *)(puVar14 + 0x34) = 0;
    *(undefined8 *)(puVar14 + 0x38) = 0;
    *(undefined8 *)(puVar14 + 0x3c) = 0;
    *(undefined8 *)(puVar14 + 0x40) = 0;
    *(undefined4 *)(puVar14 + 0x44) = 0;
    puVar14[0x46] = 0;
    puVar14 = puVar16;
  } while ((undefined2 *)(param_2 + 0x40070) != puVar16);
  if (local_8 - ___stack_chk_guard != 0) {
    local_70 = uVar19;
    uStack_68 = uVar20;
    local_60 = uVar17;
    uStack_58 = uVar18;
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return;
}


