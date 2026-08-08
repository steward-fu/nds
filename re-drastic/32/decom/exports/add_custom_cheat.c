/*
 * Ghidra decompilation
 *
 * Function : add_custom_cheat
 * Address  : 080a2b44
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 add_custom_cheat(cheat_directory_struct *cheat_directory,char *cheat_name,u32 *cheat_data,
                    u32 cheat_data_length)

{
  size_t __n;
  u32 cheat_name_length;
  cheat_struct *pcVar1;
  u8 *puVar2;
  char *__dest;
  u32 *__dest_00;
  u32 uVar3;
  u32 num_custom_cheats;
  size_t __size;
  cheat_struct *add_cheat;
  
  __n = strlen(cheat_name);
  uVar3 = cheat_directory->num_custom_cheats;
  cheat_name_length = (u32)cheat_directory->custom_cheats;
  __size = uVar3 + 1;
  pcVar1 = (cheat_struct *)realloc((void *)cheat_name_length,__size * 0x18);
  cheat_directory->custom_cheats = pcVar1;
  puVar2 = (u8 *)realloc(cheat_directory->custom_cheat_enables,__size);
  pcVar1 = cheat_directory->custom_cheats;
  cheat_directory->custom_cheat_enables = puVar2;
  __dest = (char *)malloc(__n + 1);
  pcVar1[uVar3].name = __dest;
  memcpy(__dest,cheat_name,__n);
  pcVar1[uVar3].name[__n] = '\0';
  __dest_00 = (u32 *)malloc(cheat_data_length << 2);
  pcVar1[uVar3].data = __dest_00;
  memcpy(__dest_00,cheat_data,cheat_data_length << 2);
  puVar2 = cheat_directory->custom_cheat_enables;
  pcVar1[uVar3].note = (char *)0x0;
  pcVar1[uVar3].data_length = cheat_data_length;
  pcVar1[uVar3].folder_id = 0xffffffff;
  pcVar1[uVar3].enable_ptr = puVar2 + uVar3;
  puVar2[uVar3] = '\0';
  cheat_directory->num_custom_cheats = __size;
  return 0;
}


