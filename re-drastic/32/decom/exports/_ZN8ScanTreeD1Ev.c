/*
 * Ghidra decompilation
 *
 * Function : _ZN8ScanTreeD1Ev
 * Address  : 0810804c
 * Program  : drastic
 */


/* DWARF original prototype: void * ~ScanTree(ScanTree * this, int __in_chrg) */

void * __thiscall ScanTree::~ScanTree(ScanTree *this,int __in_chrg)

{
  int extraout_r1;
  FindFile *this_00;
  int iVar1;
  int I;
  FindFile **ppFVar2;
  
  iVar1 = this->Depth;
  if (-1 < iVar1) {
    ppFVar2 = this->FindStack + iVar1 + 1;
    do {
      ppFVar2 = ppFVar2 + -1;
      this_00 = *ppFVar2;
      iVar1 = iVar1 + -1;
      if (this_00 != (FindFile *)0x0) {
        FindFile::~FindFile(this_00,__in_chrg);
        operator_delete(this_00);
        __in_chrg = extraout_r1;
      }
    } while (iVar1 != -1);
  }
  return this;
}


