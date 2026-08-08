/*
 * Ghidra decompilation
 *
 * Function : FUN_0805b6d4
 * Address  : 0805b6d4
 * Program  : drastic16
 */


undefined4 FUN_0805b6d4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_224 [4];
  char acStack_220 [12];
  undefined local_214;
  char acStack_210 [12];
  undefined4 local_204;
  
  uVar2 = 0;
  iVar1 = FUN_08060d5c(param_2,auStack_224,acStack_210,0x20,0);
  if (-1 < iVar1) {
    strncpy(acStack_220,acStack_210,0xc);
    local_214 = 0;
    uVar2 = FUN_0805f474(param_1,local_204,acStack_220);
  }
  return uVar2;
}


