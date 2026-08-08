/*
 * Ghidra decompilation
 *
 * Function : _ZN8Rijndael12blockDecryptEPKhjPh
 * Address  : 080e6638
 * Program  : drastic
 */


/* DWARF original prototype: size_t blockDecrypt(Rijndael * this, byte * input, size_t inputLen,
   byte * outBuffer) */

size_t __thiscall Rijndael::blockDecrypt(Rijndael *this,byte *input,size_t inputLen,byte *outBuffer)

{
  int iVar1;
  size_t *ctx;
  size_t *psVar2;
  size_t *outlen;
  bool bVar3;
  uchar *in_stack_ffffff48;
  byte bVar4;
  uint inlen;
  byte local_b0;
  byte local_ac;
  byte local_a8;
  byte local_a4;
  byte local_a0;
  byte local_9c;
  byte local_98;
  byte local_94;
  byte local_90;
  byte local_8c;
  byte local_88;
  byte local_84;
  byte local_80;
  byte local_7c;
  byte local_78;
  uint local_54;
  byte block [16];
  
  iVar1 = __stack_chk_guard;
  if (inputLen == 0 || input == (byte *)0x0) {
    local_54 = 0;
  }
  else {
    local_ac = this->m_initVector[0];
    bVar3 = inputLen >> 4 == 0;
    local_78 = this->m_initVector[0xf];
    if (bVar3) {
      local_54 = 0;
    }
    local_a8 = this->m_initVector[1];
    local_a0 = this->m_initVector[2];
    local_9c = this->m_initVector[3];
    local_94 = this->m_initVector[4];
    local_90 = this->m_initVector[5];
    local_8c = this->m_initVector[6];
    local_98 = this->m_initVector[7];
    local_a4 = this->m_initVector[8];
    local_b0 = this->m_initVector[9];
    bVar4 = this->m_initVector[10];
    local_88 = this->m_initVector[0xb];
    local_84 = this->m_initVector[0xc];
    local_80 = this->m_initVector[0xd];
    local_7c = this->m_initVector[0xe];
    if (!bVar3) {
      local_54 = inputLen & 0xfffffff0;
      outlen = (size_t *)(input + local_54);
      ctx = (size_t *)input;
      do {
        inlen = (uint)bVar4;
        decrypt(this,(EVP_PKEY_CTX *)ctx,block,outlen,in_stack_ffffff48,inlen);
        psVar2 = ctx + 4;
        block[4] = local_94 ^ block[4];
        block[0] = local_ac ^ block[0];
        block[5] = local_90 ^ block[5];
        block[1] = local_a8 ^ block[1];
        block[2] = local_a0 ^ block[2];
        block[6] = local_8c ^ block[6];
        block[3] = local_9c ^ block[3];
        block[7] = local_98 ^ block[7];
        block[8] = local_a4 ^ block[8];
        block[11] = local_88 ^ block[11];
        block[9] = local_b0 ^ block[9];
        block[12] = local_84 ^ block[12];
        block[10] = (byte)inlen ^ block[10];
        block[13] = local_80 ^ block[13];
        block[14] = local_7c ^ block[14];
        block[15] = local_78 ^ block[15];
        outlen = (size_t *)(uint)block[15];
        local_ac = *(byte *)ctx;
        local_a8 = *(byte *)((int)ctx + 1);
        local_a0 = *(byte *)((int)ctx + 2);
        local_9c = *(byte *)((int)ctx + 3);
        local_94 = *(byte *)(ctx + 1);
        local_90 = *(byte *)((int)ctx + 5);
        local_8c = *(byte *)((int)ctx + 6);
        local_98 = *(byte *)((int)ctx + 7);
        local_a4 = *(byte *)(ctx + 2);
        local_b0 = *(byte *)((int)ctx + 9);
        bVar4 = *(byte *)((int)ctx + 10);
        local_88 = *(byte *)((int)ctx + 0xb);
        local_84 = *(byte *)(ctx + 3);
        local_80 = *(byte *)((int)ctx + 0xd);
        local_7c = *(byte *)((int)ctx + 0xe);
        local_78 = *(byte *)((int)ctx + 0xf);
        outBuffer[5] = block[5];
        *outBuffer = block[0];
        outBuffer[1] = block[1];
        outBuffer[2] = block[2];
        outBuffer[3] = block[3];
        outBuffer[4] = block[4];
        outBuffer[6] = block[6];
        outBuffer[7] = block[7];
        outBuffer[8] = block[8];
        outBuffer[9] = block[9];
        outBuffer[10] = block[10];
        outBuffer[0xb] = block[11];
        outBuffer[0xc] = block[12];
        outBuffer[0xd] = block[13];
        outBuffer[0xe] = block[14];
        outBuffer[0xf] = block[15];
        ctx = psVar2;
        outBuffer = outBuffer + 0x10;
      } while (psVar2 != (size_t *)(input + local_54));
    }
    *(ulonglong *)this->m_initVector =
         CONCAT17(local_98,CONCAT16(local_8c,CONCAT15(local_90,CONCAT14(local_94,CONCAT13(local_9c,
                                                  CONCAT12(local_a0,CONCAT11(local_a8,local_ac))))))
                 );
    *(ulonglong *)(this->m_initVector + 8) =
         CONCAT17(local_78,CONCAT16(local_7c,CONCAT15(local_80,CONCAT14(local_84,CONCAT13(local_88,
                                                  CONCAT12(bVar4,CONCAT11(local_b0,local_a4)))))));
  }
  if (iVar1 == __stack_chk_guard) {
    return local_54;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


