/*
 * Ghidra decompilation
 *
 * Function : IsProcessFile
 * Address  : 001e9e00
 * Program  : drastic64
 */


/* CommandData::IsProcessFile(FileHeader&, bool*, int) */

int __thiscall
CommandData::IsProcessFile(CommandData *this,FileHeader *param_1,bool *param_2,int param_3)

{
  wchar_t *__s;
  FileHeader FVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  size_t sVar6;
  wchar_t *pwVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  
  __s = (wchar_t *)(param_1 + 0x20);
  sVar6 = wcslen(__s);
  if (sVar6 < 0x800) {
    FVar1 = param_1[0x20f1];
    cVar4 = ExclCheckArgs(this,(StringList *)(this + 0x166f0),(bool)FVar1,__s,false,5);
    if ((((cVar4 == '\0') &&
         ((*(int *)(this + 0x167d0) == 0 ||
          (cVar4 = ExclCheckArgs(this,(StringList *)(this + 0x167a8),(bool)FVar1,__s,false,5),
          cVar4 != '\0')))) &&
        ((*(ulong *)(this + 0xc4c0) == 0 ||
         (*(ulong *)(param_1 + 0x2040) < *(ulong *)(this + 0xc4c0))))) &&
       ((((*(ulong *)(this + 0xc4c8) == 0 ||
          (*(ulong *)(this + 0xc4c8) < *(ulong *)(param_1 + 0x2040))) &&
         ((*(uint *)(param_1 + 0x1c) & *(uint *)this) == 0)) &&
        ((this[8] == (CommandData)0x0 || ((*(uint *)(param_1 + 0x1c) & *(uint *)(this + 4)) != 0))))
       )) {
      if (FVar1 == (FileHeader)0x0) {
        lVar8 = *(long *)(this + 0xc4d0);
        lVar9 = *(long *)(param_1 + 0x2060);
        bVar2 = false;
        if (lVar8 != 0x7fffffff7fffffff) {
          bVar2 = lVar9 - lVar8 < 0;
        }
        if (bVar2 == (lVar8 == 0x7fffffff7fffffff || SBORROW8(lVar9,lVar8))) {
          return 0;
        }
        lVar8 = *(long *)(this + 0xc4d8);
        bVar3 = lVar8 != 0x7fffffff7fffffff;
        bVar2 = false;
        if (bVar3) {
          bVar2 = lVar9 - lVar8 < 0;
        }
        if (bVar3 && lVar9 == lVar8 || bVar2 != (bVar3 && SBORROW8(lVar9,lVar8))) {
          return 0;
        }
      }
      iVar10 = 1;
      StringList::Rewind();
      while (pwVar7 = (wchar_t *)StringList::GetString(), pwVar7 != (wchar_t *)0x0) {
        cVar4 = CmpName(pwVar7,__s,param_3);
        if (cVar4 != '\0') {
          if (param_2 != (bool *)0x0) {
            iVar5 = wcsicompc(pwVar7,__s);
            *param_2 = iVar5 == 0;
            return iVar10;
          }
          return iVar10;
        }
        iVar10 = iVar10 + 1;
      }
    }
  }
  return 0;
}


