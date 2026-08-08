/*
 * Ghidra decompilation
 *
 * Function : GetNext
 * Address  : 001ec7e0
 * Program  : drastic64
 */


/* ScanTree::GetNext(FindData*) */

undefined8 __thiscall ScanTree::GetNext(ScanTree *this,FindData *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (-1 < *(int *)(this + 0x2000)) {
    do {
      while( true ) {
        do {
          while( true ) {
            if ((*(int *)(this + 0x2024) == 0) && (cVar1 = GetNextMask(), cVar1 == '\0')) {
              return 1;
            }
            uVar3 = FindProc(this,param_1);
            iVar2 = (int)uVar3;
            if (iVar2 != 2) break;
            *(int *)(this + 0x201c) = *(int *)(this + 0x201c) + 1;
          }
        } while (iVar2 == 3);
        if (iVar2 != 0) break;
        if ((param_1[0x200c] == (FindData)0x0) || (*(int *)(this + 0x2018) != 0)) {
          return uVar3;
        }
      }
      if (iVar2 != 1) {
        return uVar3;
      }
      cVar1 = GetNextMask();
    } while (cVar1 != '\0');
  }
  return 1;
}


