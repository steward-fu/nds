/*
 * Ghidra decompilation
 *
 * Function : _ZN4File5CloseEv
 * Address  : 001b7c50
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* File::Close() */

char File::Close(void)

{
  char cVar1;
  int iVar2;
  long in_x0;
  
  if (*(FILE **)(in_x0 + 8) == (FILE *)0x0) {
    *(undefined4 *)(in_x0 + 0x14) = 0;
    return '\x01';
  }
  cVar1 = *(char *)(in_x0 + 0x18);
  if (cVar1 == '\0') {
    iVar2 = fclose(*(FILE **)(in_x0 + 8));
    *(undefined8 *)(in_x0 + 8) = 0;
    *(undefined4 *)(in_x0 + 0x14) = 0;
    if (iVar2 == -1) {
      cVar1 = *(char *)(in_x0 + 0x1c);
      if (cVar1 != '\0') {
        ErrorHandler::CloseError(&ErrHandler);
        return '\0';
      }
    }
    else {
      cVar1 = '\x01';
    }
  }
  else {
    *(undefined8 *)(in_x0 + 8) = 0;
    *(undefined4 *)(in_x0 + 0x14) = 0;
  }
  return cVar1;
}


