/*
 * Ghidra decompilation
 *
 * Function : ExtrDllGetPassword
 * Address  : 080e9f0c
 * Program  : drastic
 */


/* DWARF original prototype: bool ExtrDllGetPassword(CmdExtract * this, CommandData * Cmd) */

bool __thiscall CmdExtract::ExtrDllGetPassword(CmdExtract *this,CommandData *Cmd)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  wchar wVar4;
  UNRARCALLBACK_conflict p_Var5;
  wchar PasswordW [128];
  char PasswordA [128];
  
  iVar1 = __stack_chk_guard;
  bVar3 = (Cmd->super_RAROptions).Password.PasswordSet;
  wVar4 = (wchar)bVar3;
  if (wVar4 == 0) {
    p_Var5 = (Cmd->super_RAROptions).Callback;
    if (p_Var5 == (UNRARCALLBACK_conflict)0x0) goto LAB_080e9fd0;
    PasswordW[0] = wVar4;
    iVar2 = (*p_Var5)(4,(Cmd->super_RAROptions).UserData,(long)PasswordW,0x80);
    if ((iVar2 == -1) || (wVar4 = PasswordW[0], PasswordW[0] == 0)) {
      PasswordW[0] = wVar4;
      PasswordA[0] = '\0';
      iVar2 = (*(Cmd->super_RAROptions).Callback)
                        (2,(Cmd->super_RAROptions).UserData,(long)PasswordA,0x80);
      if (iVar2 == -1) {
        PasswordA[0] = '\0';
      }
      GetWideName(PasswordA,(wchar *)0x0,PasswordW,0x80);
      cleandata(PasswordA,0x80);
    }
    SecPassword::Set(&(Cmd->super_RAROptions).Password,PasswordW);
    cleandata(PasswordW,0x200);
    if ((Cmd->super_RAROptions).Password.PasswordSet == false) goto LAB_080e9fd0;
  }
  bVar3 = 1;
  memcpy(&this->Password,&(Cmd->super_RAROptions).Password,0x201);
LAB_080e9fd0:
  if (iVar1 == __stack_chk_guard) {
    return (bool)bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


