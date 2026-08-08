/*
 * Ghidra decompilation
 *
 * Function : _Z18GetAutoRenamedNamePwj.part.2
 * Address  : 08109d5c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool GetAutoRenamedName(wchar *Name,size_t MaxNameSize)

{
  int iVar1;
  bool bVar2;
  wchar *pwVar3;
  wchar *Ext;
  size_t sVar4;
  int iVar5;
  wchar NewName [2048];
  
  iVar1 = __stack_chk_guard;
  pwVar3 = GetExt(Name);
  if (pwVar3 == (wchar *)0x0) {
    sVar4 = wcslen((wchar_t *)Name);
    pwVar3 = Name + sVar4;
  }
  NewName[0] = 0;
  iVar5 = 1;
  do {
    __swprintf_chk(NewName,0x800,1,0x800,&DAT_08145724,(int)pwVar3 - (int)Name >> 2,Name,iVar5,
                   pwVar3);
    bVar2 = FileExist(NewName);
    if (!bVar2) {
      wcsncpyz(Name,NewName,MaxNameSize);
      bVar2 = true;
LAB_08109e20:
      if (iVar1 == __stack_chk_guard) {
        return bVar2;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (iVar5 == 1000000) {
      bVar2 = false;
      goto LAB_08109e20;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}


