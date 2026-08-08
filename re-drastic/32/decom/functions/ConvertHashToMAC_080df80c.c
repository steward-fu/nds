/*
 * Ghidra decompilation
 *
 * Function : ConvertHashToMAC
 * Address  : 080df80c
 * Program  : drastic
 */


/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Unknown calling convention */

void ConvertHashToMAC(HashValue *Value,byte *Key)

{
  undefined auVar1 [32];
  int iVar2;
  HASH_TYPE HVar3;
  uint uVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  byte RawCRC [4];
  byte Digest [32];
  
  iVar2 = __stack_chk_guard;
  HVar3 = Value->Type;
  if (HVar3 == HASH_CRC32) {
    uVar4 = (Value->field_1).CRC32;
    RawCRC[0] = (byte)uVar4;
    RawCRC[1] = (byte)(uVar4 >> 8);
    RawCRC[2] = (byte)(uVar4 >> 0x10);
    RawCRC[3] = (byte)(uVar4 >> 0x18);
    hmac_sha256(Key,0x20,RawCRC,4,Digest);
    HVar3 = Value->Type;
    auVar6 = VectorCopyLong(CONCAT44(Digest._4_4_,Digest._0_4_),1,1);
    auVar5 = VectorCopyLong(CONCAT44(Digest._12_4_,Digest._8_4_),1,1);
    auVar13 = VectorCopyLong(auVar6._0_8_,2,1);
    auVar10 = VectorCopyLong(auVar5._0_8_,2,1);
    auVar8 = VectorCopyLong(auVar6._8_8_,2,1);
    auVar7 = VectorCopyLong(CONCAT44(Digest._20_4_,Digest._16_4_),1,1);
    auVar6 = VectorCopyLong(auVar5._8_8_,2,1);
    auVar5 = VectorCopyLong(CONCAT44(Digest._28_4_,Digest._24_4_),1,1);
    auVar11 = VectorCopyLong(auVar7._0_8_,2,1);
    auVar7 = VectorCopyLong(auVar7._8_8_,2,1);
    auVar12 = VectorCopyLong(auVar5._0_8_,2,1);
    auVar5 = VectorCopyLong(auVar5._8_8_,2,1);
    auVar9._8_8_ = 0x1800000010;
    auVar9._0_8_ = 0x800000000;
    auVar5 = VectorShiftLeft(auVar5 ^ auVar12 ^ auVar6 ^ auVar7 ^ auVar11 ^ auVar8 ^ auVar10 ^ 
                                                  auVar13,auVar9,4,0);
    auVar1._16_16_ = ZEXT816(0);
    auVar1._0_16_ = auVar5;
    auVar5 = auVar5 ^ auVar1._8_16_;
    (Value->field_1).CRC32 = auVar5._0_4_ ^ auVar5._4_4_;
  }
  if (HVar3 == HASH_BLAKE2) {
    hmac_sha256(Key,0x20,(Value->field_1).Digest,0x20,Digest);
    (Value->field_1).CRC32 = Digest._0_4_;
    *(undefined4 *)((int)&Value->field_1 + 4) = Digest._4_4_;
    *(undefined4 *)((int)&Value->field_1 + 8) = Digest._8_4_;
    *(undefined4 *)((int)&Value->field_1 + 0xc) = Digest._12_4_;
    *(undefined4 *)((int)&Value->field_1 + 0x10) = Digest._16_4_;
    *(undefined4 *)((int)&Value->field_1 + 0x14) = Digest._20_4_;
    *(undefined4 *)((int)&Value->field_1 + 0x18) = Digest._24_4_;
    *(undefined4 *)((int)&Value->field_1 + 0x1c) = Digest._28_4_;
  }
  if (iVar2 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


