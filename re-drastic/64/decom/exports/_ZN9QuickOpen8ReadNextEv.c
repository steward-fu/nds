/*
 * Ghidra decompilation
 *
 * Function : _ZN9QuickOpen8ReadNextEv
 * Address  : 001ed160
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* QuickOpen::ReadNext() */

uint QuickOpen::ReadNext(void)

{
  uint uVar1;
  QuickOpen *in_x0;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  void *local_48 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RawRead::RawRead((RawRead *)local_48,(File *)0x0);
                    /* try { // try from 001ed1ac to 001ed2cf has its CatchHandler @ 001ed2d4 */
  uVar1 = ReadRaw(in_x0,(RawRead *)local_48);
  if ((uVar1 & 0xff) != 0) {
    lVar2 = RawRead::GetV();
    uVar3 = RawRead::GetV();
    uVar4 = *(ulong *)(in_x0 + 0x1080);
    if (uVar4 < uVar3) {
      uVar6 = *(ulong *)(in_x0 + 0x1088);
      *(ulong *)(in_x0 + 0x1078) = uVar3;
      uVar5 = uVar3;
      if ((uVar6 != 0 && uVar6 <= uVar3) && (uVar6 == 0 || uVar3 != uVar6)) {
        ErrorHandler::GeneralErrMsg(&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
        ErrorHandler::MemoryError();
        uVar5 = *(ulong *)(in_x0 + 0x1078);
        uVar4 = *(ulong *)(in_x0 + 0x1080);
      }
      uVar4 = uVar4 + 0x20 + (uVar4 >> 2);
      if (uVar4 < uVar5) {
        uVar4 = uVar5;
      }
      pvVar7 = realloc(*(void **)(in_x0 + 0x1070),uVar4);
      if (pvVar7 == (void *)0x0) {
        ErrorHandler::MemoryError();
      }
      *(void **)(in_x0 + 0x1070) = pvVar7;
      *(ulong *)(in_x0 + 0x1080) = uVar4;
    }
    else {
      pvVar7 = *(void **)(in_x0 + 0x1070);
      *(ulong *)(in_x0 + 0x1078) = uVar3;
    }
    RawRead::GetB((RawRead *)local_48,pvVar7,uVar3);
    *(long *)(in_x0 + 0x1090) = *(long *)(in_x0 + 0x1040) - lVar2;
  }
  if (local_48[0] != (void *)0x0) {
    free(local_48[0]);
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,&__stack_chk_guard,0);
}


