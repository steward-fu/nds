/*
 * Ghidra decompilation
 *
 * Function : _ZN9CryptData8SetKey30EbP11SecPasswordPKwPKh
 * Address  : 080de4ec
 * Program  : drastic
 */


/* DWARF original prototype: void SetKey30(CryptData * this, bool Encrypt, SecPassword * Password,
   wchar * PwdW, byte * Salt) */

void __thiscall
CryptData::SetKey30(CryptData *this,bool Encrypt,SecPassword *Password,wchar *PwdW,byte *Salt)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  SecPassword *this_00;
  byte *__s1;
  size_t RawLength;
  size_t len;
  undefined4 uVar7;
  uint32 digest_1 [5];
  hash_context c;
  uint32 digest [5];
  byte AESKey [16];
  byte AESInit [16];
  byte RawPsw [264];
  int local_2c;
  
  local_2c = __stack_chk_guard;
  if (Salt == (byte *)0x0) {
    this_00 = &Cache[0].Password;
    iVar5 = 0;
    do {
      bVar1 = SecPassword::operator==(this_00,Password);
      if ((bVar1) && (*(char *)this_00[1].Password == '\0')) goto LAB_080de814;
      iVar5 = iVar5 + 1;
      this_00 = (SecPassword *)(this_00[1].Password + 0xb);
    } while (iVar5 != 4);
    WideToRaw(PwdW,RawPsw,0x108);
    sVar3 = wcslen((wchar_t *)PwdW);
    len = sVar3 << 1;
  }
  else {
    __s1 = Cache[0].Salt;
    iVar5 = 0;
    do {
      bVar1 = SecPassword::operator==((SecPassword *)(__s1 + -0x205),Password);
      if (((bVar1) && ((bool)__s1[-1] != false)) && (iVar2 = memcmp(__s1,Salt,8), iVar2 == 0))
      goto LAB_080de814;
      iVar5 = iVar5 + 1;
      __s1 = __s1 + 0x230;
    } while (iVar5 != 4);
    WideToRaw(PwdW,RawPsw,0x108);
    sVar3 = wcslen((wchar_t *)PwdW);
    uVar4 = *(undefined4 *)(Salt + 4);
    len = sVar3 * 2 + 8;
    *(undefined4 *)(RawPsw + sVar3 * 2) = *(undefined4 *)Salt;
    *(undefined4 *)(RawPsw + sVar3 * 2 + 4) = uVar4;
  }
  uVar6 = 0;
  hash_initial(&c);
  do {
    while( true ) {
      hash_process(&c,RawPsw,len,false);
      AESKey._0_3_ = (undefined3)uVar6;
      hash_process(&c,AESKey,3,false);
      if ((uVar6 & 0x3fff) != 0) break;
      memcpy(digest,&c,0x9c);
      hash_final((hash_context *)digest,digest_1,false);
      iVar5 = (int)uVar6 >> 0xe;
      uVar6 = uVar6 + 1;
      AESInit[iVar5] = (byte)digest_1[4];
      if (uVar6 == 0x40000) goto LAB_080de65c;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 != 0x40000);
LAB_080de65c:
  hash_final(&c,digest,false);
  iVar5 = CachePos;
  iVar2 = CachePos * 0x230;
  AESKey[8] = (byte)digest[2];
  AESKey[0] = (undefined)digest[0];
  AESKey[1] = digest[0]._1_1_;
  AESKey[2] = digest[0]._2_1_;
  AESKey[3] = digest[0]._3_1_;
  AESKey[12] = (byte)digest[3];
  AESKey[4] = (undefined)digest[1];
  AESKey[5] = digest[1]._1_1_;
  AESKey[6] = digest[1]._2_1_;
  AESKey[7] = digest[1]._3_1_;
  AESKey[9] = (byte)(digest[2] >> 8);
  AESKey[10] = (byte)(digest[2] >> 0x10);
  AESKey[11] = (byte)(digest[2] >> 0x18);
  AESKey[13] = (byte)(digest[3] >> 8);
  AESKey[14] = (byte)(digest[3] >> 0x10);
  AESKey[15] = (byte)(digest[3] >> 0x18);
  memcpy(&Cache[CachePos].Password,Password,0x201);
  *(bool *)(iVar2 + 0x83ed59c) = Salt != (byte *)0x0;
  if (Salt != (byte *)0x0) {
    uVar4 = *(undefined4 *)(Salt + 4);
    *(undefined4 *)Cache[iVar5].Salt = *(undefined4 *)Salt;
    *(undefined4 *)(Cache[iVar5].Salt + 4) = uVar4;
  }
  CachePos = iVar5 + 1U & 3;
  *(undefined4 *)Cache[iVar5].AESKey = AESKey._0_4_;
  *(undefined4 *)(Cache[iVar5].AESKey + 4) = AESKey._4_4_;
  *(ulonglong *)(Cache[iVar5].AESKey + 8) =
       CONCAT17(AESKey[15],
                CONCAT16(AESKey[14],
                         CONCAT15(AESKey[13],
                                  CONCAT14(AESKey[12],
                                           CONCAT13(AESKey[11],
                                                    CONCAT12(AESKey[10],
                                                             CONCAT11(AESKey[9],AESKey[8])))))));
  *(ulonglong *)Cache[iVar5].AESInit = CONCAT44(AESInit._4_4_,AESInit._0_4_);
  *(undefined4 *)(Cache[iVar5].AESInit + 8) = AESInit._8_4_;
  *(undefined4 *)(Cache[iVar5].AESInit + 0xc) = AESInit._12_4_;
  cleandata(RawPsw,0x108);
LAB_080de788:
  Rijndael::Init(&this->rin,Encrypt,AESKey,0x80,AESInit);
  cleandata(AESKey,0x10);
  cleandata(AESInit,0x10);
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_080de814:
  AESKey._0_4_ = *(undefined4 *)Cache[iVar5].AESKey;
  AESKey._4_4_ = *(undefined4 *)(Cache[iVar5].AESKey + 4);
  uVar4 = *(undefined4 *)(Cache[iVar5].AESKey + 8);
  uVar7 = *(undefined4 *)(Cache[iVar5].AESKey + 0xc);
  AESInit._0_4_ = *(undefined4 *)Cache[iVar5].AESInit;
  AESInit._4_4_ = *(undefined4 *)(Cache[iVar5].AESInit + 4);
  AESInit._8_4_ = *(undefined4 *)(Cache[iVar5].AESInit + 8);
  AESInit._12_4_ = *(undefined4 *)(Cache[iVar5].AESInit + 0xc);
  AESKey[8] = (byte)uVar4;
  AESKey[9] = (byte)((uint)uVar4 >> 8);
  AESKey[10] = (byte)((uint)uVar4 >> 0x10);
  AESKey[11] = (byte)((uint)uVar4 >> 0x18);
  AESKey[12] = (byte)uVar7;
  AESKey[13] = (byte)((uint)uVar7 >> 8);
  AESKey[14] = (byte)((uint)uVar7 >> 0x10);
  AESKey[15] = (byte)((uint)uVar7 >> 0x18);
  goto LAB_080de788;
}


