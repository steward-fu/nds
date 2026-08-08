/*
 * Ghidra decompilation
 *
 * Function : FUN_080cdcfc
 * Address  : 080cdcfc
 * Program  : drastic16
 */


void FUN_080cdcfc(int param_1,char param_2)

{
  if (param_2 != '\x01') {
    *(undefined *)(param_1 + 0xe674) = 0;
    memset((void *)(param_1 + 0xe4c0),0,0x1ae);
    *(undefined4 *)(param_1 + 0xe4bc) = 2;
    *(undefined4 *)(param_1 + 0xe670) = 0;
    FUN_080cdd84(param_1);
  }
  return;
}


