/*
 * Ghidra decompilation
 *
 * Function : _ZN8ScanTreeD1Ev
 * Address  : 001ebfb0
 * Program  : drastic64
 */


/* ScanTree::~ScanTree() */

void __thiscall ScanTree::~ScanTree(ScanTree *this)

{
  long lVar1;
  FindFile *this_00;
  
  if (-1 < *(int *)(this + 0x2000)) {
    lVar1 = (long)*(int *)(this + 0x2000);
    do {
      this_00 = *(FindFile **)(this + lVar1 * 8);
      lVar1 = lVar1 + -1;
      if (this_00 != (FindFile *)0x0) {
        FindFile::~FindFile(this_00);
        operator_delete(this_00,0x2010);
      }
    } while (-1 < (int)lVar1);
  }
  return;
}


