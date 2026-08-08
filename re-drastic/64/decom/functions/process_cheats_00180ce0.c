/*
 * Ghidra decompilation
 *
 * Function : process_cheats
 * Address  : 00180ce0
 * Program  : drastic64
 */


void process_cheats(undefined8 param_1,long param_2,undefined4 param_3)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = *(uint *)(param_2 + 0x430);
  if (uVar4 == 0) {
    return;
  }
  uVar5 = 0;
  bVar2 = false;
  uVar6 = 0xffffffff;
  do {
    while( true ) {
      lVar3 = *(long *)(*(long *)(param_2 + 0x428) + (ulong)uVar5 * 8);
      uVar1 = *(uint *)(lVar3 + 0x1c);
      if (uVar1 != 0xffffffff) break;
      bVar2 = false;
LAB_00180d40:
      process_cheat(param_1,lVar3,param_3);
      uVar4 = *(uint *)(param_2 + 0x430);
      uVar5 = uVar5 + 1;
      if (uVar4 <= uVar5) {
        return;
      }
    }
    if (uVar1 != uVar6) {
      bVar2 = *(char *)(*(long *)(param_2 + 0x460) + (ulong)uVar1 * 0x28 + 0x20) == '\x11';
      uVar6 = uVar1;
      goto LAB_00180d40;
    }
    if (!bVar2) goto LAB_00180d40;
    uVar5 = uVar5 + 1;
    if (uVar4 <= uVar5) {
      return;
    }
  } while( true );
}


