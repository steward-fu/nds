/*
 * Ghidra decompilation
 *
 * Function : cpu_store_savestate
 * Address  : 00128c70
 * Program  : drastic64
 */


void cpu_store_savestate(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x2110);
  **(undefined8 **)(param_2 + 0x20) = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 8;
  *(undefined4 *)(lVar2 + 8) = *(undefined4 *)(param_1 + 0x14);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 4;
  *(undefined2 *)(lVar2 + 4) = *(undefined2 *)(param_1 + 0x18);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 2;
  *(undefined2 *)(lVar2 + 2) = *(undefined2 *)(param_1 + 0x1a);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 2;
  *(undefined *)(lVar2 + 2) = *(undefined *)(param_1 + 0x1c);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 1;
  *(undefined *)(lVar2 + 1) = *(undefined *)(param_1 + 0x1e);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 1;
  *(undefined8 *)(lVar2 + 1) = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 8;
  *(undefined4 *)(lVar2 + 8) = *(undefined4 *)(param_1 + 0x34);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 4;
  *(undefined2 *)(lVar2 + 4) = *(undefined2 *)(param_1 + 0x38);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 2;
  *(undefined2 *)(lVar2 + 2) = *(undefined2 *)(param_1 + 0x3a);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 2;
  *(undefined *)(lVar2 + 2) = *(undefined *)(param_1 + 0x3c);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 1;
  *(undefined *)(lVar2 + 1) = *(undefined *)(param_1 + 0x3e);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 1;
  *(undefined8 *)(lVar2 + 1) = *(undefined8 *)(param_1 + 0x48);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 8;
  *(undefined4 *)(lVar2 + 8) = *(undefined4 *)(param_1 + 0x54);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 4;
  *(undefined2 *)(lVar2 + 4) = *(undefined2 *)(param_1 + 0x58);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 2;
  *(undefined2 *)(lVar2 + 2) = *(undefined2 *)(param_1 + 0x5a);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 2;
  *(undefined *)(lVar2 + 2) = *(undefined *)(param_1 + 0x5c);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 1;
  *(undefined *)(lVar2 + 1) = *(undefined *)(param_1 + 0x5e);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 1;
  *(undefined8 *)(lVar2 + 1) = *(undefined8 *)(param_1 + 0x68);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 8;
  *(undefined4 *)(lVar2 + 8) = *(undefined4 *)(param_1 + 0x74);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 4;
  *(undefined2 *)(lVar2 + 4) = *(undefined2 *)(param_1 + 0x78);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 2;
  *(undefined2 *)(lVar2 + 2) = *(undefined2 *)(param_1 + 0x7a);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 2;
  *(undefined *)(lVar2 + 2) = *(undefined *)(param_1 + 0x7c);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 1;
  *(undefined *)(lVar2 + 1) = *(undefined *)(param_1 + 0x7e);
  lVar2 = *(long *)(param_1 + 0x2258);
  puVar3 = (undefined8 *)(*(long *)(param_2 + 0x20) + 1);
  *(undefined8 **)(param_2 + 0x20) = puVar3;
  if (nds_system[lVar2 + 0x362e9a8] != '\0') {
    cpu_block_load_pc();
    puVar3 = *(undefined8 **)(param_2 + 0x20);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x2098);
  *puVar3 = *(undefined8 *)(param_1 + 0x2090);
  puVar3[1] = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x20a8);
  puVar3[2] = *(undefined8 *)(param_1 + 0x20a0);
  puVar3[3] = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x20b8);
  puVar3[4] = *(undefined8 *)(param_1 + 0x20b0);
  puVar3[5] = uVar4;
  puVar3[6] = *(undefined8 *)(param_1 + 0x20c0);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 0x38;
  uVar4 = *(undefined8 *)(param_1 + 0x20d0);
  *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(param_1 + 0x20c8);
  *(undefined8 *)(lVar2 + 0x40) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x20e0);
  *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(param_1 + 0x20d8);
  *(undefined8 *)(lVar2 + 0x50) = uVar4;
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 0x20;
  uVar4 = *(undefined8 *)(param_1 + 0x20f0);
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_1 + 0x20e8);
  *(undefined8 *)(lVar2 + 0x28) = uVar4;
  *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(param_1 + 0x20f8);
  *(undefined4 *)(lVar2 + 0x38) = *(undefined4 *)(param_1 + 0x2100);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 0x1c;
  *(undefined4 *)(lVar2 + 0x1c) = *(undefined4 *)(param_1 + 0x2104);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 4;
  *(char *)(lVar2 + 4) = (char)uVar1;
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 1;
  *(uint *)(param_1 + 0x2110) = uVar1 & 0xff;
  *(undefined4 *)(lVar2 + 1) = *(undefined4 *)(param_1 + 0x23bc);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 4;
  *(undefined4 *)(lVar2 + 4) = *(undefined4 *)(param_1 + 0x23c0);
  lVar2 = *(long *)(param_2 + 0x20);
  *(undefined8 **)(param_2 + 0x20) = (undefined8 *)(lVar2 + 4);
  uVar4 = *(undefined8 *)(param_1 + 0x2378);
  *(undefined8 *)(lVar2 + 4) = *(undefined8 *)(param_1 + 0x2370);
  *(undefined8 *)(lVar2 + 0xc) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x2388);
  *(undefined8 *)(lVar2 + 0x14) = *(undefined8 *)(param_1 + 0x2380);
  *(undefined8 *)(lVar2 + 0x1c) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x2398);
  *(undefined8 *)(lVar2 + 0x24) = *(undefined8 *)(param_1 + 0x2390);
  *(undefined8 *)(lVar2 + 0x2c) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x23a8);
  *(undefined8 *)(lVar2 + 0x34) = *(undefined8 *)(param_1 + 0x23a0);
  *(undefined8 *)(lVar2 + 0x3c) = uVar4;
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 0x40;
  *(undefined4 *)(lVar2 + 0x40) = *(undefined4 *)(param_1 + 0x2290);
  *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 4;
  return;
}


