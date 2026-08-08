/*
 * Ghidra decompilation
 *
 * Function : _ZN10FileHeaderaSERS_
 * Address  : 001e72a0
 * Program  : drastic64
 */


/* FileHeader::TEMPNAMEPLACEHOLDERVALUE(FileHeader&) */

FileHeader * __thiscall FileHeader::operator=(FileHeader *this,FileHeader *param_1)

{
  undefined4 uVar1;
  FileHeader FVar2;
  size_t __size;
  void *__dest;
  undefined8 uVar3;
  size_t __n;
  
  if (*(void **)(this + 0x2020) != (void *)0x0) {
    free(*(void **)(this + 0x2020));
    *(undefined8 *)(this + 0x2020) = 0;
  }
  *(undefined8 *)(this + 0x2028) = 0;
  *(undefined8 *)(this + 0x2030) = 0;
  this[0x18] = param_1[0x18];
  this[0x19] = param_1[0x19];
  this[0x1a] = param_1[0x1a];
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  memcpy(this + 0x20,param_1 + 0x20,0x2000);
  *(undefined8 *)(this + 0x2040) = *(undefined8 *)(param_1 + 0x2040);
  *(undefined8 *)(this + 0x2048) = *(undefined8 *)(param_1 + 0x2048);
  *(undefined8 *)(this + 0x2050) = *(undefined8 *)(param_1 + 0x2050);
  *(undefined8 *)(this + 0x2058) = *(undefined8 *)(param_1 + 0x2058);
  *(undefined8 *)(this + 0x2060) = *(undefined8 *)(param_1 + 0x2060);
  *(undefined8 *)(this + 0x2068) = *(undefined8 *)(param_1 + 0x2068);
  uVar3 = *(undefined8 *)(param_1 + 0x2078);
  *(undefined8 *)(this + 0x2070) = *(undefined8 *)(param_1 + 0x2070);
  *(undefined8 *)(this + 0x2078) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x2088);
  *(undefined8 *)(this + 0x2080) = *(undefined8 *)(param_1 + 0x2080);
  *(undefined8 *)(this + 0x2088) = uVar3;
  *(undefined4 *)(this + 0x2090) = *(undefined4 *)(param_1 + 0x2090);
  FVar2 = param_1[0x2098];
  *(undefined4 *)(this + 0x2094) = *(undefined4 *)(param_1 + 0x2094);
  this[0x2098] = FVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x209c);
  this[0x2099] = param_1[0x2099];
  this[0x209a] = param_1[0x209a];
  this[0x209b] = param_1[0x209b];
  *(undefined4 *)(this + 0x209c) = uVar1;
  this[0x20a0] = param_1[0x20a0];
  uVar3 = *(undefined8 *)(param_1 + 0x20a9);
  *(undefined8 *)(this + 0x20a1) = *(undefined8 *)(param_1 + 0x20a1);
  *(undefined8 *)(this + 0x20a9) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x20b9);
  *(undefined8 *)(this + 0x20b1) = *(undefined8 *)(param_1 + 0x20b1);
  *(undefined8 *)(this + 0x20b9) = uVar3;
  this[0x20c1] = param_1[0x20c1];
  *(undefined8 *)(this + 0x20c2) = *(undefined8 *)(param_1 + 0x20c2);
  this[0x20ca] = param_1[0x20ca];
  uVar3 = *(undefined8 *)(param_1 + 0x20d3);
  *(undefined8 *)(this + 0x20cb) = *(undefined8 *)(param_1 + 0x20cb);
  *(undefined8 *)(this + 0x20d3) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x20e3);
  *(undefined8 *)(this + 0x20db) = *(undefined8 *)(param_1 + 0x20db);
  *(undefined8 *)(this + 0x20e3) = uVar3;
  FVar2 = param_1[0x20f0];
  *(undefined4 *)(this + 0x20ec) = *(undefined4 *)(param_1 + 0x20ec);
  this[0x20f0] = FVar2;
  uVar3 = *(undefined8 *)(param_1 + 0x20f8);
  this[0x20f1] = param_1[0x20f1];
  this[0x20f2] = param_1[0x20f2];
  this[0x20f3] = param_1[0x20f3];
  *(undefined8 *)(this + 0x20f8) = uVar3;
  this[0x2100] = param_1[0x2100];
  this[0x2101] = param_1[0x2101];
  this[0x2102] = param_1[0x2102];
  *(undefined8 *)(this + 0x2104) = *(undefined8 *)(param_1 + 0x2104);
  memcpy(this + 0x210c,param_1 + 0x210c,0x2000);
  this[0x410c] = param_1[0x410c];
  this[0x410d] = param_1[0x410d];
  this[0x410e] = param_1[0x410e];
  this[0x410f] = param_1[0x410f];
  memcpy(this + 0x4110,param_1 + 0x4110,0x100);
  memcpy(this + 0x4210,param_1 + 0x4210,0x100);
  *(undefined4 *)(this + 0x4310) = *(undefined4 *)(param_1 + 0x4310);
  *(undefined4 *)(this + 0x4314) = *(undefined4 *)(param_1 + 0x4314);
  __size = *(size_t *)(param_1 + 0x2028);
  *(undefined8 *)(this + 0x2020) = 0;
  *(undefined8 *)(this + 0x2038) = 0;
  if (__size != 0) {
    *(size_t *)(this + 0x2028) = __size;
    if (__size < 0x20) {
      __size = 0x20;
    }
    __dest = malloc(__size);
    if (__dest == (void *)0x0) {
      ErrorHandler::MemoryError();
    }
    __n = *(size_t *)(param_1 + 0x2028);
    *(void **)(this + 0x2020) = __dest;
    *(size_t *)(this + 0x2030) = __size;
    if (__n != 0) {
      memcpy(__dest,*(void **)(param_1 + 0x2020),__n);
      return this;
    }
  }
  return this;
}


