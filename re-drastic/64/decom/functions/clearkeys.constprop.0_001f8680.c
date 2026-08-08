/*
 * Ghidra decompilation
 *
 * Function : clearkeys.constprop.0
 * Address  : 001f8680
 * Program  : drastic64
 */


void clearkeys_constprop_0(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 extraout_w8;
  int extraout_w9;
  undefined8 extraout_x10;
  
  if (param_2 == 0) {
    return;
  }
  do {
    uVar3 = *(ulong *)(param_2 + 0x18);
    uVar1 = 1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f);
    uVar4 = uVar3 + (-(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5);
    for (; uVar3 < uVar4; uVar3 = uVar3 + 0x20) {
      if ((*(int *)(uVar3 + 8) != 0) && ((*(uint *)(uVar3 + 0x18) >> 6 & 1) != 0)) {
        lVar2 = *(long *)(uVar3 + 0x10);
        if ((*(uint *)(uVar3 + 0x18) & 0xf) == 4) {
          if ((lVar2 != 0) && ((*(byte *)(lVar2 + 9) & 3) != 0)) {
LAB_001f8714:
            reallymarkobject(param_1);
LAB_001f8720:
            do {
              uVar3 = uVar3 + 0x20;
              if (uVar4 <= uVar3) goto LAB_001f8770;
              while( true ) {
                if ((*(int *)(uVar3 + 8) == 0) || ((*(uint *)(uVar3 + 0x18) >> 6 & 1) == 0))
                goto LAB_001f8720;
                lVar2 = *(long *)(uVar3 + 0x10);
                if ((*(uint *)(uVar3 + 0x18) & 0xf) == 4) break;
                if ((*(byte *)(lVar2 + 9) & 3) == 0) goto LAB_001f8720;
                *(undefined4 *)(uVar3 + 8) = 0;
                *(undefined4 *)(uVar3 + 0x18) = extraout_w8;
                uVar3 = uVar3 + 0x20;
                if (uVar4 <= uVar3) {
LAB_001f8770:
                  param_2 = *(long *)(param_2 + 0x30);
                  while( true ) {
                    if (param_2 == 0) {
                      return;
                    }
                    uVar3 = *(ulong *)(param_2 + 0x18);
                    uVar1 = extraout_w9 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f);
                    uVar4 = uVar3 + (-(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 |
                                    (ulong)uVar1 << 5);
                    if (uVar3 < uVar4) break;
                    param_2 = *(long *)(param_2 + 0x30);
                  }
                }
              }
              if ((lVar2 != 0) && (param_1 = extraout_x10, (*(byte *)(lVar2 + 9) & 3) != 0))
              goto LAB_001f8714;
            } while( true );
          }
        }
        else if ((*(byte *)(lVar2 + 9) & 3) != 0) {
          *(undefined4 *)(uVar3 + 8) = 0;
          *(undefined4 *)(uVar3 + 0x18) = 10;
        }
      }
    }
    param_2 = *(long *)(param_2 + 0x30);
    if (param_2 == 0) {
      return;
    }
  } while( true );
}


