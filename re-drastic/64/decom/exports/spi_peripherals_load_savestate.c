/*
 * Ghidra decompilation
 *
 * Function : spi_peripherals_load_savestate
 * Address  : 001713c0
 * Program  : drastic64
 */


void spi_peripherals_load_savestate(long param_1,long param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined2 *)(param_1 + 0x2450) = **(undefined2 **)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 2;
  backup_load_savestate();
  uVar2 = (*(undefined8 **)(param_2 + 0x20))[1];
  *(undefined8 *)(param_1 + 0x2428) = **(undefined8 **)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x2430) = uVar2;
  lVar1 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar1 + 0x10;
  *(undefined *)(param_1 + 0x2438) = *(undefined *)(lVar1 + 0x10);
  lVar1 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar1 + 1;
  *(undefined *)(param_1 + 0x2439) = *(undefined *)(lVar1 + 1);
  lVar1 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar1 + 1;
  if (param_3 < 6) {
    return;
  }
  *(undefined *)(param_1 + 0x243a) = *(undefined *)(lVar1 + 1);
  lVar1 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar1 + 1;
  *(undefined *)(param_1 + 0x243b) = *(undefined *)(lVar1 + 1);
  lVar1 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar1 + 1;
  *(undefined8 *)(param_1 + 0x243c) = *(undefined8 *)(lVar1 + 1);
  *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 8;
  return;
}


