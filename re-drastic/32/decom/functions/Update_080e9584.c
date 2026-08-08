/*
 * Ghidra decompilation
 *
 * Function : Update
 * Address  : 080e9584
 * Program  : drastic
 */


/* DWARF original prototype: void Update(DataHash * this, void * Data, size_t DataSize) */

void __thiscall DataHash::Update(DataHash *this,void *Data,size_t DataSize)

{
  ushort uVar1;
  ThreadPool *pTVar2;
  HASH_TYPE HVar3;
  uint uVar4;
  
  HVar3 = this->HashType;
  if (HVar3 == HASH_RAR14) {
    uVar1 = Checksum14(*(ushort *)&this->CurCRC32,Data,DataSize);
    this->CurCRC32 = (uint)uVar1;
    HVar3 = this->HashType;
  }
  if (HVar3 == HASH_CRC32) {
    uVar4 = CRC32(this->CurCRC32,Data,DataSize);
    this->CurCRC32 = uVar4;
    HVar3 = this->HashType;
  }
  if (HVar3 != HASH_BLAKE2) {
    return;
  }
  pTVar2 = this->ThPool;
  uVar4 = this->MaxThreads;
  if ((1 < uVar4) && (pTVar2 == (ThreadPool *)0x0)) {
    pTVar2 = CreateThreadPool();
    this->ThPool = pTVar2;
    uVar4 = this->MaxThreads;
  }
  (this->blake2ctx).ThPool = pTVar2;
  (this->blake2ctx).MaxThreads = uVar4;
  blake2sp_update(&this->blake2ctx,(byte *)Data,DataSize);
  return;
}


