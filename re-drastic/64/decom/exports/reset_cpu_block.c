/*
 * Ghidra decompilation
 *
 * Function : reset_cpu_block
 * Address  : 0012f5f0
 * Program  : drastic64
 */


void reset_cpu_block(long param_1)

{
  void *__s;
  void *__s_00;
  long lVar1;
  long lVar2;
  void *__addr;
  long lVar3;
  
  __addr = *(void **)(param_1 + 0x2088);
  __s = (void *)((long)__addr + 0x14d8038);
  lVar2 = *(long *)(param_1 + 0x2260);
  lVar3 = *(long *)(param_1 + 0x22a0);
  memset((void *)((long)__addr + 0x1300000),0,0x100000);
  memset((void *)((long)__addr + 0x1380000),0,0x40000);
  __s_00 = *(void **)(param_1 + 0x2270);
  if (__s_00 < (void *)((long)__addr + 0x14da038U) && __s < (void *)((long)__s_00 + 0x8000U)) {
    lVar1 = 0;
    do {
      *(undefined4 *)((long)__s_00 + lVar1 * 4) = 0;
      *(undefined *)((long)__s + lVar1) = 0;
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0x2000);
  }
  else {
    memset(__s_00,0,0x8000);
    memset(__s,0,0x2000);
  }
  memset(*(void **)(param_1 + 0x2278),0,0x10000);
  memset((void *)(param_1 + 0x80),0,0x2000);
  memset((void *)(lVar3 + 0x80),0,0x2000);
  memset((void *)(lVar2 + 0xaf070),0,0x100);
  *(undefined4 *)(lVar2 + 0xaf178) = 0;
  *(undefined4 *)(lVar2 + 0xaf17c) = 0;
  *(undefined4 *)(lVar2 + 0xaf180) = 0;
  *(undefined8 *)(lVar2 + 0xaf184) = 0;
  *(undefined8 *)(lVar2 + 0xaf18c) = 0;
  *(undefined8 *)(lVar2 + 0xaf194) = 0;
  *(undefined8 *)(lVar2 + 0xaf19c) = 0;
  *(undefined8 *)(lVar2 + 0xaf1a4) = 0;
  *(undefined4 *)(lVar2 + 0xaf1ac) = 0;
  memset((void *)(lVar2 + 0xaf1b0),0,0x40000);
  if (*(long *)(lVar2 + 0xef1b0) != 0) {
    memset(*(void **)(lVar2 + 0xaf170),0,0x800);
    memset(*(void **)(lVar2 + 0xef1b0),0,0x200000);
  }
  memset((void *)(lVar2 + 0xef1b8),0,0x800);
  memset((void *)(lVar2 + 0xef9b8),0,0x800);
  memset((void *)(lVar2 + 0xf01b8),0,0x1000);
  memset((void *)(lVar2 + 0xf11b8),0,0xa400);
  mprotect(__addr,0x1000000,7);
  mprotect((void *)((long)__addr + 0x1000000),0x100000,7);
  mprotect((void *)((long)__addr + 0x1100000),0x200000,7);
  memset(__s,0,0x2000);
  *(undefined4 *)((long)__addr + 0x14fa138) = 0;
  memset((void *)((long)__addr + 0x14da138),0,0x20000);
  return;
}


