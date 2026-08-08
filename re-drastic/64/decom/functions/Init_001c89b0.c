/*
 * Ghidra decompilation
 *
 * Function : Init
 * Address  : 001c89b0
 * Program  : drastic64
 */


/* HashValue::Init(HASH_TYPE) */

void __thiscall HashValue::Init(HashValue *this,HASH_TYPE param_1)

{
  undefined8 uVar1;
  
  *(HASH_TYPE *)this = param_1;
  uVar1 = DAT_00267e48;
  if (param_1 - 1 < 2) {
    *(undefined4 *)(this + 4) = 0;
    return;
  }
  if (param_1 != 3) {
    return;
  }
  *(undefined8 *)(this + 4) = Init(HASH_TYPE)::EmptyHash;
  *(undefined8 *)(this + 0xc) = uVar1;
  uVar1 = DAT_00267e58;
  *(undefined8 *)(this + 0x14) = DAT_00267e50;
  *(undefined8 *)(this + 0x1c) = uVar1;
  return;
}


