/*
 * Ghidra decompilation
 *
 * Function : game_database_lookup_by_crc32
 * Address  : 00174220
 * Program  : drastic64
 */


long game_database_lookup_by_crc32(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x20);
  uVar5 = 0;
  do {
    if (uVar4 <= uVar5) {
      return 0;
    }
    while( true ) {
      uVar3 = uVar4 + uVar5 >> 1;
      lVar2 = *(long *)(*(long *)(param_1 + 8) + uVar3 * 8);
      uVar1 = *(uint *)(lVar2 + 0x1c);
      if (param_2 == uVar1) {
        return lVar2;
      }
      if (uVar1 <= param_2 && param_2 != uVar1) break;
      uVar4 = uVar3;
      if (uVar3 <= uVar5) {
        return 0;
      }
    }
    uVar5 = uVar3 + 1;
  } while( true );
}


