/*
 * Ghidra decompilation
 *
 * Function : ReadHeader14
 * Address  : 080db1ac
 * Program  : drastic
 */


/* DWARF original prototype: size_t ReadHeader14(Archive * this) */

size_t __thiscall Archive::ReadHeader14(Archive *this)

{
  byte bVar1;
  byte Flags;
  ushort uVar3;
  uint uVar4;
  uint FileTime;
  anon_union_4_2_ab5de7db_for_FileHeader_3 aVar5;
  byte bVar2;
  size_t NameSize;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  size_t sVar11;
  wchar *Dest;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  uint local_860;
  int iStack_85c;
  RawRead Raw;
  byte Mark [4];
  int local_2c;
  
  local_2c = __stack_chk_guard;
  RawRead::RawRead(&Raw,&this->super_File);
  iVar9 = *(int *)((int)&this->CurBlockPos + 4);
  bVar14 = this->SFXSize < *(uint *)&this->CurBlockPos;
  if (0 < (int)(iVar9 + (uint)bVar14) == (SBORROW4(-iVar9,(uint)bVar14) != false)) {
    RawRead::Read(&Raw,7);
    MainHeader::Reset(&this->MainHead);
    RawRead::GetB(&Raw,Mark,4);
    uVar3 = RawRead::Get2(&Raw);
    bVar1 = RawRead::Get1(&Raw);
    uVar6 = (uint)bVar1;
    local_860 = *(uint *)&this->CurBlockPos;
    iStack_85c = *(int *)((int)&this->CurBlockPos + 4);
    uVar12 = local_860 + uVar3;
    iVar9 = iStack_85c + (uint)CARRY4(local_860,(uint)uVar3);
    *(uint *)&this->NextBlockPos = uVar12;
    *(int *)((int)&this->NextBlockPos + 4) = iVar9;
    this->CurHeaderType = HEAD_MAIN;
    this->Solid = SUB41((uVar6 << 0x1c) >> 0x1f,0);
    this->Volume = (bool)(bVar1 & 1);
    this->Locked = SUB41((uVar6 << 0x1d) >> 0x1f,0);
    (this->MainHead).CommentInHeader = SUB41((uVar6 << 0x1e) >> 0x1f,0);
    (this->MainHead).PackComment = SUB41((uVar6 << 0x1b) >> 0x1f,0);
  }
  else {
    RawRead::Read(&Raw,0x15);
    FileHeader::Reset(&this->FileHead,0);
    (this->FileHead).super_BlockHeader.super_BaseBlock.HeaderType = HEAD_FILE;
    uVar4 = RawRead::Get4(&Raw);
    (this->FileHead).super_BlockHeader.DataSize = uVar4;
    uVar4 = RawRead::Get4(&Raw);
    *(uint *)&(this->FileHead).UnpSize = uVar4;
    *(undefined4 *)((int)&(this->FileHead).UnpSize + 4) = 0;
    (this->FileHead).FileHash.Type = HASH_RAR14;
    uVar3 = RawRead::Get2(&Raw);
    *(uint *)&(this->FileHead).FileHash.field_1 = (uint)uVar3;
    uVar3 = RawRead::Get2(&Raw);
    (this->FileHead).super_BlockHeader.super_BaseBlock.HeadSize = (uint)uVar3;
    uVar4 = RawRead::Get4(&Raw);
    FileTime = (uint)&Raw;
    aVar5._0_1_ = RawRead::Get1((RawRead *)FileTime);
    aVar5.FileAttr._1_3_ = 0;
    (this->FileHead).field_3 = aVar5;
    bVar1 = RawRead::Get1(&Raw);
    (this->FileHead).super_BlockHeader.super_BaseBlock.Flags = bVar1 | 0x8000;
    bVar2 = RawRead::Get1(&Raw);
    if (bVar2 == '\x02') {
      bVar2 = '\r';
    }
    else {
      bVar2 = '\n';
    }
    (this->FileHead).UnpVer = bVar2;
    bVar1 = RawRead::Get1(&Raw);
    uVar6 = (uint)bVar1;
    NameSize = (size_t)&Raw;
    bVar2 = RawRead::Get1((RawRead *)NameSize);
    uVar10 = (this->FileHead).super_BlockHeader.super_BaseBlock.Flags;
    (this->FileHead).Method = bVar2;
    uVar7 = (this->FileHead).super_BlockHeader.DataSize;
    (this->FileHead).SplitBefore = (bool)((byte)uVar10 & 1);
    (this->FileHead).SplitAfter = SUB41((uVar10 << 0x1e) >> 0x1f,0);
    (this->FileHead).Encrypted = SUB41((uVar10 << 0x1d) >> 0x1f,0);
    (this->FileHead).CryptMethod = (uVar10 << 0x1d) >> 0x1f;
    *(undefined4 *)((int)&(this->FileHead).PackSize + 4) = 0;
    *(uint *)&(this->FileHead).PackSize = uVar7;
    (this->FileHead).WinSize = 0x10000;
    RarTime::SetDos(&(this->FileHead).mtime,uVar4);
    RawRead::Read(&Raw,uVar6);
    RawRead::GetB(&Raw,Mark,uVar6);
    Dest = (this->FileHead).FileName;
    Mark[uVar6] = '\0';
    CharToWide((char *)Mark,Dest,0x800);
    iVar9 = this->Cmd->ConvertNames;
    if (iVar9 == 1) {
      wcsupper(Dest);
      iVar9 = this->Cmd->ConvertNames;
    }
    if (iVar9 == 2) {
      wcslower(Dest);
    }
    if (Raw.DataSize == 0) {
      local_860 = *(uint *)&this->CurBlockPos;
      iStack_85c = *(int *)((int)&this->CurBlockPos + 4);
      uVar12 = *(uint *)&this->NextBlockPos;
      iVar9 = *(int *)((int)&this->NextBlockPos + 4);
    }
    else {
      local_860 = *(uint *)&this->CurBlockPos;
      iStack_85c = *(int *)((int)&this->CurBlockPos + 4);
      uVar13 = (this->FileHead).super_BlockHeader.super_BaseBlock.HeadSize;
      uVar8 = *(uint *)&(this->FileHead).PackSize;
      uVar6 = local_860 + uVar13;
      uVar12 = uVar6 + uVar8;
      iVar9 = iStack_85c + (uint)CARRY4(local_860,uVar13) +
              *(int *)((int)&(this->FileHead).PackSize + 4) + (uint)CARRY4(uVar6,uVar8);
      *(uint *)&this->NextBlockPos = uVar12;
      *(int *)((int)&this->NextBlockPos + 4) = iVar9;
    }
    this->CurHeaderType = HEAD_FILE;
  }
  sVar11 = Raw.DataSize;
  if ((int)(iStack_85c - (iVar9 + (uint)(local_860 < uVar12))) < 0 ==
      (SBORROW4(iStack_85c,iVar9) != SBORROW4(iStack_85c - iVar9,(uint)(local_860 < uVar12)))) {
    sVar11 = 0;
  }
  if (Raw.Data.Buffer != (uchar *)0x0) {
    free(Raw.Data.Buffer);
  }
  if (local_2c == __stack_chk_guard) {
    return sVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


