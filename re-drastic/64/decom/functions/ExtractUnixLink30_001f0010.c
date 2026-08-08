/*
 * Ghidra decompilation
 *
 * Function : ExtractUnixLink30
 * Address  : 001f0010
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ExtractUnixLink30(ComprDataIO&, Archive&, wchar_t const*) [clone .part.0] */

char ExtractUnixLink30(ComprDataIO *param_1,Archive *param_2,wchar_t *param_3)

{
  DataHash *this;
  Archive *pAVar1;
  HASH_TYPE HVar2;
  char cVar3;
  int iVar4;
  size_t sVar5;
  int *piVar6;
  ulong uVar7;
  uchar auStack_1008 [2048];
  char acStack_808 [2048];
  long local_8;
  
  uVar7 = *(ulong *)(param_2 + 0xa7c8);
  if (0x7ff < uVar7) {
    uVar7 = 0x7ff;
  }
  local_8 = ___stack_chk_guard;
  this = (DataHash *)(param_1 + 0x3970);
  ComprDataIO::UnpRead(param_1,auStack_1008,uVar7);
  HVar2 = *(HASH_TYPE *)(param_2 + 0xa7e0);
  auStack_1008[uVar7] = '\0';
  DataHash::Init(this,HVar2,1);
  sVar5 = strlen((char *)auStack_1008);
  DataHash::Update(this,auStack_1008,sVar5);
  DataHash::Result(this,(HashValue *)(param_2 + 0xa7e0));
  pAVar1 = param_2 + 0xa83b;
  if (param_2[0xa83a] == (Archive)0x0) {
    pAVar1 = (Archive *)0x0;
  }
  cVar3 = DataHash::Cmp(this,(HashValue *)(param_2 + 0xa7e0),(uchar *)pAVar1);
  if (cVar3 == '\0') {
    cVar3 = '\x01';
  }
  else {
    CreatePath(param_3,true);
    DelFile(param_3);
    WideToChar(param_3,acStack_808,0x800);
    iVar4 = symlink((char *)auStack_1008,acStack_808);
    if (iVar4 == -1) {
      piVar6 = __errno_location();
      cVar3 = '\0';
      if (*piVar6 != 0x11) {
        ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,1);
      }
    }
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return cVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


