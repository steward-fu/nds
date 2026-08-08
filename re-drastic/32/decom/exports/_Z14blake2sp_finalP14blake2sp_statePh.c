/*
 * Ghidra decompilation
 *
 * Function : _Z14blake2sp_finalP14blake2sp_statePh
 * Address  : 0810d008
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void blake2sp_final(blake2sp_state *S,byte *digest)

{
  size_t inlen;
  uint uVar1;
  byte (*pabVar2) [32];
  byte (*pabVar3) [32];
  blake2sp_state *S_00;
  byte hash [8] [32];
  int local_2c;
  
  uVar1 = 0;
  local_2c = __stack_chk_guard;
  S_00 = S;
  pabVar2 = hash;
  do {
    if (uVar1 < S->buflen) {
      inlen = S->buflen - uVar1;
      if (0x3f < inlen) {
        inlen = 0x40;
      }
      blake2s_update(S_00->S,S->buf + uVar1,inlen);
    }
    uVar1 = uVar1 + 0x40;
    blake2s_final(S_00->S,*pabVar2);
    S_00 = (blake2sp_state *)(S_00->S + 1);
    pabVar2 = pabVar2 + 1;
  } while (uVar1 != 0x200);
  pabVar2 = hash;
  do {
    pabVar3 = pabVar2 + 1;
    blake2s_update(&S->R,*pabVar2,0x20);
    pabVar2 = pabVar3;
  } while (pabVar3 != (byte (*) [32])&local_2c);
  blake2s_final(&S->R,digest);
  if (local_2c == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


