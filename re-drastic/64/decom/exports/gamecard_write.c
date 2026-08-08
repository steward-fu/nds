/*
 * Ghidra decompilation
 *
 * Function : gamecard_write
 * Address  : 00170780
 * Program  : drastic64
 */


void gamecard_write(long param_1,undefined4 param_2)

{
  int iVar1;
  ssize_t sVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined4 local_4;
  
  local_4 = param_2;
  if ((*(char *)(param_1 + 0x2da7) != '\0') && (*(char *)(param_1 + 0x2da8) != '\0')) {
    backup_nand_write(param_1 + 0x968);
    return;
  }
  if (*(int *)(param_1 + 0x940) != 0) {
    sVar2 = write(*(int *)(param_1 + 0x93c),&local_4,4);
    if (sVar2 < 0) {
      puts("ERROR: DLDI write failed");
    }
    iVar1 = *(int *)(param_1 + 0x940) + -1;
    *(int *)(param_1 + 0x940) = iVar1;
    if ((iVar1 == 0) &&
       (*(uint *)(*(long *)(param_1 + 0x928) + 0x1a4) =
             *(uint *)(*(long *)(param_1 + 0x928) + 0x1a4) & 0x7f7fffff,
       (*(uint *)(*(long *)(param_1 + 0x928) + 0x1a0) >> 0xe & 1) != 0)) {
      lVar5 = *(long *)(nds_system + *(long *)(param_1 + 0x918) + 0x10cddd0);
      uVar3 = *(uint *)(lVar5 + 0x214) | 0x80000;
      *(uint *)(lVar5 + 0x214) = uVar3;
      lVar4 = *(long *)(param_1 + 0x918);
      if ((*(uint *)(nds_system + lVar4 + 0x10cde60) & 6) == 0) {
        uVar3 = -*(int *)(lVar5 + 0x208) & uVar3 & *(uint *)(lVar5 + 0x210);
        *(uint *)(nds_system + lVar4 + 0x10cde58) = uVar3;
      }
      else {
        uVar3 = *(uint *)(nds_system + lVar4 + 0x10cde58);
      }
      if (uVar3 != 0) {
        *(uint *)(nds_system + lVar4 + 0x10cdff8) = *(uint *)(nds_system + lVar4 + 0x10cdff8) | 2;
      }
    }
  }
  return;
}


