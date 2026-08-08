/*
 * Ghidra decompilation
 *
 * Function : _ZN10CmdExtract13ExtrCreateDirEP11CommandDataR7ArchivePKw
 * Address  : 001c9810
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CmdExtract::ExtrCreateDir(CommandData*, Archive&, wchar_t const*) */

void CmdExtract::ExtrCreateDir(CommandData *param_1,Archive *param_2,wchar_t *param_3)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  bool bStack_9;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2[0xc4e1] != (Archive)0x0) goto LAB_001c984c;
  pwVar1 = (wchar_t *)(param_1 + 0x67fc);
  iVar6 = MakeDir(pwVar1,(bool)((byte)param_2[0xc4bc] ^ 1),param_3[0x21e3]);
  if (iVar6 == 0) {
LAB_001c98ac:
    param_1[0x67f9] = (CommandData)0x1;
  }
  else {
    cVar5 = FileExist(pwVar1);
    if (cVar5 != '\0') {
      uVar7 = GetFileAttr(pwVar1);
      cVar5 = IsDir(uVar7);
      if (cVar5 != '\0') {
        if (param_2[0xc4bc] == (Archive)0x0) {
          SetFileAttr(pwVar1,param_3[0x21e3]);
        }
        goto LAB_001c98ac;
      }
      FileCreate((RAROptions *)param_2,(File *)0x0,pwVar1,0x800,
                 *(OVERWRITE_MODE *)(param_2 + 0xc23c),&bStack_9,*(longlong *)(param_3 + 0x29f4),
                 (RarTime *)(param_3 + 0x29ec),false);
    }
    CreatePath(pwVar1,true);
    iVar6 = MakeDir(pwVar1,(bool)((byte)param_2[0xc4bc] ^ 1),param_3[0x21e3]);
    if (iVar6 == 0) goto LAB_001c98ac;
    ErrorHandler::CheckLongPathErrMsg(&ErrHandler);
    ErrorHandler::SysErrMsg();
    *(undefined4 *)(param_2 + 0x125c0) = 0x10;
    ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,9);
    if (param_1[0x67f9] == (CommandData)0x0) goto LAB_001c984c;
  }
  pwVar2 = param_3 + 0x29ec;
  if (*(int *)(param_2 + 0xe5ac) == 0) {
    pwVar2 = (wchar_t *)0x0;
  }
  pwVar3 = param_3 + 0x29ee;
  if (*(int *)(param_2 + 0xe5b0) == 0) {
    pwVar3 = (wchar_t *)0x0;
  }
  pwVar4 = param_3 + 0x29f0;
  if (*(int *)(param_2 + 0xe5b4) == 0) {
    pwVar4 = (wchar_t *)0x0;
  }
  SetDirTime(pwVar1,(RarTime *)pwVar2,(RarTime *)pwVar3,(RarTime *)pwVar4);
LAB_001c984c:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return;
}


