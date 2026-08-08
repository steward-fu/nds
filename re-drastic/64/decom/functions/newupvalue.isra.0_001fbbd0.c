/*
 * Ghidra decompilation
 *
 * Function : newupvalue.isra.0
 * Address  : 001fbbd0
 * Program  : drastic64
 */


ulong newupvalue_isra_0(long *param_1,long param_2,int *param_3,undefined4 *param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar9;
  undefined8 *puVar8;
  
  lVar9 = *param_1;
  bVar4 = *(byte *)((long)param_1 + 0x3b);
  iVar2 = *(int *)(lVar9 + 0x10);
  if (bVar4 == 0xff) {
                    /* WARNING: Subroutine does not return */
    checklimit_part_0(param_1,0xff,"upvalues");
  }
  lVar6 = *(long *)(lVar9 + 0x58);
  if (iVar2 <= (int)(uint)bVar4) {
    lVar6 = luaM_growaux_(*(undefined8 *)(param_1[2] + 0x38),lVar6,lVar9 + 0x10,0x10,0xff,"upvalues"
                         );
    iVar3 = *(int *)(lVar9 + 0x10);
    *(long *)(lVar9 + 0x58) = lVar6;
    if (iVar2 < iVar3) {
      puVar7 = (undefined8 *)(lVar6 + (long)iVar2 * 0x10);
      do {
        puVar8 = puVar7 + 2;
        *puVar7 = 0;
        puVar7 = puVar8;
      } while ((undefined8 *)
               (lVar6 + ((ulong)(uint)((iVar3 + -1) - iVar2) + (long)iVar2 + 1) * 0x10) != puVar8);
    }
    bVar4 = *(byte *)((long)param_1 + 0x3b);
  }
  lVar5 = (ulong)bVar4 * 0x10;
  lVar1 = lVar6 + lVar5;
  *(bool *)(lVar1 + 8) = *param_3 == 8;
  *(char *)(lVar1 + 9) = (char)*param_4;
  *(long *)(lVar6 + lVar5) = param_2;
  if (((*(byte *)(lVar9 + 9) >> 2 & 1) != 0) && ((*(byte *)(param_2 + 9) & 3) != 0)) {
    luaC_barrier_(*(undefined8 *)(param_1[2] + 0x38),lVar9,param_2);
    bVar4 = *(byte *)((long)param_1 + 0x3b);
    *(byte *)((long)param_1 + 0x3b) = bVar4 + 1;
    return (ulong)bVar4;
  }
  *(byte *)((long)param_1 + 0x3b) = bVar4 + 1;
  return (ulong)bVar4;
}


