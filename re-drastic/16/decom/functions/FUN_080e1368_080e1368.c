/*
 * Ghidra decompilation
 *
 * Function : FUN_080e1368
 * Address  : 080e1368
 * Program  : drastic16
 */


undefined4 FUN_080e1368(int param_1,int *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int *local_10;
  int local_c;
  
  local_c = 25000000;
  local_10 = param_2;
LAB_080e1394:
  do {
    iVar2 = *local_10;
    if (iVar2 != 0x27) {
      if (iVar2 == 0x28) {
        FUN_080e1a54(param_1,local_10[3]);
        return 1;
      }
      if (iVar2 == 0x16) {
        if (0x3ffff < *(uint *)(param_1 + 0x30)) {
          return 1;
        }
        uVar1 = FUN_080e2860(param_1,0,
                             *(int *)(param_1 + 0x10) + (*(uint *)(param_1 + 0x30) & 0x3ffff));
        if (param_3 <= uVar1) {
          return 1;
        }
        local_c = local_c + -1;
        if (local_c < 1) {
          return 0;
        }
        iVar2 = FUN_080e2860(param_1,0,
                             *(int *)(param_1 + 0x10) + (*(uint *)(param_1 + 0x30) & 0x3ffff));
        local_10 = param_2 + iVar2 * 10;
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 4;
        goto LAB_080e1394;
      }
    }
    local_10 = local_10 + 10;
    local_c = local_c + -1;
  } while( true );
}


