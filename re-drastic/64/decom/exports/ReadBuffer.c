/*
 * Ghidra decompilation
 *
 * Function : ReadBuffer
 * Address  : 001ecba0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* QuickOpen::ReadBuffer() */

uint QuickOpen::ReadBuffer(void)

{
  ulong uVar1;
  uint uVar2;
  long **in_x0;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar6 = *in_x0;
  uVar3 = (**(code **)(*plVar6 + 0x20))(plVar6);
                    /* try { // try from 001ecbe0 to 001ecbe3 has its CatchHandler @ 001eccb8 */
  File::Seek((File *)*in_x0,(longlong)((long)in_x0[0x209] + (long)in_x0[0x20b]),0);
  uVar5 = 0x10000 - (long)in_x0[0x20c];
  uVar1 = (long)in_x0[0x20a] - (long)in_x0[0x20b];
  if (uVar5 < (ulong)((long)in_x0[0x20a] - (long)in_x0[0x20b])) {
    uVar1 = uVar5;
  }
  uVar5 = uVar1 & 0xfffffffffffffff0;
  if (*(File *)((long)*in_x0 + 0xeb63) == (File)0x0) {
    uVar5 = uVar1;
  }
  if (uVar5 != 0) {
                    /* try { // try from 001ecc58 to 001eccaf has its CatchHandler @ 001eccb8 */
    uVar2 = File::Read((File *)*in_x0,(File *)((long)in_x0[4] + (long)in_x0[0x20c]),uVar5);
    if (0 < (int)uVar2) {
      plVar4 = in_x0[0x20c];
      if (*(File *)((long)*in_x0 + 0xeb63) != (File)0x0) {
        CryptData::DecryptBlock
                  ((CryptData *)(in_x0 + 6),(uchar *)((long)in_x0[4] + (long)plVar4),
                   (long)(int)(uVar2 & 0xfffffff0));
        plVar4 = in_x0[0x20c];
      }
      in_x0[0x20b] = (long *)((long)in_x0[0x20b] + (long)(int)uVar2);
      in_x0[0x20c] = (long *)((long)(int)uVar2 + (long)plVar4);
      goto LAB_001ecc24;
    }
  }
  uVar2 = 0;
LAB_001ecc24:
  (**(code **)(*plVar6 + 0x18))(plVar6,uVar3,0);
  return uVar2;
}


