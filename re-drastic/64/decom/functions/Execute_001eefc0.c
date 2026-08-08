/*
 * Ghidra decompilation
 *
 * Function : Execute
 * Address  : 001eefc0
 * Program  : drastic64
 */


/* RarVM::Execute(VM_PreparedProgram*) */

void __thiscall RarVM::Execute(RarVM *this,VM_PreparedProgram *param_1)

{
  uint uVar1;
  char cVar2;
  size_t __n;
  long lVar3;
  void *__dest;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  
  uVar7 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(this + 0x28) = uVar7;
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x88);
  uVar8 = *(ulong *)(param_1 + 0x38);
  if (uVar8 < 0x2000) {
    if (uVar8 == 0) {
      __n = *(size_t *)(param_1 + 0x58);
      if (0x2000 < __n) {
        __n = 0x2000;
      }
      goto joined_r0x001ef144;
    }
    uVar10 = 0x2000 - uVar8;
  }
  else {
    uVar10 = 0;
    uVar8 = 0x2000;
  }
  memcpy((void *)(*(long *)(this + 0x18) + 0x3c000),*(void **)(param_1 + 0x30),uVar8);
  __n = *(ulong *)(param_1 + 0x58);
  if (uVar10 < *(ulong *)(param_1 + 0x58)) {
    __n = uVar10;
  }
joined_r0x001ef144:
  if (__n == 0) {
    puVar9 = *(undefined4 **)(param_1 + 0x20);
    *(undefined8 *)(this + 0x3c) = 0x40000;
  }
  else {
    memcpy((void *)(*(long *)(this + 0x18) + uVar8 + 0x3c000),*(void **)(param_1 + 0x50),__n);
    puVar9 = *(undefined4 **)(param_1 + 0x20);
    *(undefined8 *)(this + 0x3c) = 0x40000;
  }
  if (puVar9 == (undefined4 *)0x0) {
    uVar1 = *(uint *)(param_1 + 0x28);
    puVar9 = *(undefined4 **)param_1;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x28);
  }
  if ((0 < (int)uVar1) &&
     (cVar2 = ExecuteCode(this,(VM_PreparedCommand *)puVar9,uVar1), cVar2 == '\0')) {
    *puVar9 = 0x16;
  }
  lVar3 = *(long *)(this + 0x18);
  uVar1 = *(uint *)(lVar3 + 0x3c020) & 0x3ffff;
  uVar6 = *(uint *)(lVar3 + 0x3c01c) & 0x3ffff;
  lVar4 = lVar3 + (ulong)uVar1;
  if (0x3ffff < uVar1 + uVar6) {
    uVar6 = 0;
    lVar4 = lVar3;
  }
  *(long *)(param_1 + 0x90) = lVar4;
  *(uint *)(param_1 + 0x98) = uVar6;
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    free(*(void **)(param_1 + 0x30));
    lVar3 = *(long *)(this + 0x18);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  uVar1 = *(uint *)(lVar3 + 0x3c030);
  if (uVar1 < 0x1fc0) {
    if (uVar1 == 0) {
      return;
    }
    uVar8 = (ulong)(uVar1 + 0x40);
  }
  else {
    uVar8 = 0x2000;
  }
  *(ulong *)(param_1 + 0x38) = uVar8;
  if (*(ulong *)(param_1 + 0x48) == 0 || uVar8 <= *(ulong *)(param_1 + 0x48)) {
    uVar10 = 0x20;
    uVar5 = uVar8;
  }
  else {
    ErrorHandler::GeneralErrMsg(&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
    ErrorHandler::MemoryError();
    uVar5 = *(ulong *)(param_1 + 0x38);
    uVar10 = *(ulong *)(param_1 + 0x40) + 0x20 + (*(ulong *)(param_1 + 0x40) >> 2);
  }
  if (uVar10 < uVar5) {
    uVar10 = uVar5;
  }
  __dest = realloc(*(void **)(param_1 + 0x30),uVar10);
  if (__dest == (void *)0x0) {
    ErrorHandler::MemoryError();
  }
  lVar4 = *(long *)(this + 0x18);
  *(void **)(param_1 + 0x30) = __dest;
  *(ulong *)(param_1 + 0x40) = uVar10;
  memcpy(__dest,(void *)(lVar4 + 0x3c000),uVar8);
  return;
}


