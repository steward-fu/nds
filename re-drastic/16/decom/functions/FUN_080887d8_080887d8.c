/*
 * Ghidra decompilation
 *
 * Function : FUN_080887d8
 * Address  : 080887d8
 * Program  : drastic16
 */


void FUN_080887d8(FILE *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined auStack_120 [260];
  
  if (param_2 < param_3) {
    do {
      uVar2 = *param_2;
      FUN_08075790(uVar2,auStack_120,param_2,&PTR_LAB_081019c0,0x50);
      puVar1 = param_2 + 1;
      fprintf(param_1,"  %p: %08x  %s\n",param_2,uVar2,auStack_120);
      param_2 = puVar1;
    } while (puVar1 < param_3);
  }
  return;
}


