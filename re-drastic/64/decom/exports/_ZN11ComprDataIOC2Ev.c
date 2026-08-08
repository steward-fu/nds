/*
 * Ghidra decompilation
 *
 * Function : _ZN11ComprDataIOC2Ev
 * Address  : 001c2f80
 * Program  : drastic64
 */


/* ComprDataIO::ComprDataIO() */

void __thiscall ComprDataIO::ComprDataIO(ComprDataIO *this)

{
  CryptData::CryptData((CryptData *)(this + 0x78));
                    /* try { // try from 001c2fb0 to 001c2fb3 has its CatchHandler @ 001c3044 */
  CryptData::CryptData((CryptData *)(this + 0x1080));
                    /* try { // try from 001c2fc0 to 001c2fc3 has its CatchHandler @ 001c3080 */
  DataHash::DataHash((DataHash *)(this + 0x20d0));
                    /* try { // try from 001c2fd0 to 001c2fd3 has its CatchHandler @ 001c3078 */
  DataHash::DataHash((DataHash *)(this + 0x2d20));
                    /* try { // try from 001c2fdc to 001c2fdf has its CatchHandler @ 001c304c */
  DataHash::DataHash((DataHash *)(this + 0x3970));
  *this = (ComprDataIO)0x0;
  this[0x18] = (ComprDataIO)0x0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined2 *)(this + 0x48) = 1;
  this[0x4a] = (ComprDataIO)0x0;
  *(undefined2 *)(this + 0x45c0) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x2088) = 0xffffffff;
  *(undefined2 *)(this + 0x2090) = 0;
  this[0x2092] = (ComprDataIO)0x0;
  *(undefined8 *)(this + 0x20a8) = 0;
  *(undefined8 *)(this + 0x20a0) = 0;
  *(undefined8 *)(this + 0x20b8) = 0;
  *(undefined8 *)(this + 0x20b0) = 0;
  *(undefined8 *)(this + 0x20c8) = 0;
  *(undefined8 *)(this + 0x20c0) = 0;
  return;
}


