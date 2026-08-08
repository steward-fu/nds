/*
 * Ghidra decompilation
 *
 * Function : FUN_080def64
 * Address  : 080def64
 * Program  : drastic16
 */


void FUN_080def64(int **param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined auStack_28 [20];
  int local_14;
  
  if (*(char *)(param_1 + 0x408) != '\x01') {
    uVar5 = (**(code **)(**param_1 + 0x10))(*param_1);
    *(undefined8 *)(param_1 + 0x41a) = uVar5;
    *(undefined *)(param_1 + 0x41c) = 0;
    FUN_080a5148(auStack_28,*param_1);
    (**(code **)(**param_1 + 0xc))(*param_1,*(code **)(**param_1 + 0xc),param_3,param_4,0);
    iVar3 = FUN_080a8970(*param_1);
    if (((iVar3 == 0) || (iVar3 = FUN_0809ee40(*param_1), iVar3 != 3)) ||
       (cVar2 = FUN_080af950(*param_1 + 0x31dc,&DAT_080eedb0), cVar2 != '\x01')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      piVar4 = (int *)(*param_1)[0x43a3];
      param_1[0x40a] = (int *)(*param_1)[0x43a2];
      param_1[0x40b] = piVar4;
      uVar5 = (**(code **)(**param_1 + 0x10))(*param_1);
      *(undefined8 *)(param_1 + 0x40c) = uVar5;
      piVar4 = (int *)(*param_1)[0x39f1];
      param_1[0x40e] = (int *)(*param_1)[0x39f0];
      param_1[0x40f] = piVar4;
      *(undefined *)(param_1 + 0x408) = 1;
    }
    FUN_080a51a0(auStack_28);
    if (bVar1) {
      return;
    }
  }
  if (*(char *)((int)*param_1 + 0xe7fb) != '\0') {
    local_14 = FUN_080b685c(*param_1);
    iVar3 = FUN_080af900(local_14 + 0xa024);
    if (iVar3 == 0) {
      return;
    }
    FUN_080b38d8(param_1 + 6,0,5,local_14 + 0xa024,(int)*param_1 + 0xe801,(int)*param_1 + 0xe811,
                 (*param_1)[0x3a13],(int)*param_1 + 0xe82b,(int)*param_1 + 0xe822);
  }
  *(undefined8 *)(param_1 + 0x410) = 0;
  param_1[0x412] = (int *)0x0;
  param_1[0x413] = (int *)0x0;
  FUN_080afb6c(param_1 + 0x414);
  *(undefined8 *)(param_1 + 0x418) = 0;
  FUN_080df7fc(param_1);
  return;
}


