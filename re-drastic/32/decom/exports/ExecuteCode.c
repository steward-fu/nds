/*
 * Ghidra decompilation
 *
 * Function : ExecuteCode
 * Address  : 0810bb6c
 * Program  : drastic
 */


/* DWARF original prototype: bool ExecuteCode(RarVM * this, VM_PreparedCommand * PreparedCode, uint
   CodeSize)
   Local variable Cmd:VM_PreparedCommand *[r1:4] conflicts with parameter, skipped. */

bool __thiscall RarVM::ExecuteCode(RarVM *this,VM_PreparedCommand *PreparedCode,uint CodeSize)

{
  byte *pbVar1;
  uint uVar2;
  VM_PreparedCommand *pVVar3;
  byte *B;
  uint uVar4;
  int iVar5;
  
  iVar5 = 24999999;
  pVVar3 = PreparedCode;
  do {
    if (pVVar3->OpCode == VM_RET) {
      uVar4 = this->R[7];
      if (0x3ffff < uVar4) {
        return true;
      }
      pbVar1 = this->Mem;
      if ((CARRY4((uint)pbVar1,uVar4)) || (pbVar1 + 0x40000 <= pbVar1 + uVar4)) {
        uVar2 = *(uint *)(pbVar1 + uVar4);
      }
      else {
        uVar2 = *(uint *)(pbVar1 + uVar4);
      }
      if (CodeSize <= uVar2) {
        return true;
      }
      if (iVar5 < 1) {
        return false;
      }
      pVVar3 = PreparedCode + uVar2;
      this->R[7] = uVar4 + 4;
    }
    else {
      if (pVVar3->OpCode == VM_STANDARD) {
        ExecuteStandardFilter(this,(pVVar3->Op1).Data);
        return true;
      }
      pVVar3 = pVVar3 + 1;
    }
    iVar5 = iVar5 + -1;
  } while( true );
}


