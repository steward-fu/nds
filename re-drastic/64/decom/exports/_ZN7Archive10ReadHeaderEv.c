/*
 * Ghidra decompilation
 *
 * Function : _ZN7Archive10ReadHeaderEv
 * Address  : 001bdda0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Archive::ReadHeader() */

long Archive::ReadHeader(void)

{
  int iVar1;
  long *in_x0;
  long lVar2;
  
  if (*(char *)((long)in_x0 + 0x11221) == '\0') {
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
    if (lVar2 != 0) {
      if (in_x0[0x2240] <= in_x0[0x223f]) {
        *(undefined *)(in_x0 + 0x2244) = 1;
        ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,3);
        lVar2 = 0;
      }
      return lVar2;
    }
  }
  return 0;
}


