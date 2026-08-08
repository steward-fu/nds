/*
 * Ghidra decompilation
 *
 * Function : RAROpenArchive
 * Address  : 080d09bc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void * RAROpenArchive(RAROpenArchiveData *r)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void *hArc;
  RAROpenArchiveDataEx_conflict rx;
  
  iVar1 = __stack_chk_guard;
  memset(&rx,0,0x9c);
  rx.OpenMode = r->OpenMode;
  rx.CmtBuf = r->CmtBuf;
  rx.CmtBufSize = r->CmtBufSize;
  rx.ArcName = r->ArcName;
  pvVar3 = RAROpenArchiveEx(&rx);
  iVar2 = __stack_chk_guard;
  r->OpenResult = rx.OpenResult;
  r->CmtSize = rx.CmtSize;
  r->CmtState = rx.CmtState;
  if (iVar1 == iVar2) {
    return pvVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


