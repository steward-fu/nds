/*
 * Ghidra decompilation
 *
 * Function : ExecuteCode
 * Address  : 080f1458
 * Program  : drastic
 */


/* DWARF original prototype: void ExecuteCode(Unpack * this, VM_PreparedProgram * Prg) */

void __thiscall Unpack::ExecuteCode(Unpack *this,VM_PreparedProgram *Prg)

{
  uchar *puVar1;
  uint Value;
  RarVM *this_00;
  
  if ((Prg->GlobalData).BufSize == 0) {
    return;
  }
  Value = *(uint *)&this->WrittenFileSize;
  puVar1 = (Prg->GlobalData).Buffer;
  this_00 = &this->VM;
  Prg->InitR[6] = Value;
  RarVM::SetLowEndianValue(this_00,(uint *)(puVar1 + 0x24),Value);
  RarVM::SetLowEndianValue
            (this_00,(uint *)((Prg->GlobalData).Buffer + 0x28),
             *(uint *)((int)&this->WrittenFileSize + 4));
  RarVM::Execute(this_00,Prg);
  return;
}


