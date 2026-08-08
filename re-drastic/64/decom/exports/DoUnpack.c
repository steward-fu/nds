/*
 * Ghidra decompilation
 *
 * Function : DoUnpack
 * Address  : 001e50e0
 * Program  : drastic64
 */


/* Unpack::DoUnpack(int, bool) */

void __thiscall Unpack::DoUnpack(Unpack *this,int param_1,bool param_2)

{
  char cVar1;
  undefined extraout_w1;
  undefined extraout_w1_00;
  undefined uVar2;
  undefined extraout_w1_01;
  undefined extraout_w1_02;
  
  uVar2 = (undefined)param_1;
  if (param_1 != 0x14) {
    if (param_1 < 0x15) {
      if (param_1 != 0) {
        if (param_1 != 0xf) {
          return;
        }
        Unpack15(this,param_2);
        return;
      }
      uVar2 = SUB81(this,0);
      if ((1 < *(uint *)(this + 0x30)) && (this[0x4d98] == (Unpack)0x0)) {
        Unpack5MT(this,param_2);
        return;
      }
      this[0x4db8] = (Unpack)0x1;
      if (this[0x4da8] == (Unpack)0x0) {
        UnpInitData(this,param_2);
        cVar1 = UnpReadBuf();
        if (cVar1 == '\0') {
          return;
        }
        cVar1 = ReadBlockHeader(this,(BitInput *)(this + 8),(UnpackBlockHeader *)(this + 0xd8));
        if (cVar1 == '\0') {
          return;
        }
        uVar2 = extraout_w1;
        if (this[0xe9] != (Unpack)0x0) {
          if (((this[0x10] == (Unpack)0x0) && (*(int *)(this + 0xd0) + -0x18 <= *(int *)(this + 8)))
             && (cVar1 = UnpReadBuf(), cVar1 == '\0')) {
            return;
          }
          cVar1 = ReadTables((BitInput *)this,(UnpackBlockHeader *)(BitInput *)(this + 8),
                             (UnpackBlockTables *)(this + 0xec));
          uVar2 = extraout_w1_00;
          if (cVar1 == '\0') {
            return;
          }
        }
      }
      Unpack5(this,(bool)uVar2);
      return;
    }
    if (param_1 != 0x1a) {
      if (param_1 != 0x1d) {
        return;
      }
      Unpack29(this,param_2);
      return;
    }
  }
  if (this[0x4da8] == (Unpack)0x0) {
    UnpInitData(this,param_2);
    cVar1 = UnpReadBuf();
    if ((cVar1 == '\0') ||
       ((uVar2 = extraout_w1_01, !param_2 &&
        (cVar1 = ReadTables20(), uVar2 = extraout_w1_02, cVar1 == '\0')))) {
      return;
    }
    *(long *)(this + 0x4da0) = *(long *)(this + 0x4da0) + -1;
  }
  else {
    *(undefined8 *)(this + 0xc0) = *(undefined8 *)(this + 200);
  }
  Unpack20(this,(bool)uVar2);
  return;
}


