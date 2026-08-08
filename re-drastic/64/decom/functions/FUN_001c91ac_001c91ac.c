/*
 * Ghidra decompilation
 *
 * Function : FUN_001c91ac
 * Address  : 001c91ac
 * Program  : drastic64
 */


void FUN_001c91ac(RarTime *param_1,long param_2)

{
  uint uVar1;
  Unpack *this;
  
  RarTime::RarTime(param_1);
  ComprDataIO::ComprDataIO((ComprDataIO *)(param_1 + 8));
  SecPassword::SecPassword((SecPassword *)(param_1 + 0x65f4));
  *(undefined4 *)(param_1 + 0x45f4) = 0;
  *(undefined4 *)(param_1 + 0x67fc) = 0;
  *(undefined8 *)(param_1 + 0x45d8) = 0;
  SecPassword::Set((SecPassword *)(param_1 + 0x65f4),L"");
  this = (Unpack *)operator_new(0xe988);
  Unpack::Unpack(this,(ComprDataIO *)(param_1 + 8));
  *(Unpack **)(param_1 + 0x45d0) = this;
  uVar1 = *(uint *)(param_2 + 67000);
  if (8 < uVar1) {
    uVar1 = 8;
  }
  *(uint *)(this + 0x30) = uVar1;
  return;
}


