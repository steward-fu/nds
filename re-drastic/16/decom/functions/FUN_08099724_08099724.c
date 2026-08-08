/*
 * Ghidra decompilation
 *
 * Function : FUN_08099724
 * Address  : 08099724
 * Program  : drastic16
 */


void FUN_08099724(code **param_1,int param_2)

{
  code *pcVar1;
  
  pcVar1 = FUN_080992c8;
  if (param_2 != 0) {
    pcVar1 = FUN_08099238;
  }
  param_1[1] = (code *)&LAB_0809935c;
  *param_1 = pcVar1;
  param_1[2] = FUN_080993ac;
  param_1[3] = FUN_08099374;
  return;
}


