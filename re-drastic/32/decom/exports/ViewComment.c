/*
 * Ghidra decompilation
 *
 * Function : ViewComment
 * Address  : 080d86ac
 * Program  : drastic
 */


/* DWARF original prototype: void ViewComment(Archive * this) */

void __thiscall Archive::ViewComment(Archive *this)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar *ChPtr;
  wchar_t *pwVar4;
  size_t CmtSize;
  Array<wchar_t> CmtBuf;
  
  iVar1 = __stack_chk_guard;
  pwVar4 = (wchar_t *)(uint)this->Cmd->DisableComment;
  if (pwVar4 == (wchar_t *)0x0) {
    CmtBuf.Buffer = pwVar4;
    CmtBuf.BufSize = (size_t)pwVar4;
    CmtBuf.AllocSize = (size_t)pwVar4;
    CmtBuf.MaxSize = (size_t)pwVar4;
    bVar2 = GetComment(this,&CmtBuf);
    CmtSize = CmtBuf.BufSize;
    pwVar4 = CmtBuf.Buffer;
    if (bVar2) {
      pwVar3 = wcschr(CmtBuf.Buffer,L'\x1a');
      if (pwVar3 != (wchar_t *)0x0) {
        CmtSize = (int)pwVar3 - (int)pwVar4 >> 2;
      }
      OutComment((wchar *)pwVar4,CmtSize);
    }
    if (CmtBuf.Buffer != (wchar_t *)0x0) {
      free(CmtBuf.Buffer);
    }
  }
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


