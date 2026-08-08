/*
 * Ghidra decompilation
 *
 * Function : _ZN11ComprDataIO11ShowUnpReadExx
 * Address  : 080e2560
 * Program  : drastic
 */


/* DWARF original prototype: void ShowUnpRead(ComprDataIO * this, int64 ArcPos, int64 ArcSize) */

void __thiscall ComprDataIO::ShowUnpRead(ComprDataIO *this,int64 ArcPos,int64 ArcSize)

{
  int iVar1;
  int CurPercent;
  Archive *SrcArc;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  wchar wVar2;
  undefined4 unaff_r6;
  undefined4 in_stack_ffffffd8;
  
  if ((((this->ShowProgress != false) && (this->SrcFile != (File *)0x0)) &&
      (wVar2 = this->SrcFile[3].FileName[0x4a2],
      iVar1 = ToPercent(CONCAT44(unaff_r4,in_stack_ffffffd8),CONCAT44(unaff_r6,unaff_r5)),
      *(char *)(wVar2 + 0xc248) == '\0')) && (iVar1 != this->LastPercent)) {
    this->LastPercent = iVar1;
  }
  return;
}


