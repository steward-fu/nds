/*
 * Ghidra decompilation
 *
 * Function : FUN_080d33dc
 * Address  : 080d33dc
 * Program  : drastic16
 */


ushort * FUN_080d33dc(int param_1,char param_2,ushort *param_3)

{
  char cVar1;
  ushort **ppuVar2;
  ushort *local_128;
  ushort *local_124 [63];
  char local_28;
  char local_27;
  char *local_26;
  uint local_20;
  int local_1c;
  char *local_18;
  ushort **local_14;
  ushort *local_10;
  ushort *local_c;
  
  local_c = *(ushort **)(param_1 + 0x644);
  local_18 = *(char **)(*(int *)(param_1 + 0x650) + 2);
  local_14 = &local_128;
  if (param_2 != '\x01') {
    local_14 = local_124;
    local_128 = *(ushort **)(param_1 + 0x650);
    if (*(int *)(local_c + 4) == 0) goto LAB_080d3558;
  }
  if (param_3 == (ushort *)0x0) goto LAB_080d3480;
  local_c = *(ushort **)(local_c + 4);
  local_10 = param_3;
  while (*(char **)(local_10 + 1) == local_18) {
    ppuVar2 = local_14 + 1;
    *local_14 = local_10;
    local_14 = ppuVar2;
    if (*(int *)(local_c + 4) == 0) goto LAB_080d3558;
LAB_080d3480:
    local_c = *(ushort **)(local_c + 4);
    if (*local_c == 1) {
      local_10 = local_c + 1;
    }
    else {
      local_10 = *(ushort **)(local_c + 2);
      if (*(char *)local_10 != **(char **)(param_1 + 0x650)) {
        do {
          local_10 = local_10 + 3;
        } while (*(char *)local_10 != **(char **)(param_1 + 0x650));
      }
    }
  }
  local_c = *(ushort **)(local_10 + 1);
LAB_080d3558:
  if (local_14 != &local_128) {
    local_28 = *local_18;
    local_26 = local_18 + 1;
    if (*local_c == 1) {
      local_27 = *(char *)((int)local_c + 3);
    }
    else {
      if (local_c <= *(ushort **)(param_1 + 0x4bdc)) {
        return (ushort *)0x0;
      }
      local_10 = *(ushort **)(local_c + 2);
      cVar1 = *(char *)local_10;
      while (cVar1 != local_28) {
        local_10 = local_10 + 3;
        cVar1 = *(char *)local_10;
      }
      local_1c = *(byte *)((int)local_10 + 1) - 1;
      local_20 = ((uint)local_c[1] - (uint)*local_c) - local_1c;
      if (local_20 < (uint)(local_1c * 2)) {
        local_27 = __aeabi_uidiv(local_1c * 2 + local_20 * 3 + -1,local_20 * 2);
        local_27 = local_27 + '\x01';
      }
      else if (local_20 < (uint)(local_1c * 5)) {
        local_27 = '\x02';
      }
      else {
        local_27 = '\x01';
      }
    }
    do {
      local_14 = local_14 + -1;
      local_c = (ushort *)FUN_080d3340(local_c,param_1,*local_14,&local_28);
      if (local_c == (ushort *)0x0) {
        return (ushort *)0x0;
      }
    } while (local_14 != &local_128);
  }
  return local_c;
}


