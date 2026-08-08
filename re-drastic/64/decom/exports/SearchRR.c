/*
 * Ghidra decompilation
 *
 * Function : SearchRR
 * Address  : 001be200
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Archive::SearchRR() */

long Archive::SearchRR(void)

{
  int iVar1;
  long *in_x0;
  long lVar2;
  
  if ((*(char *)((long)in_x0 + 0x8716) != '\0') && (in_x0[0x10e5] != 0)) {
    (**(code **)(*in_x0 + 0x20))();
    (**(code **)(*in_x0 + 0x18))();
    lVar2 = ReadHeader();
    if ((lVar2 != 0) &&
       (((*(char *)(in_x0 + 0x2244) == '\0' && (*(int *)((long)in_x0 + 0x7624) == 3)) &&
        (iVar1 = wcscmp((wchar_t *)(in_x0 + 0x195d),L"RR"), iVar1 == 0)))) {
      return lVar2;
    }
    (**(code **)(*in_x0 + 0x18))();
  }
  if (*(char *)((long)in_x0 + 0x11221) == '\0') {
    do {
      lVar2 = (**(code **)(*in_x0 + 0x20))();
      in_x0[0x223f] = lVar2;
      iVar1 = *(int *)(in_x0 + 0x2241);
      if (iVar1 == 2) {
        lVar2 = ReadHeader15();
      }
      else if (iVar1 == 3) {
        lVar2 = ReadHeader50();
      }
      else {
        if (iVar1 != 1) {
          return 0;
        }
        lVar2 = ReadHeader14();
      }
      if (lVar2 == 0) {
        return 0;
      }
      if (in_x0[0x2240] <= in_x0[0x223f]) {
        *(undefined *)(in_x0 + 0x2244) = 1;
        ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,3);
        return 0;
      }
      if (*(int *)((long)in_x0 + 0x7624) == 5) {
        return 0;
      }
      if ((*(int *)((long)in_x0 + 0x7624) == 3) &&
         (iVar1 = wcscmp((wchar_t *)(in_x0 + 0x195d),L"RR"), iVar1 == 0)) {
        return lVar2;
      }
      SeekToNext();
    } while (*(char *)((long)in_x0 + 0x11221) == '\0');
  }
  return 0;
}


