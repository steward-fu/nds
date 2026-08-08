/*
 * Ghidra decompilation
 *
 * Function : cpu_load_savestate
 * Address  : 00128970
 * Program  : drastic64
 */


void cpu_load_savestate(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 8) = **(undefined8 **)(param_2 + 0x20);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 8;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(lVar2 + 8);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 4;
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(lVar2 + 4);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 2;
  *(undefined2 *)(param_1 + 0x1a) = *(undefined2 *)(lVar2 + 2);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 2;
  *(undefined *)(param_1 + 0x1c) = *(undefined *)(lVar2 + 2);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 1;
  *(undefined *)(param_1 + 0x1e) = *(undefined *)(lVar2 + 1);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 1;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar2 + 1);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 8;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(lVar2 + 8);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 4;
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(lVar2 + 4);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 2;
  *(undefined2 *)(param_1 + 0x3a) = *(undefined2 *)(lVar2 + 2);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 2;
  *(undefined *)(param_1 + 0x3c) = *(undefined *)(lVar2 + 2);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 1;
  *(undefined *)(param_1 + 0x3e) = *(undefined *)(lVar2 + 1);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 1;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar2 + 1);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 8;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(lVar2 + 8);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 4;
  *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(lVar2 + 4);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 2;
  *(undefined2 *)(param_1 + 0x5a) = *(undefined2 *)(lVar2 + 2);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 2;
  *(undefined *)(param_1 + 0x5c) = *(undefined *)(lVar2 + 2);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 1;
  *(undefined *)(param_1 + 0x5e) = *(undefined *)(lVar2 + 1);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 1;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar2 + 1);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 8;
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(lVar2 + 8);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 4;
  *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(lVar2 + 4);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 2;
  *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)(lVar2 + 2);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 2;
  *(undefined *)(param_1 + 0x7c) = *(undefined *)(lVar2 + 2);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 1;
  *(undefined *)(param_1 + 0x7e) = *(undefined *)(lVar2 + 1);
  lVar2 = *(long *)(param_2 + 0x20);
  *(undefined8 **)(param_2 + 0x20) = (undefined8 *)(lVar2 + 1);
  uVar3 = *(undefined8 *)(lVar2 + 9);
  *(undefined8 *)(param_1 + 0x2090) = *(undefined8 *)(lVar2 + 1);
  *(undefined8 *)(param_1 + 0x2098) = uVar3;
  uVar3 = *(undefined8 *)(lVar2 + 0x19);
  *(undefined8 *)(param_1 + 0x20a0) = *(undefined8 *)(lVar2 + 0x11);
  *(undefined8 *)(param_1 + 0x20a8) = uVar3;
  uVar3 = *(undefined8 *)(lVar2 + 0x29);
  *(undefined8 *)(param_1 + 0x20b0) = *(undefined8 *)(lVar2 + 0x21);
  *(undefined8 *)(param_1 + 0x20b8) = uVar3;
  *(undefined8 *)(param_1 + 0x20c0) = *(undefined8 *)(lVar2 + 0x31);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 0x38;
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  *(undefined8 *)(param_1 + 0x20c8) = *(undefined8 *)(lVar2 + 0x38);
  *(undefined8 *)(param_1 + 0x20d0) = uVar3;
  uVar3 = *(undefined8 *)(lVar2 + 0x50);
  *(undefined8 *)(param_1 + 0x20d8) = *(undefined8 *)(lVar2 + 0x48);
  *(undefined8 *)(param_1 + 0x20e0) = uVar3;
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 0x20;
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(param_1 + 0x20e8) = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(param_1 + 0x20f0) = uVar3;
  *(undefined8 *)(param_1 + 0x20f8) = *(undefined8 *)(lVar2 + 0x30);
  *(undefined4 *)(param_1 + 0x2100) = *(undefined4 *)(lVar2 + 0x38);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 0x1c;
  *(undefined4 *)(param_1 + 0x2104) = *(undefined4 *)(lVar2 + 0x1c);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 4;
  bVar1 = *(byte *)(lVar2 + 4);
  *(long *)(param_2 + 0x20) = lVar2 + 5;
  *(uint *)(param_1 + 0x2110) = (uint)bVar1;
  *(undefined4 *)(param_1 + 0x23bc) = *(undefined4 *)(lVar2 + 5);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 4;
  *(undefined4 *)(param_1 + 0x23c0) = *(undefined4 *)(lVar2 + 4);
  lVar2 = *(long *)(param_2 + 0x20);
  *(undefined8 **)(param_2 + 0x20) = (undefined8 *)(lVar2 + 4);
  uVar3 = *(undefined8 *)(lVar2 + 0xc);
  *(undefined8 *)(param_1 + 0x2370) = *(undefined8 *)(lVar2 + 4);
  *(undefined8 *)(param_1 + 0x2378) = uVar3;
  uVar3 = *(undefined8 *)(lVar2 + 0x1c);
  *(undefined8 *)(param_1 + 0x2380) = *(undefined8 *)(lVar2 + 0x14);
  *(undefined8 *)(param_1 + 0x2388) = uVar3;
  uVar3 = *(undefined8 *)(lVar2 + 0x2c);
  *(undefined8 *)(param_1 + 0x2390) = *(undefined8 *)(lVar2 + 0x24);
  *(undefined8 *)(param_1 + 0x2398) = uVar3;
  uVar3 = *(undefined8 *)(lVar2 + 0x3c);
  *(undefined8 *)(param_1 + 0x23a0) = *(undefined8 *)(lVar2 + 0x34);
  *(undefined8 *)(param_1 + 0x23a8) = uVar3;
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 0x40;
  *(undefined4 *)(param_1 + 0x2290) = *(undefined4 *)(lVar2 + 0x40);
  *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 4;
  return;
}


