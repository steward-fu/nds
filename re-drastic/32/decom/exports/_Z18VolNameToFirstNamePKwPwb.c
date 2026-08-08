/*
 * Ghidra decompilation
 *
 * Function : _Z18VolNameToFirstNamePKwPwb
 * Address  : 080d50b4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

wchar * VolNameToFirstName(wchar *VolName,wchar *FirstName,bool NewNumbering)

{
  int iVar1;
  bool bVar2;
  wchar *pwVar3;
  wchar *ChPtr;
  size_t sVar4;
  wchar_t *pwVar5;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int __in_chrg;
  int extraout_r1_02;
  int iVar6;
  wchar *VolNumStart;
  wchar wVar7;
  wchar Mask [2048];
  FindFile Find;
  FindData FD;
  Archive Arc;
  
  iVar1 = __stack_chk_guard;
  if (FirstName != VolName) {
    wcscpy((wchar_t *)FirstName,(wchar_t *)VolName);
  }
  pwVar5 = (wchar_t *)FirstName;
  if (NewNumbering) {
    pwVar3 = GetVolNumPart(FirstName);
    if (FirstName < pwVar3) {
      wVar7 = 0x31;
      do {
        bVar2 = IsDigit(*pwVar3);
        if (bVar2) {
          *pwVar3 = wVar7;
          wVar7 = 0x30;
        }
        else {
          if (wVar7 == 0x30) {
            pwVar5 = (wchar_t *)(pwVar3 + 1);
            break;
          }
          wVar7 = 0x31;
        }
        pwVar3 = pwVar3 + -1;
      } while (FirstName < pwVar3);
    }
LAB_080d5150:
    bVar2 = FileExist(FirstName);
    if (bVar2) goto LAB_080d5160;
  }
  else {
    SetExt(FirstName,(wchar *)&DAT_08144bc0);
    if (FirstName == (wchar *)0x0) goto LAB_080d5150;
    sVar4 = wcslen((wchar_t *)FirstName);
    iVar6 = sVar4 - 1;
    if (-1 < iVar6) {
      if (FirstName[iVar6] != 0x2f) {
        pwVar3 = FirstName + sVar4 + 0x3fffffff;
        do {
          bVar2 = iVar6 == 0;
          iVar6 = iVar6 + -1;
          if (bVar2) goto LAB_080d51ec;
          pwVar3 = pwVar3 + -1;
        } while (*pwVar3 != 0x2f);
      }
      pwVar5 = (wchar_t *)(FirstName + iVar6 + 1);
    }
LAB_080d51ec:
    pwVar5 = wcsrchr(pwVar5,L'.');
    bVar2 = FileExist(FirstName);
    if (bVar2) goto LAB_080d5160;
  }
  __wcscpy_chk(Mask,FirstName,0x800);
  SetExt(Mask,(wchar *)&DAT_08144c5c);
  FindFile::FindFile(&Find);
  FindFile::SetMask(&Find,Mask);
  RarTime::RarTime(&FD.mtime);
  RarTime::RarTime(&FD.ctime);
  RarTime::RarTime(&FD.atime);
  while (bVar2 = FindFile::Next(&Find,&FD,false), iVar6 = extraout_r1, bVar2) {
    Archive::Archive(&Arc,(RAROptions *)0x0);
    bVar2 = File::Open(&Arc.super_File,FD.Name,0);
    iVar6 = extraout_r1_00;
    if (((bVar2) && (bVar2 = Archive::IsArchive(&Arc,true), iVar6 = extraout_r1_01, bVar2)) &&
       (Arc.FirstVolume)) {
      wcscpy((wchar_t *)FirstName,(wchar_t *)&FD);
      Archive::~Archive(&Arc,__in_chrg);
      iVar6 = extraout_r1_02;
      break;
    }
    Archive::~Archive(&Arc,iVar6);
  }
  FindFile::~FindFile(&Find,iVar6);
LAB_080d5160:
  if (iVar1 == __stack_chk_guard) {
    return (wchar *)pwVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


