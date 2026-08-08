/*
 * Ghidra decompilation
 *
 * Function : coprocessor_register_store
 * Address  : 001297a0
 * Program  : drastic64
 */


void coprocessor_register_store(long *param_1,int param_2,uint param_3,uint param_4,ulong param_5)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 7) {
    if ((param_3 == 0 && param_4 == 4) || (param_3 == 8 && param_4 == 2)) {
      *(undefined4 *)(*param_1 + 0x2110) = 1;
      return;
    }
  }
  else {
    uVar5 = (uint)param_5;
    if (param_2 == 9) {
      if (param_3 == 1) {
        if (param_4 == 0) {
          uVar4 = 0x200 << ((ulong)((uVar5 & 0xfffff03e) >> 1) & 0x1f);
          *(uint *)(param_1 + 3) = uVar5 & 0xfffff03e;
          *(uint *)(param_1 + 4) = uVar5 & 0xfffff000;
          *(uint *)((long)param_1 + 0x2c) = uVar4;
          if (uVar4 < 0x1000) {
            uVar4 = 0x1000;
            *(undefined4 *)((long)param_1 + 0x2c) = 0x1000;
          }
          remap_dtcm(param_1[1],uVar5 & 0xfffff000,uVar4);
          bVar1 = (uint)(*(int *)(param_1 + 4) + *(int *)((long)param_1 + 0x2c)) < 0x4000000;
          cVar2 = *(char *)((long)param_1 + 0x3c);
          *(bool *)((long)param_1 + 0x3c) = bVar1;
          if ((bool)cVar2 != bVar1) {
            __printf_chk(1,"DTCM in mapped memory status changed (to %d)\n");
            return;
          }
        }
        else if (param_4 == 1) {
          *(uint *)((long)param_1 + 0x1c) = uVar5 & 0x3e;
          uVar5 = 0x200 << (ulong)((uVar5 & 0x3e) >> 1);
          if (uVar5 < 0x1000) {
            uVar5 = 0x1000;
            *(undefined4 *)(param_1 + 7) = 0x1000;
          }
          else {
            *(uint *)(param_1 + 7) = uVar5;
          }
          remap_itcm(param_1[1],uVar5);
          return;
        }
      }
    }
    else if ((param_2 == 1) && ((param_3 | param_4) == 0)) {
      uVar4 = *(uint *)((long)param_1 + 0x14);
      if (((uVar4 ^ uVar5) >> 0xd & 1) != 0) {
        __printf_chk(1,"Changing coprocessor exception vector offset to %x\n",
                     ((uint)(param_5 >> 0xd) & 1) * -0x10000);
        uVar4 = *(uint *)((long)param_1 + 0x14);
        param_5 = param_5 & 0xffffffff;
      }
      uVar3 = (uint)param_5 & 0xff085 | uVar4 & 0xfff00f7a;
      uVar7 = NEON_ushl(CONCAT44(uVar3,uVar3),0xffffffeffffffff0,4);
      uVar6 = NEON_ushl(CONCAT44(uVar3,uVar3),0xffffffedffffffee,4);
      uVar5 = (uint)param_5 & 0x2000;
      uVar4 = *(uint *)(param_1 + 2);
      if ((param_5 & 0x2000) != 0) {
        uVar5 = 0xffff0000;
      }
      *(uint *)(param_1 + 2) = uVar5;
      *(uint *)((long)param_1 + 0x14) = uVar3;
      *(ulong *)((long)param_1 + 0x24) = uVar7 & 0x100000001;
      param_1[6] = uVar6 & 0x100000001;
      if (uVar4 != uVar5) {
        __printf_chk(1,"Changing exception vector offset from %08x to %08x\n");
        return;
      }
    }
  }
  return;
}


