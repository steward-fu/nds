/*
 * Ghidra decompilation
 *
 * Function : execute_arm_branch_op
 * Address  : 00125f80
 * Program  : drastic64
 */


void execute_arm_branch_op(long param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  
  iVar3 = *(int *)(param_1 + 0x23bc);
  iVar1 = (int)((long)(param_2 << 0x28) >> 0x28) + 1;
  if (((uint)(param_2 >> 0x1c) & 0xf) == 0xf) {
    iVar6 = iVar1 * 4 + ((uint)(param_2 >> 0x18) & 1) * 2;
    *(int *)(param_1 + 0x23a8) = iVar3;
    *(uint *)(param_1 + 0x23c0) = *(uint *)(param_1 + 0x23c0) | 0x20;
  }
  else {
    iVar6 = iVar1 * 4;
    if ((*(uint *)(param_1 + 0x23c0) & 0x20) != 0) {
      iVar6 = iVar1 * 2;
    }
    if (((uint)param_2 >> 0x18 & 1) != 0) {
      *(int *)(param_1 + 0x23a8) = iVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x2370);
  *(int *)(param_1 + 0x23bc) = iVar3 + iVar6;
  if (uVar4 + 0xfe000000 < 0x1000000) {
    uVar2 = uVar4 & 0x3fffff;
    lVar5 = **(long **)(param_1 + 0x2260);
    if ((((*(char *)(lVar5 + (ulong)uVar2) == 'h') && (*(char *)(lVar5 + (ulong)(uVar2 + 1)) == 't')
         ) && (*(char *)(lVar5 + (ulong)(uVar2 + 2)) == 't')) &&
       (*(char *)(lVar5 + (ulong)(uVar2 + 3)) == 'p')) {
      __printf_chk(1,"branch w/r0 %08x -> \'%s\': pc %08x, cpu %d\n",(ulong)uVar4,
                   lVar5 + ((ulong)uVar4 & 0x3fffff),iVar3 + iVar6,*(undefined4 *)(param_1 + 0x210c)
                  );
      return;
    }
  }
  return;
}


