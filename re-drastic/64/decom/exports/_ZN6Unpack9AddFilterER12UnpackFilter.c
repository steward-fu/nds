/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack9AddFilterER12UnpackFilter
 * Address  : 001dd7f0
 * Program  : drastic64
 */


/* Unpack::AddFilter(UnpackFilter&) */

undefined8 __thiscall Unpack::AddFilter(Unpack *this,UnpackFilter *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  UnpackFilter UVar8;
  undefined8 uVar9;
  void *pvVar10;
  
  uVar3 = *(ulong *)(this + 0x88);
  if (0x1ffe < uVar3) {
    UnpWriteBuf();
    uVar3 = *(ulong *)(this + 0x88);
  }
  lVar6 = *(long *)(this + 0xc0);
  UVar8 = (UnpackFilter)0x0;
  if (*(long *)(this + 200) != lVar6) {
    UVar8 = (UnpackFilter)
            ((*(long *)(this + 200) - lVar6 & *(ulong *)(this + 0xe980)) <=
            (ulong)*(uint *)(param_1 + 4));
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) + (int)lVar6 & (uint)*(ulong *)(this + 0xe980);
  param_1[0x15] = UVar8;
  uVar7 = *(undefined8 *)param_1;
  uVar9 = *(undefined8 *)(param_1 + 8);
  uVar2 = uVar3 + 1;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  *(ulong *)(this + 0x88) = uVar2;
  uVar1 = *(ulong *)(this + 0x90);
  if (uVar1 < uVar2) {
    uVar3 = *(ulong *)(this + 0x98);
    if ((uVar3 != 0 && uVar3 <= uVar2) && (uVar3 == 0 || uVar2 != uVar3)) {
      ErrorHandler::GeneralErrMsg(&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
      ErrorHandler::MemoryError();
      uVar2 = *(ulong *)(this + 0x88);
      uVar1 = *(ulong *)(this + 0x90);
    }
    uVar3 = uVar1 + 0x20 + (uVar1 >> 2);
    if (uVar3 < uVar2) {
      uVar3 = uVar2;
    }
    pvVar10 = realloc(*(void **)(this + 0x80),uVar3 * 0x18);
    if (pvVar10 == (void *)0x0) {
      ErrorHandler::MemoryError();
    }
    *(void **)(this + 0x80) = pvVar10;
    *(ulong *)(this + 0x90) = uVar3;
    uVar3 = *(long *)(this + 0x88) - 1;
  }
  else {
    pvVar10 = *(void **)(this + 0x80);
  }
  puVar4 = (undefined8 *)((long)pvVar10 + uVar3 * 0x18);
  *puVar4 = uVar7;
  puVar4[1] = uVar9;
  puVar4[2] = uVar5;
  return 1;
}


