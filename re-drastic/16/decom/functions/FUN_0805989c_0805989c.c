/*
 * Ghidra decompilation
 *
 * Function : FUN_0805989c
 * Address  : 0805989c
 * Program  : drastic16
 */


void FUN_0805989c(int param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = 0x10;
  puVar2 = (undefined8 *)(param_1 + 0x40098);
  do {
    iVar1 = iVar1 + -1;
    *(undefined4 *)(puVar2 + 3) = 0;
    *(undefined4 *)((int)puVar2 + 0x1c) = 0;
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    *(undefined2 *)(puVar2 + 5) = 0;
    *(undefined2 *)((int)puVar2 + 0x2a) = 0;
    *(undefined2 *)((int)puVar2 + 0x2c) = 0;
    *(undefined *)((int)puVar2 + 0x34) = 0;
    *(undefined *)((int)puVar2 + 0x31) = 3;
    *(undefined *)((int)puVar2 + 0x32) = 0;
    puVar2 = puVar2 + 0x17;
  } while (iVar1 != 0);
  FUN_0807797c(param_1);
  *(undefined8 *)(param_1 + 0x40be0) = 0;
  *(undefined *)(param_1 + 0x40bb0) = 0;
  *(undefined *)(param_1 + 0x40bd0) = 0;
  if (DAT_081c5058 == 0) {
    return;
  }
  snd_pcm_close();
  DAT_081c5058 = 0;
  return;
}


