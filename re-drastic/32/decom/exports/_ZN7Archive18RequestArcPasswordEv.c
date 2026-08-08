/*
 * Ghidra decompilation
 *
 * Function : _ZN7Archive18RequestArcPasswordEv
 * Address  : 080d9aa8
 * Program  : drastic
 */


/* DWARF original prototype: void RequestArcPassword(Archive * this) */

void __thiscall Archive::RequestArcPassword(Archive *this)

{
  int iVar1;
  int iVar2;
  RAROptions *pRVar3;
  wchar wVar4;
  wchar PasswordW [128];
  char PasswordA [128];
  
  iVar1 = __stack_chk_guard;
  pRVar3 = this->Cmd;
  wVar4 = (wchar)(pRVar3->Password).PasswordSet;
  if (wVar4 == 0) {
    if (pRVar3->Callback != (UNRARCALLBACK_conflict)0x0) {
      PasswordW[0] = wVar4;
      iVar2 = (*pRVar3->Callback)(4,pRVar3->UserData,(long)PasswordW,0x80);
      if ((iVar2 == -1) || (wVar4 = PasswordW[0], PasswordW[0] == 0)) {
        PasswordW[0] = wVar4;
        PasswordA[0] = '\0';
        iVar2 = (*this->Cmd->Callback)(2,this->Cmd->UserData,(long)PasswordA,0x80);
        if (iVar2 == -1) {
          PasswordA[0] = '\0';
        }
        GetWideName(PasswordA,(wchar *)0x0,PasswordW,0x80);
        cleandata(PasswordA,0x80);
      }
      SecPassword::Set(&this->Cmd->Password,PasswordW);
      cleandata(PasswordW,0x200);
      if ((this->Cmd->Password).PasswordSet != false) goto LAB_080d9b64;
    }
    File::Close(&this->super_File);
    this->Cmd->DllError = 0x16;
    ErrorHandler::Exit(&ErrHandler,RARX_USERBREAK);
  }
LAB_080d9b64:
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


