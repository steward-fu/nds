/*
 * Ghidra decompilation
 *
 * Function : geometry_backface_test_single
 * Address  : 0015ae50
 * Program  : drastic64
 */


void geometry_backface_test_single(int *param_1,uint param_2,char *param_3)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = (long)param_1[4] * (long)param_1[param_2 + 1] - (long)param_1[5] * (long)param_1[param_2];
  uVar4 = (long)*param_1 * (long)param_1[5] - (long)param_1[1] * (long)param_1[4];
  uVar3 = (long)*param_1 * (long)param_1[param_2 + 1] - (long)param_1[1] * (long)param_1[param_2];
  lVar6 = ((uVar5 & 0xffffffff) * (long)param_1[3] +
          (uVar4 & 0xffffffff) * (long)param_1[param_2 + 3]) -
          (uVar3 & 0xffffffff) * (long)param_1[7];
  lVar2 = ((((long)uVar5 >> 0x20) * (long)param_1[3] +
           ((long)uVar4 >> 0x20) * (long)param_1[param_2 + 3]) -
          ((long)uVar3 >> 0x20) * (long)param_1[7]) + (lVar6 >> 0x20);
  cVar1 = '\x01' - ((char)~(byte)((ulong)lVar2 >> 0x38) >> 7);
  if ((int)lVar6 == 0 && lVar2 == 0) {
    cVar1 = '\x03';
  }
  *param_3 = cVar1;
  return;
}


