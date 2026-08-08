/*
 * Ghidra decompilation
 *
 * Function : ~File
 * Address  : 001b7680
 * Program  : drastic64
 */


/* File::~File() */

void __thiscall File::~File(File *this)

{
  int iVar1;
  FILE *__stream;
  
  __stream = *(FILE **)(this + 8);
  *(undefined ***)this = &PTR__File_0025e458;
  if ((__stream != (FILE *)0x0) && (this[0x18] == (File)0x0)) {
    if (this[0x1a] == (File)0x0) {
      iVar1 = fclose(__stream);
      *(undefined8 *)(this + 8) = 0;
      *(undefined4 *)(this + 0x14) = 0;
      if ((iVar1 == -1) && (this[0x1c] != (File)0x0)) {
        ErrorHandler::CloseError(&ErrHandler);
      }
    }
    else if (*(int *)(this + 0x14) == 0) {
      iVar1 = fclose(__stream);
      *(undefined8 *)(this + 8) = 0;
      *(undefined4 *)(this + 0x14) = 0;
      if ((iVar1 == -1) && (this[0x1c] != (File)0x0)) {
        ErrorHandler::CloseError(&ErrHandler);
      }
      if (this[0x1b] != (File)0x0) {
        DelFile((wchar_t *)(this + 0x20));
      }
    }
  }
  operator_delete(this,0x2028);
  return;
}


