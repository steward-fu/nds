/*
 * Ghidra decompilation
 *
 * Function : FUN_0809da94
 * Address  : 0809da94
 * Program  : drastic16
 */


undefined4 FUN_0809da94(undefined4 param_1,int param_2)

{
  undefined auStack_3848 [5120];
  undefined auStack_2448 [5120];
  undefined4 local_1048;
  undefined4 local_1044;
  undefined4 local_103c;
  undefined4 local_1034;
  undefined4 local_1030;
  undefined4 local_102c;
  undefined4 local_1028;
  undefined4 local_1024;
  undefined4 local_1020;
  undefined4 local_c;
  
  memset(auStack_3848,0,0x383c);
  local_c = FUN_0809dd8c(param_1,auStack_3848);
  FUN_080a05bc(param_2,auStack_3848,0x104);
  FUN_080a05bc(param_2 + 0x104,auStack_2448,0x104);
  *(undefined4 *)(param_2 + 0x208) = local_1048;
  *(undefined4 *)(param_2 + 0x20c) = local_1044;
  *(undefined4 *)(param_2 + 0x210) = local_103c;
  *(undefined4 *)(param_2 + 0x214) = local_1034;
  *(undefined4 *)(param_2 + 0x218) = local_1030;
  *(undefined4 *)(param_2 + 0x21c) = local_102c;
  *(undefined4 *)(param_2 + 0x220) = local_1028;
  *(undefined4 *)(param_2 + 0x224) = local_1024;
  *(undefined4 *)(param_2 + 0x228) = local_1020;
  *(undefined *)(param_2 + 0x234) = 0;
  *(undefined *)(param_2 + 0x235) = 0;
  *(undefined *)(param_2 + 0x236) = 0;
  *(undefined *)(param_2 + 0x237) = 0;
  *(undefined *)(param_2 + 0x238) = 0;
  *(undefined *)(param_2 + 0x239) = 0;
  *(undefined *)(param_2 + 0x23a) = 0;
  *(undefined *)(param_2 + 0x23b) = 0;
  return local_c;
}


