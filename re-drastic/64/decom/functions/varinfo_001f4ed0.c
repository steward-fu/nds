/*
 * Ghidra decompilation
 *
 * Function : varinfo
 * Address  : 001f4ed0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void varinfo(long param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  long **pplVar5;
  undefined1 *local_10;
  long local_8;
  
  pplVar5 = *(long ***)(param_1 + 0x20);
  local_10 = (undefined1 *)0x0;
  local_8 = ___stack_chk_guard;
  if ((*(byte *)((long)pplVar5 + 0x42) >> 1 & 1) != 0) {
    lVar2 = **pplVar5;
    bVar1 = *(byte *)(lVar2 + 10);
    if (bVar1 != 0) {
      uVar4 = 0;
      do {
        if (param_2 == **(long ***)(lVar2 + 0x20 + uVar4 * 8)) {
          pcVar3 = "upvalue";
          lVar2 = *(long *)(*(long *)(*(long *)(lVar2 + 0x18) + 0x58) +
                           (-(uVar4 >> 0x1f & 1) & 0xfffffff000000000 | (uVar4 & 0xffffffff) << 4));
          local_10 = &DAT_002296a8;
          if (lVar2 != 0) {
            local_10 = (undefined1 *)(lVar2 + 0x20);
          }
          goto LAB_001f4f6c;
        }
        uVar4 = uVar4 + 1;
      } while ((uint)bVar1 != (uint)uVar4 && (int)(uint)uVar4 <= (int)(uint)bVar1);
    }
    if ((-1 < (long)param_2 - (long)pplVar5[4] && param_2 < pplVar5[1]) &&
       (pcVar3 = (char *)getobjname(*(long *)(lVar2 + 0x18),
                                    (int)((long)pplVar5[5] -
                                          *(long *)(*(long *)(lVar2 + 0x18) + 0x38) >> 2) + -1,
                                    (ulong)((long)param_2 - (long)pplVar5[4]) >> 4 & 0xffffffff,
                                    &local_10), pcVar3 != (char *)0x0)) {
LAB_001f4f6c:
      pcVar3 = (char *)luaO_pushfstring(param_1," (%s \'%s\')",pcVar3,local_10);
      goto LAB_001f4fd0;
    }
  }
  pcVar3 = "";
LAB_001f4fd0:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pcVar3,local_8 - ___stack_chk_guard,0);
}


