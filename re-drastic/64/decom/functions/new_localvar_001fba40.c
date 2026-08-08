/*
 * Ghidra decompilation
 *
 * Function : new_localvar
 * Address  : 001fba40
 * Program  : drastic64
 */


void new_localvar(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar6;
  long *plVar7;
  short sVar8;
  long *plVar9;
  undefined8 *puVar5;
  
  plVar7 = *(long **)(param_1 + 0x30);
  sVar8 = *(short *)(plVar7 + 7);
  lVar6 = *plVar7;
  plVar9 = *(long **)(param_1 + 0x58);
  iVar1 = *(int *)(lVar6 + 0x24);
  lVar3 = *(long *)(lVar6 + 0x50);
  if (iVar1 <= sVar8) {
    lVar3 = luaM_growaux_(*(undefined8 *)(param_1 + 0x38),lVar3,lVar6 + 0x24,0x10,0x7fff,
                          "local variables");
    iVar2 = *(int *)(lVar6 + 0x24);
    *(long *)(lVar6 + 0x50) = lVar3;
    if (iVar1 < iVar2) {
      puVar4 = (undefined8 *)(lVar3 + (long)iVar1 * 0x10);
      do {
        puVar5 = puVar4 + 2;
        *puVar4 = 0;
        puVar4 = puVar5;
      } while ((undefined8 *)
               (lVar3 + ((ulong)(uint)((iVar2 + -1) - iVar1) + (long)iVar1 + 1) * 0x10) != puVar5);
    }
    sVar8 = *(short *)(plVar7 + 7);
  }
  *(long *)(lVar3 + (-((ulong)(long)sVar8 >> 0x1f & 1) & 0xfffffff000000000 |
                    ((long)sVar8 & 0xffffffffU) << 4)) = param_2;
  if (((*(byte *)(lVar6 + 9) >> 2 & 1) != 0) && ((*(byte *)(param_2 + 9) & 3) != 0)) {
    luaC_barrier_(*(undefined8 *)(param_1 + 0x38),lVar6,param_2);
    sVar8 = *(short *)(plVar7 + 7);
  }
  iVar2 = *(int *)(plVar9 + 1);
  iVar1 = iVar2 + 1;
  *(short *)(plVar7 + 7) = sVar8 + 1;
  if (iVar1 - *(int *)((long)plVar7 + 0x34) < 0xc9) {
    if (iVar1 < *(int *)((long)plVar9 + 0xc)) {
      *(int *)(plVar9 + 1) = iVar1;
      *(short *)(*plVar9 + (long)iVar2 * 2) = sVar8;
      return;
    }
    lVar3 = luaM_growaux_(*(undefined8 *)(param_1 + 0x38),*plVar9,(long)plVar9 + 0xc,2,0x7fffffff,
                          "local variables");
    iVar1 = *(int *)(plVar9 + 1);
    *plVar9 = lVar3;
    *(int *)(plVar9 + 1) = iVar1 + 1;
    *(short *)(lVar3 + (long)iVar1 * 2) = sVar8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  checklimit_part_0(plVar7,200,"local variables");
}


