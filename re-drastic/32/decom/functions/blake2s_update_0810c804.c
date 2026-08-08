/*
 * Ghidra decompilation
 *
 * Function : blake2s_update
 * Address  : 0810c804
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void blake2s_update(blake2s_state *S,byte *in,size_t inlen)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  size_t sVar5;
  uint32 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  size_t __n;
  size_t fill;
  uint32 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if (inlen != 0) {
    sVar5 = S->buflen;
    pbVar1 = S->buf;
    __n = 0x80 - sVar5;
    if (__n < inlen) {
      do {
        memcpy(pbVar1 + sVar5,in,__n);
        pbVar1 = S->buf;
        puVar6 = S->t;
        S->buflen = S->buflen + __n;
        uVar9 = puVar6[1];
        if (*puVar6 + 0x40 < 0x40) {
          uVar9 = uVar9 + 1;
        }
        *puVar6 = *puVar6 + 0x40;
        puVar6[1] = uVar9;
        blake2s_compress(S,pbVar1);
        puVar7 = (undefined4 *)S->buf;
        puVar3 = puVar7 + 0x10;
        puVar8 = puVar7;
        do {
          puVar4 = puVar3 + 4;
          uVar11 = puVar3[1];
          uVar10 = puVar3[2];
          uVar2 = puVar3[3];
          *puVar8 = *puVar3;
          puVar8[1] = uVar11;
          puVar8[2] = uVar10;
          puVar8[3] = uVar2;
          puVar3 = puVar4;
          puVar8 = puVar8 + 4;
        } while (puVar4 != puVar7 + 0x20);
        inlen = inlen - __n;
        in = in + __n;
        pbVar1 = S->buf;
        sVar5 = S->buflen - 0x40;
        __n = 0x80 - sVar5;
        S->buflen = sVar5;
      } while (__n < inlen);
    }
    memcpy(pbVar1 + sVar5,in,inlen);
    S->buflen = S->buflen + inlen;
  }
  return;
}


