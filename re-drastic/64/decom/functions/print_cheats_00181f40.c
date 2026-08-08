/*
 * Ghidra decompilation
 *
 * Function : print_cheats
 * Address  : 00181f40
 * Program  : drastic64
 */


void print_cheats(long param_1)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  char *pcVar9;
  ulong uVar10;
  uint local_14;
  uint local_10;
  char *local_8;
  
  if ((*(int *)(param_1 + 0x438) != 0) &&
     (__printf_chk(1,"Cheat listing: \'%s\'\n",*(undefined8 *)(param_1 + 0x450)),
     *(int *)(param_1 + 0x46c) != 0)) {
    local_14 = 0;
    local_8 = "";
    local_10 = 0xffffffff;
    plVar8 = *(long **)(param_1 + 0x458);
    bVar5 = false;
    uVar6 = *(uint *)((long)plVar8 + 0x1c);
    if (uVar6 == 0xffffffff) goto LAB_001821e8;
    do {
      local_10 = uVar6;
      if (uVar6 == 0xffffffff) {
        bVar5 = false;
        pcVar9 = local_8;
      }
      else {
        lVar2 = *(long *)(param_1 + 0x460) + (ulong)uVar6 * 0x28;
        bVar5 = true;
        __printf_chk(1,"Folder %s: %s (%x)\n",
                     *(undefined8 *)(*(long *)(param_1 + 0x460) + (ulong)uVar6 * 0x28),
                     *(undefined8 *)(lVar2 + 8),*(undefined *)(lVar2 + 0x20));
        pcVar9 = "  ";
      }
      while( true ) {
        pcVar3 = "disabled";
        if (*(char *)plVar8[4] != '\0') {
          pcVar3 = "enabled";
        }
        __printf_chk(1,"%sCheat %s: %s (%s %d)\n",pcVar9,plVar8[1],plVar8[2],pcVar3,
                     *(undefined4 *)(plVar8 + 3));
        uVar6 = *(uint *)(plVar8 + 3);
        if (uVar6 != 0) {
          uVar7 = 0;
          do {
            uVar4 = uVar6 - uVar7;
            if (8 < uVar4) {
              uVar4 = 8;
            }
            __printf_chk(1,"%s",pcVar9);
            if (uVar6 != uVar7) {
              uVar6 = 0;
              do {
                uVar1 = uVar7 + uVar6;
                uVar6 = uVar6 + 1;
                __printf_chk(1," %08x",*(undefined4 *)(*plVar8 + (ulong)uVar1 * 4));
              } while (uVar6 < uVar4);
            }
            putchar(10);
            uVar6 = *(uint *)(plVar8 + 3);
            uVar7 = uVar7 + 8;
          } while (uVar7 < uVar6);
        }
        local_14 = local_14 + 1;
        if (*(uint *)(param_1 + 0x46c) <= local_14) goto LAB_00181f68;
        plVar8 = (long *)(*(long *)(param_1 + 0x458) + (ulong)local_14 * 0x28);
        uVar6 = *(uint *)((long)plVar8 + 0x1c);
        if (uVar6 != local_10) break;
LAB_001821e8:
        pcVar9 = "  ";
        if (!bVar5) {
          pcVar9 = "";
        }
      }
    } while( true );
  }
LAB_00181f68:
  if (*(int *)(param_1 + 0x420) != 0) {
    uVar10 = 0;
    do {
      plVar8 = (long *)(*(long *)(param_1 + 0x410) + uVar10 * 0x28);
      pcVar9 = "disabled";
      if (*(char *)plVar8[4] != '\0') {
        pcVar9 = "enabled";
      }
      __printf_chk(1,"Custom cheat \'%s\': (%s %d)\n",plVar8[1],pcVar9,*(undefined4 *)(plVar8 + 3));
      uVar6 = *(uint *)(plVar8 + 3);
      if (uVar6 != 0) {
        uVar7 = 0;
        do {
          uVar4 = uVar6 - uVar7;
          if (8 < uVar4) {
            uVar4 = 8;
          }
          if (uVar6 != uVar7) {
            uVar6 = 0;
            do {
              uVar1 = uVar7 + uVar6;
              uVar6 = uVar6 + 1;
              __printf_chk(1," %08x",*(undefined4 *)(*plVar8 + (ulong)uVar1 * 4));
            } while (uVar6 < uVar4);
          }
          putchar(10);
          uVar6 = *(uint *)(plVar8 + 3);
          uVar7 = uVar7 + 8;
        } while (uVar7 < uVar6);
      }
      uVar6 = (int)uVar10 + 1;
      uVar10 = (ulong)uVar6;
    } while (uVar6 < *(uint *)(param_1 + 0x420));
  }
  return;
}


