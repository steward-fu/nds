/*
 * Ghidra decompilation
 *
 * Function : _ZN4File6DeleteEv
 * Address  : 001b7cf0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* File::Delete() */

undefined8 File::Delete(void)

{
  int iVar1;
  long in_x0;
  undefined8 uVar2;
  
  if (*(int *)(in_x0 + 0x14) == 0) {
    if (*(FILE **)(in_x0 + 8) != (FILE *)0x0) {
      if (*(char *)(in_x0 + 0x18) == '\0') {
        iVar1 = fclose(*(FILE **)(in_x0 + 8));
        *(undefined8 *)(in_x0 + 8) = 0;
        *(undefined4 *)(in_x0 + 0x14) = 0;
        if ((iVar1 == -1) && (*(char *)(in_x0 + 0x1c) != '\0')) {
          ErrorHandler::CloseError(&ErrHandler);
        }
      }
      else {
        *(undefined8 *)(in_x0 + 8) = 0;
      }
    }
    if (*(char *)(in_x0 + 0x1b) != '\0') {
      uVar2 = DelFile((wchar_t *)(in_x0 + 0x20));
      return uVar2;
    }
  }
  return 0;
}


