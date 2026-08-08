/*
 * Ghidra decompilation
 *
 * Function : _Z13blake2sp_initP14blake2sp_state
 * Address  : 001efb00
 * Program  : drastic64
 */


/* blake2sp_init(blake2sp_state*) */

void blake2sp_init(blake2sp_state *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  blake2sp_state *__s;
  uint uVar3;
  
  memset(param_1 + 0xa20,0,0x200);
  *(undefined8 *)(param_1 + 0xc20) = 0;
  memset(param_1 + 0x900,0,0xf0);
  puVar1 = *(undefined8 **)(param_1 + 0x9f8);
  *(undefined8 *)(param_1 + 0xa10) = 0;
  param_1[0xa18] = (blake2sp_state)0x0;
  puVar1[1] = 0xa54ff53a3c6ef372;
  *puVar1 = 0xbb67ae856a09e667;
  uVar3 = 0;
  *(undefined4 *)puVar1 = 0x6801e647;
  *(uint *)((long)puVar1 + 0xc) = *(uint *)((long)puVar1 + 0xc) ^ 0x20010000;
  puVar1[2] = 0x9b05688c510e527f;
  puVar1[3] = 0x5be0cd191f83d9ab;
  __s = param_1;
  do {
    pvVar2 = memset(__s,0,0xf0);
    puVar1 = *(undefined8 **)((long)pvVar2 + 0xf8);
    *(undefined8 *)((long)pvVar2 + 0x110) = 0;
    *(undefined *)((long)pvVar2 + 0x118) = 0;
    *(uint *)(puVar1 + 1) = uVar3 ^ 0x3c6ef372;
    *(undefined8 *)((long)puVar1 + 0xc) = 0x510e527f854ff53a;
    *(undefined8 *)((long)puVar1 + 0x14) = 0x1f83d9ab9b05688c;
    *(undefined4 *)((long)puVar1 + 0x1c) = 0x5be0cd19;
    uVar3 = uVar3 + 1;
    *puVar1 = 0xbb67ae856801e647;
    __s = (blake2sp_state *)((long)pvVar2 + 0x120);
  } while (uVar3 != 8);
  param_1[0x8f8] = (blake2sp_state)0x1;
  param_1[0xa18] = (blake2sp_state)0x1;
  return;
}


