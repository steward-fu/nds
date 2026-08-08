/*
 * Ghidra decompilation
 *
 * Function : print_cheats
 * Address  : 080a2f64
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void print_cheats(cheat_directory_struct *cheat_directory)

{
  undefined4 *puVar1;
  bool bVar2;
  cheat_folder_struct *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  cheat_struct *current_cheat_1;
  int *piVar8;
  cheat_struct *current_cheat;
  uint uVar9;
  u32 length_remainder;
  uint uVar10;
  char *pcVar11;
  u32 length_remainder_1;
  int iVar12;
  cheat_folder_struct *current_folder;
  char *pcVar13;
  int local_44;
  char *local_40;
  int local_38;
  char *local_30;
  char *local_2c;
  
  if ((cheat_directory->listing_loaded != 0) &&
     (__printf_chk(1,"Cheat listing: \'%s\'\n",(cheat_directory->current_listing).game_title),
     (cheat_directory->current_listing).num_cheats != 0)) {
    local_44 = 0;
    local_40 = (char *)0x0;
    bVar2 = false;
    local_38 = -1;
    local_30 = "  ";
    local_2c = "";
    do {
      piVar8 = (int *)((int)&((cheat_directory->current_listing).cheats)->data + local_44);
      iVar12 = piVar8[4];
      if (local_38 == iVar12) {
        if (!bVar2) goto LAB_080a3260;
        pcVar11 = "  ";
        bVar2 = true;
      }
      else if (iVar12 == -1) {
LAB_080a3260:
        bVar2 = false;
        pcVar11 = local_2c;
        local_38 = iVar12;
      }
      else {
        pcVar3 = (cheat_directory->current_listing).folders;
        bVar2 = true;
        __printf_chk(1,"Folder %s: %s (%x)\n",pcVar3[iVar12].name,pcVar3[iVar12].note,
                     pcVar3[iVar12].type);
        pcVar11 = local_30;
        local_38 = iVar12;
      }
      iVar12 = piVar8[3];
      pcVar13 = "enabled";
      if (*(char *)piVar8[5] == '\0') {
        pcVar13 = "disabled";
      }
      iVar6 = piVar8[2];
      __printf_chk(1,"%sCheat %s: %s (%s %d)\n",pcVar11,piVar8[1],iVar6,pcVar13,iVar12);
      uVar10 = piVar8[3];
      if (uVar10 != 0) {
        uVar5 = 0;
        do {
          uVar10 = uVar10 - uVar5;
          iVar7 = uVar5 << 2;
          uVar9 = 0;
          if (7 < uVar10) {
            uVar10 = 8;
          }
          __printf_chk(1,"%s",pcVar11);
          do {
            uVar9 = uVar9 + 1;
            puVar1 = (undefined4 *)(*piVar8 + iVar7);
            iVar7 = iVar7 + 4;
            __printf_chk(1," %08x",*puVar1,*piVar8,iVar6,pcVar13,iVar12);
          } while (uVar9 < uVar10);
          uVar5 = uVar5 + 8;
          putchar(10);
          uVar10 = piVar8[3];
        } while (uVar5 < uVar10);
      }
      local_44 = local_44 + 0x18;
      local_40 = (char *)((int)local_40 + 1);
    } while (local_40 < (cheat_directory->current_listing).num_cheats);
  }
  if (cheat_directory->num_custom_cheats != 0) {
    local_44 = 0;
    uVar10 = 0;
    local_40 = "disabled";
    do {
      piVar8 = (int *)((int)&cheat_directory->custom_cheats->data + local_44);
      iVar12 = piVar8[3];
      pcVar11 = local_40;
      if (*(char *)piVar8[5] != '\0') {
        pcVar11 = "enabled";
      }
      __printf_chk(1,"Custom cheat \'%s\': (%s %d)\n",piVar8[1],pcVar11,iVar12);
      uVar5 = piVar8[3];
      if (uVar5 != 0) {
        uVar9 = 0;
        do {
          uVar5 = uVar5 - uVar9;
          iVar6 = uVar9 << 2;
          if (7 < uVar5) {
            uVar5 = 8;
          }
          uVar4 = 0;
          do {
            uVar4 = uVar4 + 1;
            puVar1 = (undefined4 *)(*piVar8 + iVar6);
            iVar6 = iVar6 + 4;
            __printf_chk(1," %08x",*puVar1,*piVar8,iVar12);
          } while (uVar4 < uVar5);
          uVar9 = uVar9 + 8;
          putchar(10);
          uVar5 = piVar8[3];
        } while (uVar9 < uVar5);
      }
      uVar10 = uVar10 + 1;
      local_44 = local_44 + 0x18;
    } while (uVar10 < cheat_directory->num_custom_cheats);
  }
  return;
}


