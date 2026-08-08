/*
 * Ghidra decompilation
 *
 * Function : UnexpEndArcMsg
 * Address  : 080d99d4
 * Program  : drastic
 */


/* DWARF original prototype: void UnexpEndArcMsg(Archive * this) */

void __thiscall Archive::UnexpEndArcMsg(Archive *this)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int64 iVar7;
  
  iVar7 = File::FileLength(&this->super_File);
  iVar2 = (int)((ulonglong)iVar7 >> 0x20);
  uVar1 = (uint)iVar7;
  uVar5 = *(uint *)&this->CurBlockPos;
  iVar6 = *(int *)((int)&this->CurBlockPos + 4);
  if ((int)(iVar2 - (iVar6 + (uint)(uVar1 < uVar5))) < 0 ==
      (SBORROW4(iVar2,iVar6) != SBORROW4(iVar2 - iVar6,(uint)(uVar1 < uVar5)))) {
    uVar3 = *(uint *)&this->NextBlockPos;
    iVar4 = *(int *)((int)&this->NextBlockPos + 4);
    if (((int)(iVar2 - (iVar4 + (uint)(uVar1 < uVar3))) < 0 ==
         (SBORROW4(iVar2,iVar4) != SBORROW4(iVar2 - iVar4,(uint)(uVar1 < uVar3)))) &&
       ((iVar2 == iVar6 && uVar1 == uVar5 || iVar2 == iVar4 && uVar1 == uVar3 ||
        (this->Format != RARFMT50)))) {
      return;
    }
  }
  ErrorHandler::SetErrorCode(&ErrHandler,RARX_WARNING);
  return;
}


