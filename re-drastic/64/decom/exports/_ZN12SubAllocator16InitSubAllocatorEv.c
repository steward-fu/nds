/*
 * Ghidra decompilation
 *
 * Function : _ZN12SubAllocator16InitSubAllocatorEv
 * Address  : 001cc140
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SubAllocator::InitSubAllocator() */

void SubAllocator::InitSubAllocator(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long *in_x0;
  long lVar4;
  int iVar5;
  long lVar6;
  
  memset(in_x0 + 0x19,0,0x130);
  iVar3 = (int)(*in_x0 / 0x60);
  lVar6 = in_x0[0x16];
  uVar2 = (int)*in_x0 + iVar3 * -0x54;
  lVar1 = lVar6 + (ulong)((uVar2 / 0xc) * 0x14 + 0x14);
  lVar4 = 0;
  iVar5 = 0;
  in_x0[2] = 0x2824201c1815120f;
  in_x0[3] = 0x4844403c3834302c;
  in_x0[4] = 0x6864605c5854504c;
  *(undefined4 *)(in_x0 + 5) = 0x7874706c;
  *(undefined2 *)((long)in_x0 + 0x2c) = 0x807c;
  *(undefined *)((long)in_x0 + 0xae) = 0;
  in_x0[0x17] = lVar1;
  in_x0[0x18] = lVar1 + (ulong)(((uint)(iVar3 * 0x54) / 0xc) * 0x14);
  in_x0[0x3f] = lVar6;
  in_x0[0x40] = lVar1;
  in_x0[0x42] = lVar6 + (ulong)uVar2;
  in_x0[1] = 0xc0a080604030201;
  do {
    if ((int)(uint)*(byte *)((long)in_x0 + (long)iVar5 + 8) <= (int)lVar4) {
      iVar5 = iVar5 + 1;
    }
    *(char *)((long)in_x0 + lVar4 + 0x2e) = (char)iVar5;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x80);
  return;
}


