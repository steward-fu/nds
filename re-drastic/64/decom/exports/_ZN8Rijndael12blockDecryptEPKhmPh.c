/*
 * Ghidra decompilation
 *
 * Function : _ZN8Rijndael12blockDecryptEPKhmPh
 * Address  : 001c6880
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Rijndael::blockDecrypt(unsigned char const*, unsigned long, unsigned char*) */

void __thiscall Rijndael::blockDecrypt(Rijndael *this,uchar *param_1,ulong param_2,uchar *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong *puVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  ulong uVar28;
  ulong uVar29;
  uint uVar30;
  uint uVar31;
  byte bVar32;
  uint uVar33;
  byte bVar34;
  uint uVar35;
  byte bVar36;
  uint uVar37;
  uint uVar38;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  uint local_50;
  uint local_4c;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  undefined8 local_20;
  undefined8 uStack_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (uchar *)0x0 || param_2 == 0) {
    uVar21 = 0;
  }
  else {
    uVar22 = *(ulong *)(this + 4);
    uVar21 = *(ulong *)(this + 0xc);
    if (param_2 >> 4 != 0) {
      uVar33 = (uint)uVar22;
      uVar38 = uVar33 & 0xff;
      uVar37 = uVar33 >> 8 & 0xff;
      uVar35 = uVar33 >> 0x10 & 0xff;
      uVar33 = uVar33 >> 0x18;
      local_40 = uVar22 >> 0x20 & 0xff;
      local_38 = uVar22 >> 0x28 & 0xff;
      uVar29 = uVar22 >> 0x38;
      uVar20 = (uint)uVar21;
      local_48 = uVar22 >> 0x30 & 0xff;
      uVar31 = uVar20 & 0xff;
      uVar30 = uVar20 >> 0x18;
      local_4c = uVar20 >> 8 & 0xff;
      local_50 = uVar20 >> 0x10 & 0xff;
      uVar28 = uVar21 >> 0x38;
      local_58 = uVar21 >> 0x20 & 0xff;
      local_60 = uVar21 >> 0x28 & 0xff;
      local_68 = uVar21 >> 0x30 & 0xff;
      puVar23 = (ulong *)param_1;
      do {
        decrypt(this,(uchar *)puVar23,(uchar *)&local_20);
        bVar1 = (byte)uVar38;
        bVar2 = (byte)local_20 ^ bVar1;
        bVar36 = (byte)uVar37;
        bVar3 = local_20._1_1_ ^ bVar36;
        bVar34 = (byte)uVar35;
        bVar4 = local_20._2_1_ ^ bVar34;
        bVar32 = (byte)uVar33;
        bVar5 = local_20._3_1_ ^ bVar32;
        bVar27 = (byte)local_40;
        bVar6 = local_20._4_1_ ^ bVar27;
        bVar26 = (byte)local_38;
        bVar7 = local_20._5_1_ ^ bVar26;
        bVar25 = (byte)local_48;
        bVar8 = local_20._6_1_ ^ bVar25;
        bVar18 = (byte)uVar29;
        bVar9 = local_20._7_1_ ^ bVar18;
        bVar19 = (byte)uVar31;
        bVar10 = (byte)uStack_18 ^ bVar19;
        bVar11 = uStack_18._1_1_ ^ (byte)local_4c;
        uVar38 = (uint)*(byte *)puVar23;
        bVar12 = uStack_18._2_1_ ^ (byte)local_50;
        uVar37 = (uint)*(byte *)((long)puVar23 + 1);
        uVar35 = (uint)*(byte *)((long)puVar23 + 2);
        bVar13 = uStack_18._3_1_ ^ (byte)uVar30;
        uVar33 = (uint)*(byte *)((long)puVar23 + 3);
        bVar14 = uStack_18._4_1_ ^ (byte)local_58;
        bVar15 = uStack_18._5_1_ ^ (byte)local_60;
        bVar16 = uStack_18._6_1_ ^ (byte)local_68;
        bVar17 = uStack_18._7_1_ ^ (byte)uVar28;
        local_40 = (ulong)*(byte *)((long)puVar23 + 4);
        uVar29 = (ulong)*(byte *)((long)puVar23 + 7);
        uVar31 = (uint)*(byte *)(puVar23 + 1);
        local_38 = (ulong)*(byte *)((long)puVar23 + 5);
        local_48 = (ulong)*(byte *)((long)puVar23 + 6);
        local_20 = CONCAT17(local_20._7_1_ ^ bVar18,
                            CONCAT16(local_20._6_1_ ^ bVar25,
                                     CONCAT15(local_20._5_1_ ^ bVar26,
                                              CONCAT14(local_20._4_1_ ^ bVar27,
                                                       CONCAT13(local_20._3_1_ ^ bVar32,
                                                                CONCAT12(local_20._2_1_ ^ bVar34,
                                                                         CONCAT11(local_20._1_1_ ^
                                                                                  bVar36,(byte)
                                                  local_20 ^ bVar1)))))));
        uStack_18 = CONCAT17(uStack_18._7_1_ ^ (byte)uVar28,
                             CONCAT16(uStack_18._6_1_ ^ (byte)local_68,
                                      CONCAT15(uStack_18._5_1_ ^ (byte)local_60,
                                               CONCAT14(uStack_18._4_1_ ^ (byte)local_58,
                                                        CONCAT13(uStack_18._3_1_ ^ (byte)uVar30,
                                                                 CONCAT12(uStack_18._2_1_ ^
                                                                          (byte)local_50,
                                                                          CONCAT11(uStack_18._1_1_ ^
                                                                                   (byte)local_4c,
                                                                                   (byte)uStack_18 ^
                                                                                   bVar19)))))));
        local_4c = (uint)*(byte *)((long)puVar23 + 9);
        local_50 = (uint)*(byte *)((long)puVar23 + 10);
        local_58 = (ulong)*(byte *)((long)puVar23 + 0xc);
        uVar30 = (uint)*(byte *)((long)puVar23 + 0xb);
        uVar28 = (ulong)*(byte *)((long)puVar23 + 0xf);
        local_60 = (ulong)*(byte *)((long)puVar23 + 0xd);
        bVar1 = *(byte *)((long)puVar23 + 0xe);
        puVar24 = puVar23 + 2;
        uVar21 = puVar23[1];
        uVar22 = *puVar23;
        *param_3 = bVar2;
        param_3[1] = bVar3;
        param_3[2] = bVar4;
        param_3[3] = bVar5;
        param_3[4] = bVar6;
        param_3[5] = bVar7;
        param_3[6] = bVar8;
        param_3[7] = bVar9;
        param_3[8] = bVar10;
        param_3[9] = bVar11;
        local_68 = (ulong)bVar1;
        param_3[10] = bVar12;
        param_3[0xb] = bVar13;
        param_3[0xc] = bVar14;
        param_3[0xd] = bVar15;
        param_3[0xe] = bVar16;
        param_3[0xf] = bVar17;
        puVar23 = puVar24;
        param_3 = param_3 + 0x10;
      } while (puVar24 != (ulong *)(param_1 + (param_2 & 0xfffffffffffffff0)));
    }
    *(ulong *)(this + 4) = uVar22;
    *(ulong *)(this + 0xc) = uVar21;
    uVar21 = param_2 & 0xfffffffffffffff0;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar21,local_8 - ___stack_chk_guard,0);
}


