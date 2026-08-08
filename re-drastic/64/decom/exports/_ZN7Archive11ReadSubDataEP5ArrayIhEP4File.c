/*
 * Ghidra decompilation
 *
 * Function : _ZN7Archive11ReadSubDataEP5ArrayIhEP4File
 * Address  : 001be450
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Archive::ReadSubData(Array<unsigned char>*, File*) */

void __thiscall Archive::ReadSubData(Archive *this,Array *param_1,File *param_2)

{
  ComprDataIO *this_00;
  Archive *pAVar1;
  char cVar2;
  ulong uVar3;
  Archive AVar4;
  ulong uVar5;
  ulong uVar6;
  uchar *puVar7;
  Unpack aUStack_e990 [19872];
  longlong local_9bf0;
  undefined local_9bd8;
  undefined auStack_2a00 [10744];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x11220] != (Archive)0x0) {
    ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,3);
    cVar2 = '\0';
    goto LAB_001be64c;
  }
  cVar2 = '\0';
  if (5 < (byte)this[0xcae2]) goto LAB_001be64c;
  AVar4 = (Archive)0x0;
  if (*(int *)(this + 0x11208) != 3) {
    AVar4 = (Archive)0x1d;
  }
  if ((byte)AVar4 < (byte)this[0xcae1]) goto LAB_001be64c;
  if ((*(long *)(this + 0xeb20) == 0) && (this[0xeb61] == (Archive)0x0)) {
    cVar2 = '\x01';
    goto LAB_001be64c;
  }
  this_00 = (ComprDataIO *)(this + 0x3030);
  ComprDataIO::Init();
  Unpack::Unpack(aUStack_e990,this_00);
                    /* try { // try from 001be518 to 001be61f has its CatchHandler @ 001be7c4 */
  Unpack::Init(aUStack_e990,*(ulong *)(this + 0xebc0),false);
  if (param_2 == (File *)0x0) {
    uVar5 = *(ulong *)(this + 0xeb28);
    if ((long)uVar5 < 0x1000001) {
      uVar3 = *(ulong *)(param_1 + 0x10);
      if (uVar3 < uVar5) {
        uVar6 = *(ulong *)(param_1 + 0x18);
        *(ulong *)(param_1 + 8) = uVar5;
        if ((uVar6 != 0 && uVar6 <= uVar5) && (uVar6 == 0 || uVar5 != uVar6)) {
          ErrorHandler::GeneralErrMsg
                    (&ErrHandler,L"Maximum allowed array size (%u) is exceeded",uVar6);
          ErrorHandler::MemoryError();
          uVar5 = *(ulong *)(param_1 + 8);
          uVar3 = *(ulong *)(param_1 + 0x10);
        }
        uVar3 = uVar3 + 0x20 + (uVar3 >> 2);
        if (uVar3 < uVar5) {
          uVar3 = uVar5;
        }
        puVar7 = (uchar *)realloc(*(void **)param_1,uVar3);
        if (puVar7 == (uchar *)0x0) {
          ErrorHandler::MemoryError();
        }
        uVar5 = *(ulong *)(this + 0xeb28);
        *(uchar **)param_1 = puVar7;
        *(ulong *)(param_1 + 0x10) = uVar3;
      }
      else {
        puVar7 = *(uchar **)param_1;
        *(ulong *)(param_1 + 8) = uVar5;
      }
                    /* try { // try from 001be6d0 to 001be7bf has its CatchHandler @ 001be7c4 */
      ComprDataIO::SetUnpackToMemory(this_00,puVar7,(uint)uVar5);
      goto LAB_001be520;
    }
LAB_001be6e8:
    cVar2 = '\0';
  }
  else {
LAB_001be520:
    if (this[0xeb63] != (Archive)0x0) {
      if (*(char *)(*(long *)(this + 0x7600) + 0xa22c) == '\0') goto LAB_001be6e8;
      pAVar1 = this + 0xeb69;
      if (this[0xeb68] == (Archive)0x0) {
        pAVar1 = (Archive *)0x0;
      }
      ComprDataIO::SetEncryption
                (this_00,false,*(CRYPT_METHOD *)(this + 0xeb64),
                 (SecPassword *)(*(long *)(this + 0x7600) + 0xa02c),(uchar *)pAVar1,
                 (uchar *)(this + 0xeb79),*(uint *)(this + 0xebb4),(uchar *)(this + 0xeb8a),
                 (uchar *)(this + 0xeb93));
    }
    DataHash::Init((DataHash *)(this + 0x69a0),*(HASH_TYPE *)(this + 0xeb38),1);
    *(undefined8 *)(this + 0x3070) = *(undefined8 *)(this + 0xeb20);
    this[0x3078] = (Archive)0x0;
    ComprDataIO::SetFiles(this_00,(File *)this,param_2);
    this[0x50c1] = this[0xeb61];
    local_9bf0 = *(longlong *)(this + 0xeb28);
    *(Archive **)(this + 0x3098) = this + 0xcac8;
    *(undefined8 *)(this + 0x30a0) = 0;
    local_9bd8 = 0;
    if (this[0xcae2] == (Archive)0x0) {
      CmdExtract::UnstoreFile(this_00,local_9bf0);
    }
    else {
      Unpack::DoUnpack(aUStack_e990,(uint)(byte)this[0xcae1],false);
    }
    pAVar1 = this + 0xeb93;
    if (this[0xeb92] == (Archive)0x0) {
      pAVar1 = (Archive *)0x0;
    }
    cVar2 = DataHash::Cmp((DataHash *)(this + 0x69a0),(HashValue *)(this + 0xeb38),(uchar *)pAVar1);
    if (cVar2 == '\0') {
      ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,3);
      if (param_1 == (Array *)0x0) goto LAB_001be6e8;
      if (*(void **)param_1 != (void *)0x0) {
        free(*(void **)param_1);
        *(undefined8 *)param_1 = 0;
      }
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
  }
  Unpack::~Unpack(aUStack_e990);
LAB_001be64c:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2,auStack_2a00,local_8 - ___stack_chk_guard,0);
}


