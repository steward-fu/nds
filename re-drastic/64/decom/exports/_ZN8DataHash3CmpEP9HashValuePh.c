/*
 * Ghidra decompilation
 *
 * Function : _ZN8DataHash3CmpEP9HashValuePh
 * Address  : 001c8e80
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DataHash::Cmp(HashValue*, unsigned char*) */

void __thiscall DataHash::Cmp(DataHash *this,HashValue *param_1,uchar *param_2)

{
  int iVar1;
  bool bVar2;
  int local_30;
  uint local_2c;
  undefined4 uStack_28;
  long local_24;
  long local_1c;
  long local_14;
  long local_8;
  
  local_30 = *(int *)this;
  local_8 = ___stack_chk_guard;
  if (local_30 == 1) {
    local_2c = *(uint *)(this + 4);
    if (param_2 != (uchar *)0x0) goto LAB_001c8ed4;
LAB_001c8ee8:
    iVar1 = *(int *)param_1;
    if (iVar1 != 0) {
      if ((iVar1 != 1 || local_30 != 1) && (local_30 != 2 || iVar1 != 2)) {
        bVar2 = local_30 == 3 && iVar1 == 3;
        if (bVar2) {
          if ((((CONCAT44(uStack_28,local_2c) == *(long *)(param_1 + 4)) &&
               (local_24 == *(long *)(param_1 + 0xc))) && (local_1c == *(long *)(param_1 + 0x14)))
             && (local_14 == *(long *)(param_1 + 0x1c))) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
        }
        goto LAB_001c8f1c;
      }
LAB_001c8f90:
      bVar2 = local_2c == *(uint *)(param_1 + 4);
      goto LAB_001c8f1c;
    }
  }
  else {
    if (local_30 == 2) {
      local_2c = ~*(uint *)(this + 4);
      if (param_2 != (uchar *)0x0) goto LAB_001c8ed4;
      if (*(int *)param_1 == 0) goto LAB_001c8f60;
      if (*(int *)param_1 != 2) {
        bVar2 = false;
        goto LAB_001c8f1c;
      }
      goto LAB_001c8f90;
    }
    if (local_30 == 3) {
      Result(this,(HashValue *)&local_30);
    }
    if (param_2 != (uchar *)0x0) {
LAB_001c8ed4:
      ConvertHashToMAC((HashValue *)&local_30,param_2);
    }
    if (local_30 != 0) goto LAB_001c8ee8;
  }
LAB_001c8f60:
  bVar2 = true;
LAB_001c8f1c:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2,local_8 - ___stack_chk_guard,0);
  }
  return;
}


