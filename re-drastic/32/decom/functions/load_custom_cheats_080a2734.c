/*
 * Ghidra decompilation
 *
 * Function : load_custom_cheats
 * Address  : 080a2734
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 load_custom_cheats(cheat_directory_struct *cheat_directory,system_struct *system)

{
  void **ppvVar1;
  byte bVar2;
  int iVar3;
  FILE *__stream;
  FILE *custom_cheat_file;
  s32 sVar4;
  cheat_struct *cheats;
  u8 *cheat_enables;
  char *pcVar5;
  byte *__nptr;
  ushort **ppuVar6;
  ulong uVar7;
  u32 cheat_data_a;
  ulong uVar8;
  u32 cheat_data_b;
  char *closing_bracket_ptr;
  void *pvVar9;
  u8 *puVar10;
  u8 *puVar11;
  u32 *puVar12;
  cheat_struct *current_cheat_1;
  cheat_struct *current_cheat;
  int iVar13;
  size_t __size;
  cheat_struct *pcVar14;
  char *__src;
  uint uVar15;
  u32 cheat_data_allocated;
  size_t __n;
  u32 name_length;
  void *local_53c;
  void *local_538;
  uint local_534;
  char *cheat_file_line_ptr;
  char cheat_file_line [256];
  char custom_cheat_path [1024];
  
  iVar3 = __stack_chk_guard;
  pcVar14 = cheat_directory->custom_cheats;
  if (pcVar14 != (cheat_struct *)0x0) {
    if (cheat_directory->num_custom_cheats != 0) {
      iVar13 = 0;
      uVar15 = 0;
      do {
        uVar15 = uVar15 + 1;
        free(*(void **)((int)&pcVar14->name + iVar13));
        ppvVar1 = (void **)((int)&pcVar14->data + iVar13);
        iVar13 = iVar13 + 0x18;
        free(*ppvVar1);
        pcVar14 = cheat_directory->custom_cheats;
      } while (uVar15 < cheat_directory->num_custom_cheats);
    }
    free(pcVar14);
    free(cheat_directory->custom_cheat_enables);
    cheat_directory->custom_cheats = (cheat_struct *)0x0;
    cheat_directory->custom_cheat_enables = (u8 *)0x0;
    cheat_directory->num_custom_cheats = 0;
  }
  __sprintf_chk(custom_cheat_path,1,0x400,"%s%ccheats%c%s.cht",system->user_root_path,0x2f,0x2f,
                system->gamecard_name);
  __stream = fopen(custom_cheat_path,"rb");
  if (__stream == (FILE *)0x0) {
    __printf_chk(1,"No custom cheat file at %s.\n",custom_cheat_path);
    sVar4 = -1;
  }
  else {
    __size = 0;
    local_53c = malloc(0x300);
    local_538 = malloc(0x20);
    local_534 = 0x20;
    while (pcVar5 = fgets(cheat_file_line,0x100,__stream), pcVar5 != (char *)0x0) {
      __nptr = (byte *)skip_whitespace(cheat_file_line);
      bVar2 = *__nptr;
      cheat_file_line_ptr = (char *)__nptr;
      if (bVar2 == 0x5b) {
        pcVar5 = strrchr((char *)(__nptr + 1),0x5d);
        if (__size != 0) {
          puVar12 = (u32 *)realloc(current_cheat->data,current_cheat->data_length << 2);
          current_cheat->data = puVar12;
        }
        if (pcVar5 == (char *)0x0) {
          __printf_chk(1,
                       "ERROR: Custom cheat file name missing closing \']\' bracket. Stopping load."
                      );
          break;
        }
        current_cheat = (cheat_struct *)((int)local_53c + __size * 0x18);
        __src = cheat_file_line_ptr + 1;
        __n = (int)pcVar5 - (int)__src;
        *(bool *)((int)local_538 + __size) = pcVar5[1] == '+';
        __size = __size + 1;
        cheat_file_line_ptr = __src;
        if (local_534 < __size) {
          local_53c = realloc(local_53c,local_534 * 0x30);
          local_538 = realloc(local_538,local_534 * 2);
          local_534 = local_534 * 2;
        }
        cheat_data_allocated = 0x20;
        pcVar5 = (char *)malloc(__n + 1);
        current_cheat->name = pcVar5;
        pvVar9 = memcpy(pcVar5,__src,__n);
        *(undefined *)((int)pvVar9 + __n) = 0;
        current_cheat->note = (char *)0x0;
        current_cheat->data_length = 0;
        current_cheat->folder_id = 0xffffffff;
        puVar12 = (u32 *)malloc(0x80);
        current_cheat->data = puVar12;
      }
      else {
        ppuVar6 = __ctype_b_loc();
        if (((*ppuVar6)[bVar2] & 8) != 0) {
          if (__size == 0) {
            __printf_chk(1,"ERROR: Custom cheat file started cheat w/o a name. Stopping load.");
            goto LAB_080a2a6c;
          }
          uVar7 = strtoul((char *)__nptr,&cheat_file_line_ptr,0x10);
          cheat_file_line_ptr = skip_whitespace(cheat_file_line_ptr);
          uVar8 = strtoul(cheat_file_line_ptr,&cheat_file_line_ptr,0x10);
          puVar12 = current_cheat->data;
          puVar12[current_cheat->data_length] = uVar7;
          puVar12[current_cheat->data_length + 1] = uVar8;
          uVar15 = current_cheat->data_length + 2;
          current_cheat->data_length = uVar15;
          if (cheat_data_allocated <= uVar15) {
            puVar12 = (u32 *)realloc(puVar12,cheat_data_allocated << 3);
            current_cheat->data = puVar12;
            cheat_data_allocated = cheat_data_allocated << 1;
          }
        }
      }
    }
    if (__size == 0) {
LAB_080a2a6c:
      pcVar14 = (cheat_struct *)realloc(local_53c,0);
      puVar10 = (u8 *)realloc(local_538,0);
      cheat_directory->custom_cheats = pcVar14;
      __size = 0;
      cheat_directory->custom_cheat_enables = puVar10;
      cheat_directory->num_custom_cheats = 0;
    }
    else {
      puVar12 = (u32 *)realloc(current_cheat->data,current_cheat->data_length << 2);
      current_cheat->data = puVar12;
      pcVar14 = (cheat_struct *)realloc(local_53c,__size * 0x18);
      puVar10 = (u8 *)realloc(local_538,__size);
      cheat_directory->custom_cheats = pcVar14;
      puVar11 = puVar10 + __size;
      cheat_directory->custom_cheat_enables = puVar10;
      cheat_directory->num_custom_cheats = __size;
      do {
        pcVar14->enable_ptr = puVar10;
        puVar10 = puVar10 + 1;
        pcVar14 = pcVar14 + 1;
      } while (puVar10 != puVar11);
    }
    __printf_chk(1,"Loaded custom cheat file with %d cheats.\n",__size);
    fclose(__stream);
    set_active_cheats(cheat_directory);
    sVar4 = 0;
  }
  if (iVar3 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return sVar4;
}


