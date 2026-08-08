/*
 * Ghidra decompilation
 *
 * Function : Read
 * Address  : 001ed2f0
 * Program  : drastic64
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* QuickOpen::Read(void*, unsigned long, unsigned long&) */

QuickOpen __thiscall QuickOpen::Read(QuickOpen *this,void *param_1,ulong param_2,ulong *param_3)

{
  QuickOpen QVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  File *this_00;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  void *pvVar9;
  QuickOpen QVar10;
  void *local_48 [8];
  long local_8;
  
  QVar10 = this[0x1038];
  local_8 = ___stack_chk_guard;
  if (QVar10 == (QuickOpen)0x0) {
LAB_001ed524:
    QVar10 = (QuickOpen)0x0;
  }
  else {
    uVar7 = *(ulong *)(this + 0x1090);
    uVar5 = *(ulong *)(this + 0x1098);
    if (uVar7 + *(long *)(this + 0x1078) <= uVar5) {
      do {
        while( true ) {
          RawRead::RawRead((RawRead *)local_48,(File *)0x0);
                    /* try { // try from 001ed384 to 001ed3cf has its CatchHandler @ 001ed5d0 */
          cVar2 = ReadRaw(this,(RawRead *)local_48);
          if (cVar2 == '\0') {
            if (local_48[0] != (void *)0x0) {
              free(local_48[0]);
              QVar1 = this[0x1038];
              goto joined_r0x001ed4c8;
            }
            goto LAB_001ed3f8;
          }
          lVar4 = RawRead::GetV();
          uVar5 = RawRead::GetV();
          uVar7 = *(ulong *)(this + 0x1080);
          if (uVar7 < uVar5) {
            uVar8 = *(ulong *)(this + 0x1088);
            *(ulong *)(this + 0x1078) = uVar5;
            uVar6 = uVar5;
            if ((uVar8 != 0 && uVar8 <= uVar5) && (uVar8 == 0 || uVar5 != uVar8)) {
                    /* try { // try from 001ed5a4 to 001ed5cb has its CatchHandler @ 001ed5d0 */
              ErrorHandler::GeneralErrMsg
                        (&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
              ErrorHandler::MemoryError();
              uVar6 = *(ulong *)(this + 0x1078);
              uVar7 = *(ulong *)(this + 0x1080);
            }
            uVar7 = uVar7 + 0x20 + (uVar7 >> 2);
            if (uVar7 < uVar6) {
              uVar7 = uVar6;
            }
            pvVar9 = realloc(*(void **)(this + 0x1070),uVar7);
            if (pvVar9 == (void *)0x0) {
              ErrorHandler::MemoryError();
            }
            *(void **)(this + 0x1070) = pvVar9;
            *(ulong *)(this + 0x1080) = uVar7;
          }
          else {
            pvVar9 = *(void **)(this + 0x1070);
            *(ulong *)(this + 0x1078) = uVar5;
          }
          RawRead::GetB((RawRead *)local_48,pvVar9,uVar5);
          *(long *)(this + 0x1090) = *(long *)(this + 0x1040) - lVar4;
          if (local_48[0] == (void *)0x0) break;
          free(local_48[0]);
          if (*(ulong *)(this + 0x1098) <
              (ulong)(*(long *)(this + 0x1090) + *(long *)(this + 0x1078))) {
            QVar1 = this[0x1038];
            goto joined_r0x001ed4c8;
          }
        }
      } while ((ulong)((*(long *)(this + 0x1040) - lVar4) + *(long *)(this + 0x1078)) <=
               *(ulong *)(this + 0x1098));
LAB_001ed3f8:
      QVar1 = this[0x1038];
joined_r0x001ed4c8:
      if (QVar1 == (QuickOpen)0x0) {
        if (this[0x10a0] != (QuickOpen)0x0) {
          QVar10 = (QuickOpen)0x0;
          File::Seek(*(File **)this,*(longlong *)(this + 0x1098),0);
          goto LAB_001ed45c;
        }
        goto LAB_001ed524;
      }
      uVar7 = *(ulong *)(this + 0x1090);
      uVar5 = *(ulong *)(this + 0x1098);
    }
    if ((uVar5 < uVar7) || (uVar7 + *(long *)(this + 0x1078) < param_2 + uVar5)) {
      this_00 = *(File **)this;
      if (this[0x10a0] != (QuickOpen)0x0) {
        File::Seek(this_00,uVar5,0);
        this_00 = *(File **)this;
        this[0x10a0] = (QuickOpen)0x0;
      }
      iVar3 = File::Read(this_00,param_1,param_2);
      if (iVar3 < 0) {
        QVar10 = (QuickOpen)0x0;
        this[0x1038] = (QuickOpen)0x0;
      }
      else {
        lVar4 = *(long *)(this + 0x1098);
        *param_3 = (long)iVar3;
        *(long *)(this + 0x1098) = lVar4 + iVar3;
      }
    }
    else {
      memcpy(param_1,(void *)(*(long *)(this + 0x1070) + (uVar5 - uVar7)),param_2);
      lVar4 = *(long *)(this + 0x1098);
      *param_3 = param_2;
      *(ulong *)(this + 0x1098) = lVar4 + param_2;
      this[0x10a0] = (QuickOpen)0x1;
    }
  }
LAB_001ed45c:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return QVar10;
}


