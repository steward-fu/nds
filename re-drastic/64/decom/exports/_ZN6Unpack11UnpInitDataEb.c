/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack11UnpInitDataEb
 * Address  : 001e1b60
 * Program  : drastic64
 */


/* Unpack::UnpInitData(bool) */

void __thiscall Unpack::UnpInitData(Unpack *this,bool param_1)

{
  ulong uVar1;
  
  if (param_1) {
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0xd0) = 0;
    *(undefined8 *)(this + 0xd8) = 0;
    *(undefined8 *)(this + 0xe0) = 0;
    *(undefined8 *)(this + 0x4db0) = 0;
    *(undefined4 *)(this + 0xe8) = 0;
    *(undefined4 *)(this + 0xd8) = 0xffffffff;
    return;
  }
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  memset(this + 0xec,0,0x4a9c);
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  uVar1 = *(ulong *)(this + 0xe978);
  if (0x400000 < uVar1) {
    uVar1 = 0x400000;
  }
  *(ulong *)(this + 0x4b88) = uVar1 & *(ulong *)(this + 0xe980);
  if (*(void **)(this + 0x80) != (void *)0x0) {
    free(*(void **)(this + 0x80));
    *(undefined8 *)(this + 0x80) = 0;
  }
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0x4db0) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd8) = 0xffffffff;
  *(undefined8 *)(this + 0x98b0) = 0;
  *(undefined8 *)(this + 0x98a8) = 0x100000000;
  memset(this + 0x98b8,0,0x170);
  memset(this + 0x94a4,0,0x404);
  memset(this + 0x58f4,0,0x3bb0);
  this[0xe8a8] = (Unpack)0x0;
  memset(this + 0xe6f4,0,0x1ae);
  *(undefined4 *)(this + 0xe6f0) = 2;
  *(undefined4 *)(this + 0xe8a4) = 0;
  InitFilters30();
  return;
}


