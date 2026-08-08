/*
 * Ghidra decompilation
 *
 * Function : FUN_080b0f0c
 * Address  : 080b0f0c
 * Program  : drastic16
 */


void FUN_080b0f0c(int param_1,int param_2)

{
  byte bVar1;
  int local_c;
  
  *(undefined *)(param_1 + 0xffe) = 0;
  *(undefined *)(param_1 + 0xffd) = *(undefined *)(param_1 + 0xffe);
  *(undefined *)(param_1 + 0xffc) = *(undefined *)(param_1 + 0xffd);
  for (local_c = 0; *(char *)(param_2 + local_c) != '\0'; local_c = local_c + 1) {
    bVar1 = *(byte *)(param_2 + local_c);
    *(byte *)(param_1 + 0xffc) = *(char *)(param_1 + 0xffc) + bVar1;
    *(byte *)(param_1 + 0xffd) = *(byte *)(param_1 + 0xffd) ^ bVar1;
    *(byte *)(param_1 + 0xffe) = *(char *)(param_1 + 0xffe) + bVar1;
    *(byte *)(param_1 + 0xffe) =
         (byte)((*(byte *)(param_1 + 0xffe) & 0x7f) << 1) |
         (byte)((int)(uint)*(byte *)(param_1 + 0xffe) >> 7);
  }
  return;
}


