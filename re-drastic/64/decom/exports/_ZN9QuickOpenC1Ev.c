/*
 * Ghidra decompilation
 *
 * Function : _ZN9QuickOpenC1Ev
 * Address  : 001ec900
 * Program  : drastic64
 */


/* QuickOpen::QuickOpen() */

void __thiscall QuickOpen::QuickOpen(QuickOpen *this)

{
  void *pvVar1;
  
  CryptData::CryptData((CryptData *)(this + 0x30));
  *(undefined8 *)(this + 0x1070) = 0;
  *(undefined8 *)(this + 0x1080) = 0;
  *(undefined8 *)(this + 0x1078) = 0;
  *(undefined8 *)this = 0;
  this[8] = (QuickOpen)0x0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x1088) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
                    /* try { // try from 001ec948 to 001ec94b has its CatchHandler @ 001ec964 */
  pvVar1 = operator_new__(0x10000);
  *(void **)(this + 0x20) = pvVar1;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x1038] = (QuickOpen)0x0;
  return;
}


