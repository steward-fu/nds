/*
 * Ghidra decompilation
 *
 * Function : FUN_080b38d8
 * Address  : 080b38d8
 * Program  : drastic16
 */


undefined4
FUN_080b38d8(int param_1,undefined param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined auStack_288 [128];
  undefined auStack_208 [512];
  
  cVar2 = FUN_080af900(param_4);
  if ((cVar2 == '\x01') && (param_3 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0x9e4) = param_3;
    FUN_080b7660(param_4,auStack_208,0x80);
    FUN_080afbc8(auStack_208,auStack_288,0x80);
    switch(param_3) {
    case 1:
      FUN_080b0f0c(param_1,auStack_288);
      break;
    case 2:
      FUN_080b1024(param_1,auStack_288);
      break;
    case 3:
      FUN_080b15a0(param_1,auStack_288);
      break;
    case 4:
      FUN_080b24ec(param_1,param_2,param_4,auStack_208,param_5);
      break;
    case 5:
      FUN_080b3054(param_1,param_2,param_4,auStack_208,param_5,param_6,param_7,param_8,param_9);
    }
    FUN_080b7588(auStack_288,0x80);
    FUN_080b7588(auStack_208,0x200);
    uVar3 = 1;
  }
  return uVar3;
}


