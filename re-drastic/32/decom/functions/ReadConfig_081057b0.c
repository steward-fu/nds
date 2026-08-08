/*
 * Ghidra decompilation
 *
 * Function : ReadConfig
 * Address  : 081057b0
 * Program  : drastic
 */


/* DWARF original prototype: void ReadConfig(CommandData * this) */

void __thiscall CommandData::ReadConfig(CommandData *this)

{
  int iVar1;
  bool bVar2;
  wchar *pwVar3;
  wchar *Str;
  int iVar4;
  wchar *NextCmd;
  wchar *pwVar5;
  size_t MaxSize;
  size_t ParSize;
  wchar *Par;
  StringList List;
  
  iVar1 = __stack_chk_guard;
  StringList::StringList(&List);
  bVar2 = ReadTextFile((wchar *)&DAT_081456a0,&List,true,false,RCH_DEFAULT,false,false,false);
  if (bVar2) {
LAB_0810581c:
    pwVar3 = StringList::GetString(&List);
    if (pwVar3 != (wchar *)0x0) {
      do {
        pwVar5 = pwVar3;
        bVar2 = IsSpace(*pwVar5);
        pwVar3 = pwVar5 + 1;
      } while (bVar2);
      iVar4 = wcsnicomp(pwVar5,(wchar *)L"switches=",9);
      if (iVar4 == 0) {
        pwVar5 = pwVar5 + 9;
        while (pwVar3 = GetCmdParam(pwVar5,(wchar *)0x0,0), pwVar3 != (wchar *)0x0) {
          MaxSize = ((int)pwVar3 - (int)pwVar5 >> 2) + 2;
          pwVar3 = (wchar *)malloc(MaxSize * 4);
          if ((pwVar3 == (wchar *)0x0) ||
             (pwVar5 = GetCmdParam(pwVar5,pwVar3,MaxSize), pwVar5 == (wchar *)0x0)) break;
          if (*pwVar3 == 0x2d) {
            ProcessSwitch(this,pwVar3 + 1);
          }
          free(pwVar3);
        }
      }
      goto LAB_0810581c;
    }
  }
  if (List.StringData.Buffer != (wchar_t *)0x0) {
    free(List.StringData.Buffer);
  }
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


