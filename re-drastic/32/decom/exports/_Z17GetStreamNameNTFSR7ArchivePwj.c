/*
 * Ghidra decompilation
 *
 * Function : _Z17GetStreamNameNTFSR7ArchivePwj
 * Address  : 0810d388
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void GetStreamNameNTFS(Archive *Arc,wchar *StreamName,size_t MaxSize)

{
  int iVar1;
  bool bVar2;
  byte *Src;
  wchar *pwVar3;
  size_t DestSize;
  size_t DestSize_1;
  char UtfString [8192];
  
  iVar1 = __stack_chk_guard;
  Src = (Arc->SubHead).SubData.Buffer;
  DestSize = (Arc->SubHead).SubData.BufSize;
  if (Arc->Format == RARFMT15) {
    DestSize_1 = DestSize >> 1;
    if (MaxSize - 1 < DestSize >> 1) {
      DestSize_1 = MaxSize - 1;
    }
    pwVar3 = RawToWide(Src,StreamName,DestSize_1);
    StreamName[DestSize_1] = 0;
  }
  else {
    if (0x1ffe < DestSize) {
      DestSize = 0x1fff;
    }
    __memcpy_chk(UtfString,Src,DestSize,0x2000);
    UtfString[DestSize] = '\0';
    bVar2 = UtfToWide(UtfString,StreamName,MaxSize);
    pwVar3 = (wchar *)(uint)bVar2;
  }
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pwVar3);
}


