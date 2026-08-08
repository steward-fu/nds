/*
 * Ghidra decompilation
 *
 * Function : Execute
 * Address  : 0810bc2c
 * Program  : drastic
 */


/* DWARF original prototype: void Execute(RarVM * this, VM_PreparedProgram * Prg) */

void __thiscall RarVM::Execute(RarVM *this,VM_PreparedProgram *Prg)

{
  bool bVar1;
  uint uVar2;
  uchar *puVar3;
  uchar *NewBuffer;
  uint uVar4;
  uint NewBlockPos;
  size_t StaticSize;
  uint NewBlockSize;
  byte *pbVar5;
  uint uVar6;
  size_t GlobalSize;
  VM_PreparedCommand *PreparedCode;
  uint uVar7;
  size_t NewSize;
  uint uVar8;
  uint uVar9;
  
  uVar2 = Prg->InitR[1];
  uVar4 = Prg->InitR[2];
  uVar9 = Prg->InitR[3];
  this->R[0] = Prg->InitR[0];
  this->R[1] = uVar2;
  this->R[2] = uVar4;
  this->R[3] = uVar9;
  uVar2 = Prg->InitR[5];
  uVar4 = Prg->InitR[6];
  this->R[4] = Prg->InitR[4];
  this->R[5] = uVar2;
  this->R[6] = uVar4;
  uVar6 = (Prg->GlobalData).BufSize;
  if (uVar6 < 0x2000) {
    if (uVar6 == 0) {
      uVar7 = 0x2000;
      goto LAB_0810bc9c;
    }
    uVar7 = 0x2000 - uVar6;
  }
  else {
    uVar7 = 0;
    uVar6 = 0x2000;
  }
  memcpy(this->Mem + 0x3c000,(Prg->GlobalData).Buffer,uVar6);
LAB_0810bc9c:
  StaticSize = (Prg->StaticData).BufSize;
  if (uVar7 <= StaticSize) {
    StaticSize = uVar7;
  }
  if (StaticSize != 0) {
    memcpy(this->Mem + uVar6 + 0x3c000,(Prg->StaticData).Buffer,StaticSize);
  }
  PreparedCode = Prg->AltCmd;
  this->R[7] = 0x40000;
  this->Flags = 0;
  if (PreparedCode == (VM_PreparedCommand *)0x0) {
    PreparedCode = (Prg->Cmd).Buffer;
  }
  if ((0 < Prg->CmdCount) && (bVar1 = ExecuteCode(this,PreparedCode,Prg->CmdCount), !bVar1)) {
    PreparedCode->OpCode = VM_RET;
  }
  pbVar5 = this->Mem;
  uVar4 = *(uint *)(pbVar5 + 0x3c020) & 0x3ffff;
  puVar3 = (Prg->GlobalData).Buffer;
  uVar2 = *(uint *)(pbVar5 + 0x3c01c) & 0x3ffff;
  if (0x3ffff < uVar4 + (*(uint *)(pbVar5 + 0x3c01c) & 0x3ffff)) {
    uVar4 = 0;
    uVar2 = uVar4;
  }
  Prg->FilteredData = pbVar5 + uVar4;
  Prg->FilteredDataSize = uVar2;
  if (puVar3 != (uchar *)0x0) {
    free(puVar3);
    pbVar5 = this->Mem;
    (Prg->GlobalData).Buffer = (uchar *)0x0;
  }
  (Prg->GlobalData).BufSize = 0;
  (Prg->GlobalData).AllocSize = 0;
  uVar6 = *(uint *)(pbVar5 + 0x3c030);
  if (uVar6 < 0x1fc0) {
    if (uVar6 == 0) {
      return;
    }
    uVar6 = uVar6 + 0x40;
    (Prg->GlobalData).BufSize = uVar6;
  }
  else {
    uVar6 = 0x2000;
    (Prg->GlobalData).BufSize = 0x2000;
  }
  uVar7 = (Prg->GlobalData).MaxSize;
  if (uVar7 == 0 || uVar6 <= uVar7) {
    NewSize = 0x20;
    uVar7 = uVar6;
  }
  else {
    ErrorHandler::GeneralErrMsg(&ErrHandler,(wchar *)L"Maximum allowed array size (%u) is exceeded")
    ;
    ErrorHandler::MemoryError(&ErrHandler);
    uVar7 = (Prg->GlobalData).BufSize;
    uVar8 = (Prg->GlobalData).AllocSize;
    NewSize = uVar8 + 0x20 + (uVar8 >> 2);
  }
  if (NewSize < uVar7) {
    NewSize = uVar7;
  }
  puVar3 = (uchar *)realloc((Prg->GlobalData).Buffer,NewSize);
  if (puVar3 == (uchar *)0x0) {
    ErrorHandler::MemoryError(&ErrHandler);
  }
  pbVar5 = this->Mem;
  (Prg->GlobalData).Buffer = puVar3;
  (Prg->GlobalData).AllocSize = NewSize;
  memcpy(puVar3,pbVar5 + 0x3c000,uVar6);
  return;
}


