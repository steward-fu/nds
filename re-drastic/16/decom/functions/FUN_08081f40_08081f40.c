/*
 * Ghidra decompilation
 *
 * Function : FUN_08081f40
 * Address  : 08081f40
 * Program  : drastic16
 */


void FUN_08081f40(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  int local_18 [2];
  
  iVar1 = FUN_080800fc(param_1,0xe,0,local_18);
  *(undefined *)(param_1 + iVar1 * 8 + 0x406) = 1;
  if ((param_3 == 0xe) || (local_18[0] == 0)) {
    puVar2 = *(uint **)(param_1 + 0x4ac);
  }
  else {
    puVar2 = *(uint **)(param_1 + 0x4ac) + 1;
    **(uint **)(param_1 + 0x4ac) = iVar1 << 0xc | 0xe51b001c;
  }
  *puVar2 = param_2 & 0xfff | 0x3000000 | param_3 << 0x1c | ((param_2 << 0x10) >> 0x1c) << 0x10 |
            iVar1 << 0xc;
  *(uint **)(param_1 + 0x4ac) = puVar2 + 1;
  if (param_2 >> 0x10 != 0) {
    puVar2[1] = param_3 << 0x1c | (param_2 >> 0x1c) << 0x10 | 0x3400000 | param_2 >> 0x10 & 0xfff |
                iVar1 << 0xc;
    *(uint **)(param_1 + 0x4ac) = puVar2 + 2;
  }
  return;
}


