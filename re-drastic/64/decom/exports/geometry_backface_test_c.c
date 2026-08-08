/*
 * Ghidra decompilation
 *
 * Function : geometry_backface_test_c
 * Address  : 0015e9b0
 * Program  : drastic64
 */


void geometry_backface_test_c(int *param_1,int param_2,ulong param_3,int param_4,char *param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  char *pcVar13;
  ulong uVar14;
  
  if (param_2 != 0) {
    uVar7 = param_4 + 0x10U >> 2;
    pcVar12 = param_5;
    do {
      iVar6 = *(int *)((long)param_1 + (ulong)(param_4 + 0x10U & 0xfffffffc));
      piVar3 = param_1 + (uVar7 + 3);
      uVar14 = (long)param_1[5] * (long)*param_1 - (long)param_1[4] * (long)param_1[1];
      uVar10 = (long)param_1[uVar7 + 1] * (long)param_1[4] - (long)iVar6 * (long)param_1[5];
      uVar9 = (long)param_1[uVar7 + 1] * (long)*param_1 - (long)iVar6 * (long)param_1[1];
      piVar1 = param_1 + 3;
      piVar2 = param_1 + 7;
      lVar11 = ((uVar14 & 0xffffffff) * (long)*piVar3 + (uVar10 & 0xffffffff) * (long)*piVar1) -
               (uVar9 & 0xffffffff) * (long)*piVar2;
      param_1 = (int *)((long)param_1 + (param_3 & 0xfffffffc));
      lVar5 = ((((long)uVar14 >> 0x20) * (long)*piVar3 + ((long)uVar10 >> 0x20) * (long)*piVar1) -
              ((long)uVar9 >> 0x20) * (long)*piVar2) + (lVar11 >> 0x20);
      bVar8 = false;
      if (lVar5 == 0) {
        bVar8 = (int)lVar11 == 0;
      }
      cVar4 = '\x01' - ((char)~(byte)((ulong)lVar5 >> 0x38) >> 7);
      if (bVar8) {
        cVar4 = '\x03';
      }
      pcVar13 = pcVar12 + 1;
      *pcVar12 = cVar4;
      pcVar12 = pcVar13;
    } while (param_5 + (ulong)(param_2 - 1) + 1 != pcVar13);
  }
  return;
}


