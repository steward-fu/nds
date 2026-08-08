/*
 * Ghidra decompilation
 *
 * Function : FUN_080dd8f0
 * Address  : 080dd8f0
 * Program  : drastic16
 */


void * FUN_080dd8f0(void *param_1,undefined4 param_2,undefined4 param_3,undefined param_4,
                   undefined4 param_5)

{
  *(undefined4 *)((int)param_1 + 0x1008) = param_2;
  *(undefined4 *)((int)param_1 + 0x100c) = param_3;
  *(undefined *)((int)param_1 + 0x1010) = param_4;
  *(undefined4 *)((int)param_1 + 0x1014) = param_5;
  *(undefined *)((int)param_1 + 0x101c) = 0;
  *(undefined4 *)((int)param_1 + 0x1004) = 0;
  *(undefined4 *)((int)param_1 + 0x1020) = 0;
  memset(param_1,0,0x1000);
  *(undefined4 *)((int)param_1 + 0x1000) = 0;
  *(undefined4 *)((int)param_1 + 0x1018) = 0;
  *(undefined4 *)((int)param_1 + 0x5028) = 0;
  *(undefined4 *)((int)param_1 + 0x7028) = 0;
  return param_1;
}


