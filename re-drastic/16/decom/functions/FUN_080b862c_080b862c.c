/*
 * Ghidra decompilation
 *
 * Function : FUN_080b862c
 * Address  : 080b862c
 * Program  : drastic16
 */


void FUN_080b862c(int *param_1,undefined4 param_2,undefined *param_3)

{
  int iVar1;
  byte local_1c;
  byte local_1b;
  byte local_1a;
  byte local_19;
  byte local_18;
  byte local_17;
  byte local_16;
  byte local_15;
  byte local_14;
  byte local_13;
  byte local_12;
  byte local_11;
  byte local_10;
  byte local_f;
  byte local_e;
  byte local_d;
  int local_c;
  
  FUN_080b9aec(&local_1c,param_2,param_1 + (*param_1 + 1) * 4 + 1);
  FUN_080b9b6c(param_3,&DAT_081d2bb0 + (uint)local_1c * 4,&DAT_081d2fb0 + (uint)local_f * 4,
               &DAT_081d33b0 + (uint)local_12 * 4,&DAT_081d37b0 + (uint)local_15 * 4);
  FUN_080b9b6c(param_3 + 4,&DAT_081d2bb0 + (uint)local_18 * 4,&DAT_081d2fb0 + (uint)local_1b * 4,
               &DAT_081d33b0 + (uint)local_e * 4,&DAT_081d37b0 + (uint)local_11 * 4);
  FUN_080b9b6c(param_3 + 8,&DAT_081d2bb0 + (uint)local_14 * 4,&DAT_081d2fb0 + (uint)local_17 * 4,
               &DAT_081d33b0 + (uint)local_1a * 4,&DAT_081d37b0 + (uint)local_d * 4);
  FUN_080b9b6c(param_3 + 0xc,&DAT_081d2bb0 + (uint)local_10 * 4,&DAT_081d2fb0 + (uint)local_13 * 4,
               &DAT_081d33b0 + (uint)local_16 * 4,&DAT_081d37b0 + (uint)local_19 * 4);
  iVar1 = *param_1;
  while (local_c = iVar1 + -1, 1 < local_c) {
    FUN_080b9aec(&local_1c,param_3,param_1 + iVar1 * 4 + 1);
    FUN_080b9b6c(param_3,&DAT_081d2bb0 + (uint)local_1c * 4,&DAT_081d2fb0 + (uint)local_f * 4,
                 &DAT_081d33b0 + (uint)local_12 * 4,&DAT_081d37b0 + (uint)local_15 * 4);
    FUN_080b9b6c(param_3 + 4,&DAT_081d2bb0 + (uint)local_18 * 4,&DAT_081d2fb0 + (uint)local_1b * 4,
                 &DAT_081d33b0 + (uint)local_e * 4,&DAT_081d37b0 + (uint)local_11 * 4);
    FUN_080b9b6c(param_3 + 8,&DAT_081d2bb0 + (uint)local_14 * 4,&DAT_081d2fb0 + (uint)local_17 * 4,
                 &DAT_081d33b0 + (uint)local_1a * 4,&DAT_081d37b0 + (uint)local_d * 4);
    FUN_080b9b6c(param_3 + 0xc,&DAT_081d2bb0 + (uint)local_10 * 4,&DAT_081d2fb0 + (uint)local_13 * 4
                 ,&DAT_081d33b0 + (uint)local_16 * 4,&DAT_081d37b0 + (uint)local_19 * 4);
    iVar1 = local_c;
  }
  FUN_080b9aec(&local_1c,param_3,param_1 + 9);
  *param_3 = (&DAT_081d1a90)[local_1c];
  param_3[1] = (&DAT_081d1a90)[local_f];
  param_3[2] = (&DAT_081d1a90)[local_12];
  param_3[3] = (&DAT_081d1a90)[local_15];
  param_3[4] = (&DAT_081d1a90)[local_18];
  param_3[5] = (&DAT_081d1a90)[local_1b];
  param_3[6] = (&DAT_081d1a90)[local_e];
  param_3[7] = (&DAT_081d1a90)[local_11];
  param_3[8] = (&DAT_081d1a90)[local_14];
  param_3[9] = (&DAT_081d1a90)[local_17];
  param_3[10] = (&DAT_081d1a90)[local_1a];
  param_3[0xb] = (&DAT_081d1a90)[local_d];
  param_3[0xc] = (&DAT_081d1a90)[local_10];
  param_3[0xd] = (&DAT_081d1a90)[local_13];
  param_3[0xe] = (&DAT_081d1a90)[local_16];
  param_3[0xf] = (&DAT_081d1a90)[local_19];
  FUN_080b9aec(param_3,param_3,param_1 + 5);
  return;
}


