/*
 * Ghidra decompilation
 *
 * Function : DataHash
 * Address  : 080e9308
 * Program  : drastic
 */


/* DWARF original prototype: DataHash * DataHash(DataHash * this) */

DataHash * __thiscall DataHash::DataHash(DataHash *this)

{
  byte *pbVar1;
  blake2s_state *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  blake2s_state *pbVar5;
  blake2s_state *pbVar6;
  blake2s_state *pbVar7;
  blake2s_state *pbVar8;
  blake2s_state *pbVar9;
  blake2s_state *pbVar10;
  byte *pbVar11;
  blake2s_state *pbVar12;
  byte *pbVar13;
  
  pbVar2 = (this->blake2ctx).S + 6;
  pbVar12 = (this->blake2ctx).S + 1;
  pbVar1 = (this->blake2ctx).S[0].ubuf + (-(int)&this->blake2ctx & 0x3f);
  pbVar9 = (this->blake2ctx).S + 2;
  pbVar10 = (this->blake2ctx).S + 3;
  (this->blake2ctx).S[0].buf = pbVar1;
  pbVar6 = (this->blake2ctx).S + 7;
  (this->blake2ctx).S[0].h = (uint32 *)(pbVar1 + 0x80);
  pbVar7 = (this->blake2ctx).S + 4;
  pbVar8 = (this->blake2ctx).S + 5;
  (this->blake2ctx).S[0].t = (uint32 *)(pbVar1 + 0xa0);
  (this->blake2ctx).S[0].f = (uint32 *)(pbVar1 + 0xa8);
  pbVar5 = &(this->blake2ctx).R;
  pbVar1 = pbVar12->ubuf + (-(int)pbVar12 & 0x3f);
  pbVar3 = pbVar9->ubuf + (-(int)pbVar9 & 0x3f);
  (this->blake2ctx).S[1].buf = pbVar1;
  (this->blake2ctx).S[1].h = (uint32 *)(pbVar1 + 0x80);
  (this->blake2ctx).S[1].t = (uint32 *)(pbVar1 + 0xa0);
  (this->blake2ctx).S[1].f = (uint32 *)(pbVar1 + 0xa8);
  pbVar13 = pbVar10->ubuf + (-(int)pbVar10 & 0x3f);
  (this->blake2ctx).S[2].buf = pbVar3;
  (this->blake2ctx).S[2].h = (uint32 *)(pbVar3 + 0x80);
  pbVar11 = pbVar7->ubuf + (-(int)pbVar7 & 0x3f);
  (this->blake2ctx).S[2].t = (uint32 *)(pbVar3 + 0xa0);
  (this->blake2ctx).S[2].f = (uint32 *)(pbVar3 + 0xa8);
  (this->blake2ctx).S[3].buf = pbVar13;
  pbVar4 = pbVar2->ubuf + (-(int)pbVar2 & 0x3f);
  (this->blake2ctx).S[3].h = (uint32 *)(pbVar13 + 0x80);
  pbVar1 = pbVar8->ubuf + (-(int)pbVar8 & 0x3f);
  pbVar3 = pbVar6->ubuf + (-(int)pbVar6 & 0x3f);
  (this->blake2ctx).S[3].t = (uint32 *)(pbVar13 + 0xa0);
  (this->blake2ctx).S[3].f = (uint32 *)(pbVar13 + 0xa8);
  (this->blake2ctx).S[4].buf = pbVar11;
  pbVar13 = pbVar5->ubuf + (-(int)pbVar5 & 0x3f);
  (this->blake2ctx).S[4].h = (uint32 *)(pbVar11 + 0x80);
  (this->blake2ctx).S[4].t = (uint32 *)(pbVar11 + 0xa0);
  (this->blake2ctx).S[4].f = (uint32 *)(pbVar11 + 0xa8);
  (this->blake2ctx).S[5].buf = pbVar1;
  (this->blake2ctx).S[5].h = (uint32 *)(pbVar1 + 0x80);
  (this->blake2ctx).S[5].t = (uint32 *)(pbVar1 + 0xa0);
  (this->blake2ctx).S[5].f = (uint32 *)(pbVar1 + 0xa8);
  (this->blake2ctx).S[6].buf = pbVar4;
  (this->blake2ctx).S[6].h = (uint32 *)(pbVar4 + 0x80);
  (this->blake2ctx).S[7].buf = pbVar3;
  (this->blake2ctx).S[6].t = (uint32 *)(pbVar4 + 0xa0);
  this->HashType = HASH_NONE;
  (this->blake2ctx).S[6].f = (uint32 *)(pbVar4 + 0xa8);
  (this->blake2ctx).S[7].h = (uint32 *)(pbVar3 + 0x80);
  (this->blake2ctx).S[7].t = (uint32 *)(pbVar3 + 0xa0);
  (this->blake2ctx).S[7].f = (uint32 *)(pbVar3 + 0xa8);
  (this->blake2ctx).R.h = (uint32 *)(pbVar13 + 0x80);
  this->ThPool = (ThreadPool *)0x0;
  this->MaxThreads = 0;
  (this->blake2ctx).R.buf = pbVar13;
  (this->blake2ctx).R.t = (uint32 *)(pbVar13 + 0xa0);
  (this->blake2ctx).R.f = (uint32 *)(pbVar13 + 0xa8);
  return this;
}


