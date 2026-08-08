/*
 * Ghidra decompilation
 *
 * Function : SetKey50
 * Address  : 080deefc
 * Program  : drastic
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* DWARF original prototype: void SetKey50(CryptData * this, bool Encrypt, SecPassword * Password,
   wchar * PwdW, byte * Salt, byte * InitV, uint Lg2Cnt, byte * HashKey, byte * PswCheck) */

void __thiscall
CryptData::SetKey50(CryptData *this,bool Encrypt,SecPassword *Password,wchar *PwdW,byte *Salt,
                   byte *InitV,uint Lg2Cnt,byte *HashKey,byte *PswCheck)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  int iVar3;
  bool bVar4;
  KDFCacheItem *Item;
  size_t KeyLength;
  uint uVar5;
  void *pvVar6;
  uint I;
  undefined4 uVar7;
  undefined4 *puVar8;
  KDFCacheItem *Item_1;
  byte *Data;
  int iVar9;
  undefined4 uVar10;
  CryptData *pCVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  byte *pbVar15;
  undefined4 uVar16;
  undefined auVar17 [16];
  undefined auVar18 [16];
  byte *local_36c;
  byte *local_364;
  uint CurCount [3];
  byte *CurValue [3];
  byte U1 [32];
  byte Fn [32];
  byte Key [32];
  byte PswCheckValue [32];
  byte HashKeyValue [32];
  byte U2 [32];
  byte SaltData [68];
  char PwdUtf [512];
  
  iVar3 = __stack_chk_guard;
  if (((((Lg2Cnt == this->KDFCache[0].Lg2Count) &&
        (bVar4 = SecPassword::operator==((SecPassword *)this,Password), bVar4)) &&
       (iVar9 = memcmp(this->KDFCache[0].Salt,Salt,0x10), pCVar11 = this, iVar9 == 0)) ||
      ((((Lg2Cnt == this->KDFCache[1].Lg2Count &&
         (bVar4 = SecPassword::operator==((SecPassword *)(CryptData *)(this->KDFCache + 1),Password)
         , bVar4)) &&
        (iVar9 = memcmp(this->KDFCache[1].Salt,Salt,0x10),
        pCVar11 = (CryptData *)(this->KDFCache + 1), iVar9 == 0)) ||
       (((Lg2Cnt == this->KDFCache[2].Lg2Count &&
         (bVar4 = SecPassword::operator==((SecPassword *)(CryptData *)(this->KDFCache + 2),Password)
         , bVar4)) &&
        (iVar9 = memcmp(this->KDFCache[2].Salt,Salt,0x10),
        pCVar11 = (CryptData *)(this->KDFCache + 2), iVar9 == 0)))))) ||
     (((this->KDFCache[3].Lg2Count == Lg2Cnt &&
       (bVar4 = SecPassword::operator==((SecPassword *)(CryptData *)(this->KDFCache + 3),Password),
       bVar4)) &&
      (iVar9 = memcmp(this->KDFCache[3].Salt,Salt,0x10), pCVar11 = (CryptData *)(this->KDFCache + 3)
      , iVar9 == 0)))) {
    Data = pCVar11->KDFCache[0].Key;
    SecHideData(Data,0x20,false);
    Key._0_4_ = *(undefined4 *)pCVar11->KDFCache[0].Key;
    Key._8_4_ = *(undefined4 *)(pCVar11->KDFCache[0].Key + 8);
    Key._4_4_ = *(undefined4 *)(pCVar11->KDFCache[0].Key + 4);
    Key._28_4_ = *(undefined4 *)(pCVar11->KDFCache[0].Key + 0x1c);
    Key._12_4_ = *(undefined4 *)(pCVar11->KDFCache[0].Key + 0xc);
    Key._16_4_ = *(undefined4 *)(pCVar11->KDFCache[0].Key + 0x10);
    Key._24_4_ = *(undefined4 *)(pCVar11->KDFCache[0].Key + 0x18);
    Key._20_4_ = *(undefined4 *)(pCVar11->KDFCache[0].Key + 0x14);
    SecHideData(Data,0x20,true);
    PswCheckValue._0_4_ = *(undefined4 *)pCVar11->KDFCache[0].PswCheckValue;
    HashKeyValue._0_4_ = *(undefined4 *)pCVar11->KDFCache[0].HashKeyValue;
    PswCheckValue._4_4_ = *(undefined4 *)(pCVar11->KDFCache[0].PswCheckValue + 4);
    PswCheckValue._8_4_ = *(undefined4 *)(pCVar11->KDFCache[0].PswCheckValue + 8);
    PswCheckValue._16_4_ = *(undefined4 *)(pCVar11->KDFCache[0].PswCheckValue + 0x10);
    PswCheckValue._12_4_ = *(undefined4 *)(pCVar11->KDFCache[0].PswCheckValue + 0xc);
    PswCheckValue._20_4_ = *(undefined4 *)(pCVar11->KDFCache[0].PswCheckValue + 0x14);
    PswCheckValue._24_4_ = *(undefined4 *)(pCVar11->KDFCache[0].PswCheckValue + 0x18);
    PswCheckValue._28_4_ = *(undefined4 *)(pCVar11->KDFCache[0].PswCheckValue + 0x1c);
    HashKeyValue._4_4_ = *(undefined4 *)(pCVar11->KDFCache[0].HashKeyValue + 4);
    HashKeyValue._16_4_ = *(undefined4 *)(pCVar11->KDFCache[0].HashKeyValue + 0x10);
    HashKeyValue._8_4_ = *(undefined4 *)(pCVar11->KDFCache[0].HashKeyValue + 8);
    HashKeyValue._12_4_ = *(undefined4 *)(pCVar11->KDFCache[0].HashKeyValue + 0xc);
    HashKeyValue._20_4_ = *(undefined4 *)(pCVar11->KDFCache[0].HashKeyValue + 0x14);
    HashKeyValue._24_4_ = *(undefined4 *)(pCVar11->KDFCache[0].HashKeyValue + 0x18);
    HashKeyValue._28_4_ = *(undefined4 *)(pCVar11->KDFCache[0].HashKeyValue + 0x1c);
  }
  else {
    WideToUtf(PwdW,PwdUtf,0x200);
    KeyLength = strlen(PwdUtf);
    SaltData[16] = '\0';
    SaltData[17] = '\0';
    SaltData._8_4_ = *(undefined4 *)(Salt + 8);
    SaltData._0_4_ = *(undefined4 *)Salt;
    SaltData._4_4_ = *(undefined4 *)(Salt + 4);
    SaltData._12_4_ = *(undefined4 *)(Salt + 0xc);
    SaltData[18] = '\0';
    SaltData[19] = '\x01';
    hmac_sha256((byte *)PwdUtf,KeyLength,SaltData,0x14,U1);
    iVar9 = 0;
    CurValue[0] = Key;
    CurCount[1] = 0x10;
    CurCount[2] = 0x10;
    Fn[8] = U1[8];
    Fn[9] = U1[9];
    Fn[10] = U1[10];
    Fn[11] = U1[11];
    Fn[12] = U1[12];
    Fn[13] = U1[13];
    Fn[14] = U1[14];
    Fn[15] = U1[15];
    CurCount[0] = (1 << (Lg2Cnt & 0xff)) - 1;
    Fn[24] = U1[24];
    Fn[25] = U1[25];
    Fn[26] = U1[26];
    Fn[27] = U1[27];
    Fn[28] = U1[28];
    Fn[29] = U1[29];
    Fn[30] = U1[30];
    Fn[31] = U1[31];
    CurValue[1] = HashKeyValue;
    CurValue[2] = PswCheckValue;
    Fn[0] = U1[0];
    Fn[1] = U1[1];
    Fn[2] = U1[2];
    Fn[3] = U1[3];
    Fn[4] = U1[4];
    Fn[5] = U1[5];
    Fn[6] = U1[6];
    Fn[7] = U1[7];
    Fn[16] = U1[16];
    Fn[17] = U1[17];
    Fn[18] = U1[18];
    Fn[19] = U1[19];
    Fn[20] = U1[20];
    Fn[21] = U1[21];
    Fn[22] = U1[22];
    Fn[23] = U1[23];
    do {
      uVar13 = CurCount[iVar9];
      if (uVar13 != 0) {
        uVar12 = 0;
        uVar10 = U1._16_4_;
        uVar14 = U1._20_4_;
        uVar16 = U1._24_4_;
        uVar7 = U1._28_4_;
        do {
          U1._28_4_ = uVar7;
          U1._24_4_ = uVar16;
          U1._20_4_ = uVar14;
          U1._16_4_ = uVar10;
          hmac_sha256((byte *)PwdUtf,KeyLength,U1,0x20,U2);
          uVar12 = uVar12 + 1;
          uVar10._0_1_ = U2[16];
          uVar10._1_1_ = U2[17];
          uVar10._2_1_ = U2[18];
          uVar10._3_1_ = U2[19];
          uVar14._0_1_ = U2[20];
          uVar14._1_1_ = U2[21];
          uVar14._2_1_ = U2[22];
          uVar14._3_1_ = U2[23];
          uVar16._0_1_ = U2[24];
          uVar16._1_1_ = U2[25];
          uVar16._2_1_ = U2[26];
          uVar16._3_1_ = U2[27];
          uVar7._0_1_ = U2[28];
          uVar7._1_1_ = U2[29];
          uVar7._2_1_ = U2[30];
          uVar7._3_1_ = U2[31];
          auVar18[4] = Fn[4];
          auVar18[5] = Fn[5];
          auVar18[6] = Fn[6];
          auVar18[7] = Fn[7];
          auVar18[0] = Fn[0];
          auVar18[1] = Fn[1];
          auVar18[2] = Fn[2];
          auVar18[3] = Fn[3];
          auVar18[8] = Fn[8];
          auVar18[9] = Fn[9];
          auVar18[10] = Fn[10];
          auVar18[11] = Fn[11];
          auVar18[12] = Fn[12];
          auVar18[13] = Fn[13];
          auVar18[14] = Fn[14];
          auVar18[15] = Fn[15];
          U1._0_4_ = (undefined4)U2._0_8_;
          U1._4_4_ = SUB84(U2._0_8_,4);
          U1._8_4_ = (undefined4)U2._8_8_;
          U1._12_4_ = SUB84(U2._8_8_,4);
          U1[16] = U2[16];
          U1[17] = U2[17];
          U1[18] = U2[18];
          U1[19] = U2[19];
          U1[20] = U2[20];
          U1[21] = U2[21];
          U1[22] = U2[22];
          U1[23] = U2[23];
          U1[24] = U2[24];
          U1[25] = U2[25];
          U1[26] = U2[26];
          U1[27] = U2[27];
          U1[28] = U2[28];
          U1[29] = U2[29];
          U1[30] = U2[30];
          U1[31] = U2[31];
          auVar1[8] = U1[8];
          auVar1[9] = U1[9];
          auVar1[10] = U1[10];
          auVar1[11] = U1[11];
          auVar1[0] = U2[0];
          auVar1[1] = U2[1];
          auVar1[2] = U2[2];
          auVar1[3] = U2[3];
          auVar1[4] = U2[4];
          auVar1[5] = U2[5];
          auVar1[6] = U2[6];
          auVar1[7] = U2[7];
          auVar1[12] = U1[12];
          auVar1[13] = U1[13];
          auVar1[14] = U1[14];
          auVar1[15] = U1[15];
          auVar2[4] = U2[20];
          auVar2[5] = U2[21];
          auVar2[6] = U2[22];
          auVar2[7] = U2[23];
          auVar2[0] = U2[16];
          auVar2[1] = U2[17];
          auVar2[2] = U2[18];
          auVar2[3] = U2[19];
          auVar2[8] = U2[24];
          auVar2[9] = U2[25];
          auVar2[10] = U2[26];
          auVar2[11] = U2[27];
          auVar2[12] = U2[28];
          auVar2[13] = U2[29];
          auVar2[14] = U2[30];
          auVar2[15] = U2[31];
          auVar17[4] = Fn[20];
          auVar17[5] = Fn[21];
          auVar17[6] = Fn[22];
          auVar17[7] = Fn[23];
          auVar17[0] = Fn[16];
          auVar17[1] = Fn[17];
          auVar17[2] = Fn[18];
          auVar17[3] = Fn[19];
          auVar17[8] = Fn[24];
          auVar17[9] = Fn[25];
          auVar17[10] = Fn[26];
          auVar17[11] = Fn[27];
          auVar17[12] = Fn[28];
          auVar17[13] = Fn[29];
          auVar17[14] = Fn[30];
          auVar17[15] = Fn[31];
          auVar18 = auVar18 ^ auVar1;
          auVar17 = auVar17 ^ auVar2;
          Fn._0_4_ = auVar18._0_4_;
          Fn._4_4_ = auVar18._4_4_;
          Fn._8_4_ = auVar18._8_4_;
          Fn._12_4_ = auVar18._12_4_;
          Fn._16_4_ = auVar17._0_4_;
          Fn._20_4_ = auVar17._4_4_;
          Fn._24_4_ = auVar17._8_4_;
          Fn._28_4_ = auVar17._12_4_;
        } while (uVar13 != uVar12);
      }
      puVar8 = (undefined4 *)CurValue[iVar9];
      iVar9 = iVar9 + 1;
      *puVar8 = Fn._0_4_;
      puVar8[1] = Fn._4_4_;
      puVar8[2] = Fn._8_4_;
      puVar8[3] = Fn._12_4_;
      puVar8[4] = Fn._16_4_;
      puVar8[5] = Fn._20_4_;
      puVar8[6] = Fn._24_4_;
      puVar8[7] = Fn._28_4_;
    } while (iVar9 != 3);
    cleandata(SaltData,0x44);
    cleandata(Fn,0x20);
    cleandata(U1,0x20);
    cleandata(U2,0x20);
    cleandata(PwdUtf,0x200);
    uVar5 = this->KDFCachePos;
    this->KDFCachePos = uVar5 + 1;
    this->KDFCache[uVar5 & 3].Lg2Count = Lg2Cnt;
    pvVar6 = memcpy(this->KDFCache + (uVar5 & 3),Password,0x201);
    uVar16 = *(undefined4 *)(Salt + 4);
    uVar14 = *(undefined4 *)(Salt + 8);
    uVar10 = *(undefined4 *)(Salt + 0xc);
    *(undefined4 *)((int)pvVar6 + 0x204) = *(undefined4 *)Salt;
    *(undefined4 *)((int)pvVar6 + 0x208) = uVar16;
    *(undefined4 *)((int)pvVar6 + 0x20c) = uVar14;
    *(undefined4 *)((int)pvVar6 + 0x210) = uVar10;
    *(undefined4 *)((int)pvVar6 + 0x218) = Key._0_4_;
    *(undefined4 *)((int)pvVar6 + 0x21c) = Key._4_4_;
    *(undefined4 *)((int)pvVar6 + 0x220) = Key._8_4_;
    *(undefined4 *)((int)pvVar6 + 0x224) = Key._12_4_;
    *(undefined4 *)((int)pvVar6 + 0x228) = Key._16_4_;
    *(undefined4 *)((int)pvVar6 + 0x22c) = Key._20_4_;
    *(undefined4 *)((int)pvVar6 + 0x230) = Key._24_4_;
    *(undefined4 *)((int)pvVar6 + 0x234) = Key._28_4_;
    *(undefined4 *)((int)pvVar6 + 0x23c) = PswCheckValue._4_4_;
    *(undefined4 *)((int)pvVar6 + 0x238) = PswCheckValue._0_4_;
    *(undefined4 *)((int)pvVar6 + 0x240) = PswCheckValue._8_4_;
    *(undefined4 *)((int)pvVar6 + 0x244) = PswCheckValue._12_4_;
    *(undefined4 *)((int)pvVar6 + 0x254) = PswCheckValue._28_4_;
    *(undefined4 *)((int)pvVar6 + 0x248) = PswCheckValue._16_4_;
    *(undefined4 *)((int)pvVar6 + 0x24c) = PswCheckValue._20_4_;
    *(undefined4 *)((int)pvVar6 + 0x250) = PswCheckValue._24_4_;
    *(undefined4 *)((int)pvVar6 + 600) = HashKeyValue._0_4_;
    *(undefined4 *)((int)pvVar6 + 0x25c) = HashKeyValue._4_4_;
    *(undefined4 *)((int)pvVar6 + 0x260) = HashKeyValue._8_4_;
    *(undefined4 *)((int)pvVar6 + 0x264) = HashKeyValue._12_4_;
    *(undefined4 *)((int)pvVar6 + 0x268) = HashKeyValue._16_4_;
    *(undefined4 *)((int)pvVar6 + 0x26c) = HashKeyValue._20_4_;
    *(undefined4 *)((int)pvVar6 + 0x270) = HashKeyValue._24_4_;
    *(undefined4 *)((int)pvVar6 + 0x274) = HashKeyValue._28_4_;
    SecHideData((void *)((int)pvVar6 + 0x218),0x20,true);
  }
  local_364 = PswCheckValue;
  local_36c = Key;
  if (HashKey != (byte *)0x0) {
    *(undefined4 *)HashKey = HashKeyValue._0_4_;
    *(undefined4 *)(HashKey + 4) = HashKeyValue._4_4_;
    *(undefined4 *)(HashKey + 8) = HashKeyValue._8_4_;
    *(undefined4 *)(HashKey + 0xc) = HashKeyValue._12_4_;
    *(undefined4 *)(HashKey + 0x10) = HashKeyValue._16_4_;
    *(undefined4 *)(HashKey + 0x14) = HashKeyValue._20_4_;
    *(undefined4 *)(HashKey + 0x18) = HashKeyValue._24_4_;
    *(undefined4 *)(HashKey + 0x1c) = HashKeyValue._28_4_;
  }
  if (PswCheck != (byte *)0x0) {
    I = 0;
    pbVar15 = Key + 0x1f;
    *(undefined8 *)PswCheck = 0;
    do {
      uVar5 = I & 7;
      pbVar15 = pbVar15 + 1;
      I = I + 1;
      PswCheck[uVar5] = *pbVar15 ^ PswCheck[uVar5];
    } while (I != 0x20);
    cleandata(local_364,0x20);
  }
  if (InitV != (byte *)0x0) {
    Rijndael::Init(&this->rin,Encrypt,local_36c,0x100,InitV);
  }
  cleandata(local_36c,0x20);
  if (iVar3 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


