/*
 * Ghidra decompilation
 *
 * Function : blake2s_final
 * Address  : 0810c908
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void blake2s_final(blake2s_state *S,byte *digest)

{
  uint32 uVar1;
  byte *pbVar2;
  uint uVar3;
  uint32 *puVar4;
  size_t __n;
  
  uVar3 = S->buflen;
  if (0x40 < uVar3) {
    pbVar2 = S->buf;
    puVar4 = S->t;
    uVar1 = puVar4[1];
    if (*puVar4 + 0x40 < 0x40) {
      uVar1 = uVar1 + 1;
    }
    *puVar4 = *puVar4 + 0x40;
    puVar4[1] = uVar1;
    blake2s_compress(S,pbVar2);
    __n = S->buflen - 0x40;
    S->buflen = __n;
    memcpy(S->buf,S->buf + 0x40,__n);
    uVar3 = S->buflen;
  }
  puVar4 = S->t;
  uVar1 = puVar4[1];
  if (uVar3 + *puVar4 < uVar3) {
    uVar1 = uVar1 + 1;
  }
  pbVar2 = S->buf;
  *puVar4 = uVar3 + *puVar4;
  puVar4[1] = uVar1;
  puVar4 = S->f;
  if (S->last_node != '\0') {
    puVar4[1] = 0xffffffff;
  }
  *puVar4 = 0xffffffff;
  memset(pbVar2 + S->buflen,0,0x80 - S->buflen);
  blake2s_compress(S,S->buf);
  uVar1 = *S->h;
  *digest = (byte)uVar1;
  digest[1] = (byte)(uVar1 >> 8);
  digest[2] = (byte)(uVar1 >> 0x10);
  digest[3] = (byte)(uVar1 >> 0x18);
  uVar1 = S->h[1];
  digest[4] = (byte)uVar1;
  digest[5] = (byte)(uVar1 >> 8);
  digest[6] = (byte)(uVar1 >> 0x10);
  digest[7] = (byte)(uVar1 >> 0x18);
  uVar1 = S->h[2];
  digest[8] = (byte)uVar1;
  digest[9] = (byte)(uVar1 >> 8);
  digest[10] = (byte)(uVar1 >> 0x10);
  digest[0xb] = (byte)(uVar1 >> 0x18);
  uVar1 = S->h[3];
  digest[0xc] = (byte)uVar1;
  digest[0xd] = (byte)(uVar1 >> 8);
  digest[0xe] = (byte)(uVar1 >> 0x10);
  digest[0xf] = (byte)(uVar1 >> 0x18);
  uVar1 = S->h[4];
  digest[0x10] = (byte)uVar1;
  digest[0x11] = (byte)(uVar1 >> 8);
  digest[0x12] = (byte)(uVar1 >> 0x10);
  digest[0x13] = (byte)(uVar1 >> 0x18);
  uVar1 = S->h[5];
  digest[0x14] = (byte)uVar1;
  digest[0x15] = (byte)(uVar1 >> 8);
  digest[0x16] = (byte)(uVar1 >> 0x10);
  digest[0x17] = (byte)(uVar1 >> 0x18);
  uVar1 = S->h[6];
  digest[0x18] = (byte)uVar1;
  digest[0x19] = (byte)(uVar1 >> 8);
  digest[0x1a] = (byte)(uVar1 >> 0x10);
  digest[0x1b] = (byte)(uVar1 >> 0x18);
  uVar1 = S->h[7];
  digest[0x1c] = (byte)uVar1;
  digest[0x1d] = (byte)(uVar1 >> 8);
  digest[0x1e] = (byte)(uVar1 >> 0x10);
  digest[0x1f] = (byte)(uVar1 >> 0x18);
  return;
}


