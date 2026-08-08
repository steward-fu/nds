/*
 * Ghidra decompilation
 *
 * Function : _ZN11CommandData9SizeCheckEx
 * Address  : 08105c70
 * Program  : drastic
 */


/* DWARF original prototype: bool SizeCheck(CommandData * this, int64 Size) */

bool __thiscall CommandData::SizeCheck(CommandData *this,int64 Size)

{
  bool bVar1;
  bool bVar2;
  uint in_r2;
  int in_r3;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)&(this->super_RAROptions).FileSizeLess;
  iVar4 = *(int *)((int)&(this->super_RAROptions).FileSizeLess + 4);
  bVar2 = (int)(in_r3 - (iVar4 + (uint)(in_r2 < uVar3))) < 0 ==
          (SBORROW4(in_r3,iVar4) != SBORROW4(in_r3 - iVar4,(uint)(in_r2 < uVar3)));
  bVar1 = bVar2 && (iVar4 != 0x7fffffff || uVar3 != 0x7fffffff);
  if (!bVar2 || iVar4 == 0x7fffffff && uVar3 == 0x7fffffff) {
    uVar3 = *(uint *)&(this->super_RAROptions).FileSizeMore;
    iVar4 = *(int *)((int)&(this->super_RAROptions).FileSizeMore + 4);
    bVar1 = (int)(iVar4 - (in_r3 + (uint)(uVar3 < in_r2))) < 0 ==
            (SBORROW4(iVar4,in_r3) != SBORROW4(iVar4 - in_r3,(uint)(uVar3 < in_r2)));
    if (iVar4 == 0x7fffffff && uVar3 == 0x7fffffff) {
      bVar1 = false;
    }
  }
  return bVar1;
}


