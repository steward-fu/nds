/*
 * Ghidra decompilation
 *
 * Function : FUN_001e729c
 * Address  : 001e729c
 * Program  : drastic64
 */


long FUN_001e729c(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined uVar2;
  size_t __size;
  void *__dest;
  undefined8 uVar3;
  size_t __n;
  
  if (*(void **)(param_1 + 0x2020) != (void *)0x0) {
    free(*(void **)(param_1 + 0x2020));
    *(undefined8 *)(param_1 + 0x2020) = 0;
  }
  *(undefined8 *)(param_1 + 0x2028) = 0;
  *(undefined8 *)(param_1 + 0x2030) = 0;
  *(undefined *)(param_1 + 0x18) = *(undefined *)(param_2 + 0x18);
  *(undefined *)(param_1 + 0x19) = *(undefined *)(param_2 + 0x19);
  *(undefined *)(param_1 + 0x1a) = *(undefined *)(param_2 + 0x1a);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  memcpy((void *)(param_1 + 0x20),(void *)(param_2 + 0x20),0x2000);
  *(undefined8 *)(param_1 + 0x2040) = *(undefined8 *)(param_2 + 0x2040);
  *(undefined8 *)(param_1 + 0x2048) = *(undefined8 *)(param_2 + 0x2048);
  *(undefined8 *)(param_1 + 0x2050) = *(undefined8 *)(param_2 + 0x2050);
  *(undefined8 *)(param_1 + 0x2058) = *(undefined8 *)(param_2 + 0x2058);
  *(undefined8 *)(param_1 + 0x2060) = *(undefined8 *)(param_2 + 0x2060);
  *(undefined8 *)(param_1 + 0x2068) = *(undefined8 *)(param_2 + 0x2068);
  uVar3 = *(undefined8 *)(param_2 + 0x2078);
  *(undefined8 *)(param_1 + 0x2070) = *(undefined8 *)(param_2 + 0x2070);
  *(undefined8 *)(param_1 + 0x2078) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x2088);
  *(undefined8 *)(param_1 + 0x2080) = *(undefined8 *)(param_2 + 0x2080);
  *(undefined8 *)(param_1 + 0x2088) = uVar3;
  *(undefined4 *)(param_1 + 0x2090) = *(undefined4 *)(param_2 + 0x2090);
  uVar2 = *(undefined *)(param_2 + 0x2098);
  *(undefined4 *)(param_1 + 0x2094) = *(undefined4 *)(param_2 + 0x2094);
  *(undefined *)(param_1 + 0x2098) = uVar2;
  uVar1 = *(undefined4 *)(param_2 + 0x209c);
  *(undefined *)(param_1 + 0x2099) = *(undefined *)(param_2 + 0x2099);
  *(undefined *)(param_1 + 0x209a) = *(undefined *)(param_2 + 0x209a);
  *(undefined *)(param_1 + 0x209b) = *(undefined *)(param_2 + 0x209b);
  *(undefined4 *)(param_1 + 0x209c) = uVar1;
  *(undefined *)(param_1 + 0x20a0) = *(undefined *)(param_2 + 0x20a0);
  uVar3 = *(undefined8 *)(param_2 + 0x20a9);
  *(undefined8 *)(param_1 + 0x20a1) = *(undefined8 *)(param_2 + 0x20a1);
  *(undefined8 *)(param_1 + 0x20a9) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x20b9);
  *(undefined8 *)(param_1 + 0x20b1) = *(undefined8 *)(param_2 + 0x20b1);
  *(undefined8 *)(param_1 + 0x20b9) = uVar3;
  *(undefined *)(param_1 + 0x20c1) = *(undefined *)(param_2 + 0x20c1);
  *(undefined8 *)(param_1 + 0x20c2) = *(undefined8 *)(param_2 + 0x20c2);
  *(undefined *)(param_1 + 0x20ca) = *(undefined *)(param_2 + 0x20ca);
  uVar3 = *(undefined8 *)(param_2 + 0x20d3);
  *(undefined8 *)(param_1 + 0x20cb) = *(undefined8 *)(param_2 + 0x20cb);
  *(undefined8 *)(param_1 + 0x20d3) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x20e3);
  *(undefined8 *)(param_1 + 0x20db) = *(undefined8 *)(param_2 + 0x20db);
  *(undefined8 *)(param_1 + 0x20e3) = uVar3;
  uVar2 = *(undefined *)(param_2 + 0x20f0);
  *(undefined4 *)(param_1 + 0x20ec) = *(undefined4 *)(param_2 + 0x20ec);
  *(undefined *)(param_1 + 0x20f0) = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x20f8);
  *(undefined *)(param_1 + 0x20f1) = *(undefined *)(param_2 + 0x20f1);
  *(undefined *)(param_1 + 0x20f2) = *(undefined *)(param_2 + 0x20f2);
  *(undefined *)(param_1 + 0x20f3) = *(undefined *)(param_2 + 0x20f3);
  *(undefined8 *)(param_1 + 0x20f8) = uVar3;
  *(undefined *)(param_1 + 0x2100) = *(undefined *)(param_2 + 0x2100);
  *(undefined *)(param_1 + 0x2101) = *(undefined *)(param_2 + 0x2101);
  *(undefined *)(param_1 + 0x2102) = *(undefined *)(param_2 + 0x2102);
  *(undefined8 *)(param_1 + 0x2104) = *(undefined8 *)(param_2 + 0x2104);
  memcpy((void *)(param_1 + 0x210c),(void *)(param_2 + 0x210c),0x2000);
  *(undefined *)(param_1 + 0x410c) = *(undefined *)(param_2 + 0x410c);
  *(undefined *)(param_1 + 0x410d) = *(undefined *)(param_2 + 0x410d);
  *(undefined *)(param_1 + 0x410e) = *(undefined *)(param_2 + 0x410e);
  *(undefined *)(param_1 + 0x410f) = *(undefined *)(param_2 + 0x410f);
  memcpy((void *)(param_1 + 0x4110),(void *)(param_2 + 0x4110),0x100);
  memcpy((void *)(param_1 + 0x4210),(void *)(param_2 + 0x4210),0x100);
  *(undefined4 *)(param_1 + 0x4310) = *(undefined4 *)(param_2 + 0x4310);
  *(undefined4 *)(param_1 + 0x4314) = *(undefined4 *)(param_2 + 0x4314);
  __size = *(ulong *)(param_2 + 0x2028);
  *(undefined8 *)(param_1 + 0x2020) = 0;
  *(undefined8 *)(param_1 + 0x2038) = 0;
  if (__size != 0) {
    *(size_t *)(param_1 + 0x2028) = __size;
    if (__size < 0x20) {
      __size = 0x20;
    }
    __dest = malloc(__size);
    if (__dest == (void *)0x0) {
      ErrorHandler::MemoryError();
    }
    __n = *(size_t *)(param_2 + 0x2028);
    *(void **)(param_1 + 0x2020) = __dest;
    *(size_t *)(param_1 + 0x2030) = __size;
    if (__n != 0) {
      memcpy(__dest,*(void **)(param_2 + 0x2020),__n);
      return param_1;
    }
  }
  return param_1;
}


