/*
 * Ghidra decompilation
 *
 * Function : _ZN7Archive14UnexpEndArcMsgEv
 * Address  : 001bbc30
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Archive::UnexpEndArcMsg() */

void Archive::UnexpEndArcMsg(void)

{
  File *in_x0;
  long lVar1;
  
  lVar1 = File::FileLength(in_x0);
  if (((*(long *)(in_x0 + 0x111f8) <= lVar1) && (*(long *)(in_x0 + 0x11200) <= lVar1)) &&
     ((*(long *)(in_x0 + 0x111f8) == lVar1 || *(long *)(in_x0 + 0x11200) == lVar1 ||
      (*(int *)(in_x0 + 0x11208) != 3)))) {
    return;
  }
  ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,1);
  return;
}


