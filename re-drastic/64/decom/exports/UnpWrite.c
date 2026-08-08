/*
 * Ghidra decompilation
 *
 * Function : UnpWrite
 * Address  : 001c3370
 * Program  : drastic64
 */


/* ComprDataIO::UnpWrite(unsigned char*, unsigned long) */

void __thiscall ComprDataIO::UnpWrite(ComprDataIO *this,uchar *param_1,ulong param_2)

{
  ComprDataIO CVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(this + 0x50) + 0x7600);
  if (*(int *)(lVar3 + 0x125bc) != 0) {
    if ((*(code **)(lVar3 + 0x125d0) != (code *)0x0) &&
       (iVar2 = (**(code **)(lVar3 + 0x125d0))(1,*(undefined8 *)(lVar3 + 0x125c8),param_1,param_2),
       iVar2 == -1)) {
      ErrorHandler::Exit((ErrorHandler *)&ErrHandler,0xff);
    }
    if ((*(code **)(lVar3 + 0x125e0) != (code *)0x0) &&
       (iVar2 = (**(code **)(lVar3 + 0x125e0))(param_1,param_2 & 0xffffffff), iVar2 == 0)) {
      ErrorHandler::Exit((ErrorHandler *)&ErrHandler,0xff);
    }
  }
  *(ulong *)(this + 0x30) = param_2;
  *(uchar **)(this + 0x38) = param_1;
  if (this[0x18] == (ComprDataIO)0x0) {
    if (this[0x49] == (ComprDataIO)0x0) {
      File::Write(*(File **)(this + 0x58),param_1,param_2);
      CVar1 = this[0x4a];
      *(ulong *)(this + 0x20b8) = *(long *)(this + 0x20b8) + param_2;
      goto joined_r0x001c3440;
    }
  }
  else if (param_2 <= *(ulong *)(this + 0x20)) {
    memcpy(*(void **)(this + 0x28),param_1,param_2);
    *(ulong *)(this + 0x20) = *(long *)(this + 0x20) - param_2;
    *(ulong *)(this + 0x28) = *(long *)(this + 0x28) + param_2;
  }
  CVar1 = this[0x4a];
  *(ulong *)(this + 0x20b8) = *(long *)(this + 0x20b8) + param_2;
joined_r0x001c3440:
  if (CVar1 != (ComprDataIO)0x0) {
    Wait();
    return;
  }
  DataHash::Update((DataHash *)(this + 0x3970),param_1,param_2);
  Wait();
  return;
}


