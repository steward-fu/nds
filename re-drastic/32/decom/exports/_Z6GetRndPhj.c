/*
 * Ghidra decompilation
 *
 * Function : _Z6GetRndPhj
 * Address  : 080e0338
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void GetRnd(byte *RndBuf,size_t BufSize)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  FILE *__stream;
  FILE *rndf;
  size_t sVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint64 uVar10;
  RarTime CurTime;
  
  iVar3 = __stack_chk_guard;
  __stream = fopen64("/dev/urandom","r");
  if (__stream != (FILE *)0x0) {
    sVar4 = fread(RndBuf,BufSize,1,__stream);
    fclose(__stream);
    if (BufSize == sVar4) goto LAB_080e03ac;
  }
  RarTime::RarTime(&CurTime);
  RarTime::SetCurrentTime(&CurTime);
  uVar10 = RarTime::GetRaw(&CurTime);
  uVar5 = clock();
  uVar6 = (int)(uVar10 >> 0x20) + ((int)uVar5 >> 0x1f) + (uint)CARRY4((uint)uVar10,uVar5);
  if (BufSize != 0) {
    pbVar7 = RndBuf + -1;
    uVar8 = 0;
    do {
      uVar9 = uVar8 & 7;
      bVar2 = (byte)uVar8;
      iVar1 = uVar9 * 8;
      uVar8 = uVar8 + 1;
      pbVar7 = pbVar7 + 1;
      *pbVar7 = (((byte)((uint)uVar10 + uVar5 >> iVar1) |
                  (byte)(uVar6 << (uVar9 * -8 + 0x20 & 0xff)) |
                 (byte)(uVar6 >> (iVar1 - 0x20U & 0xff))) ^ bVar2) +
                bVar2 + (char)GetRnd::lexical_block_0::Count;
    } while (BufSize != uVar8);
    GetRnd::lexical_block_0::Count = BufSize + GetRnd::lexical_block_0::Count;
  }
LAB_080e03ac:
  if (iVar3 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


