/*
 * Ghidra decompilation
 *
 * Function : FUN_0805beb0
 * Address  : 0805beb0
 * Program  : drastic16
 */


int FUN_0805beb0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ssize_t sVar4;
  int iVar5;
  uint uVar6;
  int local_10 [2];
  
  iVar2 = *(int *)(param_1 + 0x8b0);
  iVar3 = iVar2;
  if (iVar2 != 0) {
    cVar1 = *(char *)(param_1 + 0xce4);
    if (cVar1 == '\x02') {
      local_10[0] = *(int *)(*(int *)(*(int *)(param_1 + 0x884) + 4) + *(int *)(param_1 + 0x8ac));
      *(int *)(param_1 + 0x8ac) = *(int *)(param_1 + 0x8ac) + 4;
    }
    else if (cVar1 == '\x06') {
      local_10[0] = FUN_0805d7d4(param_1 + 0x8b4);
      iVar2 = *(int *)(param_1 + 0x8b0);
    }
    else if (cVar1 == '\x04') {
      sVar4 = read(*(int *)(param_1 + 0x898),local_10,4);
      if (sVar4 < 0) {
        puts("ERROR: DLDI read failed");
      }
      iVar2 = *(int *)(param_1 + 0x8b0);
    }
    else {
      local_10[0] = *(int *)(param_1 + 0xcd8);
    }
    *(int *)(param_1 + 0x8b0) = iVar2 + -1;
    iVar3 = local_10[0];
    if (iVar2 + -1 == 0) {
      *(uint *)(*(int *)(param_1 + 0x888) + 0x1a4) =
           *(uint *)(*(int *)(param_1 + 0x888) + 0x1a4) & 0x7fffffff;
      if ((*(char *)(param_1 + 0xce4) != '\a') && (*(char *)(param_1 + 0xce7) == '\0')) {
        *(uint *)(*(int *)(param_1 + 0x888) + 0x1a4) =
             *(uint *)(*(int *)(param_1 + 0x888) + 0x1a4) & 0xff7fffff;
      }
      if ((*(uint *)(*(int *)(param_1 + 0x888) + 0x1a0) & 0x4000) != 0) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x880) + 0x15a0c78);
        uVar6 = *(uint *)(iVar2 + 0x214) | 0x80000;
        *(uint *)(iVar2 + 0x214) = uVar6;
        iVar5 = *(int *)(param_1 + 0x880);
        if ((*(byte *)(iVar5 + 0x15a0cfd) & 6) == 0) {
          uVar6 = uVar6 & -*(int *)(iVar2 + 0x208) & *(uint *)(iVar2 + 0x210);
          *(uint *)(iVar5 + 0x15a0cf8) = uVar6;
        }
        else {
          uVar6 = *(uint *)(iVar5 + 0x15a0cf8);
        }
        if (uVar6 != 0) {
          *(uint *)(iVar5 + 0x15a0f74) = *(uint *)(iVar5 + 0x15a0f74) | 2;
        }
      }
    }
  }
  return iVar3;
}


