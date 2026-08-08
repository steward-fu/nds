/*
 * Ghidra decompilation
 *
 * Function : gamecard_load_savestate
 * Address  : 00170b00
 * Program  : drastic64
 */


void gamecard_load_savestate(long param_1,long param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  
  *(undefined4 *)(param_1 + 0x95c) = **(undefined4 **)(param_2 + 0x20);
  lVar1 = param_1 + 0x968;
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 4;
  *(undefined4 *)(param_1 + 0x960) = *(undefined4 *)(lVar2 + 4);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 4;
  *(undefined4 *)(param_1 + 0x2d98) = *(undefined4 *)(lVar2 + 4);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 4;
  if (param_3 < 4) {
    *(undefined8 *)(param_1 + 0x910) = 0;
LAB_00170b68:
    *(undefined *)(param_1 + 0x2da5) = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x910) = *(undefined8 *)(lVar2 + 4);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 8;
    if (param_3 == 4) goto LAB_00170b68;
    *(undefined *)(param_1 + 0x2da5) = *(undefined *)(lVar2 + 8);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 1;
    if (7 < param_3) {
      *(undefined4 *)(param_1 + 0x2d9c) = *(undefined4 *)(lVar2 + 1);
      lVar2 = *(long *)(param_2 + 0x20);
      *(long *)(param_2 + 0x20) = lVar2 + 4;
      *(undefined4 *)(param_1 + 0x2da0) = *(undefined4 *)(lVar2 + 4);
      lVar2 = *(long *)(param_2 + 0x20);
      *(long *)(param_2 + 0x20) = lVar2 + 4;
      *(undefined *)(param_1 + 0x2da7) = *(undefined *)(lVar2 + 4);
      lVar2 = *(long *)(param_2 + 0x20);
      *(long *)(param_2 + 0x20) = lVar2 + 1;
      *(undefined *)(param_1 + 0x2da8) = *(undefined *)(lVar2 + 1);
      lVar2 = *(long *)(param_2 + 0x20);
      *(long *)(param_2 + 0x20) = lVar2 + 1;
      if (9 < param_3) {
        *(undefined4 *)(param_1 + 0x958) = *(undefined4 *)(lVar2 + 1);
        lVar2 = *(long *)(param_2 + 0x20);
        *(long *)(param_2 + 0x20) = lVar2 + 4;
        if (0xb < param_3) {
          *(undefined4 *)(param_1 + 0x8d8) = *(undefined4 *)(lVar2 + 4);
          lVar2 = *(long *)(param_2 + 0x20);
          *(long *)(param_2 + 0x20) = lVar2 + 4;
          *(undefined *)(param_1 + 0x8e1) = *(undefined *)(lVar2 + 4);
          lVar2 = *(long *)(param_2 + 0x20);
          *(long *)(param_2 + 0x20) = lVar2 + 1;
          *(undefined *)(param_1 + 0x8e2) = *(undefined *)(lVar2 + 1);
          lVar2 = *(long *)(param_2 + 0x20);
          *(long *)(param_2 + 0x20) = lVar2 + 1;
          if (0xd < param_3) {
            *(undefined4 *)(param_1 + 0x8e9) = *(undefined4 *)(lVar2 + 1);
            lVar2 = *(long *)(param_2 + 0x20);
            *(long *)(param_2 + 0x20) = lVar2 + 4;
            *(undefined *)(param_1 + 0x8e8) = *(undefined *)(lVar2 + 4);
            lVar2 = *(long *)(param_2 + 0x20);
            *(long *)(param_2 + 0x20) = lVar2 + 1;
            *(undefined8 *)(param_1 + 0x8f0) = *(undefined8 *)(lVar2 + 1);
            *(undefined2 *)(param_1 + 0x8f8) = *(undefined2 *)(lVar2 + 9);
            lVar2 = *(long *)(param_2 + 0x20);
            *(long *)(param_2 + 0x20) = lVar2 + 10;
            *(undefined *)(param_1 + 0x8ef) = *(undefined *)(lVar2 + 10);
            lVar2 = *(long *)(param_2 + 0x20);
            *(long *)(param_2 + 0x20) = lVar2 + 1;
            *(undefined *)(param_1 + 0x8ee) = *(undefined *)(lVar2 + 1);
            lVar2 = *(long *)(param_2 + 0x20);
            *(long *)(param_2 + 0x20) = lVar2 + 1;
            *(undefined *)(param_1 + 0x908) = *(undefined *)(lVar2 + 1);
            lVar2 = *(long *)(param_2 + 0x20);
            *(long *)(param_2 + 0x20) = lVar2 + 1;
            *(undefined *)(param_1 + 0x909) = *(undefined *)(lVar2 + 1);
            *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 1;
            backup_load_savestate(lVar1);
            return;
          }
        }
        backup_load_savestate(lVar1,param_2,param_3);
        return;
      }
      backup_load_savestate(lVar1);
      goto LAB_00170b84;
    }
  }
  backup_load_savestate(lVar1,param_2,param_3);
  if (9 < param_3) {
    return;
  }
LAB_00170b84:
  *(undefined4 *)(param_1 + 0x958) = 0;
  return;
}


