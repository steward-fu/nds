/*
 * Ghidra decompilation
 *
 * Function : FUN_0805d97c
 * Address  : 0805d97c
 * Program  : drastic16
 */


void FUN_0805d97c(char *param_1)

{
  FILE *__s;
  int iVar1;
  size_t __size;
  undefined auStack_94 [82];
  undefined local_42;
  undefined local_41;
  undefined local_40;
  undefined local_3f;
  undefined local_3e;
  undefined local_3d;
  undefined local_3c;
  undefined local_3b;
  undefined local_3a;
  undefined local_39;
  undefined local_38;
  undefined local_37;
  char local_36;
  undefined local_35;
  undefined local_34;
  undefined local_33;
  undefined local_32;
  undefined local_31;
  undefined local_30;
  undefined local_2f;
  undefined local_2e;
  undefined local_2d;
  undefined local_2c;
  undefined local_2b;
  undefined4 local_2a;
  undefined4 local_26;
  undefined4 local_22;
  undefined4 local_1e;
  
  if (*(int *)(param_1 + 0x414) != 0) {
    iVar1 = *(int *)(param_1 + 0x414) + -1;
    *(int *)(param_1 + 0x414) = iVar1;
    if ((iVar1 == 0) && (*param_1 != '\0')) {
      iVar1 = *(int *)(param_1 + 0x408);
      __s = fopen(param_1,"wb");
      __size = iVar1 + 1;
      if (__s == (FILE *)0x0) {
        puts("  Failed to open file for writing.");
      }
      else {
        puts("Saving backup data file.");
        fwrite(*(void **)(param_1 + 0x40c),__size,1,__s);
        memcpy(auStack_94,
               "|<--Snip above here to create a raw sav by excluding this DeSmuME savedata footer:",
               0x52);
        local_36 = param_1[0x41c];
        local_3a = 0;
        local_42 = (undefined)__size;
        local_39 = 0;
        local_38 = 0;
        local_2a._0_1_ = '|';
        local_2a._1_1_ = '-';
        local_2a._2_1_ = 'D';
        local_2a._3_1_ = 'E';
        local_26._0_1_ = 'S';
        local_26._1_1_ = 'M';
        local_26._2_1_ = 'U';
        local_26._3_1_ = 'M';
        local_22._0_1_ = 'E';
        local_22._1_1_ = ' ';
        local_22._2_1_ = 'S';
        local_22._3_1_ = 'A';
        local_1e._0_1_ = 'V';
        local_1e._1_1_ = 'E';
        local_1e._2_1_ = '-';
        local_1e._3_1_ = '|';
        local_37 = 0;
        local_35 = 0;
        local_34 = 0;
        local_33 = 0;
        local_2e = 0;
        local_2d = 0;
        local_2c = 0;
        local_2b = 0;
        local_41 = (undefined)(__size >> 8);
        local_40 = (undefined)(__size >> 0x10);
        local_3f = (undefined)(__size >> 0x18);
        local_3e = local_42;
        local_3d = local_41;
        local_3c = local_40;
        local_3b = local_3f;
        local_32 = local_42;
        local_31 = local_41;
        local_30 = local_40;
        local_2f = local_3f;
        fwrite(auStack_94,0x7a,1,__s);
        fclose(__s);
      }
    }
  }
  return;
}


