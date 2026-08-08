/*
 * Ghidra decompilation
 *
 * Function : FUN_001dd7ec
 * Address  : 001dd7ec
 * Program  : drastic64
 */


undefined8 FUN_001dd7ec(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 uVar9;
  void *pvVar10;
  
  uVar3 = *(ulong *)(param_1 + 0x88);
  if (0x1ffe < uVar3) {
    Unpack::UnpWriteBuf();
    uVar3 = *(ulong *)(param_1 + 0x88);
  }
  lVar6 = *(long *)(param_1 + 0xc0);
  bVar8 = false;
  if (*(long *)(param_1 + 200) != lVar6) {
    bVar8 = (*(long *)(param_1 + 200) - lVar6 & *(ulong *)(param_1 + 0xe980)) <=
            (ulong)*(uint *)((long)param_2 + 4);
  }
  *(uint *)((long)param_2 + 4) =
       *(uint *)((long)param_2 + 4) + (int)lVar6 & (uint)*(ulong *)(param_1 + 0xe980);
  *(bool *)((long)param_2 + 0x15) = bVar8;
  uVar7 = *param_2;
  uVar9 = param_2[1];
  uVar2 = uVar3 + 1;
  uVar5 = param_2[2];
  *(ulong *)(param_1 + 0x88) = uVar2;
  uVar1 = *(ulong *)(param_1 + 0x90);
  if (uVar1 < uVar2) {
    uVar3 = *(ulong *)(param_1 + 0x98);
    if ((uVar3 != 0 && uVar3 <= uVar2) && (uVar3 == 0 || uVar2 != uVar3)) {
      ErrorHandler::GeneralErrMsg(&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
      ErrorHandler::MemoryError();
      uVar2 = *(ulong *)(param_1 + 0x88);
      uVar1 = *(ulong *)(param_1 + 0x90);
    }
    uVar3 = uVar1 + 0x20 + (uVar1 >> 2);
    if (uVar3 < uVar2) {
      uVar3 = uVar2;
    }
    pvVar10 = realloc(*(void **)(param_1 + 0x80),uVar3 * 0x18);
    if (pvVar10 == (void *)0x0) {
      ErrorHandler::MemoryError();
    }
    *(void **)(param_1 + 0x80) = pvVar10;
    *(ulong *)(param_1 + 0x90) = uVar3;
    uVar3 = *(long *)(param_1 + 0x88) - 1;
  }
  else {
    pvVar10 = *(void **)(param_1 + 0x80);
  }
  puVar4 = (undefined8 *)((long)pvVar10 + uVar3 * 0x18);
  *puVar4 = uVar7;
  puVar4[1] = uVar9;
  puVar4[2] = uVar5;
  return 1;
}


