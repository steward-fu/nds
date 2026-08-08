/*
 * Ghidra decompilation
 *
 * Function : FUN_0809bc40
 * Address  : 0809bc40
 * Program  : drastic16
 */


void FUN_0809bc40(int param_1,int param_2)

{
  code *pcVar1;
  
  (**(code **)(param_2 + 4))(param_2,*(undefined4 *)(param_1 + 0x10));
  pcVar1 = *(code **)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x10) = 0;
  (*pcVar1)(param_2,*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


