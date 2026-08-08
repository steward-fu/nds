/*
 * Ghidra decompilation
 *
 * Function : spi_peripherals_store_savestate
 * Address  : 001714b0
 * Program  : drastic64
 */


void spi_peripherals_store_savestate(long param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  **(undefined2 **)(param_2 + 0x20) = *(undefined2 *)(param_1 + 0x2450);
  *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 2;
  backup_store_savestate();
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x2430);
  *puVar1 = *(undefined8 *)(param_1 + 0x2428);
  puVar1[1] = uVar3;
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 0x10;
  *(undefined *)(lVar2 + 0x10) = *(undefined *)(param_1 + 0x2438);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 1;
  *(undefined *)(lVar2 + 1) = *(undefined *)(param_1 + 0x2439);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 1;
  if (param_3 < 6) {
    return;
  }
  *(undefined *)(lVar2 + 1) = *(undefined *)(param_1 + 0x243a);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 1;
  *(undefined *)(lVar2 + 1) = *(undefined *)(param_1 + 0x243b);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 1;
  *(undefined8 *)(lVar2 + 1) = *(undefined8 *)(param_1 + 0x243c);
  *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 8;
  return;
}


