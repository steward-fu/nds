/*
 * Ghidra decompilation
 *
 * Function : spu_fake_microphone_start
 * Address  : 0016c8b0
 * Program  : drastic64
 */


void spu_fake_microphone_start(long param_1)

{
  *(undefined *)(param_1 + 0x40d40) = 1;
  *(undefined8 *)(param_1 + 0x40d10) = *(undefined8 *)(*(long *)(param_1 + 0x40cf0) + 8);
  return;
}


