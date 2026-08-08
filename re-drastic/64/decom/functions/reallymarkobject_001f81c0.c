/*
 * Ghidra decompilation
 *
 * Function : reallymarkobject
 * Address  : 001f81c0
 * Program  : drastic64
 */


void reallymarkobject(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  
  bVar3 = *(byte *)(param_2 + 9);
  while( true ) {
    bVar1 = *(byte *)(param_2 + 8);
    bVar3 = bVar3 & 0xfc;
    *(byte *)(param_2 + 9) = bVar3;
    if (bVar1 == 8) {
      *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_1 + 0x70);
      *(long *)(param_1 + 0x70) = param_2;
      return;
    }
    if (8 < bVar1) break;
    if (bVar1 == 6) goto LAB_001f8260;
    if (bVar1 != 7) {
      if (bVar1 != 4) {
        if (bVar1 != 5) {
          return;
        }
        *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_1 + 0x70);
        *(long *)(param_1 + 0x70) = param_2;
        return;
      }
      goto LAB_001f82c0;
    }
    if ((*(long *)(param_2 + 0x10) != 0) && ((*(byte *)(*(long *)(param_2 + 0x10) + 9) & 3) != 0)) {
      reallymarkobject();
      bVar3 = *(byte *)(param_2 + 9);
    }
    *(byte *)(param_2 + 9) = bVar3 | 4;
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 0x28 + *(long *)(param_2 + 0x18);
    if ((*(byte *)(param_2 + 10) >> 6 & 1) == 0) {
      return;
    }
    bVar3 = *(byte *)(lVar2 + 9);
    param_2 = lVar2;
    if ((bVar3 & 3) == 0) {
      return;
    }
  }
  if (bVar1 == 0x14) {
LAB_001f82c0:
    *(byte *)(param_2 + 9) = bVar3 | 4;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 0x21 + *(long *)(param_2 + 0x10);
    return;
  }
  if (bVar1 != 0x26) {
    if (bVar1 != 9) {
      return;
    }
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_1 + 0x70);
    *(long *)(param_1 + 0x70) = param_2;
    return;
  }
LAB_001f8260:
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x70);
  *(long *)(param_1 + 0x70) = param_2;
  return;
}


