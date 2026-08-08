/*
 * Ghidra decompilation
 *
 * Function : ipc_receive
 * Address  : 00129d00
 * Program  : drastic64
 */


undefined4 ipc_receive(long *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar5 = param_1[2];
  if (-1 < *(char *)(lVar5 + 0x185)) {
    return 0;
  }
  if ((*(byte *)((long)param_1 + 0x5a) & 1) == 0) {
    plVar7 = (long *)param_1[1];
    bVar3 = *(byte *)((long)param_1 + 0x5a) & 0xfd;
    bVar1 = *(char *)(param_1 + 0xb) + 1U & 0xf;
    lVar6 = plVar7[2];
    if (*(byte *)((long)param_1 + 0x59) == bVar1) {
      bVar3 = bVar3 | 1;
    }
    uVar2 = *(undefined4 *)((long)param_1 + (ulong)*(byte *)(param_1 + 0xb) * 4 + 0x18);
    *(byte *)(param_1 + 0xb) = bVar1;
    *(byte *)((long)param_1 + 0x5a) = bVar3;
    *(byte *)(lVar6 + 0x184) = *(byte *)(lVar6 + 0x184) & 0xfd;
    if ((*(byte *)((long)param_1 + 0x5a) & 1) != 0) {
      *(byte *)(lVar5 + 0x185) = *(byte *)(lVar5 + 0x185) | 1;
      bVar3 = *(byte *)(lVar6 + 0x184);
      *(byte *)(lVar6 + 0x184) = bVar3 | 1;
      if ((bVar3 >> 1 & 1) != 0) {
        lVar5 = *param_1;
        if (*(int *)(lVar5 + 0x210c) == 1) {
          *(uint *)(lVar5 + 0x22a8) = *(uint *)(lVar5 + 0x22a8) | 4;
        }
        lVar5 = *(long *)(*plVar7 + 0x2080);
        uVar4 = *(uint *)(lVar5 + 0x214) | 0x20000;
        *(uint *)(lVar5 + 0x214) = uVar4;
        if ((*(uint *)(*plVar7 + 0x2110) & 6) == 0) {
          *(uint *)(*plVar7 + 0x2108) = -*(int *)(lVar5 + 0x208) & uVar4 & *(uint *)(lVar5 + 0x210);
        }
      }
    }
    return uVar2;
  }
  *(byte *)(lVar5 + 0x185) = *(byte *)(lVar5 + 0x185) | 0x40;
  return 0;
}


