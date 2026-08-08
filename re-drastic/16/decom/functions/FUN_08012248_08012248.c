/*
 * Ghidra decompilation
 *
 * Function : FUN_08012248
 * Address  : 08012248
 * Program  : drastic16
 */


void FUN_08012248(undefined (*param_1) [16],int param_2)

{
  size_t sVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined2 *puVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar17;
  undefined auVar16 [16];
  undefined auVar18 [16];
  undefined8 local_98;
  undefined8 local_90;
  ulonglong local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  ushort local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined2 local_2c;
  undefined2 *puVar4;
  
  local_98 = 0;
  local_80._0_1_ = 'd';
  local_80._1_1_ = 'e';
  local_80._2_1_ = 's';
  local_80._3_1_ = 'p';
  uStack_7c._0_1_ = 'e';
  uStack_7c._1_1_ = 'r';
  uStack_7c._2_1_ = 'a';
  uStack_7c._3_1_ = 't';
  local_78._0_1_ = 'e';
  local_78._1_1_ = ' ';
  local_78._2_1_ = 'd';
  local_78._3_1_ = 'r';
  uStack_74._0_1_ = 'a';
  uStack_74._1_1_ = 's';
  uStack_74._2_1_ = 't';
  uStack_74._3_1_ = 'i';
  local_90 = 0;
  local_88 = local_88 & 0xffff000000000000;
  local_70._0_1_ = 'c';
  local_70._1_1_ = ' ';
  local_70._2_1_ = 'm';
  local_70._3_1_ = 'e';
  local_6c._0_1_ = 'a';
  local_6c._1_1_ = 's';
  local_6c._2_1_ = 'u';
  local_6c._3_1_ = 'r';
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_68 = 0x65;
  sVar1 = wcslen((wchar_t *)param_1);
  if (sVar1 != 0) {
    uVar7 = sVar1 >> 3;
    uVar9 = sVar1 & 0xfffffff8;
    if (uVar7 != 0 && sVar1 < 7 || (uVar7 == 0 || sVar1 == 7)) {
      uVar9 = 0;
    }
    else {
      local_98 = VectorCopyNarrow(*param_1,4);
      local_90 = VectorCopyNarrow(param_1[1],4);
      if (1 < uVar7) {
        local_88 = VectorCopyNarrow(param_1[2],4);
        uVar17 = VectorCopyNarrow(param_1[3],4);
        local_80 = (undefined4)uVar17;
        uStack_7c = (undefined4)((ulonglong)uVar17 >> 0x20);
      }
      if (sVar1 == uVar9) goto LAB_080123dc;
    }
    *(short *)((int)&local_98 + uVar9 * 2) = (short)*(undefined4 *)(*param_1 + uVar9 * 4);
    if (uVar9 + 1 < sVar1) {
      *(short *)((int)&local_98 + (uVar9 + 1) * 2) =
           (short)*(undefined4 *)(*param_1 + uVar9 * 4 + 4);
      if (uVar9 + 2 < sVar1) {
        *(short *)((int)&local_98 + (uVar9 + 2) * 2) =
             (short)*(undefined4 *)(*param_1 + uVar9 * 4 + 8);
        if (uVar9 + 3 < sVar1) {
          *(short *)((int)&local_98 + (uVar9 + 3) * 2) =
               (short)*(undefined4 *)(*param_1 + uVar9 * 4 + 0xc);
          if (uVar9 + 4 < sVar1) {
            *(short *)((int)&local_98 + (uVar9 + 4) * 2) =
                 (short)*(undefined4 *)(param_1[1] + uVar9 * 4);
            if (uVar9 + 5 < sVar1) {
              *(short *)((int)&local_98 + (uVar9 + 5) * 2) =
                   (short)*(undefined4 *)(param_1[1] + uVar9 * 4 + 4);
              if (uVar9 + 6 < sVar1) {
                *(short *)((int)&local_98 + (uVar9 + 6) * 2) =
                     (short)*(undefined4 *)(param_1[1] + uVar9 * 4 + 8);
              }
            }
          }
        }
      }
    }
  }
LAB_080123dc:
  puVar10 = (undefined2 *)(param_2 + 0x3fe00);
  auVar16[8] = (char)local_78;
  auVar16[9] = local_78._1_1_;
  auVar16[10] = local_78._2_1_;
  auVar16[11] = local_78._3_1_;
  auVar16._0_8_ = CONCAT44(uStack_7c,local_80);
  auVar16[12] = (char)uStack_74;
  auVar16[13] = uStack_74._1_1_;
  auVar16[14] = uStack_74._2_1_;
  auVar16[15] = uStack_74._3_1_;
  auVar18 = VectorCopyLong(CONCAT44(uStack_7c,local_80),1,1);
  auVar16 = VectorCopyLong(auVar16._8_8_,1,1);
  local_3c = (uint)CONCAT12(local_70._3_1_,(ushort)local_70._2_1_);
  local_30._0_2_ = local_68 & 0xff;
  local_60 = auVar18._0_8_;
  local_58 = auVar18._8_8_;
  local_50 = auVar16._0_8_;
  local_48 = auVar16._8_8_;
  local_40 = (uint)CONCAT12(local_70._1_1_,(ushort)(byte)local_70);
  local_38 = (uint)CONCAT12(local_6c._1_1_,(ushort)(byte)local_6c);
  local_34 = (uint)CONCAT12(local_6c._3_1_,(ushort)local_6c._2_1_);
  *(undefined2 *)((int)&local_98 + sVar1 * 2) = 0;
  local_30 = (uint)(ushort)local_30;
  do {
    *puVar10 = 5;
    *(char *)(puVar10 + 1) = (char)*(undefined4 *)param_1[3];
    *(char *)((int)puVar10 + 3) = (char)*(undefined4 *)(param_1[3] + 4) + '\x01';
    uVar11 = *(undefined4 *)(param_1[3] + 8);
    *(undefined4 *)(puVar10 + 3) = (undefined4)local_98;
    *(undefined4 *)(puVar10 + 5) = local_98._4_4_;
    puVar12 = &local_60;
    *(char *)(puVar10 + 2) = (char)uVar11;
    *(undefined *)((int)puVar10 + 5) = 0;
    *(undefined4 *)(puVar10 + 0xb) = (undefined4)local_88;
    *(undefined4 *)(puVar10 + 7) = (undefined4)local_90;
    *(undefined4 *)(puVar10 + 9) = local_90._4_4_;
    puVar10[0xd] = (short)sVar1;
    puVar13 = (undefined4 *)(puVar10 + 0xe);
    do {
      puVar14 = puVar13 + 4;
      uVar11 = *(undefined4 *)puVar12;
      uVar2 = *(undefined4 *)((int)puVar12 + 4);
      uVar5 = *(undefined4 *)(puVar12 + 1);
      uVar8 = *(undefined4 *)((int)puVar12 + 0xc);
      puVar15 = puVar12 + 2;
      puVar12 = puVar12 + 2;
      *puVar13 = uVar11;
      puVar13[1] = uVar2;
      puVar13[2] = uVar5;
      puVar13[3] = uVar8;
      puVar13 = puVar14;
    } while (puVar15 != (undefined8 *)&local_30);
    *puVar14 = *(undefined4 *)puVar12;
    puVar10[0x29] = 0;
    puVar10[0x2b] = 0;
    *(undefined2 *)((int)puVar10 + 0x53) = 0;
    puVar10[0x28] = 0x19;
    puVar10[0x30] = 0x800;
    puVar10[0x2f] = 0xe00;
    *(undefined *)(puVar10 + 0x31) = 0xe0;
    uVar9 = 0xffff;
    puVar10[0x2a] = 0;
    *(undefined *)((int)puVar10 + 0x57) = 0;
    puVar10[0x2c] = 0x200;
    puVar10[0x2d] = 0x200;
    *(undefined *)(puVar10 + 0x2e) = 0x20;
    *(undefined *)((int)puVar10 + 0x5d) = 0x20;
    *(undefined *)((int)puVar10 + 99) = 0x80;
    uVar11 = *(undefined4 *)(param_1[2] + 0xc);
    *(undefined4 *)(puVar10 + 0x34) = 0;
    *(undefined4 *)(puVar10 + 0x36) = 0xff;
    puVar10[0x32] = (short)uVar11;
    puVar10[0x38] = 0;
    puVar4 = puVar10;
    do {
      puVar3 = (undefined2 *)((int)puVar4 + 1);
      uVar7 = (uVar9 ^ *(byte *)puVar4) >> 1;
      uVar6 = uVar7 ^ 0x606080;
      if (((uVar9 ^ *(byte *)puVar4) & 1) == 0) {
        uVar6 = uVar7;
      }
      uVar9 = uVar6 >> 1;
      if ((uVar6 & 1) != 0) {
        uVar9 = uVar9 ^ 0x306040;
      }
      uVar7 = uVar9 >> 1 ^ 0x186020;
      if ((uVar9 & 1) == 0) {
        uVar7 = uVar9 >> 1;
      }
      uVar9 = uVar7 >> 1;
      if ((uVar7 & 1) != 0) {
        uVar9 = uVar9 ^ 0xc6010;
      }
      uVar7 = uVar9 >> 1;
      if ((uVar9 & 1) != 0) {
        uVar7 = uVar7 ^ 0x66008;
      }
      uVar9 = uVar7 >> 1;
      if ((uVar7 & 1) != 0) {
        uVar9 = uVar9 ^ 0x36004;
      }
      uVar7 = uVar9 >> 1;
      if ((uVar9 & 1) != 0) {
        uVar7 = uVar7 ^ 0x1e002;
      }
      uVar9 = uVar7 >> 1 ^ 0xa001;
      if ((uVar7 & 1) == 0) {
        uVar9 = uVar7 >> 1;
      }
      puVar4 = puVar3;
    } while (puVar3 != puVar10 + 0x38);
    puVar10[0x39] = (short)uVar9;
    puVar4 = puVar10 + 0x3c;
    puVar10 = puVar10 + 0x80;
    memset(puVar4,0,0x86);
  } while (puVar10 != (undefined2 *)(param_2 + 0x40000));
  return;
}


