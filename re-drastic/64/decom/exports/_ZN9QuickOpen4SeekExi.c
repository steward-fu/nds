/*
 * Ghidra decompilation
 *
 * Function : _ZN9QuickOpen4SeekExi
 * Address  : 001ecee0
 * Program  : drastic64
 */


/* QuickOpen::Seek(long long, int) */

QuickOpen __thiscall QuickOpen::Seek(QuickOpen *this,longlong param_1,int param_2)

{
  QuickOpen QVar1;
  undefined8 uVar2;
  
  QVar1 = this[0x1038];
  if (QVar1 != (QuickOpen)0x0) {
    if (param_2 == 0) {
      if (((ulong)param_1 < *(ulong *)(this + 0x1098)) &&
         ((ulong)param_1 < *(ulong *)(this + 0x1090))) {
        Load(this,*(ulonglong *)(this + 0x1040));
      }
      *(longlong *)(this + 0x1098) = param_1;
      this[0x10a0] = (QuickOpen)0x1;
      return QVar1;
    }
    if (param_2 != 1) {
      this[0x10a0] = (QuickOpen)0x1;
      if (param_2 == 2) {
        File::Seek(*(File **)this,param_1,2);
        uVar2 = File::Tell();
        *(undefined8 *)(this + 0x1098) = uVar2;
        this[0x10a0] = (QuickOpen)0x0;
      }
      return QVar1;
    }
    *(long *)(this + 0x1098) = *(long *)(this + 0x1098) + param_1;
    this[0x10a0] = (QuickOpen)0x1;
  }
  return QVar1;
}


