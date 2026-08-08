/*
 * Ghidra decompilation
 *
 * Function : Seek
 * Address  : 081090f4
 * Program  : drastic
 */


/* DWARF original prototype: bool Seek(QuickOpen * this, int64 Offset, int Method) */

bool __thiscall QuickOpen::Seek(QuickOpen *this,int64 Offset,int Method)

{
  bool bVar1;
  uint in_r2;
  uint in_r3;
  uint uVar2;
  int iVar3;
  bool bVar4;
  uint64 uVar5;
  undefined4 in_stack_ffffffd8;
  undefined4 in_stack_ffffffdc;
  
  bVar1 = this->Loaded;
  if (bVar1 != false) {
    if ((int)Offset == 0) {
      uVar2 = *(uint *)((int)&this->SeekPos + 4);
      bVar4 = in_r3 <= uVar2;
      if (uVar2 == in_r3) {
        bVar4 = in_r2 <= *(uint *)&this->SeekPos;
      }
      if (bVar4 && (uVar2 != in_r3 || *(uint *)&this->SeekPos != in_r2)) {
        uVar2 = *(uint *)((int)&this->LastReadHeaderPos + 4);
        bVar4 = uVar2 <= in_r3;
        if (in_r3 == uVar2) {
          bVar4 = *(uint *)&this->LastReadHeaderPos <= in_r2;
        }
        if (!bVar4) {
          Load(this,CONCAT44(in_stack_ffffffdc,in_stack_ffffffd8));
        }
      }
      *(uint *)&this->SeekPos = in_r2;
      *(uint *)((int)&this->SeekPos + 4) = in_r3;
      this->UnsyncSeekPos = true;
    }
    else if ((int)Offset == 1) {
      uVar2 = *(uint *)&this->SeekPos;
      iVar3 = *(int *)((int)&this->SeekPos + 4);
      *(uint *)&this->SeekPos = in_r2 + uVar2;
      *(uint *)((int)&this->SeekPos + 4) = in_r3 + iVar3 + (uint)CARRY4(in_r2,uVar2);
      this->UnsyncSeekPos = true;
    }
    else {
      this->UnsyncSeekPos = true;
      if ((int)Offset == 2) {
        File::Seek(&this->Arc->super_File,CONCAT44(in_stack_ffffffdc,2),1);
        uVar5 = File::Tell(&this->Arc->super_File);
        this->SeekPos = uVar5;
        this->UnsyncSeekPos = false;
      }
    }
  }
  return bVar1;
}


