/*
 * Ghidra decompilation
 *
 * Function : FUN_080c91ec
 * Address  : 080c91ec
 * Program  : drastic16
 */


void FUN_080c91ec(int param_1)

{
  uint local_c;
  
  for (local_c = 0; local_c < 0x100; local_c = local_c + 1) {
    *(short *)(param_1 + (local_c + 0x282c) * 2 + 2) = (short)((local_c & 0xffff) << 8);
    *(undefined2 *)(param_1 + (local_c + 0x262c) * 2 + 2) =
         *(undefined2 *)(param_1 + (local_c + 0x282c) * 2 + 2);
    *(short *)(param_1 + (local_c + 0x272c) * 2 + 2) = (short)local_c;
    *(short *)(param_1 + (local_c + 0x292c) * 2 + 2) = (short)((-(local_c & 0xffff) & 0xffff) << 8);
  }
  memset((void *)(param_1 + 0x545a),0,0x100);
  memset((void *)(param_1 + 0x555a),0,0x100);
  memset((void *)(param_1 + 0x565a),0,0x100);
  FUN_080c9388(param_1,param_1 + 0x505a,param_1 + 0x555a);
  return;
}


