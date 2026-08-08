/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack11ExecuteCodeEP18VM_PreparedProgram
 * Address  : 001d00e0
 * Program  : drastic64
 */


/* Unpack::ExecuteCode(VM_PreparedProgram*) */

void __thiscall Unpack::ExecuteCode(Unpack *this,VM_PreparedProgram *param_1)

{
  RarVM *this_00;
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    return;
  }
  uVar1 = *(undefined8 *)(this + 0x4db0);
  *(uint *)(param_1 + 0x88) = (uint)uVar1;
  this_00 = (RarVM *)(this + 0xe8b0);
  RarVM::SetLowEndianValue(this_00,(uint *)(*(long *)(param_1 + 0x30) + 0x24),(uint)uVar1);
  RarVM::SetLowEndianValue
            (this_00,(uint *)(*(long *)(param_1 + 0x30) + 0x28),
             (uint)((ulong)*(undefined8 *)(this + 0x4db0) >> 0x20));
  RarVM::Execute(this_00,param_1);
  return;
}


