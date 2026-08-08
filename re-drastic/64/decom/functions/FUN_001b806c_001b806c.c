/*
 * Ghidra decompilation
 *
 * Function : FUN_001b806c
 * Address  : 001b806c
 * Program  : drastic64
 */


__off64_t FUN_001b806c(long *param_1)

{
  int iVar1;
  FILE *pFVar2;
  __off64_t __off;
  __off64_t _Var3;
  long lVar4;
  code *pcVar5;
  
  lVar4 = *param_1;
  if (*(code **)(lVar4 + 0x20) == File::Tell) {
    pFVar2 = (FILE *)param_1[1];
    if (pFVar2 != (FILE *)0x0) {
LAB_001b80a4:
      __off = ftello64(pFVar2);
      lVar4 = *param_1;
      goto LAB_001b80b0;
    }
    if (*(char *)((long)param_1 + 0x1c) != '\0') {
      ErrorHandler::SeekError(&ErrHandler);
      pFVar2 = (FILE *)param_1[1];
      goto LAB_001b80a4;
    }
    pcVar5 = *(code **)(lVar4 + 0x18);
    __off = -1;
    if (pcVar5 == File::Seek) goto LAB_001b8180;
LAB_001b824c:
    (*pcVar5)(param_1,0,2);
LAB_001b80e0:
    lVar4 = *param_1;
    pcVar5 = *(code **)(lVar4 + 0x20);
    if (pcVar5 == File::Tell) {
LAB_001b80f4:
      pFVar2 = (FILE *)param_1[1];
      if (pFVar2 == (FILE *)0x0) goto LAB_001b8190;
      goto LAB_001b80fc;
    }
LAB_001b8208:
    _Var3 = (*pcVar5)(param_1);
    pcVar5 = *(code **)(*param_1 + 0x18);
  }
  else {
    __off = (**(code **)(lVar4 + 0x20))();
    lVar4 = *param_1;
LAB_001b80b0:
    pcVar5 = *(code **)(lVar4 + 0x18);
    if (pcVar5 != File::Seek) goto LAB_001b824c;
    if ((FILE *)param_1[1] != (FILE *)0x0) {
      *(undefined *)(param_1 + 2) = 0;
      iVar1 = fseeko64((FILE *)param_1[1],0,2);
      if ((iVar1 == 0) || (*(char *)((long)param_1 + 0x1c) == '\0')) goto LAB_001b80e0;
      ErrorHandler::SeekError(&ErrHandler);
      lVar4 = *param_1;
      pcVar5 = *(code **)(lVar4 + 0x20);
      if (pcVar5 != File::Tell) goto LAB_001b8208;
      goto LAB_001b80f4;
    }
LAB_001b8180:
    pcVar5 = *(code **)(lVar4 + 0x20);
    if (pcVar5 != File::Tell) goto LAB_001b8208;
LAB_001b8190:
    if (*(char *)((long)param_1 + 0x1c) == '\0') {
      pcVar5 = *(code **)(lVar4 + 0x18);
      _Var3 = -1;
      if (pcVar5 == File::Seek) {
        return -1;
      }
      goto LAB_001b8228;
    }
    ErrorHandler::SeekError(&ErrHandler);
    pFVar2 = (FILE *)param_1[1];
LAB_001b80fc:
    _Var3 = ftello64(pFVar2);
    pcVar5 = *(code **)(*param_1 + 0x18);
  }
  if (pcVar5 == File::Seek) {
    if ((FILE *)param_1[1] != (FILE *)0x0) {
      *(undefined *)(param_1 + 2) = 0;
      iVar1 = fseeko64((FILE *)param_1[1],__off,0);
      if ((iVar1 != 0) && (*(char *)((long)param_1 + 0x1c) != '\0')) {
        ErrorHandler::SeekError(&ErrHandler);
        return _Var3;
      }
    }
    return _Var3;
  }
LAB_001b8228:
  (*pcVar5)(param_1,__off,0);
  return _Var3;
}


