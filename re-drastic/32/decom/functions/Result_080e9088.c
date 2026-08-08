/*
 * Ghidra decompilation
 *
 * Function : Result
 * Address  : 080e9088
 * Program  : drastic
 */


/* DWARF original prototype: void Result(DataHash * this, HashValue * Result) */

void __thiscall DataHash::Result(DataHash *this,HashValue *Result)

{
  byte bVar1;
  byte *__dest;
  blake2sp_state *pbVar2;
  blake2sp_state *pbVar3;
  uint uVar4;
  blake2sp_state res;
  int local_2c;
  
  pbVar3 = &this->blake2ctx;
  uVar4 = 0;
  local_2c = __stack_chk_guard;
  pbVar2 = &res;
  do {
    __dest = pbVar2->S[0].ubuf + (uVar4 & 0x3f);
    pbVar2->S[0].buf = __dest;
    pbVar2->S[0].h = (uint32 *)(__dest + 0x80);
    pbVar2->S[0].t = (uint32 *)(__dest + 0xa0);
    pbVar2->S[0].f = (uint32 *)(__dest + 0xa8);
    if (pbVar3 != pbVar2) {
      memcpy(__dest,pbVar3->S[0].buf,0xb0);
      bVar1 = pbVar3->S[0].last_node;
      pbVar2->S[0].buflen = pbVar3->S[0].buflen;
      pbVar2->S[0].last_node = bVar1;
    }
    pbVar3 = (blake2sp_state *)(pbVar3->S + 1);
    pbVar2 = (blake2sp_state *)(pbVar2->S + 1);
    uVar4 = uVar4 - 0x108;
  } while (pbVar3 != (blake2sp_state *)&(this->blake2ctx).R);
  res.R.buf = res.R.ubuf;
  res.R.h = (uint32 *)(res.R.ubuf + 0x80);
  res.R.t = (uint32 *)(res.R.ubuf + 0xa0);
  res.R.f = (uint32 *)(res.R.ubuf + 0xa8);
  if ((blake2s_state *)res.R.buf != &(this->blake2ctx).R) {
    memcpy(res.R.buf,(this->blake2ctx).R.buf,0xb0);
    res.R.last_node = (this->blake2ctx).R.last_node;
    res.R.buflen = (this->blake2ctx).R.buflen;
  }
  memcpy(res.buf,(this->blake2ctx).buf,0x200);
  res.buflen = (this->blake2ctx).buflen;
  res.ThPool = (this->blake2ctx).ThPool;
  res.MaxThreads = (this->blake2ctx).MaxThreads;
  blake2sp_final(&res,(Result->field_1).Digest);
  if (local_2c == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


