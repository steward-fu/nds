/*
 * Ghidra decompilation
 *
 * Function : FUN_0805c25c
 * Address  : 0805c25c
 * Program  : drastic16
 */


void FUN_0805c25c(int param_1,int param_2)

{
  char acStack_410 [1028];
  
  sprintf(acStack_410,"%s%cgame_database.xml",param_2 + 0x81c30,0x2f);
  FUN_0805e6dc(param_1,acStack_410);
  sprintf(acStack_410,"%s%cusrcheat.dat",param_2 + 0x82030,0x2f);
  FUN_080683a4(param_1 + 0x14,acStack_410);
  *(int *)(param_1 + 0x880) = param_2;
  *(undefined4 *)(param_1 + 0x884) = 0;
  *(int *)(param_1 + 0x888) = param_2 + 0x25c6760;
  *(int *)(param_1 + 0x8a4) = param_2 + 0x26a7de0;
  *(int *)(param_1 + 0x8a0) = param_2 + 0x26a7d58;
  *(undefined4 *)(param_1 + 0x898) = 0xffffffff;
  return;
}


