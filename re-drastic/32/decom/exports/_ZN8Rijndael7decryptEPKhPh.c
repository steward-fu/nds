/*
 * Ghidra decompilation
 *
 * Function : _ZN8Rijndael7decryptEPKhPh
 * Address  : 080e5aa0
 * Program  : drastic
 */


/* DWARF original prototype: void decrypt(Rijndael * this, byte * a, byte * b) */

int __thiscall
Rijndael::decrypt(Rijndael *this,EVP_PKEY_CTX *ctx,uchar *out,size_t *outlen,uchar *in,size_t inlen)

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
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte abVar23 [4];
  byte abVar24 [4];
  byte abVar25 [4];
  byte abVar26 [4];
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  uint uVar35;
  int r;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  byte *pbVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  int local_d0;
  byte temp [4] [4];
  
  uVar44 = (uint)this->m_expandedKey[this->m_uRounds][0] ^ *(uint *)ctx;
  uVar45 = (uint)this->m_expandedKey[this->m_uRounds][1] ^ *(uint *)(ctx + 4);
  uVar43 = (uint)temp[3][1];
  uVar42 = (uint)temp[2][2];
  uVar35 = uVar45 >> 0x18;
  uVar39 = uVar45 & 0xff;
  uVar36 = uVar44 & 0xff;
  uVar41 = uVar44 >> 8 & 0xff;
  *out = T8[uVar35][0] ^ T6[uVar43][0] ^ T5[uVar36][0] ^ T7[uVar42][0];
  out[1] = T6[uVar43][1] ^ T5[uVar36][1] ^ T7[uVar42][1] ^ T8[uVar35][1];
  uVar38 = (uint)temp[3][2];
  out[2] = T8[uVar35][2] ^ T6[uVar43][2] ^ T5[uVar36][2] ^ T7[uVar42][2];
  uVar37 = (uint)temp[2][3];
  out[3] = T8[uVar35][3] ^ T7[uVar42][3] ^ T6[uVar43][3] ^ T5[uVar36][3];
  uVar43 = (uint)temp[2][0];
  uVar42 = uVar45 >> 8 & 0xff;
  out[4] = T8[uVar37][0] ^ T7[uVar38][0] ^ T6[uVar41][0] ^ T5[uVar39][0];
  out[5] = T6[uVar41][1] ^ T5[uVar39][1] ^ T7[uVar38][1] ^ T8[uVar37][1];
  uVar35 = uVar44 >> 0x10 & 0xff;
  out[6] = T8[uVar37][2] ^ T6[uVar41][2] ^ T5[uVar39][2] ^ T7[uVar38][2];
  uVar36 = (uint)temp[3][3];
  out[7] = T8[uVar37][3] ^ T7[uVar38][3] ^ T6[uVar41][3] ^ T5[uVar39][3];
  out[8] = T8[uVar36][0] ^ T6[uVar42][0] ^ T5[uVar43][0] ^ T7[uVar35][0];
  uVar39 = (uint)temp[2][1];
  uVar38 = (uint)temp[3][0];
  out[9] = T8[uVar36][1] ^ T7[uVar35][1] ^ T5[uVar43][1] ^ T6[uVar42][1];
  uVar37 = uVar45 >> 0x10 & 0xff;
  out[10] = T8[uVar36][2] ^ T6[uVar42][2] ^ T5[uVar43][2] ^ T7[uVar35][2];
  uVar44 = uVar44 >> 0x18;
  out[0xb] = T8[uVar36][3] ^ T7[uVar35][3] ^ T6[uVar42][3] ^ T5[uVar43][3];
  out[0xc] = T8[uVar44][0] ^ T7[uVar37][0] ^ T5[uVar38][0] ^ T6[uVar39][0];
  out[0xd] = T8[uVar44][1] ^ T7[uVar37][1] ^ T5[uVar38][1] ^ T6[uVar39][1];
  out[0xe] = T8[uVar44][2] ^ T7[uVar37][2] ^ T6[uVar39][2] ^ T5[uVar38][2];
  out[0xf] = T8[uVar44][3] ^ T7[uVar37][3] ^ T6[uVar39][3] ^ T5[uVar38][3];
  local_d0 = this->m_uRounds + -1;
  if (1 < local_d0) {
    bVar1 = out[1];
    bVar2 = *out;
    bVar3 = out[3];
    bVar4 = out[7];
    bVar5 = out[0xe];
    bVar6 = out[4];
    bVar7 = out[2];
    bVar8 = out[5];
    bVar9 = out[0xf];
    bVar10 = out[0xb];
    bVar11 = out[6];
    bVar12 = out[8];
    bVar13 = out[0xc];
    bVar14 = out[9];
    bVar15 = out[0xd];
    bVar16 = out[10];
    pbVar40 = this->m_initVector + this->m_uRounds * 0x10 + -4;
    do {
      bVar27 = bVar2 ^ pbVar40[4];
      bVar16 = bVar16 ^ pbVar40[0xe];
      local_d0 = local_d0 + -1;
      bVar15 = bVar15 ^ pbVar40[0x11];
      bVar4 = bVar4 ^ pbVar40[0xb];
      bVar2 = T6[bVar15][0] ^ T5[bVar27][0] ^ T7[bVar16][0] ^ T8[bVar4][0];
      bVar28 = bVar1 ^ pbVar40[5];
      bVar29 = bVar7 ^ pbVar40[6];
      bVar17 = (*(byte (*) [4] [4])(pbVar40 + 0x10))[0][0];
      bVar30 = bVar3 ^ pbVar40[7];
      bVar18 = pbVar40[0xd];
      bVar31 = bVar6 ^ pbVar40[8];
      bVar1 = pbVar40[0xf];
      bVar32 = bVar8 ^ pbVar40[9];
      bVar33 = bVar11 ^ pbVar40[10];
      bVar3 = pbVar40[0x12];
      bVar6 = pbVar40[0x13];
      bVar34 = bVar12 ^ pbVar40[0xc];
      *out = bVar2;
      bVar10 = bVar10 ^ bVar1;
      bVar18 = bVar14 ^ bVar18;
      bVar5 = bVar5 ^ bVar3;
      bVar9 = bVar9 ^ bVar6;
      bVar1 = T6[bVar15][1] ^ T5[bVar27][1] ^ T7[bVar16][1] ^ T8[bVar4][1];
      out[1] = bVar1;
      bVar17 = bVar13 ^ bVar17;
      bVar7 = T6[bVar15][2] ^ T5[bVar27][2] ^ T7[bVar16][2] ^ T8[bVar4][2];
      out[2] = bVar7;
      bVar3 = T5[bVar27][3] ^ T6[bVar15][3] ^ T7[bVar16][3] ^ T8[bVar4][3];
      out[3] = bVar3;
      bVar6 = T6[bVar28][0] ^ T5[bVar31][0] ^ T7[bVar5][0] ^ T8[bVar10][0];
      out[4] = bVar6;
      bVar8 = T6[bVar28][1] ^ T5[bVar31][1] ^ T7[bVar5][1] ^ T8[bVar10][1];
      out[5] = bVar8;
      bVar11 = T6[bVar28][2] ^ T5[bVar31][2] ^ T7[bVar5][2] ^ T8[bVar10][2];
      out[6] = bVar11;
      bVar4 = T8[bVar10][3] ^ T5[bVar31][3] ^ T6[bVar28][3] ^ T7[bVar5][3];
      out[7] = bVar4;
      bVar12 = T6[bVar32][0] ^ T5[bVar34][0] ^ T7[bVar29][0] ^ T8[bVar9][0];
      out[8] = bVar12;
      bVar14 = T6[bVar32][1] ^ T5[bVar34][1] ^ T7[bVar29][1] ^ T8[bVar9][1];
      out[9] = bVar14;
      bVar16 = T8[bVar9][2] ^ T6[bVar32][2] ^ T5[bVar34][2] ^ T7[bVar29][2];
      out[10] = bVar16;
      bVar10 = T5[bVar34][3] ^ T6[bVar32][3] ^ T7[bVar29][3] ^ T8[bVar9][3];
      out[0xb] = bVar10;
      bVar13 = T6[bVar18][0] ^ T5[bVar17][0] ^ T7[bVar33][0] ^ T8[bVar30][0];
      out[0xc] = bVar13;
      bVar15 = T8[bVar30][1] ^ T6[bVar18][1] ^ T5[bVar17][1] ^ T7[bVar33][1];
      out[0xd] = bVar15;
      bVar5 = T6[bVar18][2] ^ T5[bVar17][2] ^ T7[bVar33][2] ^ T8[bVar30][2];
      out[0xe] = bVar5;
      bVar9 = T5[bVar17][3] ^ T6[bVar18][3] ^ T7[bVar33][3] ^ T8[bVar30][3];
      out[0xf] = bVar9;
      pbVar40 = pbVar40 + -0x10;
    } while (local_d0 != 1);
  }
  uVar35 = *(uint *)(out + 0xc);
  abVar23 = this->m_expandedKey[1][3];
  uVar44 = (uint)this->m_expandedKey[1][0] ^ *(uint *)out;
  uVar36 = (uint)this->m_expandedKey[1][1] ^ *(uint *)(out + 4);
  bVar19 = S5[temp[3][1]];
  bVar1 = S5[uVar44 & 0xff];
  bVar20 = S5[temp[2][2]];
  bVar21 = S5[uVar36 >> 0x18];
  bVar22 = S5[uVar36 & 0xff];
  *out = bVar1;
  out[1] = bVar19;
  bVar19 = S5[uVar44 >> 8 & 0xff];
  out[2] = bVar20;
  out[3] = bVar21;
  bVar20 = S5[temp[3][2]];
  out[4] = bVar22;
  bVar21 = S5[temp[2][3]];
  bVar22 = S5[temp[2][0]];
  out[5] = bVar19;
  bVar19 = S5[uVar36 >> 8 & 0xff];
  out[6] = bVar20;
  out[7] = bVar21;
  out[8] = bVar22;
  out[9] = bVar19;
  bVar19 = S5[temp[3][3]];
  bVar20 = S5[temp[3][0]];
  bVar2 = S5[temp[2][1]];
  bVar21 = S5[uVar36 >> 0x10 & 0xff];
  out[10] = S5[uVar44 >> 0x10 & 0xff];
  bVar22 = S5[uVar44 >> 0x18];
  out[0xb] = bVar19;
  out[0xc] = bVar20;
  out[0xd] = bVar2;
  out[0xe] = bVar21;
  out[0xf] = bVar22;
  if (this->m_expandedKey < out + 0x10 && out < this->m_expandedKey + 1) {
    *out = bVar1 ^ this->m_expandedKey[0][0][0];
    out[1] = this->m_expandedKey[0][0][1] ^ out[1];
    out[2] = this->m_expandedKey[0][0][2] ^ out[2];
    out[3] = out[3] ^ this->m_expandedKey[0][0][3];
    out[4] = out[4] ^ this->m_expandedKey[0][1][0];
    out[5] = out[5] ^ this->m_expandedKey[0][1][1];
    out[6] = out[6] ^ this->m_expandedKey[0][1][2];
    out[7] = out[7] ^ this->m_expandedKey[0][1][3];
    out[8] = out[8] ^ this->m_expandedKey[0][2][0];
    out[9] = out[9] ^ this->m_expandedKey[0][2][1];
    out[10] = out[10] ^ this->m_expandedKey[0][2][2];
    out[0xb] = out[0xb] ^ this->m_expandedKey[0][2][3];
    bVar2 = this->m_expandedKey[0][3][0];
    out[0xc] = out[0xc] ^ bVar2;
    out[0xd] = out[0xd] ^ this->m_expandedKey[0][3][1];
    out[0xe] = out[0xe] ^ this->m_expandedKey[0][3][2];
    out[0xf] = this->m_expandedKey[0][3][3] ^ out[0xf];
  }
  else {
    abVar24 = this->m_expandedKey[0][1];
    abVar25 = this->m_expandedKey[0][2];
    abVar26 = this->m_expandedKey[0][3];
    *(uint *)out = (uint)this->m_expandedKey[0][0] ^ *(uint *)out;
    *(uint *)(out + 4) = (uint)abVar24 ^ *(uint *)(out + 4);
    *(uint *)(out + 0x10) = (uint)abVar25 ^ *(uint *)(out + 8);
    *(uint *)(out + 0x14) = (uint)abVar26 ^ *(uint *)(out + 0xc);
  }
  if (((uint)abVar23 ^ uVar35) != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (uint)bVar2;
}


