/*
 * Ghidra decompilation
 *
 * Function : FUN_08004fc0
 * Address  : 08004fc0
 * Program  : drastic16
 */


void FUN_08004fc0(int param_1)

{
  uint local_20;
  int iStack_1c;
  
  FUN_0807a058();
  FUN_0807b7f0(&local_20);
  *(uint *)(param_1 + 0x2916448) = local_20 * 3;
  *(uint *)(param_1 + 0x291644c) =
       iStack_1c * 3 + (uint)CARRY4(local_20,local_20) + (uint)CARRY4(local_20,local_20 * 2);
  *(undefined8 *)(param_1 + 0x2916450) = 0;
  *(undefined *)(param_1 + 0x291646d) = 0;
  *(undefined *)(param_1 + 0x291646a) = 0;
  *(undefined *)(param_1 + 0x291646b) = 0;
  *(undefined *)(param_1 + 0x291646c) = 0;
  *(undefined *)(param_1 + 0x2916468) = 0;
  return;
}


