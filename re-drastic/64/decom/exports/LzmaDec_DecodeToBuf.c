/*
 * Ghidra decompilation
 *
 * Function : LzmaDec_DecodeToBuf
 * Address  : 001b1980
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int LzmaDec_DecodeToBuf(long param_1,void *param_2,ulong *param_3,long param_4,long *param_5,
                       undefined4 param_6)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  size_t __n;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar8 = *param_5;
  uVar9 = *param_3;
  *param_3 = 0;
  *param_5 = 0;
  do {
    uVar6 = *(ulong *)(param_1 + 0x30);
    uVar3 = *(ulong *)(param_1 + 0x38);
    uVar2 = uVar3 - uVar6;
    uVar7 = uVar6;
    if (uVar6 == uVar3) {
      uVar7 = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      uVar2 = uVar6;
    }
    uVar5 = 0;
    if (uVar9 <= uVar2) {
      uVar3 = uVar9 + uVar7;
      uVar5 = param_6;
    }
    local_10 = lVar8;
    iVar1 = LzmaDec_DecodeToDic(param_1,uVar3,param_4,&local_10,uVar5);
    lVar4 = *(long *)(param_1 + 0x18);
    *param_5 = *param_5 + local_10;
    lVar10 = *(long *)(param_1 + 0x30);
    param_4 = param_4 + local_10;
    __n = lVar10 - uVar7;
    lVar8 = lVar8 - local_10;
    memcpy(param_2,(void *)(lVar4 + uVar7),__n);
    uVar9 = uVar9 + (uVar7 - lVar10);
    *param_3 = *param_3 + __n;
    param_2 = (void *)((long)param_2 + __n);
  } while ((iVar1 == 0) && (__n != 0 && uVar9 != 0));
  if (local_8 - ___stack_chk_guard == 0) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
}


