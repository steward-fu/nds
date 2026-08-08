/*
 * Ghidra decompilation
 *
 * Function : gamecard_read
 * Address  : 001705c0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gamecard_read(long param_1)

{
  char cVar1;
  ulong uVar2;
  ssize_t sVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint local_c;
  long local_8;
  
  uVar4 = *(uint *)(param_1 + 0x960);
  uVar2 = (ulong)uVar4;
  local_8 = ___stack_chk_guard;
  if (uVar4 == 0) goto LAB_001705ec;
  cVar1 = *(char *)(param_1 + 0x2da4);
  if (cVar1 == '\x02') {
    local_c = *(uint *)(*(long *)(*(long *)(param_1 + 0x920) + 8) +
                       (ulong)*(uint *)(param_1 + 0x95c));
    uVar2 = (ulong)local_c;
    *(uint *)(param_1 + 0x95c) = *(uint *)(param_1 + 0x95c) + 4;
  }
  else if (cVar1 == '\x06') {
    uVar2 = backup_nand_read(param_1 + 0x968,6,0);
    uVar4 = *(uint *)(param_1 + 0x960);
    local_c = (uint)uVar2;
  }
  else if (cVar1 == '\x04') {
    sVar3 = read(*(int *)(param_1 + 0x93c),&local_c,4);
    if (sVar3 < 0) {
      puts("ERROR: DLDI read failed");
    }
    uVar4 = *(uint *)(param_1 + 0x960);
    uVar2 = (ulong)local_c;
  }
  else {
    local_c = *(uint *)(param_1 + 0x2d98);
    uVar2 = (ulong)local_c;
  }
  *(uint *)(param_1 + 0x960) = uVar4 - 1;
  if (uVar4 - 1 != 0) goto LAB_001705ec;
  *(uint *)(*(long *)(param_1 + 0x928) + 0x1a4) =
       *(uint *)(*(long *)(param_1 + 0x928) + 0x1a4) & 0x7fffffff;
  if (*(char *)(param_1 + 0x2da4) == '\a') {
LAB_00170684:
    lVar5 = *(long *)(param_1 + 0x928);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x928);
    if (*(char *)(param_1 + 0x2da7) == '\0') {
      *(uint *)(lVar5 + 0x1a4) = *(uint *)(lVar5 + 0x1a4) & 0xff7fffff;
      goto LAB_00170684;
    }
  }
  if ((*(uint *)(lVar5 + 0x1a0) >> 0xe & 1) != 0) {
    lVar5 = *(long *)(nds_system + *(long *)(param_1 + 0x918) + 0x10cddd0);
    uVar4 = *(uint *)(lVar5 + 0x214) | 0x80000;
    *(uint *)(lVar5 + 0x214) = uVar4;
    lVar6 = *(long *)(param_1 + 0x918);
    if ((*(uint *)(nds_system + lVar6 + 0x10cde60) & 6) == 0) {
      uVar4 = -*(int *)(lVar5 + 0x208) & uVar4 & *(uint *)(lVar5 + 0x210);
      *(uint *)(nds_system + lVar6 + 0x10cde58) = uVar4;
    }
    else {
      uVar4 = *(uint *)(nds_system + lVar6 + 0x10cde58);
    }
    if (uVar4 != 0) {
      *(uint *)(nds_system + lVar6 + 0x10cdff8) = *(uint *)(nds_system + lVar6 + 0x10cdff8) | 2;
    }
  }
LAB_001705ec:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2,&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
  }
  return;
}


