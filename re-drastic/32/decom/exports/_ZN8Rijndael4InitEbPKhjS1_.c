/*
 * Ghidra decompilation
 *
 * Function : _ZN8Rijndael4InitEbPKhjS1_
 * Address  : 080e50b8
 * Program  : drastic
 */


/* DWARF original prototype: void Init(Rijndael * this, bool Encrypt, byte * key, uint keyLen, byte
   * initVector) */

void __thiscall Rijndael::Init(Rijndael *this,bool Encrypt,byte *key,uint keyLen,byte *initVector)

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
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte *pbVar61;
  uint uVar62;
  Rijndael *pRVar63;
  uint uVar64;
  uint uVar65;
  uint uKeyLenInBytes;
  undefined8 uVar66;
  int local_8c;
  byte keyMatrix [8] [4];
  int local_2c;
  
  local_2c = __stack_chk_guard;
  if (keyLen == 0xc0) {
    uKeyLenInBytes = 0x18;
    this->m_uRounds = 0xc;
  }
  else if (keyLen == 0x100) {
    uKeyLenInBytes = 0x20;
    this->m_uRounds = 0xe;
  }
  else if (keyLen == 0x80) {
    uKeyLenInBytes = 0x10;
    this->m_uRounds = 10;
  }
  pbVar61 = key + -1;
  uVar62 = 0;
  do {
    uVar64 = uVar62 & 0xfffffffc;
    pbVar61 = pbVar61 + 1;
    uVar65 = uVar62 & 3;
    uVar62 = uVar62 + 1;
    keyMatrix[0][uVar65 + uVar64] = *pbVar61;
  } while (uKeyLenInBytes != uVar62);
  if (initVector < this->m_expandedKey && this->m_initVector < initVector + 0x10) {
    this->m_initVector[0] = *initVector;
    this->m_initVector[1] = initVector[1];
    this->m_initVector[2] = initVector[2];
    this->m_initVector[3] = initVector[3];
    this->m_initVector[4] = initVector[4];
    this->m_initVector[5] = initVector[5];
    this->m_initVector[6] = initVector[6];
    this->m_initVector[7] = initVector[7];
    this->m_initVector[8] = initVector[8];
    this->m_initVector[9] = initVector[9];
    this->m_initVector[10] = initVector[10];
    this->m_initVector[0xb] = initVector[0xb];
    this->m_initVector[0xc] = initVector[0xc];
    this->m_initVector[0xd] = initVector[0xd];
    this->m_initVector[0xe] = initVector[0xe];
    this->m_initVector[0xf] = initVector[0xf];
  }
  else {
    uVar66 = *(undefined8 *)(initVector + 8);
    *(undefined8 *)this->m_initVector = *(undefined8 *)initVector;
    *(undefined8 *)(this->m_initVector + 8) = uVar66;
  }
  keySched(this,keyMatrix);
  if ((!Encrypt) && (1 < this->m_uRounds)) {
    local_8c = 1;
    pRVar63 = this;
    do {
      bVar1 = pRVar63->m_expandedKey[1][0][1];
      bVar2 = pRVar63->m_expandedKey[1][1][0];
      bVar3 = pRVar63->m_expandedKey[1][1][2];
      local_8c = local_8c + 1;
      bVar4 = pRVar63->m_expandedKey[1][0][3];
      bVar5 = pRVar63->m_expandedKey[1][2][3];
      bVar6 = pRVar63->m_expandedKey[1][0][2];
      bVar7 = pRVar63->m_expandedKey[1][2][0];
      bVar8 = pRVar63->m_expandedKey[1][0][0];
      bVar9 = pRVar63->m_expandedKey[1][2][1];
      bVar10 = pRVar63->m_expandedKey[1][1][3];
      bVar11 = pRVar63->m_expandedKey[1][3][0];
      bVar12 = pRVar63->m_expandedKey[1][2][2];
      bVar13 = pRVar63->m_expandedKey[1][1][1];
      bVar14 = U1[bVar8][1];
      bVar15 = pRVar63->m_expandedKey[1][3][2];
      bVar16 = pRVar63->m_expandedKey[1][3][1];
      bVar17 = U3[bVar6][1];
      bVar18 = pRVar63->m_expandedKey[1][3][3];
      bVar19 = U2[bVar1][1];
      bVar20 = U4[bVar4][1];
      bVar21 = U2[bVar13][0];
      bVar22 = U1[bVar2][0];
      bVar23 = U3[bVar3][0];
      bVar24 = U4[bVar10][0];
      bVar25 = U1[bVar7][0];
      bVar26 = U2[bVar9][0];
      bVar27 = U3[bVar12][0];
      bVar28 = U4[bVar5][0];
      bVar29 = U3[bVar15][0];
      bVar30 = U1[bVar11][0];
      bVar31 = U2[bVar16][0];
      bVar32 = U4[bVar18][0];
      bVar33 = U2[bVar13][1];
      bVar34 = U1[bVar2][1];
      bVar35 = U3[bVar3][1];
      bVar36 = U1[bVar7][1];
      bVar37 = U4[bVar10][1];
      bVar38 = U2[bVar9][1];
      bVar39 = U3[bVar12][1];
      bVar40 = U4[bVar5][1];
      bVar41 = U3[bVar15][1];
      bVar42 = U1[bVar11][1];
      bVar43 = U2[bVar16][1];
      bVar44 = U4[bVar18][1];
      bVar45 = U2[bVar13][2];
      bVar46 = U1[bVar2][2];
      bVar47 = U3[bVar3][2];
      bVar48 = U1[bVar7][2];
      bVar49 = U2[bVar9][2];
      bVar50 = U3[bVar12][2];
      bVar51 = U4[bVar10][2];
      bVar52 = U3[bVar15][2];
      pRVar63->m_expandedKey[1][0][2] = U2[bVar1][2] ^ U1[bVar8][2] ^ U3[bVar6][2] ^ U4[bVar4][2];
      bVar13 = U2[bVar13][3];
      bVar53 = U4[bVar5][2];
      bVar54 = U4[bVar18][2];
      bVar55 = U1[bVar11][2];
      bVar56 = U2[bVar16][2];
      bVar57 = U1[bVar8][3];
      bVar58 = U3[bVar6][3];
      bVar59 = U4[bVar4][3];
      bVar60 = U2[bVar1][3];
      pRVar63->m_expandedKey[1][0][1] = bVar19 ^ bVar14 ^ bVar17 ^ bVar20;
      bVar7 = U1[bVar7][3];
      bVar2 = U1[bVar2][3];
      pRVar63->m_expandedKey[1][0][3] = bVar60 ^ bVar57 ^ bVar58 ^ bVar59;
      pRVar63->m_expandedKey[1][1][2] = bVar45 ^ bVar46 ^ bVar47 ^ bVar51;
      pRVar63->m_expandedKey[1][1][0] = bVar21 ^ bVar22 ^ bVar23 ^ bVar24;
      pRVar63->m_expandedKey[1][2][2] = bVar49 ^ bVar48 ^ bVar50 ^ bVar53;
      bVar9 = U2[bVar9][3];
      pRVar63->m_expandedKey[1][2][0] = bVar26 ^ bVar25 ^ bVar27 ^ bVar28;
      pRVar63->m_expandedKey[1][1][1] = bVar33 ^ bVar34 ^ bVar35 ^ bVar37;
      bVar11 = U1[bVar11][3];
      bVar14 = U2[bVar16][3];
      pRVar63->m_expandedKey[1][3][1] = bVar43 ^ bVar42 ^ bVar41 ^ bVar44;
      bVar1 = U2[bVar1][0];
      pRVar63->m_expandedKey[1][2][1] = bVar38 ^ bVar36 ^ bVar39 ^ bVar40;
      bVar3 = U3[bVar3][3];
      pRVar63->m_expandedKey[1][3][0] = bVar31 ^ bVar30 ^ bVar29 ^ bVar32;
      bVar8 = U1[bVar8][0];
      bVar12 = U3[bVar12][3];
      bVar15 = U3[bVar15][3];
      bVar6 = U3[bVar6][0];
      bVar5 = U4[bVar5][3];
      bVar16 = U4[bVar18][3];
      pRVar63->m_expandedKey[1][3][2] = bVar56 ^ bVar55 ^ bVar52 ^ bVar54;
      bVar10 = U4[bVar10][3];
      pRVar63->m_expandedKey[1][2][3] = bVar7 ^ bVar9 ^ bVar12 ^ bVar5;
      bVar4 = U4[bVar4][0];
      pRVar63->m_expandedKey[1][3][3] = bVar16 ^ bVar11 ^ bVar14 ^ bVar15;
      pRVar63->m_expandedKey[1][0][0] = bVar8 ^ bVar1 ^ bVar6 ^ bVar4;
      pRVar63->m_expandedKey[1][1][3] = bVar2 ^ bVar13 ^ bVar3 ^ bVar10;
      pRVar63 = (Rijndael *)(pRVar63->m_initVector + 0xc);
    } while (local_8c < this->m_uRounds);
  }
  if (local_2c == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


