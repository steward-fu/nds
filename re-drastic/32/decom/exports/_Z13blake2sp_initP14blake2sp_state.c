/*
 * Ghidra decompilation
 *
 * Function : _Z13blake2sp_initP14blake2sp_state
 * Address  : 0810cb50
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void blake2sp_init(blake2sp_state *S)

{
  uint32 *puVar1;
  blake2sp_state *__s;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  memset(S->buf,0,0x200);
  S->buflen = 0;
  memset(&S->R,0,0xf0);
  puVar1 = (S->R).h;
  (S->R).buflen = 0;
  (S->R).last_node = '\0';
  *puVar1 = 0x6a09e667;
  puVar1[3] = 0xa54ff53a;
  puVar1[1] = 0xbb67ae85;
  *puVar1 = *puVar1 ^ 0x2080020;
  puVar1[2] = 0x3c6ef372;
  puVar1[3] = puVar1[3] ^ 0x20010000;
  puVar1[4] = 0x510e527f;
  puVar1[5] = 0x9b05688c;
  puVar1[6] = 0x1f83d9ab;
  puVar1[7] = 0x5be0cd19;
  __s = S;
  do {
    memset(__s,0,0xf0);
    __s->S[0].buflen = 0;
    __s->S[0].last_node = '\0';
    *__s->S[0].h = 0x6a09e667;
    __s->S[0].h[1] = 0xbb67ae85;
    __s->S[0].h[2] = 0x3c6ef372;
    __s->S[0].h[3] = 0xa54ff53a;
    __s->S[0].h[4] = 0x510e527f;
    __s->S[0].h[5] = 0x9b05688c;
    __s->S[0].h[6] = 0x1f83d9ab;
    __s->S[0].h[7] = 0x5be0cd19;
    puVar1 = __s->S[0].h;
    uVar3 = puVar1[2] ^ uVar2;
    uVar2 = uVar2 + 1;
    *puVar1 = *puVar1 ^ 0x2080020;
    puVar1[2] = uVar3;
    puVar1[3] = puVar1[3] ^ 0x20000000;
    __s = (blake2sp_state *)(__s->S + 1);
  } while (uVar2 != 8);
  S->S[7].last_node = '\x01';
  (S->R).last_node = '\x01';
  return;
}


