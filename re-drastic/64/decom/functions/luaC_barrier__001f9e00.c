/*
 * Ghidra decompilation
 *
 * Function : luaC_barrier_
 * Address  : 001f9e00
 * Program  : drastic64
 */


void luaC_barrier_(long param_1,long param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x18);
  if (1 < *(byte *)(lVar4 + 0x55)) {
    *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) & 0xf8 | *(byte *)(lVar4 + 0x54) & 3;
    return;
  }
  bVar1 = *(byte *)(param_3 + 8);
  bVar3 = *(byte *)(param_3 + 9) & 0xfc;
  *(byte *)(param_3 + 9) = bVar3;
  if (bVar1 == 8) {
    *(undefined8 *)(param_3 + 0x48) = *(undefined8 *)(lVar4 + 0x70);
    *(long *)(lVar4 + 0x70) = param_3;
    return;
  }
  if (bVar1 < 9) {
    if (bVar1 == 6) {
LAB_001f9f04:
      *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(lVar4 + 0x70);
      *(long *)(lVar4 + 0x70) = param_3;
      return;
    }
    if (bVar1 == 7) {
      do {
        if ((*(long *)(param_3 + 0x10) != 0) &&
           ((*(byte *)(*(long *)(param_3 + 0x10) + 9) & 3) != 0)) {
          reallymarkobject(lVar4);
          bVar3 = *(byte *)(param_3 + 9);
        }
        *(byte *)(param_3 + 9) = bVar3 | 4;
        lVar2 = *(long *)(param_3 + 0x20);
        *(long *)(lVar4 + 0x20) = *(long *)(lVar4 + 0x20) + 0x28 + *(long *)(param_3 + 0x18);
        if ((*(byte *)(param_3 + 10) >> 6 & 1) == 0) {
          return;
        }
        if ((*(byte *)(lVar2 + 9) & 3) == 0) {
          return;
        }
        bVar1 = *(byte *)(lVar2 + 8);
        bVar3 = *(byte *)(lVar2 + 9) & 0xfc;
        *(byte *)(lVar2 + 9) = bVar3;
        if (bVar1 == 8) {
          *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(lVar4 + 0x70);
          *(long *)(lVar4 + 0x70) = lVar2;
          return;
        }
        if (8 < bVar1) {
          if (bVar1 != 0x14) {
            if (bVar1 != 0x26) {
              if (bVar1 != 9) {
                return;
              }
              *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(lVar4 + 0x70);
              *(long *)(lVar4 + 0x70) = lVar2;
              return;
            }
LAB_001f9f5c:
            *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar4 + 0x70);
            *(long *)(lVar4 + 0x70) = lVar2;
            return;
          }
          goto LAB_001f9f98;
        }
        if (bVar1 == 6) goto LAB_001f9f5c;
        param_3 = lVar2;
      } while (bVar1 == 7);
      if (bVar1 == 4) {
LAB_001f9f98:
        *(byte *)(lVar2 + 9) = bVar3 | 4;
        *(long *)(lVar4 + 0x20) = *(long *)(lVar4 + 0x20) + 0x21 + *(long *)(lVar2 + 0x10);
      }
      else if (bVar1 == 5) {
        *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(lVar4 + 0x70);
        *(long *)(lVar4 + 0x70) = lVar2;
      }
      return;
    }
    if (bVar1 != 4) {
      if (bVar1 == 5) {
        *(undefined8 *)(param_3 + 0x30) = *(undefined8 *)(lVar4 + 0x70);
        *(long *)(lVar4 + 0x70) = param_3;
        return;
      }
      return;
    }
  }
  else if (bVar1 != 0x14) {
    if (bVar1 != 0x26) {
      if (bVar1 == 9) {
        *(undefined8 *)(param_3 + 0x70) = *(undefined8 *)(lVar4 + 0x70);
        *(long *)(lVar4 + 0x70) = param_3;
        return;
      }
      return;
    }
    goto LAB_001f9f04;
  }
  *(byte *)(param_3 + 9) = bVar3 | 4;
  *(long *)(lVar4 + 0x20) = *(long *)(lVar4 + 0x20) + 0x21 + *(long *)(param_3 + 0x10);
  return;
}


