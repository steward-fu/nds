/*
 * Ghidra decompilation
 *
 * Function : ReadHeader14
 * Address  : 001bbe50
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Archive::ReadHeader14() */

long Archive::ReadHeader14(void)

{
  wchar_t *pwVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  File FVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  File *in_x0;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  void *local_848 [5];
  long local_820;
  char acStack_808 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RawRead::RawRead((RawRead *)local_848,in_x0);
  if (*(long *)(in_x0 + 0x111f8) <= *(long *)(in_x0 + 0x11218)) {
                    /* try { // try from 001bbeb0 to 001bc143 has its CatchHandler @ 001bc160 */
    RawRead::Read((RawRead *)local_848,7);
    MainHeader::Reset();
    RawRead::GetB((RawRead *)local_848,acStack_808,4);
    uVar9 = RawRead::Get2();
    uVar10 = RawRead::Get1();
    lVar12 = *(long *)(in_x0 + 0x111f8);
    lVar11 = lVar12 + (uVar9 & 0xffff);
    *(long *)(in_x0 + 0x11200) = lVar11;
    *(undefined4 *)(in_x0 + 0x7624) = 1;
    in_x0[0x1120c] = (File)((byte)(uVar10 >> 3) & 1);
    in_x0[0x1120d] = (File)((byte)uVar10 & 1);
    in_x0[0x1120f] = (File)((byte)(uVar10 >> 2) & 1);
    in_x0[0x8714] = (File)((byte)(uVar10 >> 1) & 1);
    in_x0[0x8715] = (File)((byte)(uVar10 >> 4) & 1);
    goto LAB_001bbf2c;
  }
  RawRead::Read((RawRead *)local_848,0x15);
  FileHeader::Reset((FileHeader *)(in_x0 + 0x8770),0);
  *(undefined4 *)(in_x0 + 0x8774) = 2;
  uVar6 = RawRead::Get4();
  *(undefined4 *)(in_x0 + 0x8784) = uVar6;
  uVar9 = RawRead::Get4();
  *(ulong *)(in_x0 + 0xa7d0) = uVar9 & 0xffffffff;
  *(undefined4 *)(in_x0 + 0xa7e0) = 1;
  uVar7 = RawRead::Get2();
  *(uint *)(in_x0 + 0xa7e4) = uVar7 & 0xffff;
  uVar7 = RawRead::Get2();
  *(uint *)(in_x0 + 0x877c) = uVar7 & 0xffff;
  uVar7 = RawRead::Get4();
  uVar8 = RawRead::Get1();
  *(uint *)(in_x0 + 0x878c) = uVar8 & 0xff;
  uVar8 = RawRead::Get1();
  *(uint *)(in_x0 + 0x8778) = uVar8 & 0xff | 0x8000;
  cVar4 = RawRead::Get1();
  FVar5 = (File)0xd;
  if (cVar4 != '\x02') {
    FVar5 = (File)0xa;
  }
  in_x0[0x8789] = FVar5;
  uVar9 = RawRead::Get1();
  uVar9 = uVar9 & 0xff;
  FVar5 = (File)RawRead::Get1();
  uVar8 = *(uint *)(in_x0 + 0x8778);
  in_x0[0x878a] = FVar5;
  uVar3 = uVar8 >> 2 & 1;
  in_x0[0xa808] = (File)((byte)uVar8 & 1);
  in_x0[0xa809] = (File)((byte)(uVar8 >> 1) & 1);
  in_x0[0xa80b] = SUB41(uVar3,0);
  *(ulong *)(in_x0 + 0xa7c8) = (ulong)*(uint *)(in_x0 + 0x8784);
  *(uint *)(in_x0 + 0xa80c) = uVar3;
  *(undefined8 *)(in_x0 + 0xa868) = 0x10000;
  RarTime::SetDos((RarTime *)(in_x0 + 0xa7b0),uVar7);
  RawRead::Read((RawRead *)local_848,uVar9);
  RawRead::GetB((RawRead *)local_848,acStack_808,uVar9);
  pwVar1 = (wchar_t *)(in_x0 + 0x8790);
  acStack_808[uVar9] = '\0';
  CharToWide(acStack_808,pwVar1,0x800);
  if (*(int *)(*(long *)(in_x0 + 0x7600) + 0xc2a4) == 1) {
    wcsupper(pwVar1);
    if (*(int *)(*(long *)(in_x0 + 0x7600) + 0xc2a4) != 2) goto LAB_001bc0ec;
LAB_001bc124:
    wcslower(pwVar1);
    lVar12 = *(long *)(in_x0 + 0x111f8);
    if (local_820 == 0) goto LAB_001bc0f8;
LAB_001bc10c:
    lVar11 = (ulong)*(uint *)(in_x0 + 0x877c) + lVar12 + *(long *)(in_x0 + 0xa7c8);
    *(long *)(in_x0 + 0x11200) = lVar11;
  }
  else {
    if (*(int *)(*(long *)(in_x0 + 0x7600) + 0xc2a4) == 2) goto LAB_001bc124;
LAB_001bc0ec:
    lVar12 = *(long *)(in_x0 + 0x111f8);
    if (local_820 != 0) goto LAB_001bc10c;
LAB_001bc0f8:
    lVar11 = *(long *)(in_x0 + 0x11200);
  }
  *(undefined4 *)(in_x0 + 0x7624) = 2;
LAB_001bbf2c:
  lVar2 = local_820;
  if (lVar11 <= lVar12) {
    lVar2 = 0;
  }
  if (local_848[0] != (void *)0x0) {
    free(local_848[0]);
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return lVar2;
}


