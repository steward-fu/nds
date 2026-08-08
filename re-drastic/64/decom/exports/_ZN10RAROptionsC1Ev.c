/*
 * Ghidra decompilation
 *
 * Function : _ZN10RAROptionsC1Ev
 * Address  : 001c37c0
 * Program  : drastic64
 */


/* RAROptions::RAROptions() */

void __thiscall RAROptions::RAROptions(RAROptions *this)

{
  undefined4 uVar1;
  
  SecPassword::SecPassword((SecPassword *)(this + 0xa02c));
  *(undefined8 *)(this + 0xc278) = 0;
  *(undefined8 *)(this + 0xc280) = 0;
  *(undefined8 *)(this + 0xc288) = 0;
  *(undefined8 *)(this + 0xc290) = 0;
                    /* try { // try from 001c3814 to 001c3a5b has its CatchHandler @ 001c3a80 */
  RarTime::RarTime((RarTime *)(this + 0xc4c0));
  RarTime::RarTime((RarTime *)(this + 0xc4c8));
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x10) = 0;
  memset(this + 0x18,0,0x2000);
  memset(this + 0x2018,0,0x2000);
  *(undefined4 *)(this + 0x4018) = 0;
  this[0x401c] = (RAROptions)0x0;
  memset(this + 0x4020,0,0x2000);
  memset(this + 0x6020,0,0x2000);
  *(undefined8 *)(this + 0x8020) = 0;
  *(undefined4 *)(this + 0x8028) = 0;
  memset(this + 0x802c,0,0x2000);
  SecPassword::Clean();
  this[0xa230] = (RAROptions)0x0;
  memset(this + 0xa234,0,0x2000);
  *(undefined4 *)(this + 0xc234) = 0;
  this[0xc238] = (RAROptions)0x0;
  *(undefined4 *)(this + 0xc23c) = 0;
  *(undefined8 *)(this + 0xc240) = 0;
  *(undefined8 *)(this + 0xc248) = 0;
  *(undefined2 *)(this + 0xc250) = 0;
  this[0xc252] = (RAROptions)0x0;
  *(undefined4 *)(this + 0xc254) = 0;
  *(undefined8 *)(this + 0xc258) = 0;
  this[0xc260] = (RAROptions)0x0;
  *(undefined8 *)(this + 0xc264) = 0;
  *(undefined8 *)(this + 0xc270) = 0;
  *(undefined8 *)(this + 0xc278) = 0;
  *(undefined8 *)(this + 0xc280) = 0;
  *(undefined8 *)(this + 0xc288) = 0;
  *(undefined8 *)(this + 0xc290) = 0;
  *(undefined4 *)(this + 0xc298) = 0;
  *(undefined2 *)(this + 0xc29c) = 0;
  *(undefined8 *)(this + 0xc2a0) = 0;
  *(undefined2 *)(this + 0xc2a8) = 0;
  this[0xc2aa] = (RAROptions)0x0;
  *(undefined4 *)(this + 0xc2ac) = 0;
  *(undefined8 *)(this + 0xc2b0) = 0;
  memset(this + 0xc2b8,0,0x200);
  *(undefined4 *)(this + 0xc4b8) = 0;
  this[0xc4bc] = (RAROptions)0x0;
  RarTime::operator=((RarTime *)(this + 0xc4c0),0);
  RarTime::operator=((RarTime *)(this + 0xc4c8),0);
  *(undefined8 *)(this + 0xc4e4) = 0;
  *(undefined8 *)(this + 0xc4ec) = 0;
  *(undefined8 *)(this + 0xc4f4) = 0;
  *(undefined8 *)(this + 0xc4fc) = 0;
  *(undefined8 *)(this + 0xc504) = 0;
  *(undefined8 *)(this + 0xc50c) = 0;
  *(undefined8 *)(this + 0xc514) = 0;
  *(undefined8 *)(this + 0xc51c) = 0;
  *(undefined8 *)(this + 0xc524) = 0;
  *(undefined8 *)(this + 0xc52c) = 0;
  *(undefined8 *)(this + 0xc534) = 0;
  *(undefined8 *)(this + 0xc53c) = 0;
  *(undefined8 *)(this + 0xc544) = 0;
  *(undefined8 *)(this + 0xc54c) = 0;
  *(undefined8 *)(this + 0xc554) = 0;
  *(undefined8 *)(this + 0xc55c) = 0;
  *(undefined8 *)(this + 0xc564) = 0;
  *(undefined8 *)(this + 0xc56c) = 0;
  *(undefined8 *)(this + 0xc574) = 0;
  *(undefined8 *)(this + 0xc57c) = 0;
  *(undefined8 *)(this + 0xc584) = 0;
  *(undefined8 *)(this + 0xc58c) = 0;
  *(undefined8 *)(this + 0xc594) = 0;
  *(undefined8 *)(this + 0xc59c) = 0;
  memset(this + 0xc5a4,0,0x2000);
  *(undefined4 *)(this + 0xe5a4) = 0;
  *(undefined2 *)(this + 0xe5a8) = 0;
  *(undefined8 *)(this + 0xe5b0) = 0;
  memset(this + 0xe5b8,0,0x2000);
  *(undefined4 *)(this + 67000) = 0;
  memset(this + 0x105bc,0,0x2000);
  *(undefined8 *)(this + 0x125bc) = 0;
  *(undefined8 *)(this + 0x125d0) = 0;
  *(undefined8 *)(this + 0x125d8) = 0;
  *(undefined8 *)(this + 0x125c8) = 0;
  *(undefined8 *)(this + 0x125e0) = 0;
  *(undefined8 *)(this + 0x10) = 0x2000000;
  *(undefined4 *)(this + 0xc234) = 0;
  *(undefined4 *)(this + 0xc2a4) = 0;
  this[0xc4b9] = (RAROptions)0x1;
  *(undefined4 *)(this + 0xe5ac) = 4;
  *(undefined8 *)(this + 0xc4d8) = 0x7fffffff7fffffff;
  *(undefined8 *)(this + 0xc4d0) = 0x7fffffff7fffffff;
  *(undefined4 *)(this + 0xc23c) = 0;
  *(undefined2 *)(this + 0xc4e0) = 0;
  this[0xc4e2] = (RAROptions)0x0;
  *(undefined8 *)(this + 0xc240) = 0x200000003;
  uVar1 = GetNumberOfThreads();
  *(undefined4 *)(this + 67000) = uVar1;
  *(undefined4 *)(this + 0x4018) = 1;
  return;
}


