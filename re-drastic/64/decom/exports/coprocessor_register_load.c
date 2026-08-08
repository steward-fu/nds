/*
 * Ghidra decompilation
 *
 * Function : coprocessor_register_load
 * Address  : 00129710
 * Program  : drastic64
 */


undefined4 coprocessor_register_load(long param_1,int param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 1) {
    if ((param_3 | param_4) == 0) {
      return *(undefined4 *)(param_1 + 0x14);
    }
  }
  else if (param_2 == 9) {
    if (param_3 == 1) {
      if (param_4 == 0) {
        return *(undefined4 *)(param_1 + 0x18);
      }
      if (param_4 == 1) {
        return *(undefined4 *)(param_1 + 0x1c);
      }
    }
  }
  else if ((param_2 == 0) && (param_3 == 0)) {
    if (param_4 != 1) {
      uVar1 = 0x41009561;
      if (param_4 == 2) {
        uVar1 = 0x140180;
      }
      return uVar1;
    }
    return 0xf0d2112;
  }
  return 0;
}


