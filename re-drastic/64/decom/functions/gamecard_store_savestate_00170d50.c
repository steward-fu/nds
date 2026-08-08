/*
 * Ghidra decompilation
 *
 * Function : gamecard_store_savestate
 * Address  : 00170d50
 * Program  : drastic64
 */


void gamecard_store_savestate(long param_1,long param_2,uint param_3)

{
  long lVar1;
  
  **(undefined4 **)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x95c);
  lVar1 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar1 + 4;
  *(undefined4 *)(lVar1 + 4) = *(undefined4 *)(param_1 + 0x960);
  lVar1 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar1 + 4;
  *(undefined4 *)(lVar1 + 4) = *(undefined4 *)(param_1 + 0x2d98);
  lVar1 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar1 + 4;
  if (param_3 < 4) {
    *(undefined8 *)(param_1 + 0x910) = 0;
  }
  else {
    *(undefined8 *)(lVar1 + 4) = *(undefined8 *)(param_1 + 0x910);
    lVar1 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar1 + 8;
    if (param_3 != 4) {
      *(undefined *)(lVar1 + 8) = *(undefined *)(param_1 + 0x2da5);
      lVar1 = *(long *)(param_2 + 0x20);
      *(long *)(param_2 + 0x20) = lVar1 + 1;
      if (7 < param_3) {
        *(undefined4 *)(lVar1 + 1) = *(undefined4 *)(param_1 + 0x2d9c);
        lVar1 = *(long *)(param_2 + 0x20);
        *(long *)(param_2 + 0x20) = lVar1 + 4;
        *(undefined4 *)(lVar1 + 4) = *(undefined4 *)(param_1 + 0x2da0);
        lVar1 = *(long *)(param_2 + 0x20);
        *(long *)(param_2 + 0x20) = lVar1 + 4;
        *(undefined *)(lVar1 + 4) = *(undefined *)(param_1 + 0x2da7);
        lVar1 = *(long *)(param_2 + 0x20);
        *(long *)(param_2 + 0x20) = lVar1 + 1;
        *(undefined *)(lVar1 + 1) = *(undefined *)(param_1 + 0x2da8);
        lVar1 = *(long *)(param_2 + 0x20);
        *(long *)(param_2 + 0x20) = lVar1 + 1;
        if (9 < param_3) {
          *(undefined4 *)(lVar1 + 1) = *(undefined4 *)(param_1 + 0x958);
          lVar1 = *(long *)(param_2 + 0x20);
          *(long *)(param_2 + 0x20) = lVar1 + 4;
          if (0xb < param_3) {
            *(undefined4 *)(lVar1 + 4) = *(undefined4 *)(param_1 + 0x8d8);
            lVar1 = *(long *)(param_2 + 0x20);
            *(long *)(param_2 + 0x20) = lVar1 + 4;
            *(undefined *)(lVar1 + 4) = *(undefined *)(param_1 + 0x8e1);
            lVar1 = *(long *)(param_2 + 0x20);
            *(long *)(param_2 + 0x20) = lVar1 + 1;
            *(undefined *)(lVar1 + 1) = *(undefined *)(param_1 + 0x8e2);
            lVar1 = *(long *)(param_2 + 0x20);
            *(long *)(param_2 + 0x20) = lVar1 + 1;
            if (0xd < param_3) {
              *(undefined4 *)(lVar1 + 1) = *(undefined4 *)(param_1 + 0x8e9);
              lVar1 = *(long *)(param_2 + 0x20);
              *(long *)(param_2 + 0x20) = lVar1 + 4;
              *(undefined *)(lVar1 + 4) = *(undefined *)(param_1 + 0x8e8);
              lVar1 = *(long *)(param_2 + 0x20);
              *(long *)(param_2 + 0x20) = lVar1 + 1;
              *(undefined8 *)(lVar1 + 1) = *(undefined8 *)(param_1 + 0x8f0);
              *(undefined2 *)(lVar1 + 9) = *(undefined2 *)(param_1 + 0x8f8);
              lVar1 = *(long *)(param_2 + 0x20);
              *(long *)(param_2 + 0x20) = lVar1 + 10;
              *(undefined *)(lVar1 + 10) = *(undefined *)(param_1 + 0x8ef);
              lVar1 = *(long *)(param_2 + 0x20);
              *(long *)(param_2 + 0x20) = lVar1 + 1;
              *(undefined *)(lVar1 + 1) = *(undefined *)(param_1 + 0x8ee);
              lVar1 = *(long *)(param_2 + 0x20);
              *(long *)(param_2 + 0x20) = lVar1 + 1;
              *(undefined *)(lVar1 + 1) = *(undefined *)(param_1 + 0x908);
              lVar1 = *(long *)(param_2 + 0x20);
              *(long *)(param_2 + 0x20) = lVar1 + 1;
              *(undefined *)(lVar1 + 1) = *(undefined *)(param_1 + 0x909);
              *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 1;
              backup_store_savestate();
              return;
            }
          }
        }
      }
      goto LAB_00170da4;
    }
  }
  *(undefined *)(param_1 + 0x2da5) = 0;
LAB_00170da4:
  backup_store_savestate(param_1 + 0x968);
  return;
}


