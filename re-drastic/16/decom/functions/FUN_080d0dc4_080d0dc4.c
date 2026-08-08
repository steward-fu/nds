/*
 * Ghidra decompilation
 *
 * Function : FUN_080d0dc4
 * Address  : 080d0dc4
 * Program  : drastic16
 */


void FUN_080d0dc4(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_20;
  size_t local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = 0;
  local_18 = 0;
  while( true ) {
    if ((param_2 <= local_18) || (0x1f < local_14)) {
      if (param_2 <= local_18) {
        return;
      }
      uVar2 = __cxa_allocate_exception(4);
      FUN_080d21c0(uVar2);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(uVar2,std::bad_alloc::typeinfo,std::bad_alloc::~bad_alloc);
    }
    local_1c = param_2 - local_18;
    uVar1 = __aeabi_uidiv(local_1c,0x20 - local_14);
    if (uVar1 < 0x400001) {
      uVar1 = 0x400000;
    }
    else {
      uVar1 = __aeabi_uidiv(local_1c,0x20 - local_14);
    }
    local_20 = (void *)0x0;
    while ((uVar1 <= local_1c && (local_20 = malloc(local_1c), local_20 == (void *)0x0))) {
      local_1c = local_1c - (local_1c >> 5);
    }
    if (local_20 == (void *)0x0) break;
    memset(local_20,0,local_1c);
    *(void **)(param_1 + local_14 * 4) = local_20;
    local_18 = local_18 + local_1c;
    *(uint *)(param_1 + (local_14 + 0x20) * 4) = local_18;
    local_14 = local_14 + 1;
  }
  uVar2 = __cxa_allocate_exception(4);
  FUN_080d21c0(uVar2);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar2,std::bad_alloc::typeinfo,std::bad_alloc::~bad_alloc);
}


