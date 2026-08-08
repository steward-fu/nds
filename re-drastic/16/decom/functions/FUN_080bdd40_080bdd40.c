/*
 * Ghidra decompilation
 *
 * Function : FUN_080bdd40
 * Address  : 080bdd40
 * Program  : drastic16
 */


void FUN_080bdd40(int *param_1,int *param_2)

{
  undefined auStack_b5c [2900];
  
  *param_2 = *param_1;
  if (*param_1 == 1) {
    param_2[1] = param_1[1];
  }
  if (*param_1 == 2) {
    param_2[1] = ~param_1[1];
  }
  if (*param_1 == 3) {
    FUN_080be060(auStack_b5c,param_1 + 2);
    FUN_080e3120(auStack_b5c,param_2 + 1);
  }
  return;
}


