/*
 * Ghidra decompilation
 *
 * Function : FUN_080d1774
 * Address  : 080d1774
 * Program  : drastic16
 */


void FUN_080d1774(int param_1,uint param_2,char param_3)

{
  bool bVar1;
  void *__s;
  undefined4 uVar2;
  uint local_28;
  uint local_14;
  
  if (param_2 == 0) {
    FUN_080b6efc(&DAT_081cd0a0);
  }
  local_28 = param_2;
  if (param_2 < 0x40000) {
    local_28 = 0x40000;
  }
  if ((*(uint *)(param_1 + 0xe6f4) < local_28) && (local_28 >> 0x10 < 0x10001)) {
    if ((param_3 == '\0') ||
       ((*(int *)(param_1 + 0x4b34) == 0 && (*(char *)(param_1 + 0x4c38) == '\0')))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    __s = malloc(local_28);
    if ((bVar1) && ((__s == (void *)0x0 || (*(char *)(param_1 + 0x4c38) != '\0')))) {
      uVar2 = __cxa_allocate_exception(4);
      FUN_080d21c0(uVar2);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(uVar2,std::bad_alloc::typeinfo,std::bad_alloc::~bad_alloc);
    }
    if (__s == (void *)0x0) {
      if (local_28 < 0x1000000) {
        uVar2 = __cxa_allocate_exception(4);
        FUN_080d21c0(uVar2);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(uVar2,std::bad_alloc::typeinfo,std::bad_alloc::~bad_alloc);
      }
      FUN_080d0dc4(param_1 + 0x4b38,local_28);
      *(undefined *)(param_1 + 0x4c38) = 1;
    }
    if (*(char *)(param_1 + 0x4c38) != '\x01') {
      memset(__s,0,local_28);
      if (bVar1) {
        for (local_14 = 1; local_14 < *(uint *)(param_1 + 0xe6f4); local_14 = local_14 + 1) {
          *(undefined *)((int)__s + (*(int *)(param_1 + 0x70) - local_14 & local_28 - 1)) =
               *(undefined *)
                (*(int *)(param_1 + 0x4b34) +
                (*(int *)(param_1 + 0x70) - local_14 & *(int *)(param_1 + 0xe6f4) - 1U));
        }
      }
      if (*(int *)(param_1 + 0x4b34) != 0) {
        free(*(void **)(param_1 + 0x4b34));
      }
      *(void **)(param_1 + 0x4b34) = __s;
    }
    *(uint *)(param_1 + 0xe6f4) = local_28;
    *(int *)(param_1 + 0xe6f8) = *(int *)(param_1 + 0xe6f4) + -1;
  }
  return;
}


