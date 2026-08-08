/*
 * Ghidra decompilation
 *
 * Function : _Z11CalcFileSumP4FilePjPhjxj
 * Address  : 080d6c3c
 * Program  : drastic
 */


/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x080d6cd4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Unknown calling convention */
/* WARNING: Exceeded maximum restarts with more pending */

void CalcFileSum(File *SrcFile,uint *CRC32,byte *Blake2,uint Threads,int64 Size,uint Flags)

{
  int iVar1;
  int iVar2;
  void *Data;
  uchar *NewBuffer;
  int ReadSize;
  uint uVar3;
  DataHash *this;
  undefined4 extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  undefined4 __in_chrg;
  int __in_chrg_00;
  int extraout_r1_02;
  uint uVar4;
  uint uVar5;
  DataHash *pDVar6;
  int iVar7;
  uint uVar8;
  HashValue Result;
  DataHash HashCRC;
  DataHash HashBlake2;
  
  iVar1 = __stack_chk_guard;
  iVar2 = (*SrcFile->_vptr_File[4])();
  if ((Flags & 4) == 0) {
    (*SrcFile->_vptr_File[3])(iVar2,SrcFile->_vptr_File[3],0,0,0);
  }
  Data = realloc((void *)0x0,0x100000);
  if (Data == (void *)0x0) {
    ErrorHandler::MemoryError(&ErrHandler);
  }
  DataHash::DataHash(&HashCRC);
  DataHash::DataHash(&HashBlake2);
  DataHash::Init(&HashCRC,HASH_CRC32,Threads);
  this = &HashBlake2;
  DataHash::Init(this,HASH_BLAKE2,Threads);
  uVar8 = 0;
  if (Blake2 == (byte *)0x0) {
    if (CRC32 == (uint *)0x0) {
LAB_080d7014:
      uVar4 = 0x100000;
      if ((int)((ulonglong)Size >> 0x20) == 0x7fffffff && (int)Size == 0x7fffffff)
      goto LAB_080d7038;
      do {
        iVar7 = (int)((ulonglong)Size >> 0x20);
        uVar4 = (uint)Size;
        if (0 < (int)(iVar7 + (uint)(0x100000 < uVar4)) !=
            (SBORROW4(-iVar7,(uint)(0x100000 < uVar4)) != false)) {
          uVar4 = 0x100000;
        }
LAB_080d7038:
        do {
          iVar7 = (int)((ulonglong)Size >> 0x20);
          pDVar6 = (DataHash *)Size;
          this = (DataHash *)(*SrcFile->_vptr_File[2])(this,Data,uVar4);
          __in_chrg = extraout_r1_02;
          if (this == (DataHash *)0x0) goto LAB_080d6eec;
          uVar8 = uVar8 + 1;
          if ((uVar8 & 0xf) == 0) {
            Wait();
          }
          if (iVar7 == 0x7fffffff && pDVar6 == (DataHash *)0x7fffffff) goto LAB_080d7014;
          uVar4 = 0x100000;
          iVar7 = iVar7 - (((int)this >> 0x1f) + (uint)(pDVar6 < this));
          Size = CONCAT44(iVar7,(int)pDVar6 - (int)this);
        } while (iVar7 == 0x7fffffff && (int)pDVar6 - (int)this == 0x7fffffff);
      } while( true );
    }
    while( true ) {
      iVar7 = (int)((ulonglong)Size >> 0x20);
      uVar5 = (uint)Size;
      uVar4 = 0x100000;
      if ((iVar7 != 0x7fffffff || uVar5 != 0x7fffffff) &&
         (uVar4 = uVar5,
         0 < (int)(iVar7 + (uint)(0x100000 < uVar5)) !=
         (SBORROW4(-iVar7,(uint)(0x100000 < uVar5)) != false))) {
        uVar4 = 0x100000;
      }
      uVar4 = (*SrcFile->_vptr_File[2])(this,Data,uVar4);
      if (uVar4 == 0) break;
      uVar8 = uVar8 + 1;
      if ((uVar8 & 0xf) == 0) {
        Wait();
      }
      this = &HashCRC;
      DataHash::Update(this,Data,uVar4);
      if (iVar7 != 0x7fffffff || uVar5 != 0x7fffffff) {
        Size = CONCAT44(iVar7 - (((int)uVar4 >> 0x1f) + (uint)(uVar5 < uVar4)),uVar5 - uVar4);
      }
    }
  }
  else {
    if (CRC32 == (uint *)0x0) {
      while( true ) {
        iVar7 = (int)((ulonglong)Size >> 0x20);
        uVar5 = (uint)Size;
        uVar4 = 0x100000;
        if ((iVar7 != 0x7fffffff || uVar5 != 0x7fffffff) &&
           (uVar4 = uVar5,
           0 < (int)(iVar7 + (uint)(0x100000 < uVar5)) !=
           (SBORROW4(-iVar7,(uint)(0x100000 < uVar5)) != false))) {
          uVar4 = 0x100000;
        }
        uVar4 = (*SrcFile->_vptr_File[2])(&HashBlake2,Data,uVar4);
        __in_chrg = extraout_r1_00;
        if (uVar4 == 0) break;
        uVar8 = uVar8 + 1;
        if ((uVar8 & 0xf) == 0) {
          Wait();
        }
        DataHash::Update(&HashBlake2,Data,uVar4);
        if (iVar7 != 0x7fffffff || uVar5 != 0x7fffffff) {
          Size = CONCAT44(iVar7 - (((int)uVar4 >> 0x1f) + (uint)(uVar5 < uVar4)),uVar5 - uVar4);
        }
      }
      goto LAB_080d6e98;
    }
    while( true ) {
      iVar7 = (int)((ulonglong)Size >> 0x20);
      uVar5 = (uint)Size;
      uVar4 = 0x100000;
      if ((iVar7 != 0x7fffffff || uVar5 != 0x7fffffff) &&
         (uVar4 = uVar5,
         0 < (int)(iVar7 + (uint)(0x100000 < uVar5)) !=
         (SBORROW4(-iVar7,(uint)(0x100000 < uVar5)) != false))) {
        uVar4 = 0x100000;
      }
      uVar4 = (*SrcFile->_vptr_File[2])(&HashBlake2,Data,uVar4);
      if (uVar4 == 0) break;
      uVar8 = uVar8 + 1;
      if ((uVar8 & 0xf) == 0) {
        Wait();
      }
      DataHash::Update(&HashCRC,Data,uVar4);
      DataHash::Update(&HashBlake2,Data,uVar4);
      if (iVar7 != 0x7fffffff || uVar5 != 0x7fffffff) {
        Size = CONCAT44(iVar7 - (((int)uVar4 >> 0x1f) + (uint)(uVar5 < uVar4)),uVar5 - uVar4);
      }
    }
  }
  uVar3 = DataHash::GetCRC32(&HashCRC);
  *CRC32 = uVar3;
  __in_chrg = extraout_r1_01;
LAB_080d6e98:
  if (Blake2 != (byte *)0x0) {
    DataHash::Result(&HashBlake2,&Result);
    *(uint *)Blake2 = Result.field_1.CRC32;
    *(undefined4 *)(Blake2 + 4) = Result.field_1._4_4_;
    *(undefined4 *)(Blake2 + 8) = Result.field_1._8_4_;
    *(undefined4 *)(Blake2 + 0xc) = Result.field_1._12_4_;
    *(undefined4 *)(Blake2 + 0x10) = Result.field_1._16_4_;
    *(undefined4 *)(Blake2 + 0x14) = Result.field_1._20_4_;
    *(undefined4 *)(Blake2 + 0x18) = Result.field_1._24_4_;
    *(undefined4 *)(Blake2 + 0x1c) = Result.field_1._28_4_;
    __in_chrg = Result.field_1._20_4_;
  }
LAB_080d6eec:
  DataHash::~DataHash(&HashBlake2,__in_chrg);
  DataHash::~DataHash(&HashCRC,__in_chrg_00);
  if (Data != (void *)0x0) {
    free(Data);
  }
  (*SrcFile->_vptr_File[3])(&HashCRC,SrcFile->_vptr_File[3],iVar2,extraout_r1,0);
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


