/*
 * Ghidra decompilation
 *
 * Function : _ZN8ScanTree8FindProcEP8FindData
 * Address  : 001ec150
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ScanTree::FindProc(FindData*) */

char __thiscall ScanTree::FindProc(ScanTree *this,FindData *param_1)

{
  int iVar1;
  char cVar2;
  FindData FVar3;
  byte bVar4;
  char cVar5;
  FindFile *pFVar6;
  wchar_t *pwVar7;
  undefined1 *puVar8;
  size_t sVar9;
  size_t sVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  wchar_t *pwVar14;
  bool bVar15;
  FindData FVar16;
  wchar_t local_4008 [2048];
  wchar_t wStack_2008;
  undefined auStack_2004 [8188];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x2024) == 0) {
LAB_001ec308:
    cVar2 = '\x03';
  }
  else {
    pFVar6 = *(FindFile **)(this + (long)*(int *)(this + 0x2000) * 8);
    if (pFVar6 == (FindFile *)0x0) {
      pwVar14 = (wchar_t *)(this + 0x2024);
      cVar2 = IsWildcard(pwVar14);
      if ((cVar2 != '\0') ||
         (FVar3 = (FindData)FindFile::FastFind(pwVar14,param_1,(bool)this[0x2014]),
         FVar3 == (FindData)0x0)) {
        FVar3 = (FindData)0x0;
LAB_001ec35c:
        iVar13 = *(int *)(this + 0x2000);
        bVar15 = true;
        if (iVar13 < 1) {
          iVar1 = *(int *)(this + 0x2010);
          if (((iVar1 == 2) || (cVar2 != '\0' && iVar1 == 3)) ||
             ((iVar1 != 1 & (byte)this[0x2020]) != 0)) {
            if (iVar13 == 0) {
              bVar15 = true;
              this[0x6024] = (ScanTree)0x1;
            }
            else {
              bVar15 = true;
            }
          }
          else {
            bVar15 = false;
            if (iVar13 == 0) {
              this[0x6024] = (ScanTree)0x0;
            }
            if (cVar2 == '\0') {
              if (FVar3 != (FindData)0x0) goto LAB_001ec714;
              cVar2 = (param_1[0x202c] == (FindData)0x0) + '\x02';
              if ((*(CommandData **)(this + 0x8030) == (CommandData *)0x0) ||
                 (cVar5 = CommandData::ExclCheck
                                    (*(CommandData **)(this + 0x8030),pwVar14,false,true,true),
                 cVar5 == '\0')) {
                ErrorHandler::OpenErrorMsg(&ErrHandler,(wchar_t *)(this + 0x6030));
              }
              else {
                cVar2 = '\x03';
              }
              goto LAB_001ec670;
            }
          }
        }
        pFVar6 = (FindFile *)operator_new(0x2010);
                    /* try { // try from 001ec378 to 001ec37b has its CatchHandler @ 001ec7b4 */
        FindFile::FindFile(pFVar6);
        *(FindFile **)(this + (long)*(int *)(this + 0x2000) * 8) = pFVar6;
        wcsncpyz(&wStack_2008,pwVar14,0x800);
        if (bVar15) {
          SetName(&wStack_2008,L"*",0x800);
        }
        FindFile::SetMask(*(FindFile **)(this + (long)*(int *)(this + 0x2000) * 8),&wStack_2008);
        pFVar6 = *(FindFile **)(this + (long)*(int *)(this + 0x2000) * 8);
        goto LAB_001ec19c;
      }
      FVar16 = param_1[0x200c];
      if ((FVar16 == (FindData)0x0) ||
         ((this[0x2014] != (ScanTree)0x0 && (FVar3 = param_1[0x200d], FVar3 != (FindData)0x0))))
      goto LAB_001ec35c;
      if (*(int *)(this + 0x2000) == 0) {
        this[0x6024] = (ScanTree)0x0;
      }
      if (*(int *)(this + 0x2010) == 1) {
LAB_001ec714:
        cVar2 = '\0';
LAB_001ec670:
        *(undefined4 *)(this + 0x2024) = 0;
        goto LAB_001ec30c;
      }
      if ((this[0x2014] == (ScanTree)0x0) || (param_1[0x200d] == (FindData)0x0)) {
        if ((*(CommandData **)(this + 0x8030) == (CommandData *)0x0) ||
           ((cVar2 = CommandData::ExclCheck
                               (*(CommandData **)(this + 0x8030),(wchar_t *)param_1,true,false,false
                               ), cVar2 == '\0' &&
            (cVar2 = CommandData::ExclDirByAttr((uint)*(undefined8 *)(this + 0x8030)), cVar2 == '\0'
            )))) {
          puVar8 = &DAT_002286e8;
          goto LAB_001ec500;
        }
        goto LAB_001ec5b0;
      }
    }
    else {
LAB_001ec19c:
      cVar2 = FindFile::Next(pFVar6,param_1,(bool)this[0x2014]);
      if (cVar2 == '\0') {
        FVar3 = param_1[0x202c];
        if ((FVar3 != (FindData)0x0) && (*(CommandData **)(this + 0x8030) != (CommandData *)0x0)) {
          bVar4 = CommandData::ExclCheck
                            (*(CommandData **)(this + 0x8030),(wchar_t *)(this + 0x2024),false,true,
                             true);
          FVar3 = (FindData)(bVar4 ^ 1);
        }
        iVar13 = *(int *)(this + 0x2000);
        local_4008[0] = L'\0';
        lVar12 = (long)iVar13;
        pFVar6 = *(FindFile **)(this + lVar12 * 8);
        if (pFVar6 != (FindFile *)0x0) {
          FindFile::~FindFile(pFVar6);
          operator_delete(pFVar6,0x2010);
          iVar13 = *(int *)(this + 0x2000);
          lVar12 = (long)iVar13;
        }
        iVar13 = iVar13 + -1;
        *(int *)(this + 0x2000) = iVar13;
        *(undefined8 *)(this + lVar12 * 8) = 0;
        if (-1 < iVar13) {
          lVar12 = (long)iVar13;
          do {
            if (*(long *)(this + lVar12 * 8) != 0) {
              pwVar14 = (wchar_t *)(this + 0x2024);
              pwVar7 = wcsrchr(pwVar14,L'/');
              if (pwVar7 != (wchar_t *)0x0) {
                __wcscpy_chk(&wStack_2008,pwVar7,0x800);
                if (*(int *)(this + 0x2000) < *(int *)(this + 0x2004)) {
                  uVar11 = PointToName((wchar_t *)(this + 0x4024));
                  __wcscpy_chk(auStack_2004,uVar11,0x7ff);
                }
                *pwVar7 = L'\0';
                __wcscpy_chk(local_4008,pwVar14,0x800);
                pwVar7 = wcsrchr(pwVar14,L'/');
                if (pwVar7 == (wchar_t *)0x0) {
                  __wcscpy_chk(pwVar14,auStack_2004,0x800);
                }
                else {
                  wcscpy(pwVar7,&wStack_2008);
                }
              }
              if (((*(int *)(this + 0x2018) == 2) &&
                  (cVar2 = FindFile::FastFind(local_4008,param_1,(bool)this[0x2014]), cVar2 != '\0')
                  ) && (param_1[0x200c] != (FindData)0x0)) {
                *(uint *)(param_1 + 0x2028) = *(uint *)(param_1 + 0x2028) | 1;
                if (FVar3 == (FindData)0x0) {
                  cVar2 = '\0';
                  goto LAB_001ec30c;
                }
              }
              else if (FVar3 == (FindData)0x0) {
                cVar2 = '\x03';
                goto LAB_001ec30c;
              }
              cVar2 = '\x02';
              goto LAB_001ec30c;
            }
            *(int *)(this + 0x2000) = (int)lVar12 + -1;
            lVar12 = lVar12 + -1;
          } while (-1 < (int)lVar12);
        }
        if (FVar3 != (FindData)0x0) {
          cVar2 = '\x01';
          *(int *)(this + 0x201c) = *(int *)(this + 0x201c) + 1;
          goto LAB_001ec30c;
        }
LAB_001ec5b0:
        cVar2 = '\x01';
        goto LAB_001ec30c;
      }
      if ((param_1[0x200c] != (FindData)0x0) &&
         ((this[0x2014] == (ScanTree)0x0 || (param_1[0x200d] == (FindData)0x0)))) {
        if ((*(int *)(this + 0x2000) == 0) && (this[0x6024] == (ScanTree)0x0)) {
          cVar2 = '\0';
          if (*(int *)(this + 0x2018) == 3) goto LAB_001ec30c;
        }
        else if ((*(CommandData **)(this + 0x8030) == (CommandData *)0x0) ||
                ((cVar2 = CommandData::ExclCheck
                                    (*(CommandData **)(this + 0x8030),(wchar_t *)param_1,true,false,
                                     false), cVar2 == '\0' &&
                 (cVar2 = CommandData::ExclDirByAttr((uint)*(undefined8 *)(this + 0x8030)),
                 cVar2 == '\0')))) {
          puVar8 = (undefined1 *)PointToName((wchar_t *)(this + 0x2024));
          FVar16 = (FindData)0x0;
LAB_001ec500:
          pwVar14 = (wchar_t *)(this + 0x2024);
          __wcscpy_chk(&wStack_2008,puVar8,0x800);
          __wcscpy_chk(pwVar14,param_1,0x800);
          sVar9 = wcslen(pwVar14);
          sVar10 = wcslen(&wStack_2008);
          cVar2 = '\x02';
          if ((0x7ff < sVar9 + sVar10 + 1) || (0x3fe < *(int *)(this + 0x2000))) goto LAB_001ec30c;
          AddEndSlash(pwVar14,0x800);
          wcsncatz(pwVar14,&wStack_2008,0x800);
          iVar13 = *(int *)(this + 0x2000);
          *(int *)(this + 0x2000) = iVar13 + 1;
          if (FVar16 != (FindData)0x0) {
            *(int *)(this + 0x2004) = iVar13 + 1;
            goto LAB_001ec2f8;
          }
          goto LAB_001ec2e0;
        }
        cVar2 = '\x03';
        goto LAB_001ec30c;
      }
LAB_001ec2e0:
      cVar2 = CmpName((wchar_t *)(this + 0x2024),(wchar_t *)param_1,0);
      if (cVar2 == '\0') goto LAB_001ec308;
    }
LAB_001ec2f8:
    cVar2 = '\0';
  }
LAB_001ec30c:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return cVar2;
}


