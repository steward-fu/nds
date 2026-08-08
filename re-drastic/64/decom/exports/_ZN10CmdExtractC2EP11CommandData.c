/*
 * Ghidra decompilation
 *
 * Function : _ZN10CmdExtractC2EP11CommandData
 * Address  : 001c91b0
 * Program  : drastic64
 */


/* CmdExtract::CmdExtract(CommandData*) */

void __thiscall CmdExtract::CmdExtract(CmdExtract *this,CommandData *param_1)

{
  uint uVar1;
  Unpack *this_00;
  
  RarTime::RarTime((RarTime *)this);
  ComprDataIO::ComprDataIO((ComprDataIO *)(this + 8));
                    /* try { // try from 001c91e8 to 001c91eb has its CatchHandler @ 001c9250 */
  SecPassword::SecPassword((SecPassword *)(this + 0x65f4));
  *(undefined4 *)(this + 0x45f4) = 0;
  *(undefined4 *)(this + 0x67fc) = 0;
  *(undefined8 *)(this + 0x45d8) = 0;
                    /* try { // try from 001c9208 to 001c9213 has its CatchHandler @ 001c92b0 */
  SecPassword::Set((SecPassword *)(this + 0x65f4),L"");
  this_00 = (Unpack *)operator_new(0xe988);
                    /* try { // try from 001c921c to 001c921f has its CatchHandler @ 001c9258 */
  Unpack::Unpack(this_00,(ComprDataIO *)(this + 8));
  *(Unpack **)(this + 0x45d0) = this_00;
  uVar1 = *(uint *)(param_1 + 67000);
  if (8 < uVar1) {
    uVar1 = 8;
  }
  *(uint *)(this_00 + 0x30) = uVar1;
  return;
}


