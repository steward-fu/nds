/*
 * Ghidra decompilation
 *
 * Function : FUN_080d3340
 * Address  : 080d3340
 * Program  : drastic16
 */


undefined * FUN_080d3340(undefined4 param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)FUN_080d30a4(param_2 + 0x4a8c);
  if (puVar1 != (undefined *)0x0) {
    *puVar1 = 1;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = *param_4;
    *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(param_4 + 1);
    *(undefined4 *)(puVar1 + 8) = param_1;
    *(undefined **)(param_3 + 2) = puVar1;
  }
  return puVar1;
}


