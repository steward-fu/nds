/*
 * Ghidra decompilation
 *
 * Function : findlabel
 * Address  : 001fbf90
 * Program  : drastic64
 */


undefined8 findlabel(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  byte bVar4;
  long *plVar5;
  
  iVar2 = *(int *)(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 8);
  lVar3 = *(long *)(param_1 + 0x58);
  lVar1 = *(long *)(lVar3 + 0x10) + (long)param_2 * 0x18;
  if (iVar2 < *(int *)(lVar3 + 0x28)) {
    plVar5 = (long *)(*(long *)(lVar3 + 0x20) + (long)iVar2 * 0x18);
    do {
      if (*plVar5 == *(long *)(*(long *)(lVar3 + 0x10) + (long)param_2 * 0x18)) {
        bVar4 = *(byte *)(plVar5 + 2);
        if (bVar4 < *(byte *)(lVar1 + 0x10)) {
          luaK_patchclose(*(long *)(param_1 + 0x30),*(undefined4 *)(lVar1 + 8),bVar4);
          bVar4 = *(byte *)(plVar5 + 2);
        }
        closegoto_isra_0(param_1,param_2,*(undefined4 *)(plVar5 + 1),bVar4);
        return 1;
      }
      plVar5 = plVar5 + 3;
    } while (plVar5 != (long *)(*(long *)(lVar3 + 0x20) + 0x18 +
                               ((ulong)(uint)((*(int *)(lVar3 + 0x28) + -1) - iVar2) + (long)iVar2)
                               * 0x18));
  }
  return 0;
}


