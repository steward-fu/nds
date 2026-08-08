/*
 * Ghidra decompilation
 *
 * Function : FUN_080a0a34
 * Address  : 080a0a34
 * Program  : drastic16
 */


int * FUN_080a0a34(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *local_14;
  uint local_c;
  
  local_14 = param_1;
  while (iVar4 = FUN_080a016c(*local_14), iVar4 != 0) {
    local_14 = local_14 + 1;
  }
  if (*local_14 == 0) {
    local_14 = (int *)0x0;
  }
  else {
    local_c = 0;
    bVar2 = false;
    while( true ) {
      if ((*local_14 == 0) || ((!bVar2 && (cVar3 = FUN_080a016c(*local_14), cVar3 == '\x01')))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      if (*local_14 == 0x22) {
        if (local_14[1] == 0x22) {
          if ((param_2 != 0) && (local_c < param_3 - 1U)) {
            *(undefined4 *)(param_2 + local_c * 4) = 0x22;
            local_c = local_c + 1;
          }
          local_14 = local_14 + 1;
        }
        else {
          bVar2 = (bool)(bVar2 ^ 1);
        }
      }
      else if ((param_2 != 0) && (local_c < param_3 - 1U)) {
        *(int *)(param_2 + local_c * 4) = *local_14;
        local_c = local_c + 1;
      }
      local_14 = local_14 + 1;
    }
    if (param_2 != 0) {
      *(undefined4 *)(param_2 + local_c * 4) = 0;
    }
  }
  return local_14;
}


