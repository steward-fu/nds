/*
 * Ghidra decompilation
 *
 * Function : ExtractUnixLink30
 * Address  : 0810d0f4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool ExtractUnixLink30(ComprDataIO *DataIO,Archive *Arc,wchar *LinkName)

{
  int iVar1;
  bool bVar2;
  size_t DataSize;
  int *piVar3;
  HASH_TYPE Type;
  byte *Key;
  DataHash *this;
  size_t Count;
  HashValue *Result;
  int iVar4;
  char Target [2048];
  char LinkNameA [2048];
  
  iVar1 = __stack_chk_guard;
  Count = *(size_t *)&(Arc->FileHead).PackSize;
  iVar4 = *(int *)((int)&(Arc->FileHead).PackSize + 4);
  if (0 < (int)(iVar4 + (uint)(0x7fe < Count)) != (SBORROW4(-iVar4,(uint)(0x7fe < Count)) != false))
  {
    Count = 0x7ff;
  }
  ComprDataIO::UnpRead(DataIO,(byte *)Target,Count);
  Type = (Arc->FileHead).FileHash.Type;
  this = &DataIO->UnpHash;
  Target[Count] = '\0';
  DataHash::Init(this,Type,1);
  Result = &(Arc->FileHead).FileHash;
  DataSize = strlen(Target);
  DataHash::Update(this,Target,DataSize);
  DataHash::Result(this,Result);
  Key = (byte *)(uint)(Arc->FileHead).UseHashKey;
  if (Key != (byte *)0x0) {
    Key = (Arc->FileHead).HashKey;
  }
  bVar2 = DataHash::Cmp(this,Result,Key);
  if (bVar2) {
    CreatePath(LinkName,true);
    DelFile(LinkName);
    WideToChar(LinkName,LinkNameA,0x800);
    iVar4 = symlink(Target,LinkNameA);
    if (iVar4 == -1) {
      piVar3 = __errno_location();
      if (*piVar3 == 0x11) {
        bVar2 = false;
      }
      else {
        bVar2 = false;
        ErrorHandler::SetErrorCode(&ErrHandler,RARX_WARNING);
      }
    }
  }
  else {
    bVar2 = true;
  }
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}


