/*
 * Ghidra decompilation
 *
 * Function : backup_save.part.0
 * Address  : 00171d00
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void backup_save_part_0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  FILE *pFVar6;
  uint uVar7;
  uint *puVar8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined2 local_38;
  uint local_36;
  uint local_32;
  undefined4 local_2e;
  undefined local_2a;
  undefined local_29;
  undefined2 local_28;
  uint local_26;
  undefined8 local_22;
  undefined8 local_1a;
  undefined4 local_12;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = param_1[0x902];
  puVar8 = param_1 + 0x800;
  pFVar6 = fopen((char *)puVar8,"rb+");
  if (pFVar6 == (FILE *)0x0) {
    __printf_chk(1," Couldn\'t open backup file %s. Trying to create.\n",puVar8);
    pFVar6 = fopen((char *)puVar8,"wb");
    fclose(pFVar6);
    pFVar6 = fopen((char *)puVar8,"rb+");
    if (pFVar6 == (FILE *)0x0) {
      __printf_chk(1,"  Failed to open %s for writing.\n",puVar8);
      goto LAB_00171dd0;
    }
  }
  uVar2 = uVar3 + 0x4000;
  puts("Saving backup data file.");
  if (param_1[0x903] != 0) {
    __printf_chk(1," Fixing file size to %d bytes.\n");
    iVar5 = fileno(pFVar6);
    iVar5 = ftruncate(iVar5,(ulong)param_1[0x903]);
    if (iVar5 == 0) {
      param_1[0x903] = 0;
    }
    else {
      puts(" Truncation failed.");
      param_1[0x903] = 0;
    }
  }
  if (uVar2 >> 0xe != 0) {
    uVar7 = 0;
    puVar8 = param_1;
    do {
      uVar1 = uVar7;
      for (uVar4 = *puVar8; uVar4 != 0; uVar4 = uVar4 >> 1) {
        if ((uVar4 & 1) != 0) {
          fseek(pFVar6,(ulong)uVar1,0);
          fwrite((void *)(*(long *)(param_1 + 0x904) + (ulong)uVar1),0x200,1,pFVar6);
        }
        uVar1 = uVar1 + 0x200;
      }
      *puVar8 = 0;
      uVar7 = uVar7 + 0x4000;
      puVar8 = puVar8 + 1;
    } while (uVar7 != (uVar2 & 0xffffc000));
  }
  if (*(char *)((long)param_1 + 0x2427) == '\0') {
    local_2a = *(undefined *)(param_1 + 0x909);
    local_88._0_1_ = '|';
    local_88._1_1_ = '<';
    local_88._2_1_ = '-';
    local_88._3_1_ = '-';
    local_88._4_1_ = 'S';
    local_88._5_1_ = 'n';
    local_88._6_1_ = 'i';
    local_88._7_1_ = 'p';
    uStack_80._0_1_ = ' ';
    uStack_80._1_1_ = 'a';
    uStack_80._2_1_ = 'b';
    uStack_80._3_1_ = 'o';
    uStack_80._4_1_ = 'v';
    uStack_80._5_1_ = 'e';
    uStack_80._6_1_ = ' ';
    uStack_80._7_1_ = 'h';
    local_36 = uVar3 + 1;
    local_78._0_1_ = 'e';
    local_78._1_1_ = 'r';
    local_78._2_1_ = 'e';
    local_78._3_1_ = ' ';
    local_78._4_1_ = 't';
    local_78._5_1_ = 'o';
    local_78._6_1_ = ' ';
    local_78._7_1_ = 'c';
    uStack_70._0_1_ = 'r';
    uStack_70._1_1_ = 'e';
    uStack_70._2_1_ = 'a';
    uStack_70._3_1_ = 't';
    uStack_70._4_1_ = 'e';
    uStack_70._5_1_ = ' ';
    uStack_70._6_1_ = 'a';
    uStack_70._7_1_ = ' ';
    local_68._0_1_ = 'r';
    local_68._1_1_ = 'a';
    local_68._2_1_ = 'w';
    local_68._3_1_ = ' ';
    local_68._4_1_ = 's';
    local_68._5_1_ = 'a';
    local_68._6_1_ = 'v';
    local_68._7_1_ = ' ';
    uStack_60._0_1_ = 'b';
    uStack_60._1_1_ = 'y';
    uStack_60._2_1_ = ' ';
    uStack_60._3_1_ = 'e';
    uStack_60._4_1_ = 'x';
    uStack_60._5_1_ = 'c';
    uStack_60._6_1_ = 'l';
    uStack_60._7_1_ = 'u';
    local_58._0_1_ = 'd';
    local_58._1_1_ = 'i';
    local_58._2_1_ = 'n';
    local_58._3_1_ = 'g';
    local_58._4_1_ = ' ';
    local_58._5_1_ = 't';
    local_58._6_1_ = 'h';
    local_58._7_1_ = 'i';
    uStack_50._0_1_ = 's';
    uStack_50._1_1_ = ' ';
    uStack_50._2_1_ = 'D';
    uStack_50._3_1_ = 'e';
    uStack_50._4_1_ = 'S';
    uStack_50._5_1_ = 'm';
    uStack_50._6_1_ = 'u';
    uStack_50._7_1_ = 'M';
    local_48._0_1_ = 'E';
    local_48._1_1_ = ' ';
    local_48._2_1_ = 's';
    local_48._3_1_ = 'a';
    local_48._4_1_ = 'v';
    local_48._5_1_ = 'e';
    local_48._6_1_ = 'd';
    local_48._7_1_ = 'a';
    uStack_40._0_1_ = 't';
    uStack_40._1_1_ = 'a';
    uStack_40._2_1_ = ' ';
    uStack_40._3_1_ = 'f';
    uStack_40._4_1_ = 'o';
    uStack_40._5_1_ = 'o';
    uStack_40._6_1_ = 't';
    uStack_40._7_1_ = 'e';
    local_38._0_1_ = 'r';
    local_38._1_1_ = ':';
    local_2e = 0;
    local_29 = 0;
    local_28 = 0;
    local_22 = 0x45442d7c00000000;
    local_1a = 0x415320454d554d53;
    local_12 = 0x7c2d4556;
    local_32 = local_36;
    local_26 = local_36;
    fseek(pFVar6,(ulong)local_36,0);
    fwrite(&local_88,0x7a,1,pFVar6);
    puts(" Saving DeSmuME footer.");
    *(undefined *)((long)param_1 + 0x2427) = 1;
  }
  fclose(pFVar6);
LAB_00171dd0:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


