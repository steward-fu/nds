/*
 * Ghidra decompilation
 *
 * Function : _ZN9QuickOpen7ReadRawER7RawRead
 * Address  : 001ecfc0
 * Program  : drastic64
 */


/* QuickOpen::ReadRaw(RawRead&) */

bool __thiscall QuickOpen::ReadRaw(QuickOpen *this,RawRead *param_1)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)(this + 0x1068);
  uVar5 = *(ulong *)(this + 0x1060);
  if (0x10000U - lVar6 < 0x100) {
    memcpy(*(void **)(this + 0x20),(void *)((long)*(void **)(this + 0x20) + lVar6),uVar5 - lVar6);
    *(ulong *)(this + 0x1060) = uVar5 - lVar6;
    *(undefined8 *)(this + 0x1068) = 0;
    ReadBuffer();
    uVar5 = *(ulong *)(this + 0x1060);
    lVar6 = *(long *)(this + 0x1068);
  }
  if (lVar6 + 7U <= uVar5) {
    RawRead::Read(param_1,(uchar *)(*(long *)(this + 0x20) + lVar6),7);
    *(long *)(this + 0x1068) = *(long *)(this + 0x1068) + 7;
    iVar2 = RawRead::Get4();
    iVar3 = RawRead::GetVSize(param_1,4);
    lVar6 = RawRead::GetV();
    iVar4 = iVar3 + -3 + (int)lVar6;
    if (((lVar6 != 0 && iVar3 != 0) && iVar4 < 0) != (lVar6 == 0 || iVar3 == 0)) {
      this[0x1038] = (QuickOpen)0x0;
      return false;
    }
    lVar6 = *(long *)(this + 0x1068);
    uVar5 = *(long *)(this + 0x1060) - lVar6;
    if (iVar4 == 0) {
LAB_001ed108:
      iVar4 = RawRead::GetCRC50();
      return iVar2 == iVar4;
    }
    while( true ) {
      uVar1 = (long)iVar4;
      if (uVar5 < (ulong)(long)iVar4) {
        uVar1 = uVar5;
      }
      iVar4 = iVar4 - (int)uVar1;
      RawRead::Read(param_1,(uchar *)(*(long *)(this + 0x20) + lVar6),uVar1);
      if (iVar4 < 1) {
        *(ulong *)(this + 0x1068) = *(long *)(this + 0x1068) + uVar1;
        goto LAB_001ed108;
      }
      *(undefined8 *)(this + 0x1060) = 0;
      *(undefined8 *)(this + 0x1068) = 0;
      iVar3 = ReadBuffer();
      if (iVar3 == 0) break;
      lVar6 = *(long *)(this + 0x1068);
    }
  }
  return false;
}


