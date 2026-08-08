/*
 * Ghidra decompilation
 *
 * Function : _ZN8Rijndael7decryptEPKhPh
 * Address  : 001c5f20
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Rijndael::decrypt(unsigned char const*, unsigned char*) */

void __thiscall Rijndael::decrypt(Rijndael *this,uchar *param_1,uchar *param_2)

{
  uint uVar1;
  Rijndael RVar2;
  Rijndael RVar3;
  Rijndael RVar4;
  Rijndael RVar5;
  Rijndael RVar6;
  Rijndael RVar7;
  Rijndael RVar8;
  Rijndael RVar9;
  Rijndael RVar10;
  Rijndael RVar11;
  Rijndael RVar12;
  byte bVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  Rijndael *pRVar23;
  long lVar24;
  long lVar25;
  byte bVar29;
  uint3 uVar26;
  byte bVar28;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  undefined8 uVar27;
  byte bVar37;
  uint3 uVar34;
  byte bVar36;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  undefined8 uVar35;
  undefined8 uVar42;
  undefined8 uVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  
  lVar14 = ___stack_chk_guard;
  uVar43 = *(undefined8 *)(param_1 + 8);
  uVar42 = *(undefined8 *)param_1;
  uVar35 = *(undefined8 *)(this + (long)*(int *)this * 0x10 + 0x1c);
  uVar27 = *(undefined8 *)(this + (long)*(int *)this * 0x10 + 0x14);
  bVar28 = (byte)((ulong)uVar27 >> 8) ^ (byte)((ulong)uVar42 >> 8);
  bVar29 = (byte)((ulong)uVar27 >> 0x10) ^ (byte)((ulong)uVar42 >> 0x10);
  bVar30 = (byte)((ulong)uVar27 >> 0x18) ^ (byte)((ulong)uVar42 >> 0x18);
  bVar31 = (byte)((ulong)uVar27 >> 0x20) ^ (byte)((ulong)uVar42 >> 0x20);
  bVar32 = (byte)((ulong)uVar27 >> 0x28) ^ (byte)((ulong)uVar42 >> 0x28);
  bVar33 = (byte)((ulong)uVar27 >> 0x30) ^ (byte)((ulong)uVar42 >> 0x30);
  bVar36 = (byte)((ulong)uVar35 >> 8) ^ (byte)((ulong)uVar43 >> 8);
  bVar37 = (byte)((ulong)uVar35 >> 0x10) ^ (byte)((ulong)uVar43 >> 0x10);
  bVar38 = (byte)((ulong)uVar35 >> 0x18) ^ (byte)((ulong)uVar43 >> 0x18);
  bVar39 = (byte)((ulong)uVar35 >> 0x20) ^ (byte)((ulong)uVar43 >> 0x20);
  bVar40 = (byte)((ulong)uVar35 >> 0x28) ^ (byte)((ulong)uVar43 >> 0x28);
  bVar41 = (byte)((ulong)uVar35 >> 0x30) ^ (byte)((ulong)uVar43 >> 0x30);
  lVar15 = ((ulong)CONCAT16(bVar33,CONCAT15(bVar32,CONCAT14(bVar31,CONCAT13(bVar30,CONCAT12(bVar29,
                                                  CONCAT11(bVar28,(byte)uVar27 ^ (byte)uVar42))))))
           & 0xff) * 4;
  lVar24 = (ulong)bVar40 * 4;
  lVar20 = (ulong)bVar37 * 4;
  lVar17 = (ulong)(byte)((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar42 >> 0x38)) * 4;
  *param_2 = (&T8)[lVar17] ^ (&T7)[lVar20] ^ (&T5)[lVar15] ^ (&T6)[lVar24];
  param_2[1] = (&DAT_004fa671)[lVar20] ^ (&DAT_004faa71)[lVar17] ^
               (&DAT_004f9e71)[lVar15] ^ (&DAT_004fa271)[lVar24];
  param_2[2] = (&DAT_004fa672)[lVar20] ^ (&DAT_004faa72)[lVar17] ^
               (&DAT_004f9e72)[lVar15] ^ (&DAT_004fa272)[lVar24];
  lVar21 = (ulong)bVar31 * 4;
  lVar19 = (ulong)bVar28 * 4;
  lVar25 = (ulong)bVar41 * 4;
  lVar18 = (ulong)bVar38 * 4;
  param_2[3] = (&DAT_004fa673)[lVar20] ^ (&DAT_004faa73)[lVar17] ^
               (&DAT_004f9e73)[lVar15] ^ (&DAT_004fa273)[lVar24];
  param_2[4] = (&T7)[lVar25] ^ (&T8)[lVar18] ^ (&T6)[lVar19] ^ (&T5)[lVar21];
  param_2[5] = (&DAT_004faa71)[lVar18] ^ (&DAT_004fa671)[lVar25] ^
               (&DAT_004fa271)[lVar19] ^ (&DAT_004f9e71)[lVar21];
  param_2[6] = (&DAT_004fa672)[lVar25] ^ (&DAT_004faa72)[lVar18] ^
               (&DAT_004f9e72)[lVar21] ^ (&DAT_004fa272)[lVar19];
  lVar24 = ((ulong)CONCAT16(bVar41,CONCAT15(bVar40,CONCAT14(bVar39,CONCAT13(bVar38,CONCAT12(bVar37,
                                                  CONCAT11(bVar36,(byte)uVar35 ^ (byte)uVar43))))))
           & 0xff) * 4;
  lVar20 = (ulong)bVar32 * 4;
  lVar22 = (ulong)(byte)((byte)((ulong)uVar35 >> 0x38) ^ (byte)((ulong)uVar43 >> 0x38)) * 4;
  lVar17 = (ulong)bVar29 * 4;
  param_2[7] = (&DAT_004f9e73)[lVar21] ^ (&DAT_004fa273)[lVar19] ^
               (&DAT_004fa673)[lVar25] ^ (&DAT_004faa73)[lVar18];
  param_2[8] = (&T6)[lVar20] ^ (&T5)[lVar24] ^ (&T8)[lVar22] ^ (&T7)[lVar17];
  param_2[9] = (&DAT_004f9e71)[lVar24] ^ (&DAT_004fa271)[lVar20] ^
               (&DAT_004faa71)[lVar22] ^ (&DAT_004fa671)[lVar17];
  param_2[10] = (&DAT_004fa272)[lVar20] ^ (&DAT_004f9e72)[lVar24] ^
                (&DAT_004faa72)[lVar22] ^ (&DAT_004fa672)[lVar17];
  lVar19 = (ulong)bVar36 * 4;
  lVar21 = (ulong)bVar30 * 4;
  lVar15 = (ulong)bVar39 * 4;
  lVar18 = (ulong)bVar33 * 4;
  param_2[0xb] = (&DAT_004f9e73)[lVar24] ^ (&DAT_004fa273)[lVar20] ^
                 (&DAT_004fa673)[lVar17] ^ (&DAT_004faa73)[lVar22];
  param_2[0xc] = (&T8)[lVar21] ^ (&T7)[lVar18] ^ (&T6)[lVar19] ^ (&T5)[lVar15];
  param_2[0xd] = (&DAT_004faa71)[lVar21] ^ (&DAT_004fa671)[lVar18] ^
                 (&DAT_004fa271)[lVar19] ^ (&DAT_004f9e71)[lVar15];
  param_2[0xe] = (&DAT_004faa72)[lVar21] ^ (&DAT_004fa672)[lVar18] ^
                 (&DAT_004fa272)[lVar19] ^ (&DAT_004f9e72)[lVar15];
  bVar28 = *param_2;
  param_2[0xf] = (&DAT_004f9e73)[lVar15] ^ (&DAT_004fa273)[lVar19] ^
                 (&DAT_004fa673)[lVar18] ^ (&DAT_004faa73)[lVar21];
  uVar1 = *(uint *)this;
  if (2 < (int)uVar1) {
    uVar16 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4;
    bVar29 = param_2[1];
    bVar30 = param_2[2];
    bVar31 = param_2[4];
    bVar32 = param_2[5];
    bVar33 = param_2[6];
    bVar36 = param_2[7];
    bVar37 = param_2[8];
    bVar38 = param_2[9];
    bVar39 = param_2[10];
    bVar40 = param_2[0xb];
    bVar41 = param_2[0xc];
    bVar44 = param_2[0xd];
    bVar45 = param_2[0xe];
    bVar46 = param_2[0xf];
    pRVar23 = this + uVar16 + 5;
    bVar47 = param_2[3];
    do {
      lVar15 = (ulong)((byte)pRVar23[-1] ^ bVar28) * 4;
      lVar17 = (ulong)((byte)pRVar23[0xc] ^ bVar44) * 4;
      lVar18 = (ulong)((byte)pRVar23[9] ^ bVar39) * 4;
      lVar20 = (ulong)((byte)pRVar23[6] ^ bVar36) * 4;
      RVar2 = pRVar23[7];
      RVar3 = pRVar23[5];
      bVar28 = (&T7)[lVar18] ^ (&T8)[lVar20] ^ (&T5)[lVar15] ^ (&T6)[lVar17];
      bVar36 = (byte)*pRVar23 ^ bVar29;
      RVar4 = pRVar23[0xb];
      RVar5 = pRVar23[8];
      RVar6 = pRVar23[0xd];
      RVar7 = pRVar23[1];
      RVar8 = pRVar23[2];
      RVar9 = pRVar23[3];
      RVar10 = pRVar23[4];
      RVar11 = pRVar23[10];
      RVar12 = pRVar23[0xe];
      *param_2 = bVar28;
      bVar39 = (byte)RVar7 ^ bVar30;
      bVar29 = (&DAT_004fa671)[lVar18] ^ (&DAT_004faa71)[lVar20] ^
               (&DAT_004f9e71)[lVar15] ^ (&DAT_004fa271)[lVar17];
      param_2[1] = bVar29;
      lVar19 = (ulong)((byte)RVar6 ^ bVar45) * 4;
      bVar30 = (&DAT_004fa672)[lVar18] ^ (&DAT_004faa72)[lVar20] ^
               (&DAT_004f9e72)[lVar15] ^ (&DAT_004fa272)[lVar17];
      param_2[2] = bVar30;
      lVar24 = (ulong)((byte)RVar11 ^ bVar40) * 4;
      bVar13 = (&DAT_004f9e73)[lVar15] ^ (&DAT_004fa273)[lVar17] ^
               (&DAT_004fa673)[lVar18] ^ (&DAT_004faa73)[lVar20];
      param_2[3] = bVar13;
      lVar15 = (ulong)bVar36 * 4;
      lVar17 = (ulong)((byte)RVar9 ^ bVar31) * 4;
      bVar31 = (&T7)[lVar19] ^ (&T8)[lVar24] ^ (&T5)[lVar17] ^ (&T6)[lVar15];
      param_2[4] = bVar31;
      bVar36 = (byte)RVar10 ^ bVar32;
      bVar32 = (&DAT_004fa671)[lVar19] ^ (&DAT_004faa71)[lVar24] ^
               (&DAT_004f9e71)[lVar17] ^ (&DAT_004fa271)[lVar15];
      param_2[5] = bVar32;
      bVar40 = (byte)RVar3 ^ bVar33;
      bVar33 = (&DAT_004fa672)[lVar19] ^ (&DAT_004faa72)[lVar24] ^
               (&DAT_004f9e72)[lVar17] ^ (&DAT_004fa272)[lVar15];
      param_2[6] = bVar33;
      lVar18 = (ulong)bVar36 * 4;
      lVar20 = (ulong)bVar39 * 4;
      lVar21 = (ulong)((byte)RVar2 ^ bVar37) * 4;
      lVar22 = (ulong)((byte)RVar12 ^ bVar46) * 4;
      bVar36 = (&DAT_004f9e73)[lVar17] ^ (&DAT_004fa273)[lVar15] ^
               (&DAT_004fa673)[lVar19] ^ (&DAT_004faa73)[lVar24];
      param_2[7] = bVar36;
      bVar37 = (&T5)[lVar21] ^ (&T6)[lVar18] ^ (&T7)[lVar20] ^ (&T8)[lVar22];
      param_2[8] = bVar37;
      bVar44 = (byte)RVar5 ^ bVar38;
      bVar38 = (&DAT_004f9e71)[lVar21] ^ (&DAT_004fa271)[lVar18] ^
               (&DAT_004fa671)[lVar20] ^ (&DAT_004faa71)[lVar22];
      param_2[9] = bVar38;
      bVar39 = (&DAT_004f9e72)[lVar21] ^ (&DAT_004fa272)[lVar18] ^
               (&DAT_004fa672)[lVar20] ^ (&DAT_004faa72)[lVar22];
      param_2[10] = bVar39;
      lVar15 = (ulong)((byte)RVar8 ^ bVar47) * 4;
      lVar17 = (ulong)bVar40 * 4;
      lVar19 = (ulong)bVar44 * 4;
      lVar24 = (ulong)((byte)RVar4 ^ bVar41) * 4;
      bVar40 = (&DAT_004f9e73)[lVar21] ^ (&DAT_004fa273)[lVar18] ^
               (&DAT_004fa673)[lVar20] ^ (&DAT_004faa73)[lVar22];
      param_2[0xb] = bVar40;
      bVar41 = (&T5)[lVar24] ^ (&T6)[lVar19] ^ (&T7)[lVar17] ^ (&T8)[lVar15];
      param_2[0xc] = bVar41;
      pRVar23 = pRVar23 + -0x10;
      bVar44 = (&DAT_004f9e71)[lVar24] ^ (&DAT_004fa271)[lVar19] ^
               (&DAT_004fa671)[lVar17] ^ (&DAT_004faa71)[lVar15];
      param_2[0xd] = bVar44;
      bVar45 = (&DAT_004f9e72)[lVar24] ^ (&DAT_004fa272)[lVar19] ^
               (&DAT_004fa672)[lVar17] ^ (&DAT_004faa72)[lVar15];
      param_2[0xe] = bVar45;
      bVar46 = (&DAT_004f9e73)[lVar24] ^ (&DAT_004fa273)[lVar19] ^
               (&DAT_004fa673)[lVar17] ^ (&DAT_004faa73)[lVar15];
      param_2[0xf] = bVar46;
      bVar47 = bVar13;
    } while (this + uVar16 + (ulong)(uVar1 - 3) * -0x10 + -0xb != pRVar23);
  }
  uVar43 = *(undefined8 *)(param_2 + 8);
  uVar42 = *(undefined8 *)param_2;
  uVar35 = *(undefined8 *)(this + 0x2c);
  uVar27 = *(undefined8 *)(this + 0x24);
  bVar29 = (byte)((ulong)uVar27 >> 0x10) ^ (byte)((ulong)uVar42 >> 0x10);
  uVar26 = CONCAT12(bVar29,CONCAT11((byte)((ulong)uVar27 >> 8) ^ (byte)((ulong)uVar42 >> 8),
                                    (byte)uVar27 ^ (byte)uVar42));
  bVar28 = (byte)((ulong)uVar35 >> 0x10) ^ (byte)((ulong)uVar43 >> 0x10);
  uVar34 = CONCAT12(bVar28,CONCAT11((byte)((ulong)uVar35 >> 8) ^ (byte)((ulong)uVar43 >> 8),
                                    (byte)uVar35 ^ (byte)uVar43));
  bVar30 = (&S5)[(int)(uint)(byte)((byte)((ulong)uVar35 >> 0x28) ^ (byte)((ulong)uVar43 >> 0x28))];
  bVar38 = (&S5)[(int)(uint)bVar28];
  bVar28 = (&S5)[(int)(uVar26 & 0xff)];
  bVar33 = (&S5)[(int)(uint)(byte)((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar42 >> 0x38))];
  bVar31 = (&S5)[(int)(uint)(byte)((byte)((ulong)uVar27 >> 0x20) ^ (byte)((ulong)uVar42 >> 0x20))];
  bVar41 = (&S5)[(int)((uVar26 & 0xff00) >> 8)];
  bVar39 = (&S5)[(int)(uint)(byte)((byte)((ulong)uVar35 >> 0x30) ^ (byte)((ulong)uVar43 >> 0x30))];
  bVar36 = (&S5)[(int)(uint)(byte)((byte)((ulong)uVar35 >> 0x18) ^ (byte)((ulong)uVar43 >> 0x18))];
  bVar32 = (&S5)[(int)(uVar34 & 0xff)];
  bVar47 = (&S5)[(int)(uint)(byte)((byte)((ulong)uVar27 >> 0x28) ^ (byte)((ulong)uVar42 >> 0x28))];
  bVar46 = (&S5)[(int)(uint)bVar29];
  bVar45 = (&S5)[(int)(uint)(byte)((byte)((ulong)uVar35 >> 0x38) ^ (byte)((ulong)uVar43 >> 0x38))];
  bVar44 = (&S5)[(int)(uint)(byte)((byte)((ulong)uVar35 >> 0x20) ^ (byte)((ulong)uVar43 >> 0x20))];
  bVar40 = (&S5)[(int)((uVar34 & 0xff00) >> 8)];
  bVar37 = (&S5)[(int)(uint)(byte)((byte)((ulong)uVar27 >> 0x30) ^ (byte)((ulong)uVar42 >> 0x30))];
  bVar29 = (&S5)[(int)(uint)(byte)((byte)((ulong)uVar27 >> 0x18) ^ (byte)((ulong)uVar42 >> 0x18))];
  *(ulong *)(param_2 + 8) =
       CONCAT17(bVar29,CONCAT16(bVar37,CONCAT15(bVar40,CONCAT14(bVar44,CONCAT13(bVar45,CONCAT12(
                                                  bVar46,CONCAT11(bVar47,bVar32)))))));
  *(ulong *)param_2 =
       CONCAT17(bVar36,CONCAT16(bVar39,CONCAT15(bVar41,CONCAT14(bVar31,CONCAT13(bVar33,CONCAT12(
                                                  bVar38,CONCAT11(bVar30,bVar28)))))));
  if (this + 0x14 < (Rijndael *)(param_2 + 0x10) && param_2 < this + 0x24) {
    *param_2 = (byte)this[0x14] ^ *param_2;
    param_2[1] = (byte)this[0x15] ^ param_2[1];
    param_2[2] = (byte)this[0x16] ^ param_2[2];
    param_2[3] = (byte)this[0x17] ^ param_2[3];
    param_2[4] = (byte)this[0x18] ^ param_2[4];
    param_2[5] = (byte)this[0x19] ^ param_2[5];
    param_2[6] = (byte)this[0x1a] ^ param_2[6];
    param_2[7] = (byte)this[0x1b] ^ param_2[7];
    param_2[8] = (byte)this[0x1c] ^ param_2[8];
    param_2[9] = (byte)this[0x1d] ^ param_2[9];
    param_2[10] = (byte)this[0x1e] ^ param_2[10];
    param_2[0xb] = (byte)this[0x1f] ^ param_2[0xb];
    param_2[0xc] = (byte)this[0x20] ^ param_2[0xc];
    param_2[0xd] = (byte)this[0x21] ^ param_2[0xd];
    param_2[0xe] = (byte)this[0x22] ^ param_2[0xe];
    param_2[0xf] = (byte)this[0x23] ^ param_2[0xf];
  }
  else {
    uVar35 = *(undefined8 *)(this + 0x1c);
    uVar27 = *(undefined8 *)(this + 0x14);
    *(ulong *)(param_2 + 8) =
         CONCAT17((byte)((ulong)uVar35 >> 0x38) ^ bVar29,
                  CONCAT16((byte)((ulong)uVar35 >> 0x30) ^ bVar37,
                           CONCAT15((byte)((ulong)uVar35 >> 0x28) ^ bVar40,
                                    CONCAT14((byte)((ulong)uVar35 >> 0x20) ^ bVar44,
                                             CONCAT13((byte)((ulong)uVar35 >> 0x18) ^ bVar45,
                                                      CONCAT12((byte)((ulong)uVar35 >> 0x10) ^
                                                               bVar46,CONCAT11((byte)((ulong)uVar35
                                                                                     >> 8) ^ bVar47,
                                                                               (byte)uVar35 ^ bVar32
                                                                              )))))));
    *(ulong *)param_2 =
         CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ bVar36,
                  CONCAT16((byte)((ulong)uVar27 >> 0x30) ^ bVar39,
                           CONCAT15((byte)((ulong)uVar27 >> 0x28) ^ bVar41,
                                    CONCAT14((byte)((ulong)uVar27 >> 0x20) ^ bVar31,
                                             CONCAT13((byte)((ulong)uVar27 >> 0x18) ^ bVar33,
                                                      CONCAT12((byte)((ulong)uVar27 >> 0x10) ^
                                                               bVar38,CONCAT11((byte)((ulong)uVar27
                                                                                     >> 8) ^ bVar30,
                                                                               (byte)uVar27 ^ bVar28
                                                                              )))))));
  }
  if (lVar14 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,lVar14 - ___stack_chk_guard,0);
}


