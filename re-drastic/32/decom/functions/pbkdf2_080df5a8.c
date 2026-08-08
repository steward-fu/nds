/*
 * Ghidra decompilation
 *
 * Function : pbkdf2
 * Address  : 080df5a8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void pbkdf2(byte *Pwd,size_t PwdLength,byte *Salt,size_t SaltLength,byte *Key,byte *V1,byte *V2,
           uint Count)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  size_t sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint I;
  undefined8 uVar10;
  undefined auVar11 [16];
  uint CurCount [3];
  byte *CurValue [3];
  byte U1 [32];
  byte Fn [32];
  byte U2 [32];
  byte SaltData [68];
  int local_2c;
  
  sVar4 = SaltLength;
  if (0x3f < SaltLength) {
    sVar4 = 0x40;
  }
  I = 0;
  local_2c = __stack_chk_guard;
  __memcpy_chk(SaltData,Salt,sVar4,0x44);
  SaltData[SaltLength] = '\0';
  SaltData[SaltLength + 1] = '\0';
  SaltData[SaltLength + 2] = '\0';
  SaltData[SaltLength + 3] = '\x01';
  hmac_sha256(Pwd,PwdLength,SaltData,SaltLength + 4,U1);
  CurCount[1] = 0x10;
  CurCount[2] = 0x10;
  CurValue[1] = V1;
  CurValue[2] = V2;
  CurCount[0] = Count - 1;
  CurValue[0] = Key;
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
  Fn[24] = U1[24];
  Fn[25] = U1[25];
  Fn[26] = U1[26];
  Fn[27] = U1[27];
  Fn[28] = U1[28];
  Fn[29] = U1[29];
  Fn[30] = U1[30];
  Fn[31] = U1[31];
  do {
    uVar9 = CurCount[I];
    if (uVar9 != 0) {
      uVar8 = 0;
      uVar10 = U1._8_8_;
      uVar2 = U1._16_4_;
      uVar3 = U1._20_4_;
      uVar5 = U1._24_4_;
      uVar6 = U1._28_4_;
      do {
        U1._28_4_ = uVar6;
        U1._24_4_ = uVar5;
        U1._20_4_ = uVar3;
        U1._16_4_ = uVar2;
        U1._8_8_ = uVar10;
        hmac_sha256(Pwd,PwdLength,U1,0x20,U2);
        uVar8 = uVar8 + 1;
        uVar10._0_1_ = U2[8];
        uVar10._1_1_ = U2[9];
        uVar10._2_1_ = U2[10];
        uVar10._3_1_ = U2[11];
        uVar10._4_1_ = U2[12];
        uVar10._5_1_ = U2[13];
        uVar10._6_1_ = U2[14];
        uVar10._7_1_ = U2[15];
        uVar2._0_1_ = U2[16];
        uVar2._1_1_ = U2[17];
        uVar2._2_1_ = U2[18];
        uVar2._3_1_ = U2[19];
        uVar3._0_1_ = U2[20];
        uVar3._1_1_ = U2[21];
        uVar3._2_1_ = U2[22];
        uVar3._3_1_ = U2[23];
        uVar5._0_1_ = U2[24];
        uVar5._1_1_ = U2[25];
        uVar5._2_1_ = U2[26];
        uVar5._3_1_ = U2[27];
        uVar6._0_1_ = U2[28];
        uVar6._1_1_ = U2[29];
        uVar6._2_1_ = U2[30];
        uVar6._3_1_ = U2[31];
        auVar11[4] = Fn[4];
        auVar11[5] = Fn[5];
        auVar11[6] = Fn[6];
        auVar11[7] = Fn[7];
        auVar11[0] = Fn[0];
        auVar11[1] = Fn[1];
        auVar11[2] = Fn[2];
        auVar11[3] = Fn[3];
        auVar11[8] = Fn[8];
        auVar11[9] = Fn[9];
        auVar11[10] = Fn[10];
        auVar11[11] = Fn[11];
        auVar11[12] = Fn[12];
        auVar11[13] = Fn[13];
        auVar11[14] = Fn[14];
        auVar11[15] = Fn[15];
        U1[0] = U2[0];
        U1[1] = U2[1];
        U1[2] = U2[2];
        U1[3] = U2[3];
        U1[4] = U2[4];
        U1[5] = U2[5];
        U1[6] = U2[6];
        U1[7] = U2[7];
        U1[8] = U2[8];
        U1[9] = U2[9];
        U1[10] = U2[10];
        U1[11] = U2[11];
        U1[12] = U2[12];
        U1[13] = U2[13];
        U1[14] = U2[14];
        U1[15] = U2[15];
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
        auVar1[4] = U2[4];
        auVar1[5] = U2[5];
        auVar1[6] = U2[6];
        auVar1[7] = U2[7];
        auVar1[0] = U2[0];
        auVar1[1] = U2[1];
        auVar1[2] = U2[2];
        auVar1[3] = U2[3];
        auVar1[8] = U2[8];
        auVar1[9] = U2[9];
        auVar1[10] = U2[10];
        auVar1[11] = U2[11];
        auVar1[12] = U2[12];
        auVar1[13] = U2[13];
        auVar1[14] = U2[14];
        auVar1[15] = U2[15];
        auVar11 = auVar11 ^ auVar1;
        Fn._16_4_ = Fn._16_4_ ^ U2._16_4_;
        Fn._20_4_ = Fn._20_4_ ^ U2._20_4_;
        U2._0_4_ = Fn._24_4_ ^ U2._24_4_;
        U2._4_4_ = Fn._28_4_ ^ U2._28_4_;
        Fn._0_4_ = auVar11._0_4_;
        Fn._4_4_ = auVar11._4_4_;
        Fn._8_4_ = auVar11._8_4_;
        Fn._12_4_ = auVar11._12_4_;
      } while (uVar8 != uVar9);
    }
    puVar7 = (undefined4 *)CurValue[I];
    I = I + 1;
    *puVar7 = Fn._0_4_;
    puVar7[1] = Fn._4_4_;
    puVar7[2] = Fn._8_4_;
    puVar7[3] = Fn._12_4_;
    puVar7[4] = Fn._16_4_;
    puVar7[5] = Fn._20_4_;
    puVar7[6] = Fn._24_4_;
    puVar7[7] = Fn._28_4_;
  } while (I != 3);
  cleandata(SaltData,0x44);
  cleandata(Fn,0x20);
  cleandata(U1,0x20);
  cleandata(U2,0x20);
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


