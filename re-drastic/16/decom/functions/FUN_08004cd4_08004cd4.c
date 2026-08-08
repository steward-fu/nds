/*
 * Ghidra decompilation
 *
 * Function : FUN_08004cd4
 * Address  : 08004cd4
 * Program  : drastic16
 */


void FUN_08004cd4(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  int iVar8;
  
  if (*(char *)(param_1 + 0x291646e) == '\0') {
    FUN_0801b150();
  }
  iVar2 = DAT_081c4fe4;
  uVar1 = DAT_081c4fe0;
  iVar3 = DAT_081c4fe0 - DAT_081c4fe8;
  iVar4 = DAT_081c4fe4 - (DAT_081c4fec + (uint)(DAT_081c4fe0 < DAT_081c4fe8));
  uVar7 = DAT_081c4fe0;
  iVar8 = DAT_081c4fe4;
  dVar5 = (double)__aeabi_ul2d(iVar3,iVar4,iVar3,iVar4,DAT_081c4fe0,DAT_081c4fe4);
  dVar6 = (double)__aeabi_ul2d(uVar1,iVar2);
  printf("%llu mini hash hits out of %llu accesses (%lf%%)\n",(int)((ulonglong)dVar6 >> 0x20),iVar3,
         iVar4,uVar7,iVar8,(dVar5 * 100.0) / dVar6);
  printf("%llu hash accesses:\n");
  dVar5 = (double)__aeabi_ul2d(DAT_081c4fb8,DAT_081c4fbc);
  dVar6 = (double)__aeabi_ul2d(DAT_081c4fd8,DAT_081c4fdc);
  dVar5 = (dVar5 * 100.0) / dVar6;
  printf(" %lf%% hit in one hop\n",(int)((ulonglong)dVar6 >> 0x20),SUB84(dVar5,0),
         (int)((ulonglong)dVar5 >> 0x20));
  dVar5 = (double)__aeabi_ul2d(DAT_081c4fc0,DAT_081c4fc4);
  dVar6 = (double)__aeabi_ul2d(DAT_081c4fd8,DAT_081c4fdc);
  dVar5 = (dVar5 * 100.0) / dVar6;
  printf(" %lf%% hit in two hops\n",(int)((ulonglong)dVar6 >> 0x20),SUB84(dVar5,0),
         (int)((ulonglong)dVar5 >> 0x20));
  dVar5 = (double)__aeabi_ul2d(DAT_081c4fc8,DAT_081c4fcc);
  dVar6 = (double)__aeabi_ul2d(DAT_081c4fd8,DAT_081c4fdc);
  dVar5 = (dVar5 * 100.0) / dVar6;
  printf(" %lf%% hit in three hops\n",(int)((ulonglong)dVar6 >> 0x20),SUB84(dVar5,0),
         (int)((ulonglong)dVar5 >> 0x20));
  dVar5 = (double)__aeabi_ul2d(DAT_081c4fd0,DAT_081c4fd4);
  dVar6 = (double)__aeabi_ul2d(DAT_081c4fd8,DAT_081c4fdc);
  dVar5 = (dVar5 * 100.0) / dVar6;
  printf(" %lf%% hit in four or more hops\n",(int)((ulonglong)dVar6 >> 0x20),SUB84(dVar5,0),
         (int)((ulonglong)dVar5 >> 0x20));
  FUN_08067798(param_1,"drastic.cf2");
  if (*(char *)(param_1 + 0x82830) != '\0') {
    FUN_0805c170(param_1 + 0x1a0);
  }
  FUN_080790bc(param_1 + 0x155e000);
  FUN_080783e0(param_1 + 0x12f0);
  thunk_FUN_0807b1a4();
                    /* WARNING: Subroutine does not return */
  exit(0);
}


