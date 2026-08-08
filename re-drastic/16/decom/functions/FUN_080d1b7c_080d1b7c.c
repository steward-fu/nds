/*
 * Ghidra decompilation
 *
 * Function : FUN_080d1b7c
 * Address  : 080d1b7c
 * Program  : drastic16
 */


void FUN_080d1b7c(int param_1,char param_2)

{
  uint uVar1;
  
  if (param_2 != '\x01') {
    memset((void *)(param_1 + 0x54),0,0x10);
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x68);
    memset((void *)(param_1 + 0x94),0,0x4a9c);
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x74);
    uVar1 = *(uint *)(param_1 + 0xe6f4);
    if (0x3fffff < uVar1) {
      uVar1 = 0x400000;
    }
    *(uint *)(param_1 + 0x4b30) = uVar1 & *(uint *)(param_1 + 0xe6f8);
    FUN_080d0ce0(param_1);
  }
  FUN_080d21fc(param_1 + 4);
  *(undefined8 *)(param_1 + 0x4c50) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  memset((void *)(param_1 + 0x80),0,0x14);
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  FUN_080ca740(param_1,param_2);
  FUN_080cdcfc(param_1,param_2);
  return;
}


