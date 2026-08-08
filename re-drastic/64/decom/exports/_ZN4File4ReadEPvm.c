/*
 * Ghidra decompilation
 *
 * Function : _ZN4File4ReadEPvm
 * Address  : 001b8360
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* File::Read(void*, unsigned long) */

ulong __thiscall File::Read(File *this,void *param_1,ulong param_2)

{
  File FVar1;
  char cVar2;
  int iVar3;
  FILE *pFVar4;
  size_t sVar5;
  long __off;
  ulong uVar6;
  code *pcVar7;
  uint uVar8;
  ulong uVar9;
  __off64_t _Var10;
  
  _Var10 = 0;
  if (this[0x19] != (File)0x0) {
    if (*(code **)(*(long *)this + 0x20) == Tell) {
      pFVar4 = *(FILE **)(this + 8);
      if (pFVar4 == (FILE *)0x0) {
        if (this[0x1c] == (File)0x0) {
          _Var10 = -1;
          goto LAB_001b8444;
        }
        ErrorHandler::SeekError(&ErrHandler);
        pFVar4 = *(FILE **)(this + 8);
      }
      _Var10 = ftello64(pFVar4);
    }
    else {
      _Var10 = (**(code **)(*(long *)this + 0x20))();
    }
  }
LAB_001b8444:
  do {
    pFVar4 = _stdin;
    if (*(int *)(this + 0x14) == 1) {
      FVar1 = this[0x10];
      *(FILE **)(this + 8) = _stdin;
    }
    else {
      FVar1 = this[0x10];
      pFVar4 = *(FILE **)(this + 8);
    }
    if (FVar1 != (File)0x0) {
      fflush(pFVar4);
      this[0x10] = (File)0x0;
      pFVar4 = *(FILE **)(this + 8);
    }
    clearerr(pFVar4);
    sVar5 = fread(param_1,1,param_2,*(FILE **)(this + 8));
    iVar3 = ferror(*(FILE **)(this + 8));
    if ((iVar3 == 0) && ((int)sVar5 != -1)) {
LAB_001b8474:
      return sVar5 & 0xffffffff;
    }
    *(undefined4 *)(this + 0x2020) = 2;
    if (this[0x1c] == (File)0x0) {
      return 0xffffffff;
    }
    if (this[0x19] != (File)0x0) {
      if (param_2 != 0) {
        uVar9 = 0;
        uVar8 = 0;
LAB_001b8538:
        __off = _Var10 + uVar9;
        pcVar7 = *(code **)(*(long *)this + 0x18);
        if (pcVar7 != Seek) goto LAB_001b85f0;
LAB_001b8550:
        if (*(FILE **)(this + 8) != (FILE *)0x0) {
          this[0x10] = (File)0x0;
          iVar3 = fseeko64(*(FILE **)(this + 8),__off,0);
          if ((iVar3 != 0) && (this[0x1c] != (File)0x0)) {
            ErrorHandler::SeekError(&ErrHandler);
          }
        }
        do {
          uVar6 = param_2 - uVar9;
          if (0x200 < uVar6) {
            uVar6 = 0x200;
          }
          uVar9 = uVar9 + 0x200;
          iVar3 = DirectRead(this,param_1,uVar6);
          if (iVar3 != -1) {
            uVar8 = uVar8 + iVar3;
            if (param_2 <= uVar9) {
LAB_001b8594:
              return (ulong)uVar8;
            }
            goto LAB_001b8538;
          }
          uVar8 = uVar8 + 0x200;
          if (param_2 <= uVar9) goto LAB_001b8594;
          __off = _Var10 + uVar9;
          pcVar7 = *(code **)(*(long *)this + 0x18);
          if (pcVar7 == Seek) goto LAB_001b8550;
LAB_001b85f0:
          (*pcVar7)(this,__off,0);
        } while( true );
      }
      sVar5 = 0;
      goto LAB_001b8474;
    }
    if ((*(int *)(this + 0x14) != 0) ||
       (cVar2 = ErrorHandler::AskRepeatRead(&ErrHandler), cVar2 == '\0')) {
      ErrorHandler::ReadError(&ErrHandler);
      return 0xffffffff;
    }
  } while( true );
}


