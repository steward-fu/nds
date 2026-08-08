/*
 * Ghidra decompilation
 *
 * Function : GetComment
 * Address  : 001ba140
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Archive::GetComment(Array<wchar_t>*) */

Archive __thiscall Archive::GetComment(Archive *this,Array *param_1)

{
  int iVar1;
  ushort uVar2;
  Archive AVar3;
  char cVar4;
  short sVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  char *__ptr;
  longlong lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  code *pcVar14;
  ulong uVar15;
  size_t sVar16;
  void *pvVar17;
  ulong uVar18;
  wchar_t *pwVar19;
  uchar *puStack_12f68;
  ulong uStack_12f60;
  ComprDataIO aCStack_12f58 [64];
  ulong uStack_12f18;
  undefined uStack_12f10;
  undefined uStack_12f0f;
  CryptData aCStack_12ee0 [4104];
  CryptData aCStack_11ed8 [4176];
  DataHash aDStack_10e88 [3152];
  DataHash aDStack_10238 [1592];
  undefined8 local_fc00;
  DataHash aDStack_f5e8 [3160];
  Unpack aUStack_e990 [19872];
  ulong local_9bf0;
  undefined local_9bd8;
  undefined auStack_2fd0 [12232];
  long local_8;
  
  local_fc00 = 0;
  AVar3 = this[0x1120e];
  local_8 = ___stack_chk_guard;
  if (AVar3 == (Archive)0x0) goto LAB_001ba408;
  if (*(code **)(*(long *)this + 0x20) == Tell) {
    cVar4 = QuickOpen::Tell((QuickOpen *)(this + 0x7630),(longlong *)&uStack_12f60);
    uVar9 = uStack_12f60;
    if (cVar4 != '\0') goto LAB_001ba1cc;
    uVar9 = File::Tell();
    pcVar14 = *(code **)(*(long *)this + 0x18);
    if (*(int *)(this + 0x11208) == 1) goto LAB_001ba468;
LAB_001ba1e4:
    if (this[0x8714] == (Archive)0x0) {
                    /* try { // try from 001ba67c to 001ba6cf has its CatchHandler @ 001baa48 */
      lVar10 = GetStartPos();
      if (pcVar14 == Seek) {
        cVar4 = QuickOpen::Seek((QuickOpen *)(this + 0x7630),lVar10,0);
        if (cVar4 == '\0') {
          File::Seek((File *)this,lVar10,0);
        }
      }
      else {
                    /* try { // try from 001ba8b8 to 001ba8bb has its CatchHandler @ 001baa48 */
        (*pcVar14)(this,lVar10,0);
      }
      lVar11 = SearchSubBlock(this,L"CMT");
      if (lVar11 == 0) goto LAB_001ba608;
      AVar3 = (Archive)ReadCommentData(this,param_1);
    }
    else {
      lVar11 = *(long *)(this + 0x11218) + 0x14;
      if (pcVar14 == Seek) {
                    /* try { // try from 001ba218 to 001ba27f has its CatchHandler @ 001baa48 */
        cVar4 = QuickOpen::Seek((QuickOpen *)(this + 0x7630),lVar11,0);
        if (cVar4 == '\0') {
                    /* try { // try from 001ba654 to 001ba657 has its CatchHandler @ 001baa48 */
          File::Seek((File *)this,lVar11,0);
        }
      }
      else {
        (*pcVar14)(this,lVar11,0);
      }
      ReadHeader();
      if (this[0x11220] == (Archive)0x0) {
        uVar15 = (ulong)(*(int *)(this + 0x10dec) - 0xdU & 0xffff);
        if (*(int *)(this + 0x11208) == 1) goto LAB_001ba4c8;
LAB_001ba24c:
        if (this[0x10df7] == (Archive)0x30) {
LAB_001ba4d4:
          if ((int)uVar15 == 0) {
            sVar16 = 0;
            __ptr = (char *)0x0;
          }
          else {
            sVar16 = uVar15;
            if (uVar15 < 0x20) {
              sVar16 = 0x20;
            }
            __ptr = (char *)malloc(sVar16);
            if (__ptr == (char *)0x0) {
                    /* try { // try from 001ba9e8 to 001ba9eb has its CatchHandler @ 001baa48 */
              ErrorHandler::MemoryError();
            }
          }
          if (*(code **)(*(long *)this + 0x10) == Read) {
                    /* try { // try from 001ba524 to 001ba5c7 has its CatchHandler @ 001baa34 */
            cVar4 = QuickOpen::Read((QuickOpen *)(this + 0x7630),__ptr,uVar15,&uStack_12f60);
            if (cVar4 == '\0') {
              File::Read((File *)this,__ptr,uVar15);
            }
          }
          else {
                    /* try { // try from 001ba864 to 001ba867 has its CatchHandler @ 001baa34 */
            (**(code **)(*(long *)this + 0x10))(this,__ptr,uVar15);
          }
          if ((*(int *)(this + 0x11208) == 1) ||
             (uVar2 = *(ushort *)(this + 0x10df8), uVar6 = CRC32(0xffffffff,__ptr,uVar15),
             uVar2 == (ushort)~uVar6)) {
            uVar18 = *(ulong *)(param_1 + 0x10);
            iVar1 = (int)uVar15 + 1;
            uVar13 = (ulong)iVar1;
            if (uVar18 < (ulong)(long)iVar1) {
              uVar12 = *(ulong *)(param_1 + 0x18);
              *(ulong *)(param_1 + 8) = uVar13;
              if ((uVar12 != 0 && uVar12 <= uVar13) && (uVar12 == 0 || uVar13 != uVar12)) {
                    /* try { // try from 001ba908 to 001ba937 has its CatchHandler @ 001baa34 */
                ErrorHandler::GeneralErrMsg
                          (&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
                ErrorHandler::MemoryError();
                uVar13 = *(ulong *)(param_1 + 8);
                uVar18 = *(ulong *)(param_1 + 0x10);
              }
              uVar18 = uVar18 + 0x20 + (uVar18 >> 2);
              if (uVar18 < uVar13) {
                uVar18 = uVar13;
              }
              pvVar17 = realloc(*(void **)param_1,uVar18 << 2);
              if (pvVar17 == (void *)0x0) {
                    /* try { // try from 001ba9d8 to 001ba9db has its CatchHandler @ 001baa34 */
                ErrorHandler::MemoryError();
              }
              *(void **)param_1 = pvVar17;
              *(ulong *)(param_1 + 0x10) = uVar18;
            }
            else {
              *(ulong *)(param_1 + 8) = uVar13;
            }
            uVar18 = uVar15 + 1;
            if (sVar16 < uVar18) {
              uVar13 = sVar16 + 0x20 + (sVar16 >> 2);
              if (uVar13 < uVar18) {
                uVar13 = uVar18;
              }
              __ptr = (char *)realloc(__ptr,uVar13);
              if (__ptr == (char *)0x0) {
                    /* try { // try from 001ba9f8 to 001ba9fb has its CatchHandler @ 001baa34 */
                ErrorHandler::MemoryError();
              }
            }
            pwVar19 = *(wchar_t **)param_1;
            __ptr[uVar15] = '\0';
            CharToWide(__ptr,pwVar19,uVar15);
            pwVar19 = *(wchar_t **)param_1;
            sVar16 = wcslen(pwVar19);
            uVar15 = *(ulong *)(param_1 + 0x10);
            if (uVar15 < sVar16) {
              uVar18 = *(ulong *)(param_1 + 0x18);
              *(size_t *)(param_1 + 8) = sVar16;
              if ((uVar18 != 0 && uVar18 <= sVar16) && (uVar18 == 0 || sVar16 != uVar18)) {
                ErrorHandler::GeneralErrMsg
                          (&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
                ErrorHandler::MemoryError();
                pwVar19 = *(wchar_t **)param_1;
                sVar16 = *(size_t *)(param_1 + 8);
                uVar15 = *(ulong *)(param_1 + 0x10);
              }
              uVar15 = uVar15 + 0x20 + (uVar15 >> 2);
              if (uVar15 < sVar16) {
                uVar15 = sVar16;
              }
              pvVar17 = realloc(pwVar19,uVar15 << 2);
              if (pvVar17 == (void *)0x0) {
                    /* try { // try from 001ba9b8 to 001ba9bb has its CatchHandler @ 001baa34 */
                ErrorHandler::MemoryError();
              }
              *(void **)param_1 = pvVar17;
              *(ulong *)(param_1 + 0x10) = uVar15;
              sVar16 = *(size_t *)(param_1 + 8);
            }
            else {
              *(size_t *)(param_1 + 8) = sVar16;
            }
            if (__ptr != (char *)0x0) {
              free(__ptr);
            }
            goto LAB_001ba3d4;
          }
          if (__ptr != (char *)0x0) {
            free(__ptr);
          }
        }
        else if (((byte)((char)this[0x10df6] - 0xfU) < 0xf) && ((byte)this[0x10df7] < 0x36))
        goto LAB_001ba274;
      }
LAB_001ba608:
      AVar3 = (Archive)0x0;
    }
    pcVar14 = *(code **)(*(long *)this + 0x18);
  }
  else {
    uVar9 = (**(code **)(*(long *)this + 0x20))();
LAB_001ba1cc:
    pcVar14 = *(code **)(*(long *)this + 0x18);
    if (*(int *)(this + 0x11208) != 1) goto LAB_001ba1e4;
LAB_001ba468:
    lVar11 = *(long *)(this + 0x11218) + 7;
    if (pcVar14 == Seek) {
                    /* try { // try from 001ba490 to 001ba4af has its CatchHandler @ 001baa48 */
      cVar4 = QuickOpen::Seek((QuickOpen *)(this + 0x7630),lVar11,0);
      if (cVar4 == '\0') {
                    /* try { // try from 001ba6fc to 001ba7c7 has its CatchHandler @ 001baa48 */
        File::Seek((File *)this,lVar11,0);
      }
    }
    else {
      (*pcVar14)(this,lVar11,0);
    }
    uVar7 = File::GetByte();
    uVar8 = File::GetByte();
    uVar15 = (ulong)((uVar7 & 0xff) + (uVar8 & 0xff) * 0x100 & 0xffff);
    if (*(int *)(this + 0x11208) != 1) goto LAB_001ba24c;
LAB_001ba4c8:
    if (this[0x8715] == (Archive)0x0) goto LAB_001ba4d4;
LAB_001ba274:
    ComprDataIO::ComprDataIO(aCStack_12f58);
    uStack_12f0f = 1;
    if (*(int *)(this + 0x11208) == 1) {
                    /* try { // try from 001ba8c4 to 001ba8eb has its CatchHandler @ 001baa50 */
      uVar7 = File::GetByte();
      uVar8 = File::GetByte();
      uVar18 = (ulong)((uVar8 & 0xff) * 0x100 + (uVar7 & 0xff));
      uVar15 = (ulong)((int)uVar15 - 2U & 0xffff);
      ComprDataIO::SetCmt13Encryption();
      this[0x10df6] = (Archive)0xf;
    }
    else {
      uVar18 = (ulong)*(ushort *)(this + 0x10df4);
    }
                    /* try { // try from 001ba2a4 to 001ba2df has its CatchHandler @ 001baa50 */
    ComprDataIO::SetFiles(aCStack_12f58,(File *)this,(File *)0x0);
    uStack_12f10 = 0;
    uStack_12f18 = uVar15;
    DataHash::Init(aDStack_f5e8,2,1);
    Unpack::Unpack(aUStack_e990,aCStack_12f58);
                    /* try { // try from 001ba2ec to 001ba377 has its CatchHandler @ 001baa00 */
    Unpack::Init(aUStack_e990,0x10000,false);
    local_9bd8 = 0;
    local_9bf0 = uVar18;
    Unpack::DoUnpack(aUStack_e990,(uint)(byte)this[0x10df6],false);
    if ((*(int *)(this + 0x11208) != 1) &&
       (sVar5 = DataHash::GetCRC32(), *(short *)(this + 0x10df8) != sVar5)) {
      Unpack::~Unpack(aUStack_e990);
      DataHash::~DataHash(aDStack_f5e8);
      DataHash::~DataHash(aDStack_10238);
      DataHash::~DataHash(aDStack_10e88);
      CryptData::~CryptData(aCStack_11ed8);
      CryptData::~CryptData(aCStack_12ee0);
      goto LAB_001ba608;
    }
    ComprDataIO::GetUnpackedData(aCStack_12f58,&puStack_12f68,&uStack_12f60);
    uVar18 = *(ulong *)(param_1 + 0x10);
    uVar15 = uStack_12f60 + 1;
    if (uVar18 < uVar15) {
      uVar13 = *(ulong *)(param_1 + 0x18);
      *(ulong *)(param_1 + 8) = uVar15;
      if ((uVar13 != 0 && uVar13 <= uVar15) && (uVar13 == 0 || uVar15 != uVar13)) {
        ErrorHandler::GeneralErrMsg
                  (&ErrHandler,L"Maximum allowed array size (%u) is exceeded",uVar13);
        ErrorHandler::MemoryError();
        uVar15 = *(ulong *)(param_1 + 8);
        uVar18 = *(ulong *)(param_1 + 0x10);
      }
      uVar18 = uVar18 + 0x20 + (uVar18 >> 2);
      if (uVar18 < uVar15) {
        uVar18 = uVar15;
      }
      pvVar17 = realloc(*(void **)param_1,uVar18 << 2);
      if (pvVar17 == (void *)0x0) {
        ErrorHandler::MemoryError();
      }
      *(void **)param_1 = pvVar17;
      *(ulong *)(param_1 + 0x10) = uVar18;
      uVar15 = *(ulong *)(param_1 + 8);
    }
    else {
      pvVar17 = *(void **)param_1;
      *(ulong *)(param_1 + 8) = uVar15;
    }
    memset(pvVar17,0,uVar15 << 2);
    CharToWide((char *)puStack_12f68,*(wchar_t **)param_1,uStack_12f60);
    pwVar19 = *(wchar_t **)param_1;
    uVar15 = wcslen(pwVar19);
    uVar18 = *(ulong *)(param_1 + 0x10);
    if (uVar18 < uVar15) {
      uVar13 = *(ulong *)(param_1 + 0x18);
      *(ulong *)(param_1 + 8) = uVar15;
      if ((uVar13 != 0 && uVar13 <= uVar15) && (uVar13 == 0 || uVar15 != uVar13)) {
                    /* try { // try from 001ba954 to 001ba9ab has its CatchHandler @ 001baa00 */
        ErrorHandler::GeneralErrMsg(&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
        ErrorHandler::MemoryError();
        pwVar19 = *(wchar_t **)param_1;
        uVar15 = *(ulong *)(param_1 + 8);
        uVar18 = *(ulong *)(param_1 + 0x10);
      }
      uVar18 = uVar18 + 0x20 + (uVar18 >> 2);
      if (uVar18 < uVar15) {
        uVar18 = uVar15;
      }
      pvVar17 = realloc(pwVar19,uVar18 << 2);
      if (pvVar17 == (void *)0x0) {
                    /* try { // try from 001ba9c8 to 001ba9cb has its CatchHandler @ 001baa00 */
        ErrorHandler::MemoryError();
      }
      *(void **)param_1 = pvVar17;
      *(ulong *)(param_1 + 0x10) = uVar18;
    }
    else {
      *(ulong *)(param_1 + 8) = uVar15;
    }
    Unpack::~Unpack(aUStack_e990);
    DataHash::~DataHash(aDStack_f5e8);
    DataHash::~DataHash(aDStack_10238);
    DataHash::~DataHash(aDStack_10e88);
    CryptData::~CryptData(aCStack_11ed8);
    CryptData::~CryptData(aCStack_12ee0);
    sVar16 = *(size_t *)(param_1 + 8);
LAB_001ba3d4:
    AVar3 = (Archive)(sVar16 != 0);
    pcVar14 = *(code **)(*(long *)this + 0x18);
  }
  if (pcVar14 == Seek) {
    cVar4 = QuickOpen::Seek((QuickOpen *)(this + 0x7630),uVar9,0);
    if (cVar4 == '\0') {
      File::Seek((File *)this,uVar9,0);
    }
  }
  else {
    (*pcVar14)(this,uVar9,0);
  }
LAB_001ba408:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(auStack_2fd0,local_8 - ___stack_chk_guard,0);
  }
  return AVar3;
}


