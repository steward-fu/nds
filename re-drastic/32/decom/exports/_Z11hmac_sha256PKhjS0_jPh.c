/*
 * Ghidra decompilation
 *
 * Function : _Z11hmac_sha256PKhjS0_jPh
 * Address  : 080de8b8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void hmac_sha256(byte *Key,size_t KeyLength,byte *Data,size_t DataLength,byte *ResDigest)

{
  undefined auVar1 [16];
  int iVar2;
  size_t __n;
  size_t sVar3;
  size_t I;
  size_t I_1;
  undefined8 uVar4;
  sha256_context ICtx;
  sha256_context RCtx;
  byte KeyHash [32];
  byte IDig [32];
  byte KeyBuf [64];
  int local_2c;
  
  local_2c = __stack_chk_guard;
  if (KeyLength < 0x41) {
    I = KeyLength;
    if (KeyLength != 0) {
      iVar2 = (KeyLength - 0x10 >> 4) + 1;
      sVar3 = iVar2 * 0x10;
      if (0xf < KeyLength) goto LAB_080de92c;
      sVar3 = 0;
      goto LAB_080de99c;
    }
LAB_080deb48:
    __n = 0x40 - I;
    memset(KeyBuf + I,0x36,__n);
    sha256_init(&ICtx);
    sha256_process(&ICtx,KeyBuf,0x40);
    sha256_process(&ICtx,Data,DataLength);
    sha256_done(&ICtx,IDig);
    sha256_init(&RCtx);
    if (I != 0) {
      iVar2 = (I - 0x10 >> 4) + 1;
      sVar3 = iVar2 * 0x10;
      if (0xe < I - 1) goto LAB_080debcc;
      sVar3 = 0;
      goto LAB_080dec3c;
    }
  }
  else {
    sha256_init(&RCtx);
    sha256_process(&RCtx,Key,KeyLength);
    sha256_done(&RCtx,KeyHash);
    sVar3 = 0x20;
    iVar2 = 2;
    KeyLength = 0x20;
    Key = (byte *)KeyHash;
LAB_080de92c:
    auVar1 = SIMDExpandImmediate(0,0xe,0x36);
    uVar4 = SUB168(*(undefined (*) [16])Key ^ auVar1,0);
    KeyBuf[0] = (byte)uVar4;
    KeyBuf[1] = SUB81(uVar4,1);
    KeyBuf[2] = SUB81(uVar4,2);
    KeyBuf[3] = SUB81(uVar4,3);
    KeyBuf[4] = SUB81(uVar4,4);
    KeyBuf[5] = SUB81(uVar4,5);
    KeyBuf[6] = SUB81(uVar4,6);
    KeyBuf[7] = SUB81(uVar4,7);
    uVar4 = SUB168(*(undefined (*) [16])Key ^ auVar1,8);
    KeyBuf[8] = (byte)uVar4;
    KeyBuf[9] = SUB81(uVar4,1);
    KeyBuf[10] = SUB81(uVar4,2);
    KeyBuf[11] = SUB81(uVar4,3);
    KeyBuf[12] = SUB81(uVar4,4);
    KeyBuf[13] = SUB81(uVar4,5);
    KeyBuf[14] = SUB81(uVar4,6);
    KeyBuf[15] = SUB81(uVar4,7);
    if (iVar2 != 1) {
      uVar4 = SUB168(*(undefined (*) [16])((int)Key + 0x10) ^ auVar1,0);
      KeyBuf[16] = (byte)uVar4;
      KeyBuf[17] = SUB81(uVar4,1);
      KeyBuf[18] = SUB81(uVar4,2);
      KeyBuf[19] = SUB81(uVar4,3);
      KeyBuf[20] = SUB81(uVar4,4);
      KeyBuf[21] = SUB81(uVar4,5);
      KeyBuf[22] = SUB81(uVar4,6);
      KeyBuf[23] = SUB81(uVar4,7);
      uVar4 = SUB168(*(undefined (*) [16])((int)Key + 0x10) ^ auVar1,8);
      KeyBuf[24] = (byte)uVar4;
      KeyBuf[25] = SUB81(uVar4,1);
      KeyBuf[26] = SUB81(uVar4,2);
      KeyBuf[27] = SUB81(uVar4,3);
      KeyBuf[28] = SUB81(uVar4,4);
      KeyBuf[29] = SUB81(uVar4,5);
      KeyBuf[30] = SUB81(uVar4,6);
      KeyBuf[31] = SUB81(uVar4,7);
      if (iVar2 != 2) {
        uVar4 = SUB168(*(undefined (*) [16])((int)Key + 0x20) ^ auVar1,0);
        KeyBuf[32] = (byte)uVar4;
        KeyBuf[33] = SUB81(uVar4,1);
        KeyBuf[34] = SUB81(uVar4,2);
        KeyBuf[35] = SUB81(uVar4,3);
        KeyBuf[36] = SUB81(uVar4,4);
        KeyBuf[37] = SUB81(uVar4,5);
        KeyBuf[38] = SUB81(uVar4,6);
        KeyBuf[39] = SUB81(uVar4,7);
        uVar4 = SUB168(*(undefined (*) [16])((int)Key + 0x20) ^ auVar1,8);
        KeyBuf[40] = (byte)uVar4;
        KeyBuf[41] = SUB81(uVar4,1);
        KeyBuf[42] = SUB81(uVar4,2);
        KeyBuf[43] = SUB81(uVar4,3);
        KeyBuf[44] = SUB81(uVar4,4);
        KeyBuf[45] = SUB81(uVar4,5);
        KeyBuf[46] = SUB81(uVar4,6);
        KeyBuf[47] = SUB81(uVar4,7);
        if (iVar2 != 3) {
          uVar4 = SUB168(*(undefined (*) [16])((int)Key + 0x30) ^ auVar1,0);
          KeyBuf[48] = (byte)uVar4;
          KeyBuf[49] = SUB81(uVar4,1);
          KeyBuf[50] = SUB81(uVar4,2);
          KeyBuf[51] = SUB81(uVar4,3);
          KeyBuf[52] = SUB81(uVar4,4);
          KeyBuf[53] = SUB81(uVar4,5);
          KeyBuf[54] = SUB81(uVar4,6);
          KeyBuf[55] = SUB81(uVar4,7);
          uVar4 = SUB168(*(undefined (*) [16])((int)Key + 0x30) ^ auVar1,8);
          KeyBuf[56] = (byte)uVar4;
          KeyBuf[57] = SUB81(uVar4,1);
          KeyBuf[58] = SUB81(uVar4,2);
          KeyBuf[59] = SUB81(uVar4,3);
          KeyBuf[60] = SUB81(uVar4,4);
          KeyBuf[61] = SUB81(uVar4,5);
          KeyBuf[62] = SUB81(uVar4,6);
          KeyBuf[63] = SUB81(uVar4,7);
        }
      }
    }
    I = KeyLength;
    if (KeyLength != sVar3) {
LAB_080de99c:
      KeyBuf[sVar3] = Key[sVar3] ^ 0x36;
      I = KeyLength;
      if (sVar3 + 1 < KeyLength) {
        KeyBuf[sVar3 + 1] = Key[sVar3 + 1] ^ 0x36;
        if (sVar3 + 2 < KeyLength) {
          KeyBuf[sVar3 + 2] = Key[sVar3 + 2] ^ 0x36;
          if (sVar3 + 3 < KeyLength) {
            KeyBuf[sVar3 + 3] = Key[sVar3 + 3] ^ 0x36;
            if (sVar3 + 4 < KeyLength) {
              KeyBuf[sVar3 + 4] = Key[sVar3 + 4] ^ 0x36;
              if (sVar3 + 5 < KeyLength) {
                KeyBuf[sVar3 + 5] = Key[sVar3 + 5] ^ 0x36;
                if (sVar3 + 6 < KeyLength) {
                  KeyBuf[sVar3 + 6] = Key[sVar3 + 6] ^ 0x36;
                  if (sVar3 + 7 < KeyLength) {
                    KeyBuf[sVar3 + 7] = Key[sVar3 + 7] ^ 0x36;
                    if (sVar3 + 8 < KeyLength) {
                      KeyBuf[sVar3 + 8] = Key[sVar3 + 8] ^ 0x36;
                      if (sVar3 + 9 < KeyLength) {
                        KeyBuf[sVar3 + 9] = Key[sVar3 + 9] ^ 0x36;
                        if (sVar3 + 10 < KeyLength) {
                          KeyBuf[sVar3 + 10] = Key[sVar3 + 10] ^ 0x36;
                          if (sVar3 + 0xb < KeyLength) {
                            KeyBuf[sVar3 + 0xb] = Key[sVar3 + 0xb] ^ 0x36;
                            if (sVar3 + 0xc < KeyLength) {
                              KeyBuf[sVar3 + 0xc] = Key[sVar3 + 0xc] ^ 0x36;
                              if (sVar3 + 0xd < KeyLength) {
                                KeyBuf[sVar3 + 0xd] = Key[sVar3 + 0xd] ^ 0x36;
                                if (sVar3 + 0xe < KeyLength) {
                                  KeyBuf[sVar3 + 0xe] = Key[sVar3 + 0xe] ^ 0x36;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (I != 0x40) goto LAB_080deb48;
    sha256_init(&ICtx);
    sha256_process(&ICtx,KeyBuf,0x40);
    sha256_process(&ICtx,Data,DataLength);
    sha256_done(&ICtx,IDig);
    sha256_init(&RCtx);
    iVar2 = 4;
    sVar3 = 0x40;
LAB_080debcc:
    auVar1 = SIMDExpandImmediate(0,0xe,0x5c);
    uVar4 = SUB168(*(undefined (*) [16])Key ^ auVar1,0);
    KeyBuf[0] = (byte)uVar4;
    KeyBuf[1] = SUB81(uVar4,1);
    KeyBuf[2] = SUB81(uVar4,2);
    KeyBuf[3] = SUB81(uVar4,3);
    KeyBuf[4] = SUB81(uVar4,4);
    KeyBuf[5] = SUB81(uVar4,5);
    KeyBuf[6] = SUB81(uVar4,6);
    KeyBuf[7] = SUB81(uVar4,7);
    uVar4 = SUB168(*(undefined (*) [16])Key ^ auVar1,8);
    KeyBuf[8] = (byte)uVar4;
    KeyBuf[9] = SUB81(uVar4,1);
    KeyBuf[10] = SUB81(uVar4,2);
    KeyBuf[11] = SUB81(uVar4,3);
    KeyBuf[12] = SUB81(uVar4,4);
    KeyBuf[13] = SUB81(uVar4,5);
    KeyBuf[14] = SUB81(uVar4,6);
    KeyBuf[15] = SUB81(uVar4,7);
    if (iVar2 != 1) {
      uVar4 = SUB168(*(undefined (*) [16])((int)Key + 0x10) ^ auVar1,0);
      KeyBuf[16] = (byte)uVar4;
      KeyBuf[17] = SUB81(uVar4,1);
      KeyBuf[18] = SUB81(uVar4,2);
      KeyBuf[19] = SUB81(uVar4,3);
      KeyBuf[20] = SUB81(uVar4,4);
      KeyBuf[21] = SUB81(uVar4,5);
      KeyBuf[22] = SUB81(uVar4,6);
      KeyBuf[23] = SUB81(uVar4,7);
      uVar4 = SUB168(*(undefined (*) [16])((int)Key + 0x10) ^ auVar1,8);
      KeyBuf[24] = (byte)uVar4;
      KeyBuf[25] = SUB81(uVar4,1);
      KeyBuf[26] = SUB81(uVar4,2);
      KeyBuf[27] = SUB81(uVar4,3);
      KeyBuf[28] = SUB81(uVar4,4);
      KeyBuf[29] = SUB81(uVar4,5);
      KeyBuf[30] = SUB81(uVar4,6);
      KeyBuf[31] = SUB81(uVar4,7);
      if (iVar2 != 2) {
        uVar4 = SUB168(*(undefined (*) [16])((int)Key + 0x20) ^ auVar1,0);
        KeyBuf[32] = (byte)uVar4;
        KeyBuf[33] = SUB81(uVar4,1);
        KeyBuf[34] = SUB81(uVar4,2);
        KeyBuf[35] = SUB81(uVar4,3);
        KeyBuf[36] = SUB81(uVar4,4);
        KeyBuf[37] = SUB81(uVar4,5);
        KeyBuf[38] = SUB81(uVar4,6);
        KeyBuf[39] = SUB81(uVar4,7);
        uVar4 = SUB168(*(undefined (*) [16])((int)Key + 0x20) ^ auVar1,8);
        KeyBuf[40] = (byte)uVar4;
        KeyBuf[41] = SUB81(uVar4,1);
        KeyBuf[42] = SUB81(uVar4,2);
        KeyBuf[43] = SUB81(uVar4,3);
        KeyBuf[44] = SUB81(uVar4,4);
        KeyBuf[45] = SUB81(uVar4,5);
        KeyBuf[46] = SUB81(uVar4,6);
        KeyBuf[47] = SUB81(uVar4,7);
        if (iVar2 != 3) {
          uVar4 = SUB168(*(undefined (*) [16])((int)Key + 0x30) ^ auVar1,0);
          KeyBuf[48] = (byte)uVar4;
          KeyBuf[49] = SUB81(uVar4,1);
          KeyBuf[50] = SUB81(uVar4,2);
          KeyBuf[51] = SUB81(uVar4,3);
          KeyBuf[52] = SUB81(uVar4,4);
          KeyBuf[53] = SUB81(uVar4,5);
          KeyBuf[54] = SUB81(uVar4,6);
          KeyBuf[55] = SUB81(uVar4,7);
          uVar4 = SUB168(*(undefined (*) [16])((int)Key + 0x30) ^ auVar1,8);
          KeyBuf[56] = (byte)uVar4;
          KeyBuf[57] = SUB81(uVar4,1);
          KeyBuf[58] = SUB81(uVar4,2);
          KeyBuf[59] = SUB81(uVar4,3);
          KeyBuf[60] = SUB81(uVar4,4);
          KeyBuf[61] = SUB81(uVar4,5);
          KeyBuf[62] = SUB81(uVar4,6);
          KeyBuf[63] = SUB81(uVar4,7);
        }
      }
    }
    I_1 = I;
    if (sVar3 != I) {
LAB_080dec3c:
      KeyBuf[sVar3] = Key[sVar3] ^ 0x5c;
      I_1 = I;
      if (sVar3 + 1 < I) {
        KeyBuf[sVar3 + 1] = Key[sVar3 + 1] ^ 0x5c;
        if (sVar3 + 2 < I) {
          KeyBuf[sVar3 + 2] = Key[sVar3 + 2] ^ 0x5c;
          if (sVar3 + 3 < I) {
            KeyBuf[sVar3 + 3] = Key[sVar3 + 3] ^ 0x5c;
            if (sVar3 + 4 < I) {
              KeyBuf[sVar3 + 4] = Key[sVar3 + 4] ^ 0x5c;
              if (sVar3 + 5 < I) {
                KeyBuf[sVar3 + 5] = Key[sVar3 + 5] ^ 0x5c;
                if (sVar3 + 6 < I) {
                  KeyBuf[sVar3 + 6] = Key[sVar3 + 6] ^ 0x5c;
                  if (sVar3 + 7 < I) {
                    KeyBuf[sVar3 + 7] = Key[sVar3 + 7] ^ 0x5c;
                    if (sVar3 + 8 < I) {
                      KeyBuf[sVar3 + 8] = Key[sVar3 + 8] ^ 0x5c;
                      if (sVar3 + 9 < I) {
                        KeyBuf[sVar3 + 9] = Key[sVar3 + 9] ^ 0x5c;
                        if (sVar3 + 10 < I) {
                          KeyBuf[sVar3 + 10] = Key[sVar3 + 10] ^ 0x5c;
                          if (sVar3 + 0xb < I) {
                            KeyBuf[sVar3 + 0xb] = Key[sVar3 + 0xb] ^ 0x5c;
                            if (sVar3 + 0xc < I) {
                              KeyBuf[sVar3 + 0xc] = Key[sVar3 + 0xc] ^ 0x5c;
                              if (sVar3 + 0xd < I) {
                                KeyBuf[sVar3 + 0xd] = Key[sVar3 + 0xd] ^ 0x5c;
                                if (sVar3 + 0xe < I) {
                                  KeyBuf[sVar3 + 0xe] = Key[sVar3 + 0xe] ^ 0x5c;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (I_1 == 0x40) goto LAB_080dedfc;
    __n = 0x40 - I_1;
    I = I_1;
  }
  memset(KeyBuf + I,0x5c,__n);
LAB_080dedfc:
  sha256_process(&RCtx,KeyBuf,0x40);
  sha256_process(&RCtx,IDig,0x20);
  sha256_done(&RCtx,ResDigest);
  if (local_2c == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


