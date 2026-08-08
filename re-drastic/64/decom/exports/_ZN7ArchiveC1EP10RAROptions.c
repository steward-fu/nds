/*
 * Ghidra decompilation
 *
 * Function : _ZN7ArchiveC1EP10RAROptions
 * Address  : 001b9ba0
 * Program  : drastic64
 */


/* Archive::Archive(RAROptions*) */

void __thiscall Archive::Archive(Archive *this,RAROptions *param_1)

{
  File::File((File *)this);
  *(undefined ***)this = &PTR__Archive_0025e490;
                    /* try { // try from 001b9bdc to 001b9bdf has its CatchHandler @ 001b9d94 */
  CryptData::CryptData((CryptData *)(this + 0x2024));
                    /* try { // try from 001b9bec to 001b9bef has its CatchHandler @ 001b9e34 */
  ComprDataIO::ComprDataIO((ComprDataIO *)(this + 0x3030));
                    /* try { // try from 001b9bf8 to 001b9c0b has its CatchHandler @ 001b9e2c */
  RarTime::RarTime((RarTime *)(this + 0x7618));
  QuickOpen::QuickOpen((QuickOpen *)(this + 0x7630));
  *(undefined8 *)(this + 0xa790) = 0;
  *(undefined8 *)(this + 0xa798) = 0;
  *(undefined8 *)(this + 0xa7a0) = 0;
  *(undefined8 *)(this + 0xa7a8) = 0;
                    /* try { // try from 001b9c38 to 001b9c53 has its CatchHandler @ 001b9e14 */
  RarTime::RarTime((RarTime *)(this + 0xa7b0));
  RarTime::RarTime((RarTime *)(this + 0xa7b8));
  RarTime::RarTime((RarTime *)(this + 0xa7c0));
  *(undefined8 *)(this + 0xeae8) = 0;
  *(undefined8 *)(this + 0xeaf0) = 0;
  *(undefined8 *)(this + 0xeaf8) = 0;
  *(undefined8 *)(this + 0xeb00) = 0;
                    /* try { // try from 001b9c80 to 001b9c9b has its CatchHandler @ 001b9dfc */
  RarTime::RarTime((RarTime *)(this + 0xeb08));
  RarTime::RarTime((RarTime *)(this + 0xeb10));
  RarTime::RarTime((RarTime *)(this + 0xeb18));
  *(undefined8 *)(this + 0x7600) = 0;
  this[0x75f8] = (Archive)(param_1 == (RAROptions *)0x0);
  if (param_1 == (RAROptions *)0x0) {
                    /* try { // try from 001b9cbc to 001b9cbf has its CatchHandler @ 001b9df4 */
    param_1 = (RAROptions *)operator_new(0x125e8);
                    /* try { // try from 001b9cc4 to 001b9cc7 has its CatchHandler @ 001b9da8 */
    RAROptions::RAROptions(param_1);
  }
  this[0x1d] = *(Archive *)(param_1 + 0xc2b5);
  *(RAROptions **)(this + 0x7600) = param_1;
  *(undefined8 *)(this + 0x7618) = 0;
  *(undefined8 *)(this + 0x11218) = 0;
  *(undefined2 *)(this + 0x11220) = 0;
  *(undefined4 *)(this + 0x7620) = 0;
  *(undefined8 *)(this + 0x11200) = 0;
  *(undefined8 *)(this + 0x111f8) = 0;
  *(undefined8 *)(this + 0x11208) = 2;
  *(undefined4 *)(this + 0x11210) = 0;
  this[0x11214] = (Archive)0x0;
  *(undefined8 *)(this + 0x7608) = 0xffffffffffffffff;
  *(undefined4 *)(this + 0x7610) = 0xffffffff;
  *(undefined8 *)(this + 0x86f8) = 0;
  *(undefined8 *)(this + 0x8700) = 0;
  *(undefined8 *)(this + 0x8708) = 0;
  *(undefined8 *)(this + 0x8710) = 0;
  *(undefined8 *)(this + 0x8718) = 0;
  *(undefined8 *)(this + 0x8720) = 0;
  *(undefined8 *)(this + 0x8728) = 0;
  *(undefined8 *)(this + 0x8730) = 0;
  *(undefined8 *)(this + 0x8738) = 0;
  *(undefined8 *)(this + 0x8740) = 0;
  *(undefined8 *)(this + 0x8748) = 0;
  *(undefined8 *)(this + 0x8750) = 0;
  *(undefined8 *)(this + 0x8758) = 0;
  *(undefined8 *)(this + 0x8760) = 0;
  *(undefined4 *)(this + 0x8768) = 0;
  *(undefined8 *)(this + 0xca88) = 0;
  *(undefined8 *)(this + 0xca90) = 0;
  *(undefined8 *)(this + 0xca98) = 0;
  *(undefined8 *)(this + 0xcaa0) = 0;
  *(undefined4 *)(this + 0x11234) = 0;
  *(undefined8 *)(this + 0x11238) = 0;
  *(undefined8 *)(this + 0x11248) = 0;
  *(undefined8 *)(this + 0x11240) = 0;
  *(undefined4 *)(this + 0x11254) = 0;
  this[0x11232] = (Archive)0x0;
  this[0x11250] = (Archive)0x0;
  this[0x7628] = (Archive)0x0;
  return;
}


