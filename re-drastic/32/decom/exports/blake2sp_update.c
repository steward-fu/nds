/*
 * Ghidra decompilation
 *
 * Function : blake2sp_update
 * Address  : 0810cd6c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void blake2sp_update(blake2sp_state *S,byte *in,size_t inlen)

{
  bool bVar1;
  int iVar2;
  blake2s_state *S_00;
  ThreadPool *this;
  size_t left;
  size_t sVar3;
  size_t inlen__;
  byte *in__;
  byte *in_00;
  blake2sp_state *S_01;
  uint uVar4;
  size_t __n;
  size_t fill;
  blake2s_state *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint ThreadNumber;
  Blake2ThreadData *btd;
  Blake2ThreadData *Data;
  size_t local_ac;
  byte *local_9c;
  size_t local_98;
  Blake2ThreadData btd_array [8];
  int local_2c;
  
  local_98 = S->buflen;
  __n = 0x200 - local_98;
  sVar3 = local_98;
  if (local_98 != 0) {
    sVar3 = 1;
  }
  if (inlen < __n) {
    sVar3 = 0;
  }
  local_2c = __stack_chk_guard;
  local_ac = inlen;
  local_9c = in;
  if (sVar3 != 0) {
    pbVar6 = S->buf;
    memcpy(pbVar6 + local_98,in,__n);
    S_01 = S;
    do {
      pbVar5 = S_01->S;
      blake2s_update(S_01->S,pbVar6,0x40);
      pbVar6 = pbVar6 + 0x40;
      S_01 = (blake2sp_state *)(pbVar5 + 1);
    } while ((blake2sp_state *)&S->R != (blake2sp_state *)(pbVar5 + 1));
    local_9c = in + __n;
    local_ac = inlen - __n;
    local_98 = 0;
  }
  if (local_ac < 0x1000) {
    uVar9 = 1;
    bVar1 = false;
  }
  else {
    uVar9 = S->MaxThreads;
    if (uVar9 - 6 < 2) {
      uVar9 = 4;
      bVar1 = false;
    }
    else {
      bVar1 = uVar9 == 0;
    }
  }
  uVar7 = 0;
LAB_0810ce20:
  do {
    if (bVar1) {
      this = S->ThPool;
      if (this == (ThreadPool *)0x0) goto LAB_0810ce20;
LAB_0810cef0:
      ThreadPool::WaitDone(this);
    }
    else {
      Data = btd_array;
      pbVar6 = local_9c + uVar7 * 0x40;
      pbVar5 = S->S + uVar7;
      uVar8 = 0;
      do {
        Data->S = pbVar5;
        Data->in = pbVar6;
        Data->inlen = local_ac;
        if (uVar9 == 1) {
          S_00 = pbVar5;
          in_00 = pbVar6;
          uVar4 = local_ac;
          if (0x1ff < local_ac) {
            while( true ) {
              blake2s_update(S_00,in_00,0x40);
              if (uVar4 - 0x200 < 0x200) break;
              S_00 = Data->S;
              in_00 = in_00 + 0x200;
              uVar4 = uVar4 - 0x200;
            }
          }
        }
        else {
          ThreadPool::AddTask(S->ThPool,Blake2Thread,Data);
        }
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + 1;
        Data = Data + 1;
        pbVar6 = pbVar6 + 0x40;
        pbVar5 = pbVar5 + 1;
      } while (uVar8 < uVar9 && uVar7 < 8);
      this = S->ThPool;
      if (this != (ThreadPool *)0x0) goto LAB_0810cef0;
    }
    if (uVar7 == 8) {
      uVar9 = local_ac & 0x1ff;
      if (uVar9 != 0) {
        memcpy(S->buf + local_98,local_9c + (local_ac & 0xfffffe00),uVar9);
      }
      iVar2 = __stack_chk_guard;
      S->buflen = local_98 + uVar9;
      if (local_2c != iVar2) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}


