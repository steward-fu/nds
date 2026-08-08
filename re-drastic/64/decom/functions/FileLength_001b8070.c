/*
 * Ghidra decompilation
 *
 * Function : FileLength
 * Address  : 001b8070
 * Program  : drastic64
 */


/* File::FileLength() */

__off64_t __thiscall File::FileLength(File *this)

{
  int iVar1;
  FILE *pFVar2;
  __off64_t __off;
  __off64_t _Var3;
  long lVar4;
  code *pcVar5;
  
  lVar4 = *(long *)this;
  if (*(code **)(lVar4 + 0x20) == Tell) {
    pFVar2 = *(FILE **)(this + 8);
    if (pFVar2 != (FILE *)0x0) {
LAB_001b80a4:
      __off = ftello64(pFVar2);
      lVar4 = *(long *)this;
      goto LAB_001b80b0;
    }
    if (this[0x1c] != (File)0x0) {
      ErrorHandler::SeekError(&ErrHandler);
      pFVar2 = *(FILE **)(this + 8);
      goto LAB_001b80a4;
    }
    pcVar5 = *(code **)(lVar4 + 0x18);
    __off = -1;
    if (pcVar5 == Seek) goto LAB_001b8180;
LAB_001b824c:
                    /* try { // try from 001b8258 to 001b825b has its CatchHandler @ 001b8288 */
    (*pcVar5)(this,0,2);
LAB_001b80e0:
    lVar4 = *(long *)this;
    pcVar5 = *(code **)(lVar4 + 0x20);
    if (pcVar5 == Tell) {
LAB_001b80f4:
      pFVar2 = *(FILE **)(this + 8);
      if (pFVar2 == (FILE *)0x0) goto LAB_001b8190;
      goto LAB_001b80fc;
    }
LAB_001b8208:
    _Var3 = (*pcVar5)(this);
    pcVar5 = *(code **)(*(long *)this + 0x18);
  }
  else {
    __off = (**(code **)(lVar4 + 0x20))();
    lVar4 = *(long *)this;
LAB_001b80b0:
    pcVar5 = *(code **)(lVar4 + 0x18);
    if (pcVar5 != Seek) goto LAB_001b824c;
    if (*(FILE **)(this + 8) != (FILE *)0x0) {
      this[0x10] = (File)0x0;
                    /* try { // try from 001b80d8 to 001b80ff has its CatchHandler @ 001b8288 */
      iVar1 = fseeko64(*(FILE **)(this + 8),0,2);
      if ((iVar1 == 0) || (this[0x1c] == (File)0x0)) goto LAB_001b80e0;
                    /* try { // try from 001b81f0 to 001b820f has its CatchHandler @ 001b8288 */
      ErrorHandler::SeekError(&ErrHandler);
      lVar4 = *(long *)this;
      pcVar5 = *(code **)(lVar4 + 0x20);
      if (pcVar5 != Tell) goto LAB_001b8208;
      goto LAB_001b80f4;
    }
LAB_001b8180:
    pcVar5 = *(code **)(lVar4 + 0x20);
    if (pcVar5 != Tell) goto LAB_001b8208;
LAB_001b8190:
    if (this[0x1c] == (File)0x0) {
      pcVar5 = *(code **)(lVar4 + 0x18);
      _Var3 = -1;
      if (pcVar5 == Seek) {
        return -1;
      }
      goto LAB_001b8228;
    }
                    /* try { // try from 001b81a4 to 001b81a7 has its CatchHandler @ 001b8288 */
    ErrorHandler::SeekError(&ErrHandler);
    pFVar2 = *(FILE **)(this + 8);
LAB_001b80fc:
    _Var3 = ftello64(pFVar2);
    pcVar5 = *(code **)(*(long *)this + 0x18);
  }
  if (pcVar5 == Seek) {
    if (*(FILE **)(this + 8) != (FILE *)0x0) {
      this[0x10] = (File)0x0;
      iVar1 = fseeko64(*(FILE **)(this + 8),__off,0);
      if ((iVar1 != 0) && (this[0x1c] != (File)0x0)) {
        ErrorHandler::SeekError(&ErrHandler);
        return _Var3;
      }
    }
    return _Var3;
  }
LAB_001b8228:
  (*pcVar5)(this,__off,0);
  return _Var3;
}


