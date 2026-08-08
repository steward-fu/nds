/*
 * Ghidra decompilation
 *
 * Function : Tell
 * Address  : 001b7620
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* File::Tell() */

__off64_t File::Tell(void)

{
  long in_x0;
  __off64_t _Var1;
  
  if (*(FILE **)(in_x0 + 8) != (FILE *)0x0) {
    _Var1 = ftello64(*(FILE **)(in_x0 + 8));
    return _Var1;
  }
  if (*(char *)(in_x0 + 0x1c) != '\0') {
    ErrorHandler::SeekError(&ErrHandler);
    _Var1 = ftello64(*(FILE **)(in_x0 + 8));
    return _Var1;
  }
  return -1;
}


