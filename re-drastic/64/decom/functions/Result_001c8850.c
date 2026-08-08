/*
 * Ghidra decompilation
 *
 * Function : Result
 * Address  : 001c8850
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DataHash::Result(HashValue*) [clone .part.0] */

void __thiscall DataHash::Result(DataHash *this,HashValue *param_1)

{
  blake2sp_state *__dest;
  blake2sp_state *pbVar1;
  blake2sp_state *pbVar2;
  blake2sp_state abStack_c40 [2304];
  undefined auStack_340 [128];
  undefined auStack_2c0 [32];
  undefined auStack_2a0 [8];
  undefined auStack_298 [72];
  undefined *local_250;
  undefined *puStack_248;
  undefined *local_240;
  undefined *puStack_238;
  undefined8 local_230;
  DataHash local_228;
  undefined auStack_220 [512];
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  pbVar2 = (blake2sp_state *)(this + 8);
  local_8 = ___stack_chk_guard;
  pbVar1 = abStack_c40;
  do {
    __dest = pbVar1 + (-(long)pbVar1 & 0x3f);
    *(blake2sp_state **)(pbVar1 + 0xf0) = __dest;
    *(blake2sp_state **)(pbVar1 + 0xf8) = __dest + 0x80;
    *(blake2sp_state **)(pbVar1 + 0x100) = __dest + 0xa0;
    *(blake2sp_state **)(pbVar1 + 0x108) = __dest + 0xa8;
    if (pbVar2 != pbVar1) {
      memcpy(__dest,*(void **)(pbVar2 + 0xf0),0xb0);
      *(undefined8 *)(pbVar1 + 0x110) = *(undefined8 *)(pbVar2 + 0x110);
      pbVar1[0x118] = pbVar2[0x118];
    }
    pbVar2 = pbVar2 + 0x120;
    pbVar1 = pbVar1 + 0x120;
  } while ((blake2sp_state *)(this + 0x908) != pbVar2);
  local_250 = auStack_340;
  puStack_248 = auStack_2c0;
  local_240 = auStack_2a0;
  puStack_238 = auStack_298;
  memcpy(local_250,*(void **)(this + 0x9f8),0xb0);
  local_228 = this[0xa20];
  local_230 = *(undefined8 *)(this + 0xa18);
  memcpy(auStack_220,this + 0xa28,0x200);
  local_10 = *(undefined4 *)(this + 0xc38);
  local_20 = *(undefined8 *)(this + 0xc28);
  local_18 = *(undefined8 *)(this + 0xc30);
  blake2sp_final(abStack_c40,(uchar *)(param_1 + 4));
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


