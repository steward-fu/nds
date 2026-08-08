/*
 * Ghidra decompilation
 *
 * Function : load_cheat_directory
 * Address  : 00180db0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 load_cheat_directory(long param_1,char *param_2)

{
  long lVar1;
  FILE *__stream;
  size_t sVar2;
  size_t sVar3;
  void *pvVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_38;
  ulong local_30;
  undefined8 local_28;
  uint local_20;
  long local_18;
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __stream = fopen(param_2,"rb");
  __strcpy_chk(param_1,param_2,0x400);
  *(undefined8 *)(param_1 + 0x428) = 0;
  *(undefined8 *)(param_1 + 0x430) = 0;
  *(undefined4 *)(param_1 + 0x438) = 0;
  if (__stream == (FILE *)0x0) {
    uVar7 = 0xffffffff;
    __printf_chk(1,"Couldn\'t load cheat database file at %s.\n",param_2);
  }
  else {
    sVar2 = fread(&local_18,0xc,1,__stream);
    if (sVar2 == 1) {
      if ((local_18 == 0x7461656843203452) && (local_10 == 0x65646f43)) {
        uVar7 = 0;
        sVar2 = 0;
        fseek(__stream,0x100,0);
        while (sVar3 = fread(&local_38,4,4,__stream), sVar3 == 4) {
          iVar6 = (int)sVar2;
          if ((int)local_30 == 0) {
            *(int *)(param_1 + 0x408) = iVar6;
            pvVar4 = malloc(sVar2 << 4);
            *(void **)(param_1 + 0x400) = pvVar4;
            fseek(__stream,0,0);
            sVar3 = fread(&local_38,4,4,__stream);
            if (sVar3 != 4) {
              puts("ERROR: Couldn\'t read complete cheat database index.");
            }
            if (iVar6 != 0) {
              uVar5 = (ulong)(iVar6 - 1);
              lVar8 = 0;
              do {
                sVar3 = fread(&local_28,4,4,__stream);
                if (sVar3 != 4) {
                  puts("ERROR: Couldn\'t read complete cheat database index.");
                }
                lVar1 = *(long *)(param_1 + 0x400) + lVar8;
                *(undefined4 *)(*(long *)(param_1 + 0x400) + lVar8) = (undefined4)local_38;
                lVar8 = lVar8 + 0x10;
                *(undefined4 *)(lVar1 + 4) = local_38._4_4_;
                *(int *)(lVar1 + 8) = (int)local_30;
                *(uint *)(lVar1 + 0xc) = local_20 - (int)local_30;
                local_38 = local_28;
                local_30 = (ulong)local_20;
              } while (lVar8 != (uVar5 + 1) * 0x10);
              fseek(__stream,0,2);
              lVar8 = ftell(__stream);
              pvVar4 = *(void **)(param_1 + 0x400);
              *(int *)((long)pvVar4 + uVar5 * 0x10 + 0xc) =
                   (int)lVar8 - *(int *)((long)pvVar4 + uVar5 * 0x10 + 8);
              qsort(pvVar4,sVar2,0x10,compare_cheat_entry_game_code);
            }
            __printf_chk(1,"Loaded cheat directory from database file %s. Loaded %d games.\n",
                         param_2,sVar2);
            *(undefined4 *)(param_1 + 0x434) = 1;
            fclose(__stream);
            goto LAB_00180e6c;
          }
          sVar2 = (size_t)(iVar6 + 1);
        }
        puts("ERROR: Couldn\'t read complete cheat database index.");
        uVar7 = 0xffffffff;
        fclose(__stream);
      }
      else {
        puts("ERROR: Invalid cheat database header.");
        uVar7 = 0xffffffff;
        fclose(__stream);
      }
    }
    else {
      puts("ERROR: Couldn\'t read cheat database header.");
      uVar7 = 0xffffffff;
      fclose(__stream);
    }
  }
LAB_00180e6c:
  if (local_8 - ___stack_chk_guard == 0) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


