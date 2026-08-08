/*
 * Ghidra decompilation
 *
 * Function : _ZN7RarTime8GetLocalEP12RarLocalTime
 * Address  : 001c2730
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RarTime::GetLocal(RarLocalTime*) */

void __thiscall RarTime::GetLocal(RarTime *this,RarLocalTime *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  tm *ptVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong local_10;
  long local_8;
  
  local_10 = (*(long *)this + 0xfe624e212ac18000U) / 10000000;
  local_8 = ___stack_chk_guard;
  ptVar4 = localtime((time_t *)&local_10);
  uVar5._0_4_ = ptVar4->tm_mon;
  uVar5._4_4_ = ptVar4->tm_year;
  uVar5 = NEON_rev64(uVar5,4);
  bVar3 = local_8 == ___stack_chk_guard;
  *(ulong *)param_1 = CONCAT44((int)((ulong)uVar5 >> 0x20) + 1,(int)uVar5 + 0x76c);
  uVar7._0_4_ = ptVar4->tm_sec;
  uVar7._4_4_ = ptVar4->tm_min;
  uVar6._0_4_ = ptVar4->tm_hour;
  uVar6._4_4_ = ptVar4->tm_mday;
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar7 = NEON_rev64(uVar7,4);
  uVar5 = NEON_rev64(uVar6,4);
  *(undefined8 *)(param_1 + 8) = uVar5;
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  iVar1 = ptVar4->tm_wday;
  iVar2 = ptVar4->tm_yday;
  *(int *)(param_1 + 0x1c) = iVar1;
  *(int *)(param_1 + 0x20) = iVar2;
  if (bVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2,iVar1,0);
}


