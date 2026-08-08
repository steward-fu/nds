/*
 * Ghidra decompilation
 *
 * Function : _ZN4File10DirectReadEPvm
 * Address  : 001b7de0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* File::DirectRead(void*, unsigned long) */

undefined4 __thiscall File::DirectRead(File *this,void *param_1,ulong param_2)

{
  File FVar1;
  int iVar2;
  FILE *__stream;
  size_t sVar3;
  undefined4 uVar4;
  
  __stream = _stdin;
  if (*(int *)(this + 0x14) == 1) {
    FVar1 = this[0x10];
    *(FILE **)(this + 8) = _stdin;
  }
  else {
    FVar1 = this[0x10];
    __stream = *(FILE **)(this + 8);
  }
  if (FVar1 != (File)0x0) {
    fflush(__stream);
    this[0x10] = (File)0x0;
    __stream = *(FILE **)(this + 8);
  }
  clearerr(__stream);
  sVar3 = fread(param_1,1,param_2,*(FILE **)(this + 8));
  iVar2 = ferror(*(FILE **)(this + 8));
  uVar4 = (undefined4)sVar3;
  if (iVar2 != 0) {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


