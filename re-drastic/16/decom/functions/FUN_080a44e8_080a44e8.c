/*
 * Ghidra decompilation
 *
 * Function : FUN_080a44e8
 * Address  : 080a44e8
 * Program  : drastic16
 */


int * FUN_080a44e8(int *param_1,void *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  FILE *pFVar3;
  int *piVar4;
  int *piVar5;
  code *pcVar6;
  undefined8 uVar7;
  
  if (param_3 != (int *)0x0) {
    if ((param_1[3] == 1) && (param_1[1] == 0)) {
      iVar2 = dup(1);
      pFVar3 = fdopen(iVar2,"w");
      param_1[1] = (int)pFVar3;
    }
    while( true ) {
      piVar4 = (int *)fwrite(param_2,1,(size_t)param_3,(FILE *)param_1[1]);
      piVar5 = piVar4;
      if ((piVar4 == param_3) && (piVar5 = (int *)ferror((FILE *)param_1[1]), piVar5 == (int *)0x0))
      {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (((bVar1) || (*(char *)(param_1 + 5) == '\0')) || (param_1[3] != 0)) goto LAB_080a46b4;
      iVar2 = FUN_080b6fec(&DAT_081cd0a0,param_1 + 6,0);
      if (iVar2 == 0) break;
      clearerr((FILE *)param_1[1]);
      if ((piVar4 < param_3) && (0 < (int)piVar4)) {
        pcVar6 = *(code **)(*param_1 + 0xc);
        uVar7 = (**(code **)(*param_1 + 0x10))(param_1);
        (*pcVar6)(param_1,0,(int)(int *)uVar7 - (int)piVar4,
                  (int)((ulonglong)uVar7 >> 0x20) -
                  (((int)piVar4 >> 0x1f) + (uint)((int *)uVar7 < piVar4)),0);
      }
    }
    piVar5 = (int *)FUN_080b6fc0(&DAT_081cd0a0,0,param_1 + 6);
LAB_080a46b4:
    *(undefined *)(param_1 + 2) = 1;
    param_1 = piVar5;
  }
  return param_1;
}


